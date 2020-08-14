/*
 * Configuration settings for new Allwinner F-series (suniv) CPU
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __CONFIG_H
#define __CONFIG_H

#define CONFIG_SUNXI_USB_PHYS 1

/*
 * Include common sunxi configuration where most the settings are
 */
#include <configs/sunxi-common.h>


/* console port */
#undef  CONFIG_CONS_INDEX
/* #define CONFIG_CONS_INDEX       1  //UART0 PE0 PE1*/
#define CONFIG_CONS_INDEX       2  //UART1 PA2 PA3
/* #define CONFIG_CONS_INDEX       3  //UART2*/


/* 16M spi flash */
#ifdef  CONFIG_BOOTCOMMAND
#undef  CONFIG_BOOTCOMMAND
#endif
#define CONFIG_BOOTCOMMAND   "sf probe 0 50000000;" \
                             "sf read 0x80C00000 0x090000 0x004000;"  \
                             "sf read 0x80008000 0x0A0000 0x400000;" \
                             "bootz 0x80008000 - 0x80C00000"

#endif /* __CONFIG_H */
