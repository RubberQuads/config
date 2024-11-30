/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define USE_GYRO
#define USE_GYRO_SPI_ICM42688P
#define USE_ACC
#define USE_ACC_SPI_ICM42688P
#define USE_BARO
#define USE_BARO_BMP280
#define USE_BARO_DPS310
#define USE_FLASH
#define USE_FLASH_M25P16

#define FC_TARGET_MCU STM32F7X2
#define BOARD_NAME STELLARF7_DUAL_HD
#define MANUFACTURER_ID STBE

#define MOTOR1_PIN PC9
#define MOTOR2_PIN PC8
#define MOTOR3_PIN PC7
#define MOTOR4_PIN PC6
#define MOTOR5_PIN PB7
#define MOTOR6_PIN PB6
#define MOTOR7_PIN PB5
#define MOTOR8_PIN PB4
#define SERVO1_PIN PB3
#define UART1_TX_PIN PA9
#define UART1_RX_PIN PA10
#define UART2_TX_PIN PA2
#define UART2_RX_PIN PA3
#define UART3_TX_PIN PC10
#define UART3_RX_PIN PC11
#define UART4_TX_PIN PA0
#define UART4_RX_PIN PA1
#define UART5_TX_PIN PC12
#define UART5_RX_PIN PD2
#define I2C1_SCL_PIN PB8
#define I2C1_SDA_PIN PB9
#define LED0_PIN PB12
#define SPI1_SCK_PIN PA5
#define SPI2_SCK_PIN PB13
#define SPI1_SDI_PIN PA6
#define SPI2_SDI_PIN PB14
#define SPI1_SDO_PIN PA7
#define SPI2_SDO_PIN PB15
#define ADC_VBAT_PIN PC0
#define ADC_CURR_PIN PC1
#define PINIO1_PIN PA15
#define FLASH_CS_PIN PC13
#define GYRO_1_EXTI_PIN PA4
#define GYRO_1_CS_PIN PC4
#define GYRO_2_EXTI_PIN PB10
#define GYRO_2_CS_PIN PB11
#define BEEPER_PIN PB2

#define USE_GYRO_CLKIN
#define GYRO_1_CLKIN_PIN PA8

#define TIMER_PIN_MAPPING TIMER_PIN_MAP( 0, PC9, 2, 0 ) \
                          TIMER_PIN_MAP( 1, PC8, 2, 1 ) \
                          TIMER_PIN_MAP( 2, PC7, 2, 1 ) \
                          TIMER_PIN_MAP( 3, PC6, 2, 1 ) \
                          TIMER_PIN_MAP( 4, PB7, 1, 0 ) \
                          TIMER_PIN_MAP( 5, PB6, 1, 0 ) \
                          TIMER_PIN_MAP( 6, PB5, 1, 0 ) \
                          TIMER_PIN_MAP( 7, PB4, 1, 0 ) \
                          TIMER_PIN_MAP( 8, PB3, 1, -1 ) \
                          TIMER_PIN_MAP( 9, PA8, 1, -1 )

#define ADC1_DMA_OPT 1

#define SERIALRX_UART SERIAL_PORT_USART2

#define MAG_I2C_INSTANCE (I2CDEV_1)
#define BARO_I2C_INSTANCE (I2CDEV_1)
#define DEFAULT_BLACKBOX_DEVICE BLACKBOX_DEVICE_FLASH
#define DEFAULT_DSHOT_BURST DSHOT_DMAR_ON
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define DEFAULT_VOLTAGE_METER_SCALE 110
#define DEFAULT_CURRENT_METER_SCALE 182
#define BEEPER_INVERTED
#define FLASH_SPI_INSTANCE SPI2
#define GYRO_1_SPI_INSTANCE SPI1
#define GYRO_1_ALIGN CW180_DEG
#define GYRO_2_SPI_INSTANCE SPI1
#define GYRO_2_ALIGN CW90_DEG
#define PINIO1_BOX 40