/****
 * Sming Framework Project - Open Source framework for high efficiency native ESP8266 development.
 * Created 2015 by Skurydin Alexey
 * http://github.com/anakod/Sming
 * All files of the Sming Core are provided under the LGPL v3 license.
 ****/

#ifndef _NWDigital_H_
#define _NWDigital_H_

#include "../SmingCore/ESP8266EX.h"
#include "../Wiring/WiringFrameworkDependencies.h"

//#define interrupts()   sei()
//#define noInterrupts() cli()

/*!
 * \defgroup pinio Pins I/O
 * @{
 */

/*!
 * \brief  Configures the specified pin to behave either as an input or an output. See the description of digital pins for details on the functionality of the pins.
 *
 * \param pin pin number wor setting mode
 * \param mode mode can be INPUT, OUTPUT (defined in \ref Wiring/WConstants.h)
 */
void pinMode(uint16_t pin, uint8_t mode);

/*!
 * \brief Sets otput to pin. In fact you can set on pin LOW or HIGH level
 *
 * \param pin pin number for setting value
 * \param val value flase like values where set pin to LOW and true-like ones to HIGH
 */
void digitalWrite(uint16_t pin, uint8_t val);
uint8_t digitalRead(uint16_t pin);

/*!
 * \brief Activates inner pullup resistor for defined pin. You should set pin to INPUT before using it
 *
 * \param pin pin for pullup resistor
 */
void pullup(uint16_t pin);

/*!
 * \brief Disabling pullup resistor
 *
 * \param pin pin number for disabling pullup resistor
 */
void pulldown(uint16_t pin);
void noPullup(uint16_t pin);

/*!
 * \brief Measures the length (in microseconds) of a pulse on the pin; state is HIGH
 * or LOW, the type of pulse to measure.  Works on pulses from 2-3 microseconds
 * to 3 minutes in length, but must be called at least a few dozen microseconds
 * before the start of the pulse.
 *
 * \param pin pin number
 * \param state what state of impulse should be measured
 * \param timeout ms of measure timeout
 *
 * \return pulse length time
 */
unsigned long pulseIn(uint16_t pin, uint8_t state, unsigned long timeout =
		1000000L);

/*! @}*/
#endif
