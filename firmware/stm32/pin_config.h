#ifndef PIN_CONFIG_H
#define PIN_CONFIG_H

/* Traffic Light LEDs */
#define NORTH_RED_PIN     GPIO_PIN_0   // PB0
#define NORTH_YELLOW_PIN  GPIO_PIN_1   // PB1
#define NORTH_GREEN_PIN   GPIO_PIN_5   // PB5

#define SOUTH_RED_PIN     GPIO_PIN_3   // PB3
#define EAST_RED_PIN      GPIO_PIN_4   // PB4
#define WEST_RED_PIN      GPIO_PIN_8   // PA8

/* Vehicle Sensors */
#define LANE1_SENSOR_PIN  GPIO_PIN_0   // PA0
#define LANE2_SENSOR_PIN  GPIO_PIN_1   // PA1
#define LANE3_SENSOR_PIN  GPIO_PIN_2   // PA2
#define LANE4_SENSOR_PIN  GPIO_PIN_3   // PA3

#endif
