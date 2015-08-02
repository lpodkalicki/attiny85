/**
 * Copyright (c) 2015 by Lukasz Marcin Podkalicki <lukasz@podkalicki.com>
 */

#include <stdio.h>
#include "attiny_debug.h"
#include "attiny_uart.h"

static FILE uart_stdout = FDEV_SETUP_STREAM(uart_fputc, NULL, _FDEV_SETUP_WRITE);
static FILE uart_stdin = FDEV_SETUP_STREAM(uart_fgetc, NULL, _FDEV_SETUP_READ);

void
debug_init()
{

	stdin = &uart_stdin;
	stdout = &uart_stdout;
}
