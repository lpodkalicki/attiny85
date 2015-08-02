/**
 * Copyright (c) 2015 by Lukasz Marcin Podkalicki <lukasz@podkalicki.com>
 * Attiny13 - software UART
 */

#ifndef	_ATTINY_UART_H_
#define	_ATTINY_UART_H_

#include <stdio.h>
#include "attiny_config.h"

#ifndef UART_BAUDRATE
# define UART_BAUDRATE	(19200)
#endif

#define	TXDELAY 	(int)(((F_CPU/UART_BAUDRATE)-7 +1.5)/3)
#define	RXDELAY		(int)(((F_CPU/UART_BAUDRATE)-5 +1.5)/3)
#define	RXDELAY2	(int)((RXDELAY*1.5)-2.5)
#define	RXROUNDED	(((F_CPU/UART_BAUDRATE)-5 +2)/3)
#if RXROUNDED > 127
# error low baud rates unsupported - use higher UART_BAUDRATE
#endif

char uart_getc();
void uart_putc(char c);
void uart_puts(const char *s);

int uart_fgetc(FILE *stream);
int uart_fputc(char c, FILE *stream);

#endif	/* !_ATTINY_UART_H_ */
