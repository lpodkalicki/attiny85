/**
 * Copyright (c) 2015 by Lukasz Marcin Podkalicki <lukasz@podkalicki.com>
 */

#ifndef	_ATTINY_ANALOG_H_
#define	_ATTINY_ANALOG_H_

#include "attiny_io.h"

int analog_read(uint8_t pin);
void analog_write(uint8_t pin, int value);

#endif	/* !_ATTINY_ANALOG_H_ */
