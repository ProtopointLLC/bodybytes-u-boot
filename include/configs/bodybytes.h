/* SPDX-License-Identifier: GPL-2.0 */

#ifndef __CONFIG_BODYBYTES_H
#define __CONFIG_BODYBYTES_H

#include <configs/mt7628.h>

/* UART2 (console) MMIO base - palmbus base 0xb0000000 + offset 0xe00 */
#if defined(CONFIG_XPL_BUILD) && defined(CONFIG_SPL_SERIAL)
#define CFG_SYS_NS16550_COM3		0xb0000e00
#endif

#endif /* __CONFIG_BODYBYTES_H */
