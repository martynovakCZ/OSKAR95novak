#pragma once

#define DRIVER_0_ADDRES           0
#define DRIVER_1_ADDRES           1  
#define DRIVER_2_ADDRES           2  
#define DRIVER_3_ADDRES           3  
#define DRIVER_0_ENABLE           GPIO_NUM_23   // H= disable motor output
#define DRIVER_1_ENABLE           GPIO_NUM_23   // H= disable motor output
#define DRIVER_2_ENABLE           GPIO_NUM_23   // H= disable motor output
#define DRIVER_3_ENABLE           GPIO_NUM_23   // H= disable motor output

#define opto2                     GPIO_NUM_34   // zdvih celeho ramene
#define opto1                     GPIO_NUM_35   // optozavora podstavy
#define opto4                     GPIO_NUM_36   // stisk klepet
#define opto3                     GPIO_NUM_39   // rameno s klepety

#define VCC_IO_0                  GPIO_NUM_33  // L = reset driver 0, H = driver0 on
#define VCC_IO_1                  GPIO_NUM_25  // L = reset driver 0, H = driver0 on
#define VCC_IO_2                  GPIO_NUM_26  // L = reset driver 0, H = driver0 on
#define VCC_IO_3                  GPIO_NUM_27  // L = reset driver 0, H = driver0 on

#define SW_CTRL                   GPIO_NUM_32  // L = transistor Q3 off -> motor power off, H = all drivers on

#define DRIVERS_UART              UART_NUM_1
#define DRIVERS_UART_TXD          GPIO_NUM_17  // doma 27
#define DRIVERS_UART_RXD          GPIO_NUM_16  // doma 26
#define DRIVERS_UART_BUF_SIZE     256
#define DRIVERS_RX_TIMEOUT        (20 / portTICK_RATE_MS)
#define DRIVERS_UART_START_BYTE   0x05

#define GPIO_OUTPUT_PIN_SEL ((1ULL<<DRIVER_0_ENABLE) | (1ULL<<SW_CTRL) | (1ULL<<VCC_IO_0) )

#define GPIO_BIT_MASK  ((1ULL<<GPIO_NUM_35) | (1ULL<<GPIO_NUM_36) | (1ULL<<GPIO_NUM_39) | (1ULL<<GPIO_NUM_34))

#define MOTOR_SPEED_COEFICIENT    71608     // 71608 = 1RPS

#define ENCODER_H_LIM_VAL         1000
#define ENCODER_L_LIM_VAL        -1000

// globální proměnné pro pokusy s grafickým rozhraním
volatile int motor_speed1;      //svirani klepete
volatile int motor_speed2;      //rotace zakladny
volatile int motor_speed3;      //zdvih ramene s klepety
volatile int motor_speed4;      //zdvih celeho ramene
volatile int motor_load = 0;
volatile int motor_stop_sensitivity = 100;
volatile int potenciometr = 0;
volatile int i_run = 8;
volatile int i_hold = 0;
volatile bool start_stop = false;
volatile uint mot_load[2048];
volatile uint mot_pos[2048];

volatile bool conclusion;