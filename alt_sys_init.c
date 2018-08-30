/*
 * alt_sys_init.c - HAL initialization source
 *
 * Machine generated for CPU 'nios2_gen2_0' in SOPC Builder design 'nios'
 * SOPC Builder design path: ../../nios.sopcinfo
 *
 * Generated: Fri May 25 15:58:19 KST 2018
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#include "system.h"
#include "sys/alt_irq.h"
#include "sys/alt_sys_init.h"

#include <stddef.h>

/*
 * Device headers
 */

#include "altera_nios2_gen2_irq.h"
#include "altera_avalon_jtag_uart.h"
#include "altera_avalon_timer.h"
#include "altera_avalon_uart.h"
#include "altera_epcq_controller2.h"
#include "fifoed_avalon_uart.h"

/*
 * Allocate the device storage
 */

ALTERA_NIOS2_GEN2_IRQ_INSTANCE ( NIOS2_GEN2_0, nios2_gen2_0);
ALTERA_AVALON_JTAG_UART_INSTANCE ( JTAG_UART_0, jtag_uart_0);
ALTERA_AVALON_TIMER_INSTANCE ( TIMER_0, timer_0);
ALTERA_AVALON_UART_INSTANCE ( UART_0, uart_0);
ALTERA_EPCQ_CONTROLLER2_AVL_MEM_AVL_CSR_INSTANCE ( EPCQ_CONTROLLER2_0, EPCQ_CONTROLLER2_0_AVL_MEM, EPCQ_CONTROLLER2_0_AVL_CSR, epcq_controller2_0);
FIFOED_AVALON_UART_INSTANCE ( FIFOED_AVALON_UART_0, fifoed_avalon_uart_0);
FIFOED_AVALON_UART_INSTANCE ( FIFOED_AVALON_UART_1, fifoed_avalon_uart_1);
FIFOED_AVALON_UART_INSTANCE ( FIFOED_AVALON_UART_2, fifoed_avalon_uart_2);
FIFOED_AVALON_UART_INSTANCE ( FIFOED_AVALON_UART_3, fifoed_avalon_uart_3);
FIFOED_AVALON_UART_INSTANCE ( FIFOED_AVALON_UART_4, fifoed_avalon_uart_4);
FIFOED_AVALON_UART_INSTANCE ( FIFOED_AVALON_UART_5, fifoed_avalon_uart_5);
FIFOED_AVALON_UART_INSTANCE ( FIFOED_AVALON_UART_6, fifoed_avalon_uart_6);
FIFOED_AVALON_UART_INSTANCE ( FIFOED_AVALON_UART_7, fifoed_avalon_uart_7);
FIFOED_AVALON_UART_INSTANCE ( FIFOED_AVALON_UART_8, fifoed_avalon_uart_8);

/*
 * Initialize the interrupt controller devices
 * and then enable interrupts in the CPU.
 * Called before alt_sys_init().
 * The "base" parameter is ignored and only
 * present for backwards-compatibility.
 */

void alt_irq_init ( const void* base )
{
    ALTERA_NIOS2_GEN2_IRQ_INIT ( NIOS2_GEN2_0, nios2_gen2_0);
    alt_irq_cpu_enable_interrupts();
}

/*
 * Initialize the non-interrupt controller devices.
 * Called after alt_irq_init().
 */

void alt_sys_init( void )
{
    ALTERA_AVALON_TIMER_INIT ( TIMER_0, timer_0);
    ALTERA_AVALON_JTAG_UART_INIT ( JTAG_UART_0, jtag_uart_0);
    ALTERA_AVALON_UART_INIT ( UART_0, uart_0);
    ALTERA_EPCQ_CONTROLLER2_INIT ( EPCQ_CONTROLLER2_0, epcq_controller2_0);
    FIFOED_AVALON_UART_INIT ( FIFOED_AVALON_UART_0, fifoed_avalon_uart_0);
    FIFOED_AVALON_UART_INIT ( FIFOED_AVALON_UART_1, fifoed_avalon_uart_1);
    FIFOED_AVALON_UART_INIT ( FIFOED_AVALON_UART_2, fifoed_avalon_uart_2);
    FIFOED_AVALON_UART_INIT ( FIFOED_AVALON_UART_3, fifoed_avalon_uart_3);
    FIFOED_AVALON_UART_INIT ( FIFOED_AVALON_UART_4, fifoed_avalon_uart_4);
    FIFOED_AVALON_UART_INIT ( FIFOED_AVALON_UART_5, fifoed_avalon_uart_5);
    FIFOED_AVALON_UART_INIT ( FIFOED_AVALON_UART_6, fifoed_avalon_uart_6);
    FIFOED_AVALON_UART_INIT ( FIFOED_AVALON_UART_7, fifoed_avalon_uart_7);
    FIFOED_AVALON_UART_INIT ( FIFOED_AVALON_UART_8, fifoed_avalon_uart_8);
}
