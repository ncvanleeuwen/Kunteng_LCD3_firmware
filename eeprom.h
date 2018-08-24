/*
 * LCD3 firmware
 *
 * Copyright (C) Casainho, 2018.
 *
 * Released under the GPL License, Version 3
 */

#ifndef _EEPROM_H_
#define _EEPROM_H_

#include "lcd.h"

#define KEY                                         0xca

#define EEPROM_BASE_ADDRESS 			                  0x4000
#define ADDRESS_KEY 				                        0 + EEPROM_BASE_ADDRESS
#define ADDRESS_ASSIST_LEVEL 			                  1 + EEPROM_BASE_ADDRESS
#define ADDRESS_WHEEL_PERIMETER_0	                  2 + EEPROM_BASE_ADDRESS
#define ADDRESS_WHEEL_PERIMETER_1                   3 + EEPROM_BASE_ADDRESS
#define ADDRESS_MAX_SPEED	 		                      4 + EEPROM_BASE_ADDRESS
#define ADDRESS_UNITS_TYPE                          5 + EEPROM_BASE_ADDRESS
#define ADDRESS_HW_X10_OFFSET_0                     6 + EEPROM_BASE_ADDRESS
#define ADDRESS_HW_X10_OFFSET_1                     7 + EEPROM_BASE_ADDRESS
#define ADDRESS_HW_X10_OFFSET_2                     8 + EEPROM_BASE_ADDRESS
#define ADDRESS_HW_X10_OFFSET_3                     9 + EEPROM_BASE_ADDRESS
#define ADDRESS_HW_X10_100_PERCENT_OFFSET_0         10 + EEPROM_BASE_ADDRESS
#define ADDRESS_HW_X10_100_PERCENT_OFFSET_1         11 + EEPROM_BASE_ADDRESS
#define ADDRESS_HW_X10_100_PERCENT_OFFSET_2         12 + EEPROM_BASE_ADDRESS
#define ADDRESS_HW_X10_100_PERCENT_OFFSET_3         13 + EEPROM_BASE_ADDRESS
#define ADDRESS_SHOW_NUMERIC_BATTERY_SOC            14 + EEPROM_BASE_ADDRESS
#define ADDRESS_ODOMETER_FIELD_STATE                15 + EEPROM_BASE_ADDRESS
#define ADDRESS_BATTERY_MAX_CURRENT                 16 + EEPROM_BASE_ADDRESS
#define ADDRESS_TARGET_MAX_BATTERY_POWER            17 + EEPROM_BASE_ADDRESS
#define ADDRESS_BATTERY_CELLS_NUMBER                18 + EEPROM_BASE_ADDRESS
#define ADDRESS_BATTERY_LOW_VOLTAGE_CUT_OFF_X10_0   19 + EEPROM_BASE_ADDRESS
#define ADDRESS_BATTERY_LOW_VOLTAGE_CUT_OFF_X10_1   20 + EEPROM_BASE_ADDRESS
#define ADDRESS_PAS_MAX_CADENCE                     21 + EEPROM_BASE_ADDRESS
#define ADDRESS_CONFIG_0                            22 + EEPROM_BASE_ADDRESS
#define EEPROM_BYTES_STORED                         23

void eeprom_init (void);
void eeprom_init_variables (void);
void eeprom_write_variables (void);

#endif /* _EEPROM_H_ */
