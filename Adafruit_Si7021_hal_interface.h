/*
 * AdafruitSi7021halinterface.h
 *
 *  Created on: 25 серп. 2021 р.
 *      Author: xeedj
 */

#pragma once

#include <stdint.h>

class Adafruit_Si7021_hal_interface {
public:
	virtual void begin() = 0;
	virtual void beginTransmission(uint8_t) = 0;
	virtual uint8_t endTransmission() = 0;
	virtual void write(uint8_t) = 0;
	virtual void delay(uint32_t) = 0;
	virtual uint8_t requestFrom(uint8_t, uint32_t) = 0;
	virtual uint8_t read() = 0;
	virtual uint32_t millis() = 0;
};

