/*
 * Copyright (C) 2014 Freie Universität Berlin
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     board_udoo
 * @{
 *
 * @file        periph_conf.h
 * @brief       Peripheral MCU configuration for the UDOO board
 *
 * @author      Hauke Petersen <hauke.petersen@fu-berlin.de>
 */

#ifndef __PERIPH_CONF_H
#define __PERIPH_CONF_H


/**
 * @name Timer peripheral configuration
 * @{
 */
#define TIMER_NUMOF         (3U)
#define TIMER_0_EN          1
#define TIMER_1_EN          1
#define TIMER_2_EN          1

/* Timer 0 configuration */
#define TIMER_0_DEV         TC0
#define TIMER_0_CHANNELS    6
#define TIMER_0_MAX_VALUE   (0xffffffff)
#define TIMER_0_ISR1        isr_tc0
#define TIMER_0_ISR2        isr_tc1

/* Timer 1 configuration */
#define TIMER_1_DEV         TC1
#define TIMER_1_CHANNELS    6
#define TIMER_1_MAX_VALUE   (0xffffffff)
#define TIMER_1_ISR1        isr_tc3
#define TIMER_1_ISR2        isr_tc4

/* Timer 2 configuration */
#define TIMER_2_DEV         TC2
#define TIMER_2_CHANNELS    6
#define TIMER_2_MAX_VALUE   (0xffffffff)
#define TIMER_2_ISR1        isr_tc6
#define TIMER_2_ISR2        isr_tc7
/** @} */


/**
 * @name UART configuration
 * @{
 */
#define UART_NUMOF          (1U)
#define UART_0_EN           1
#define UART_1_EN           0
#define UART_2_EN           0
#define UART_3_EN           0
#define UART_IRQ_PRIO       1

/* UART 0 device configuration */
#define UART_0_DEV          UART
#define UART_0_IRQ          UART_IRQn
#define UART_0_ISR          isr_uart
/* UART 0 pin configuration */
#define UART_0_PORT         PIOA
#define UART_0_PINS         (PIO_PA8 | PIO_PA9)

/* UART 1 device configuration */
#define UART_1_DEV          USART2
#define UART_1_IRQ          USART2_IRQn
#define UART_1_ISR          isr_usart2
/* UART 1 pin configuration */
#define UART_1_PORT         GPIOA
#define UART_1_PINS         (GPIO_Pin_2 | GPIO_Pin_3)
/** @} */


/**
 * @name GPIO configuration
 * @{
 */
#define GPIO_NUMOF          (15U)
#define GPIO_0_EN           1
#define GPIO_1_EN           1
#define GPIO_2_EN           1
#define GPIO_3_EN           1
#define GPIO_4_EN           1
#define GPIO_5_EN           1
#define GPIO_6_EN           1
#define GPIO_7_EN           1
#define GPIO_8_EN           1
#define GPIO_9_EN           1
#define GPIO_10_EN          1
#define GPIO_11_EN          1
#define GPIO_12_EN          1
#define GPIO_13_EN          1
#define GPIO_14_EN          1
#define GPIO_15_EN          1

/* IRQ config */
#define GPIO_IRQ_0          GPIO_0
#define GPIO_IRQ_1          GPIO_1
#define GPIO_IRQ_2          /*not configured */
#define GPIO_IRQ_3          /* not configured */
#define GPIO_IRQ_4          GPIO_2
#define GPIO_IRQ_5          GPIO_3
#define GPIO_IRQ_6          GPIO_4
#define GPIO_IRQ_7          GPIO_5
#define GPIO_IRQ_8          /* not configured */
#define GPIO_IRQ_9          /* not configured */
#define GPIO_IRQ_10         GPIO_6
#define GPIO_IRQ_11         GPIO_7
#define GPIO_IRQ_12         GPIO_8
#define GPIO_IRQ_13         GPIO_9
#define GPIO_IRQ_14         GPIO_10
#define GPIO_IRQ_15         GPIO_11

/* GPIO channel 0 config */
#define GPIO_0_DEV          PIOA
#define GPIO_0_PIN          PIO_PA14
/* GPIO channel 1 config */
#define GPIO_1_DEV          PIOD
#define GPIO_1_PIN          PIO_PD0
/* GPIO channel 2 config */
#define GPIO_2_DEV          PIOD
#define GPIO_2_PIN          PIO_PD2
/* GPIO channel 3 config */
#define GPIO_3_DEV          PIOD
#define GPIO_3_PIN          PIO_PD6
/* GPIO channel 4 config */
#define GPIO_4_DEV          PIOA
#define GPIO_4_PIN          PIO_PA7
/* GPIO channel 5 config */
#define GPIO_5_DEV          PIOC
#define GPIO_5_PIN          PIO_PC1
/* GPIO channel 6 config */
#define GPIO_6_DEV          PIOC
#define GPIO_6_PIN          PIO_PC3
/* GPIO channel 7 config */
#define GPIO_7_DEV          PIOC
#define GPIO_7_PIN          PIO_PC5
/* GPIO channel 8 config */
#define GPIO_8_DEV          PIOC
#define GPIO_8_PIN          PIO_PC7
/* GPIO channel 9 config */
#define GPIO_9_DEV          PIOC
#define GPIO_9_PIN          PIO_PC9
/* GPIO channel 10 config */
#define GPIO_10_DEV         PIOA
#define GPIO_10_PIN         PIO_PA20
/* GPIO channel 11 config */
#define GPIO_11_DEV         PIOC
#define GPIO_11_PIN         PIO_PC18
/* GPIO channel 12 config */
#define GPIO_12_DEV         PIOC
#define GPIO_12_PIN         PIO_PC16
/* GPIO channel 13 config */
#define GPIO_13_DEV         PIOC
#define GPIO_13_PIN         PIO_PC14
/* GPIO channel 14 config */
#define GPIO_14_DEV         PIOC
#define GPIO_14_PIN         PIO_PC12
/* GPIO channel 15 config */
#define GPIO_15_DEV         PIOB
#define GPIO_15_PIN         PIO_PB14
/** @} */

#endif /* __PERIPH_CONF_H */
/** @} */
