/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios2_gen2_0' in SOPC Builder design 'nios'
 * SOPC Builder design path: ../../nios.sopcinfo
 *
 * Generated: Tue Jun 12 15:02:41 KST 2018
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

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x2b100820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "fast"
#define ALT_CPU_DATA_ADDR_WIDTH 0x1e
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x2b080020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 1
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_EXTRA_EXCEPTION_INFO
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 32
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_ICACHE_SIZE 4096
#define ALT_CPU_INST_ADDR_WIDTH 0x1e
#define ALT_CPU_NAME "nios2_gen2_0"
#define ALT_CPU_NUM_OF_SHADOW_REG_SETS 0
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x2b080000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x2b100820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "fast"
#define NIOS2_DATA_ADDR_WIDTH 0x1e
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x2b080020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 1
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_EXTRA_EXCEPTION_INFO
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_ICACHE_SIZE 4096
#define NIOS2_INST_ADDR_WIDTH 0x1e
#define NIOS2_NUM_OF_SHADOW_REG_SETS 0
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x2b080000


/*
 * Custom instruction macros
 *
 */

#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0(n,A,B) __builtin_custom_inii(ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_N+(n&ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_N_MASK),(A),(B))
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1(n,A,B) __builtin_custom_inii(ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_N+(n&ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_N_MASK),(A),(B))
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_FADDS_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_N+5
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_FDIVS_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_N+7
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_FIXSI_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_N+1
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_FLOATIS_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_N+2
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_FMULS_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_N+4
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_FSQRTS_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_N+3
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_FSUBS_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_N+6
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_N 0xf8
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_N_MASK ((1<<3)-1)
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_ROUND_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_N+0
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_FABSS_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_N+0
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_FCMPEQS_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_N+3
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_FCMPGES_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_N+4
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_FCMPGTS_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_N+5
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_FCMPLES_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_N+6
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_FCMPLTS_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_N+7
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_FCMPNES_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_N+2
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_FMAXS_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_N+8
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_FMINS_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_N+9
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_FNEGS_N ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_N+1
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_N 0xe0
#define ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_N_MASK ((1<<4)-1)
#define fmaxf(A,B) __builtin_custom_fnff(ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_FMAXS_N,(A),(B))
#define fminf(A,B) __builtin_custom_fnff(ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_FMINS_N,(A),(B))
#define lroundf(A) __builtin_custom_inf(ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_ROUND_N,(A))
#define sqrtf(A) __builtin_custom_fnf(ALT_CI_NIOS_CUSTOM_INSTR_FLOATING_POINT_2_0_1_FSQRTS_N,(A))


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_TIMER
#define __ALTERA_AVALON_UART
#define __ALTERA_EPCQ_CONTROLLER2
#define __ALTERA_MEM_IF_DDR3_EMIF
#define __ALTERA_NIOS2_GEN2
#define __ALTERA_NIOS_CUSTOM_INSTR_FLOATING_POINT_2
#define __FIFOED_AVALON_UART
#define __INT_AVS_CMD
#define __INT_AVS_CMD2BIT


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone V"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/uart_0"
#define ALT_STDERR_BASE 0x2b101240
#define ALT_STDERR_DEV uart_0
#define ALT_STDERR_IS_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_uart"
#define ALT_STDIN "/dev/uart_0"
#define ALT_STDIN_BASE 0x2b101240
#define ALT_STDIN_DEV uart_0
#define ALT_STDIN_IS_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_uart"
#define ALT_STDOUT "/dev/uart_0"
#define ALT_STDOUT_BASE 0x2b101240
#define ALT_STDOUT_DEV uart_0
#define ALT_STDOUT_IS_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_uart"
#define ALT_SYSTEM_NAME "nios"


/*
 * epcq_controller2_0_avl_csr configuration
 *
 */

#define ALT_MODULE_CLASS_epcq_controller2_0_avl_csr altera_epcq_controller2
#define EPCQ_CONTROLLER2_0_AVL_CSR_BASE 0x24000000
#define EPCQ_CONTROLLER2_0_AVL_CSR_FLASH_TYPE "EPCQ512"
#define EPCQ_CONTROLLER2_0_AVL_CSR_IRQ 3
#define EPCQ_CONTROLLER2_0_AVL_CSR_IRQ_INTERRUPT_CONTROLLER_ID 0
#define EPCQ_CONTROLLER2_0_AVL_CSR_IS_EPCS 0
#define EPCQ_CONTROLLER2_0_AVL_CSR_NAME "/dev/epcq_controller2_0_avl_csr"
#define EPCQ_CONTROLLER2_0_AVL_CSR_NUMBER_OF_SECTORS 1024
#define EPCQ_CONTROLLER2_0_AVL_CSR_PAGE_SIZE 256
#define EPCQ_CONTROLLER2_0_AVL_CSR_SECTOR_SIZE 65536
#define EPCQ_CONTROLLER2_0_AVL_CSR_SPAN 64
#define EPCQ_CONTROLLER2_0_AVL_CSR_SUBSECTOR_SIZE 4096
#define EPCQ_CONTROLLER2_0_AVL_CSR_TYPE "altera_epcq_controller2"


/*
 * epcq_controller2_0_avl_mem configuration
 *
 */

#define ALT_MODULE_CLASS_epcq_controller2_0_avl_mem altera_epcq_controller2
#define EPCQ_CONTROLLER2_0_AVL_MEM_BASE 0x20000000
#define EPCQ_CONTROLLER2_0_AVL_MEM_FLASH_TYPE "EPCQ512"
#define EPCQ_CONTROLLER2_0_AVL_MEM_IRQ -1
#define EPCQ_CONTROLLER2_0_AVL_MEM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define EPCQ_CONTROLLER2_0_AVL_MEM_IS_EPCS 0
#define EPCQ_CONTROLLER2_0_AVL_MEM_NAME "/dev/epcq_controller2_0_avl_mem"
#define EPCQ_CONTROLLER2_0_AVL_MEM_NUMBER_OF_SECTORS 1024
#define EPCQ_CONTROLLER2_0_AVL_MEM_PAGE_SIZE 256
#define EPCQ_CONTROLLER2_0_AVL_MEM_SECTOR_SIZE 65536
#define EPCQ_CONTROLLER2_0_AVL_MEM_SPAN 67108864
#define EPCQ_CONTROLLER2_0_AVL_MEM_SUBSECTOR_SIZE 4096
#define EPCQ_CONTROLLER2_0_AVL_MEM_TYPE "altera_epcq_controller2"


/*
 * fifoed_avalon_uart_0 configuration
 *
 */

#define ALT_MODULE_CLASS_fifoed_avalon_uart_0 fifoed_avalon_uart
#define FIFOED_AVALON_UART_0_ADD_ERROR_BITS 0
#define FIFOED_AVALON_UART_0_BASE 0x2b101200
#define FIFOED_AVALON_UART_0_BAUD 9600
#define FIFOED_AVALON_UART_0_DATA_BITS 8
#define FIFOED_AVALON_UART_0_FIFO_EXPORT_USED 0
#define FIFOED_AVALON_UART_0_FIXED_BAUD 0
#define FIFOED_AVALON_UART_0_FREQ 50000000
#define FIFOED_AVALON_UART_0_GAP_VALUE 4
#define FIFOED_AVALON_UART_0_IRQ 4
#define FIFOED_AVALON_UART_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define FIFOED_AVALON_UART_0_NAME "/dev/fifoed_avalon_uart_0"
#define FIFOED_AVALON_UART_0_PARITY 'N'
#define FIFOED_AVALON_UART_0_PASS_ERROR_BITS 0
#define FIFOED_AVALON_UART_0_RX_FIFO_LE 0
#define FIFOED_AVALON_UART_0_RX_FIFO_SIZE 512
#define FIFOED_AVALON_UART_0_RX_IRQ_THRESHOLD 1
#define FIFOED_AVALON_UART_0_SIM_CHAR_STREAM ""
#define FIFOED_AVALON_UART_0_SIM_TRUE_BAUD 0
#define FIFOED_AVALON_UART_0_SPAN 64
#define FIFOED_AVALON_UART_0_STOP_BITS 1
#define FIFOED_AVALON_UART_0_SYNC_REG_DEPTH 2
#define FIFOED_AVALON_UART_0_TIMEOUT_VALUE 4
#define FIFOED_AVALON_UART_0_TIMESTAMP_WIDTH 8
#define FIFOED_AVALON_UART_0_TRANSMIT_PIN 0
#define FIFOED_AVALON_UART_0_TX_FIFO_LE 0
#define FIFOED_AVALON_UART_0_TX_FIFO_SIZE 512
#define FIFOED_AVALON_UART_0_TX_IRQ_THRESHOLD 1
#define FIFOED_AVALON_UART_0_TYPE "fifoed_avalon_uart"
#define FIFOED_AVALON_UART_0_UHW_CTS 0
#define FIFOED_AVALON_UART_0_USE_CTS_RTS 0
#define FIFOED_AVALON_UART_0_USE_EOP_REGISTER 0
#define FIFOED_AVALON_UART_0_USE_EXT_TIMESTAMP 0
#define FIFOED_AVALON_UART_0_USE_GAP_DETECTION 1
#define FIFOED_AVALON_UART_0_USE_RX_FIFO 1
#define FIFOED_AVALON_UART_0_USE_RX_TIMEOUT 1
#define FIFOED_AVALON_UART_0_USE_STATUS_BIT_CLEAR 0
#define FIFOED_AVALON_UART_0_USE_TIMESTAMP 0
#define FIFOED_AVALON_UART_0_USE_TX_FIFO 1


/*
 * fifoed_avalon_uart_1 configuration
 *
 */

#define ALT_MODULE_CLASS_fifoed_avalon_uart_1 fifoed_avalon_uart
#define FIFOED_AVALON_UART_1_ADD_ERROR_BITS 0
#define FIFOED_AVALON_UART_1_BASE 0x2b1011c0
#define FIFOED_AVALON_UART_1_BAUD 9600
#define FIFOED_AVALON_UART_1_DATA_BITS 8
#define FIFOED_AVALON_UART_1_FIFO_EXPORT_USED 0
#define FIFOED_AVALON_UART_1_FIXED_BAUD 0
#define FIFOED_AVALON_UART_1_FREQ 50000000
#define FIFOED_AVALON_UART_1_GAP_VALUE 4
#define FIFOED_AVALON_UART_1_IRQ 7
#define FIFOED_AVALON_UART_1_IRQ_INTERRUPT_CONTROLLER_ID 0
#define FIFOED_AVALON_UART_1_NAME "/dev/fifoed_avalon_uart_1"
#define FIFOED_AVALON_UART_1_PARITY 'N'
#define FIFOED_AVALON_UART_1_PASS_ERROR_BITS 0
#define FIFOED_AVALON_UART_1_RX_FIFO_LE 0
#define FIFOED_AVALON_UART_1_RX_FIFO_SIZE 512
#define FIFOED_AVALON_UART_1_RX_IRQ_THRESHOLD 1
#define FIFOED_AVALON_UART_1_SIM_CHAR_STREAM ""
#define FIFOED_AVALON_UART_1_SIM_TRUE_BAUD 0
#define FIFOED_AVALON_UART_1_SPAN 64
#define FIFOED_AVALON_UART_1_STOP_BITS 1
#define FIFOED_AVALON_UART_1_SYNC_REG_DEPTH 2
#define FIFOED_AVALON_UART_1_TIMEOUT_VALUE 4
#define FIFOED_AVALON_UART_1_TIMESTAMP_WIDTH 8
#define FIFOED_AVALON_UART_1_TRANSMIT_PIN 0
#define FIFOED_AVALON_UART_1_TX_FIFO_LE 0
#define FIFOED_AVALON_UART_1_TX_FIFO_SIZE 512
#define FIFOED_AVALON_UART_1_TX_IRQ_THRESHOLD 1
#define FIFOED_AVALON_UART_1_TYPE "fifoed_avalon_uart"
#define FIFOED_AVALON_UART_1_UHW_CTS 0
#define FIFOED_AVALON_UART_1_USE_CTS_RTS 0
#define FIFOED_AVALON_UART_1_USE_EOP_REGISTER 0
#define FIFOED_AVALON_UART_1_USE_EXT_TIMESTAMP 0
#define FIFOED_AVALON_UART_1_USE_GAP_DETECTION 1
#define FIFOED_AVALON_UART_1_USE_RX_FIFO 1
#define FIFOED_AVALON_UART_1_USE_RX_TIMEOUT 1
#define FIFOED_AVALON_UART_1_USE_STATUS_BIT_CLEAR 0
#define FIFOED_AVALON_UART_1_USE_TIMESTAMP 0
#define FIFOED_AVALON_UART_1_USE_TX_FIFO 1


/*
 * fifoed_avalon_uart_2 configuration
 *
 */

#define ALT_MODULE_CLASS_fifoed_avalon_uart_2 fifoed_avalon_uart
#define FIFOED_AVALON_UART_2_ADD_ERROR_BITS 0
#define FIFOED_AVALON_UART_2_BASE 0x2b101180
#define FIFOED_AVALON_UART_2_BAUD 9600
#define FIFOED_AVALON_UART_2_DATA_BITS 8
#define FIFOED_AVALON_UART_2_FIFO_EXPORT_USED 0
#define FIFOED_AVALON_UART_2_FIXED_BAUD 0
#define FIFOED_AVALON_UART_2_FREQ 50000000
#define FIFOED_AVALON_UART_2_GAP_VALUE 4
#define FIFOED_AVALON_UART_2_IRQ 1
#define FIFOED_AVALON_UART_2_IRQ_INTERRUPT_CONTROLLER_ID 0
#define FIFOED_AVALON_UART_2_NAME "/dev/fifoed_avalon_uart_2"
#define FIFOED_AVALON_UART_2_PARITY 'N'
#define FIFOED_AVALON_UART_2_PASS_ERROR_BITS 0
#define FIFOED_AVALON_UART_2_RX_FIFO_LE 0
#define FIFOED_AVALON_UART_2_RX_FIFO_SIZE 512
#define FIFOED_AVALON_UART_2_RX_IRQ_THRESHOLD 1
#define FIFOED_AVALON_UART_2_SIM_CHAR_STREAM ""
#define FIFOED_AVALON_UART_2_SIM_TRUE_BAUD 0
#define FIFOED_AVALON_UART_2_SPAN 64
#define FIFOED_AVALON_UART_2_STOP_BITS 1
#define FIFOED_AVALON_UART_2_SYNC_REG_DEPTH 2
#define FIFOED_AVALON_UART_2_TIMEOUT_VALUE 4
#define FIFOED_AVALON_UART_2_TIMESTAMP_WIDTH 8
#define FIFOED_AVALON_UART_2_TRANSMIT_PIN 0
#define FIFOED_AVALON_UART_2_TX_FIFO_LE 0
#define FIFOED_AVALON_UART_2_TX_FIFO_SIZE 512
#define FIFOED_AVALON_UART_2_TX_IRQ_THRESHOLD 1
#define FIFOED_AVALON_UART_2_TYPE "fifoed_avalon_uart"
#define FIFOED_AVALON_UART_2_UHW_CTS 0
#define FIFOED_AVALON_UART_2_USE_CTS_RTS 0
#define FIFOED_AVALON_UART_2_USE_EOP_REGISTER 0
#define FIFOED_AVALON_UART_2_USE_EXT_TIMESTAMP 0
#define FIFOED_AVALON_UART_2_USE_GAP_DETECTION 1
#define FIFOED_AVALON_UART_2_USE_RX_FIFO 1
#define FIFOED_AVALON_UART_2_USE_RX_TIMEOUT 1
#define FIFOED_AVALON_UART_2_USE_STATUS_BIT_CLEAR 0
#define FIFOED_AVALON_UART_2_USE_TIMESTAMP 0
#define FIFOED_AVALON_UART_2_USE_TX_FIFO 1


/*
 * fifoed_avalon_uart_3 configuration
 *
 */

#define ALT_MODULE_CLASS_fifoed_avalon_uart_3 fifoed_avalon_uart
#define FIFOED_AVALON_UART_3_ADD_ERROR_BITS 0
#define FIFOED_AVALON_UART_3_BASE 0x2b101140
#define FIFOED_AVALON_UART_3_BAUD 9600
#define FIFOED_AVALON_UART_3_DATA_BITS 8
#define FIFOED_AVALON_UART_3_FIFO_EXPORT_USED 0
#define FIFOED_AVALON_UART_3_FIXED_BAUD 0
#define FIFOED_AVALON_UART_3_FREQ 50000000
#define FIFOED_AVALON_UART_3_GAP_VALUE 4
#define FIFOED_AVALON_UART_3_IRQ 2
#define FIFOED_AVALON_UART_3_IRQ_INTERRUPT_CONTROLLER_ID 0
#define FIFOED_AVALON_UART_3_NAME "/dev/fifoed_avalon_uart_3"
#define FIFOED_AVALON_UART_3_PARITY 'N'
#define FIFOED_AVALON_UART_3_PASS_ERROR_BITS 0
#define FIFOED_AVALON_UART_3_RX_FIFO_LE 0
#define FIFOED_AVALON_UART_3_RX_FIFO_SIZE 512
#define FIFOED_AVALON_UART_3_RX_IRQ_THRESHOLD 1
#define FIFOED_AVALON_UART_3_SIM_CHAR_STREAM ""
#define FIFOED_AVALON_UART_3_SIM_TRUE_BAUD 0
#define FIFOED_AVALON_UART_3_SPAN 64
#define FIFOED_AVALON_UART_3_STOP_BITS 1
#define FIFOED_AVALON_UART_3_SYNC_REG_DEPTH 2
#define FIFOED_AVALON_UART_3_TIMEOUT_VALUE 4
#define FIFOED_AVALON_UART_3_TIMESTAMP_WIDTH 8
#define FIFOED_AVALON_UART_3_TRANSMIT_PIN 0
#define FIFOED_AVALON_UART_3_TX_FIFO_LE 0
#define FIFOED_AVALON_UART_3_TX_FIFO_SIZE 512
#define FIFOED_AVALON_UART_3_TX_IRQ_THRESHOLD 1
#define FIFOED_AVALON_UART_3_TYPE "fifoed_avalon_uart"
#define FIFOED_AVALON_UART_3_UHW_CTS 0
#define FIFOED_AVALON_UART_3_USE_CTS_RTS 0
#define FIFOED_AVALON_UART_3_USE_EOP_REGISTER 0
#define FIFOED_AVALON_UART_3_USE_EXT_TIMESTAMP 0
#define FIFOED_AVALON_UART_3_USE_GAP_DETECTION 1
#define FIFOED_AVALON_UART_3_USE_RX_FIFO 1
#define FIFOED_AVALON_UART_3_USE_RX_TIMEOUT 1
#define FIFOED_AVALON_UART_3_USE_STATUS_BIT_CLEAR 0
#define FIFOED_AVALON_UART_3_USE_TIMESTAMP 0
#define FIFOED_AVALON_UART_3_USE_TX_FIFO 1


/*
 * fifoed_avalon_uart_4 configuration
 *
 */

#define ALT_MODULE_CLASS_fifoed_avalon_uart_4 fifoed_avalon_uart
#define FIFOED_AVALON_UART_4_ADD_ERROR_BITS 0
#define FIFOED_AVALON_UART_4_BASE 0x2b101100
#define FIFOED_AVALON_UART_4_BAUD 9600
#define FIFOED_AVALON_UART_4_DATA_BITS 8
#define FIFOED_AVALON_UART_4_FIFO_EXPORT_USED 0
#define FIFOED_AVALON_UART_4_FIXED_BAUD 0
#define FIFOED_AVALON_UART_4_FREQ 50000000
#define FIFOED_AVALON_UART_4_GAP_VALUE 4
#define FIFOED_AVALON_UART_4_IRQ 5
#define FIFOED_AVALON_UART_4_IRQ_INTERRUPT_CONTROLLER_ID 0
#define FIFOED_AVALON_UART_4_NAME "/dev/fifoed_avalon_uart_4"
#define FIFOED_AVALON_UART_4_PARITY 'N'
#define FIFOED_AVALON_UART_4_PASS_ERROR_BITS 0
#define FIFOED_AVALON_UART_4_RX_FIFO_LE 0
#define FIFOED_AVALON_UART_4_RX_FIFO_SIZE 512
#define FIFOED_AVALON_UART_4_RX_IRQ_THRESHOLD 1
#define FIFOED_AVALON_UART_4_SIM_CHAR_STREAM ""
#define FIFOED_AVALON_UART_4_SIM_TRUE_BAUD 0
#define FIFOED_AVALON_UART_4_SPAN 64
#define FIFOED_AVALON_UART_4_STOP_BITS 1
#define FIFOED_AVALON_UART_4_SYNC_REG_DEPTH 2
#define FIFOED_AVALON_UART_4_TIMEOUT_VALUE 4
#define FIFOED_AVALON_UART_4_TIMESTAMP_WIDTH 8
#define FIFOED_AVALON_UART_4_TRANSMIT_PIN 0
#define FIFOED_AVALON_UART_4_TX_FIFO_LE 0
#define FIFOED_AVALON_UART_4_TX_FIFO_SIZE 512
#define FIFOED_AVALON_UART_4_TX_IRQ_THRESHOLD 1
#define FIFOED_AVALON_UART_4_TYPE "fifoed_avalon_uart"
#define FIFOED_AVALON_UART_4_UHW_CTS 0
#define FIFOED_AVALON_UART_4_USE_CTS_RTS 0
#define FIFOED_AVALON_UART_4_USE_EOP_REGISTER 0
#define FIFOED_AVALON_UART_4_USE_EXT_TIMESTAMP 0
#define FIFOED_AVALON_UART_4_USE_GAP_DETECTION 1
#define FIFOED_AVALON_UART_4_USE_RX_FIFO 1
#define FIFOED_AVALON_UART_4_USE_RX_TIMEOUT 1
#define FIFOED_AVALON_UART_4_USE_STATUS_BIT_CLEAR 0
#define FIFOED_AVALON_UART_4_USE_TIMESTAMP 0
#define FIFOED_AVALON_UART_4_USE_TX_FIFO 1


/*
 * fifoed_avalon_uart_5 configuration
 *
 */

#define ALT_MODULE_CLASS_fifoed_avalon_uart_5 fifoed_avalon_uart
#define FIFOED_AVALON_UART_5_ADD_ERROR_BITS 0
#define FIFOED_AVALON_UART_5_BASE 0x2b1010c0
#define FIFOED_AVALON_UART_5_BAUD 9600
#define FIFOED_AVALON_UART_5_DATA_BITS 8
#define FIFOED_AVALON_UART_5_FIFO_EXPORT_USED 0
#define FIFOED_AVALON_UART_5_FIXED_BAUD 0
#define FIFOED_AVALON_UART_5_FREQ 50000000
#define FIFOED_AVALON_UART_5_GAP_VALUE 4
#define FIFOED_AVALON_UART_5_IRQ 6
#define FIFOED_AVALON_UART_5_IRQ_INTERRUPT_CONTROLLER_ID 0
#define FIFOED_AVALON_UART_5_NAME "/dev/fifoed_avalon_uart_5"
#define FIFOED_AVALON_UART_5_PARITY 'N'
#define FIFOED_AVALON_UART_5_PASS_ERROR_BITS 0
#define FIFOED_AVALON_UART_5_RX_FIFO_LE 0
#define FIFOED_AVALON_UART_5_RX_FIFO_SIZE 512
#define FIFOED_AVALON_UART_5_RX_IRQ_THRESHOLD 1
#define FIFOED_AVALON_UART_5_SIM_CHAR_STREAM ""
#define FIFOED_AVALON_UART_5_SIM_TRUE_BAUD 0
#define FIFOED_AVALON_UART_5_SPAN 64
#define FIFOED_AVALON_UART_5_STOP_BITS 1
#define FIFOED_AVALON_UART_5_SYNC_REG_DEPTH 2
#define FIFOED_AVALON_UART_5_TIMEOUT_VALUE 4
#define FIFOED_AVALON_UART_5_TIMESTAMP_WIDTH 8
#define FIFOED_AVALON_UART_5_TRANSMIT_PIN 0
#define FIFOED_AVALON_UART_5_TX_FIFO_LE 0
#define FIFOED_AVALON_UART_5_TX_FIFO_SIZE 512
#define FIFOED_AVALON_UART_5_TX_IRQ_THRESHOLD 1
#define FIFOED_AVALON_UART_5_TYPE "fifoed_avalon_uart"
#define FIFOED_AVALON_UART_5_UHW_CTS 0
#define FIFOED_AVALON_UART_5_USE_CTS_RTS 0
#define FIFOED_AVALON_UART_5_USE_EOP_REGISTER 0
#define FIFOED_AVALON_UART_5_USE_EXT_TIMESTAMP 0
#define FIFOED_AVALON_UART_5_USE_GAP_DETECTION 1
#define FIFOED_AVALON_UART_5_USE_RX_FIFO 1
#define FIFOED_AVALON_UART_5_USE_RX_TIMEOUT 1
#define FIFOED_AVALON_UART_5_USE_STATUS_BIT_CLEAR 0
#define FIFOED_AVALON_UART_5_USE_TIMESTAMP 0
#define FIFOED_AVALON_UART_5_USE_TX_FIFO 1


/*
 * fifoed_avalon_uart_6 configuration
 *
 */

#define ALT_MODULE_CLASS_fifoed_avalon_uart_6 fifoed_avalon_uart
#define FIFOED_AVALON_UART_6_ADD_ERROR_BITS 0
#define FIFOED_AVALON_UART_6_BASE 0x2b101080
#define FIFOED_AVALON_UART_6_BAUD 9600
#define FIFOED_AVALON_UART_6_DATA_BITS 8
#define FIFOED_AVALON_UART_6_FIFO_EXPORT_USED 0
#define FIFOED_AVALON_UART_6_FIXED_BAUD 0
#define FIFOED_AVALON_UART_6_FREQ 50000000
#define FIFOED_AVALON_UART_6_GAP_VALUE 4
#define FIFOED_AVALON_UART_6_IRQ 8
#define FIFOED_AVALON_UART_6_IRQ_INTERRUPT_CONTROLLER_ID 0
#define FIFOED_AVALON_UART_6_NAME "/dev/fifoed_avalon_uart_6"
#define FIFOED_AVALON_UART_6_PARITY 'N'
#define FIFOED_AVALON_UART_6_PASS_ERROR_BITS 0
#define FIFOED_AVALON_UART_6_RX_FIFO_LE 0
#define FIFOED_AVALON_UART_6_RX_FIFO_SIZE 512
#define FIFOED_AVALON_UART_6_RX_IRQ_THRESHOLD 1
#define FIFOED_AVALON_UART_6_SIM_CHAR_STREAM ""
#define FIFOED_AVALON_UART_6_SIM_TRUE_BAUD 0
#define FIFOED_AVALON_UART_6_SPAN 64
#define FIFOED_AVALON_UART_6_STOP_BITS 1
#define FIFOED_AVALON_UART_6_SYNC_REG_DEPTH 2
#define FIFOED_AVALON_UART_6_TIMEOUT_VALUE 4
#define FIFOED_AVALON_UART_6_TIMESTAMP_WIDTH 8
#define FIFOED_AVALON_UART_6_TRANSMIT_PIN 0
#define FIFOED_AVALON_UART_6_TX_FIFO_LE 0
#define FIFOED_AVALON_UART_6_TX_FIFO_SIZE 512
#define FIFOED_AVALON_UART_6_TX_IRQ_THRESHOLD 1
#define FIFOED_AVALON_UART_6_TYPE "fifoed_avalon_uart"
#define FIFOED_AVALON_UART_6_UHW_CTS 0
#define FIFOED_AVALON_UART_6_USE_CTS_RTS 0
#define FIFOED_AVALON_UART_6_USE_EOP_REGISTER 0
#define FIFOED_AVALON_UART_6_USE_EXT_TIMESTAMP 0
#define FIFOED_AVALON_UART_6_USE_GAP_DETECTION 1
#define FIFOED_AVALON_UART_6_USE_RX_FIFO 1
#define FIFOED_AVALON_UART_6_USE_RX_TIMEOUT 1
#define FIFOED_AVALON_UART_6_USE_STATUS_BIT_CLEAR 0
#define FIFOED_AVALON_UART_6_USE_TIMESTAMP 0
#define FIFOED_AVALON_UART_6_USE_TX_FIFO 1


/*
 * fifoed_avalon_uart_7 configuration
 *
 */

#define ALT_MODULE_CLASS_fifoed_avalon_uart_7 fifoed_avalon_uart
#define FIFOED_AVALON_UART_7_ADD_ERROR_BITS 0
#define FIFOED_AVALON_UART_7_BASE 0x2b101040
#define FIFOED_AVALON_UART_7_BAUD 9600
#define FIFOED_AVALON_UART_7_DATA_BITS 8
#define FIFOED_AVALON_UART_7_FIFO_EXPORT_USED 0
#define FIFOED_AVALON_UART_7_FIXED_BAUD 0
#define FIFOED_AVALON_UART_7_FREQ 50000000
#define FIFOED_AVALON_UART_7_GAP_VALUE 4
#define FIFOED_AVALON_UART_7_IRQ 9
#define FIFOED_AVALON_UART_7_IRQ_INTERRUPT_CONTROLLER_ID 0
#define FIFOED_AVALON_UART_7_NAME "/dev/fifoed_avalon_uart_7"
#define FIFOED_AVALON_UART_7_PARITY 'N'
#define FIFOED_AVALON_UART_7_PASS_ERROR_BITS 0
#define FIFOED_AVALON_UART_7_RX_FIFO_LE 0
#define FIFOED_AVALON_UART_7_RX_FIFO_SIZE 512
#define FIFOED_AVALON_UART_7_RX_IRQ_THRESHOLD 1
#define FIFOED_AVALON_UART_7_SIM_CHAR_STREAM ""
#define FIFOED_AVALON_UART_7_SIM_TRUE_BAUD 0
#define FIFOED_AVALON_UART_7_SPAN 64
#define FIFOED_AVALON_UART_7_STOP_BITS 1
#define FIFOED_AVALON_UART_7_SYNC_REG_DEPTH 2
#define FIFOED_AVALON_UART_7_TIMEOUT_VALUE 4
#define FIFOED_AVALON_UART_7_TIMESTAMP_WIDTH 8
#define FIFOED_AVALON_UART_7_TRANSMIT_PIN 0
#define FIFOED_AVALON_UART_7_TX_FIFO_LE 0
#define FIFOED_AVALON_UART_7_TX_FIFO_SIZE 512
#define FIFOED_AVALON_UART_7_TX_IRQ_THRESHOLD 1
#define FIFOED_AVALON_UART_7_TYPE "fifoed_avalon_uart"
#define FIFOED_AVALON_UART_7_UHW_CTS 0
#define FIFOED_AVALON_UART_7_USE_CTS_RTS 0
#define FIFOED_AVALON_UART_7_USE_EOP_REGISTER 0
#define FIFOED_AVALON_UART_7_USE_EXT_TIMESTAMP 0
#define FIFOED_AVALON_UART_7_USE_GAP_DETECTION 1
#define FIFOED_AVALON_UART_7_USE_RX_FIFO 1
#define FIFOED_AVALON_UART_7_USE_RX_TIMEOUT 1
#define FIFOED_AVALON_UART_7_USE_STATUS_BIT_CLEAR 0
#define FIFOED_AVALON_UART_7_USE_TIMESTAMP 0
#define FIFOED_AVALON_UART_7_USE_TX_FIFO 1


/*
 * fifoed_avalon_uart_8 configuration
 *
 */

#define ALT_MODULE_CLASS_fifoed_avalon_uart_8 fifoed_avalon_uart
#define FIFOED_AVALON_UART_8_ADD_ERROR_BITS 0
#define FIFOED_AVALON_UART_8_BASE 0x2b101000
#define FIFOED_AVALON_UART_8_BAUD 9600
#define FIFOED_AVALON_UART_8_DATA_BITS 8
#define FIFOED_AVALON_UART_8_FIFO_EXPORT_USED 0
#define FIFOED_AVALON_UART_8_FIXED_BAUD 0
#define FIFOED_AVALON_UART_8_FREQ 50000000
#define FIFOED_AVALON_UART_8_GAP_VALUE 4
#define FIFOED_AVALON_UART_8_IRQ 10
#define FIFOED_AVALON_UART_8_IRQ_INTERRUPT_CONTROLLER_ID 0
#define FIFOED_AVALON_UART_8_NAME "/dev/fifoed_avalon_uart_8"
#define FIFOED_AVALON_UART_8_PARITY 'N'
#define FIFOED_AVALON_UART_8_PASS_ERROR_BITS 0
#define FIFOED_AVALON_UART_8_RX_FIFO_LE 0
#define FIFOED_AVALON_UART_8_RX_FIFO_SIZE 512
#define FIFOED_AVALON_UART_8_RX_IRQ_THRESHOLD 1
#define FIFOED_AVALON_UART_8_SIM_CHAR_STREAM ""
#define FIFOED_AVALON_UART_8_SIM_TRUE_BAUD 0
#define FIFOED_AVALON_UART_8_SPAN 64
#define FIFOED_AVALON_UART_8_STOP_BITS 1
#define FIFOED_AVALON_UART_8_SYNC_REG_DEPTH 2
#define FIFOED_AVALON_UART_8_TIMEOUT_VALUE 4
#define FIFOED_AVALON_UART_8_TIMESTAMP_WIDTH 8
#define FIFOED_AVALON_UART_8_TRANSMIT_PIN 0
#define FIFOED_AVALON_UART_8_TX_FIFO_LE 0
#define FIFOED_AVALON_UART_8_TX_FIFO_SIZE 512
#define FIFOED_AVALON_UART_8_TX_IRQ_THRESHOLD 1
#define FIFOED_AVALON_UART_8_TYPE "fifoed_avalon_uart"
#define FIFOED_AVALON_UART_8_UHW_CTS 0
#define FIFOED_AVALON_UART_8_USE_CTS_RTS 0
#define FIFOED_AVALON_UART_8_USE_EOP_REGISTER 0
#define FIFOED_AVALON_UART_8_USE_EXT_TIMESTAMP 0
#define FIFOED_AVALON_UART_8_USE_GAP_DETECTION 1
#define FIFOED_AVALON_UART_8_USE_RX_FIFO 1
#define FIFOED_AVALON_UART_8_USE_RX_TIMEOUT 1
#define FIFOED_AVALON_UART_8_USE_STATUS_BIT_CLEAR 0
#define FIFOED_AVALON_UART_8_USE_TIMESTAMP 0
#define FIFOED_AVALON_UART_8_USE_TX_FIFO 1


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 32
#define ALT_SYS_CLK TIMER_0
#define ALT_TIMESTAMP_CLK none


/*
 * int_avs_cmd2bit_0 configuration
 *
 */

#define ALT_MODULE_CLASS_int_avs_cmd2bit_0 int_avs_cmd2bit
#define INT_AVS_CMD2BIT_0_BASE 0x28001000
#define INT_AVS_CMD2BIT_0_IRQ -1
#define INT_AVS_CMD2BIT_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define INT_AVS_CMD2BIT_0_NAME "/dev/int_avs_cmd2bit_0"
#define INT_AVS_CMD2BIT_0_SPAN 16
#define INT_AVS_CMD2BIT_0_TYPE "int_avs_cmd2bit"


/*
 * int_avs_cmd_0 configuration
 *
 */

#define ALT_MODULE_CLASS_int_avs_cmd_0 int_avs_cmd
#define INT_AVS_CMD_0_BASE 0x28000400
#define INT_AVS_CMD_0_IRQ -1
#define INT_AVS_CMD_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define INT_AVS_CMD_0_NAME "/dev/int_avs_cmd_0"
#define INT_AVS_CMD_0_SPAN 1024
#define INT_AVS_CMD_0_TYPE "int_avs_cmd"


/*
 * int_avs_cmd_1 configuration
 *
 */

#define ALT_MODULE_CLASS_int_avs_cmd_1 int_avs_cmd
#define INT_AVS_CMD_1_BASE 0x2a000000
#define INT_AVS_CMD_1_IRQ -1
#define INT_AVS_CMD_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define INT_AVS_CMD_1_NAME "/dev/int_avs_cmd_1"
#define INT_AVS_CMD_1_SPAN 1024
#define INT_AVS_CMD_1_TYPE "int_avs_cmd"


/*
 * int_avs_cmd_2 configuration
 *
 */

#define ALT_MODULE_CLASS_int_avs_cmd_2 int_avs_cmd
#define INT_AVS_CMD_2_BASE 0x28000000
#define INT_AVS_CMD_2_IRQ -1
#define INT_AVS_CMD_2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define INT_AVS_CMD_2_NAME "/dev/int_avs_cmd_2"
#define INT_AVS_CMD_2_SPAN 1024
#define INT_AVS_CMD_2_TYPE "int_avs_cmd"


/*
 * int_avs_cmd_3 configuration
 *
 */

#define ALT_MODULE_CLASS_int_avs_cmd_3 int_avs_cmd
#define INT_AVS_CMD_3_BASE 0x28000800
#define INT_AVS_CMD_3_IRQ -1
#define INT_AVS_CMD_3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define INT_AVS_CMD_3_NAME "/dev/int_avs_cmd_3"
#define INT_AVS_CMD_3_SPAN 1024
#define INT_AVS_CMD_3_TYPE "int_avs_cmd"


/*
 * int_avs_cmd_4 configuration
 *
 */

#define ALT_MODULE_CLASS_int_avs_cmd_4 int_avs_cmd
#define INT_AVS_CMD_4_BASE 0x28000c00
#define INT_AVS_CMD_4_IRQ -1
#define INT_AVS_CMD_4_IRQ_INTERRUPT_CONTROLLER_ID -1
#define INT_AVS_CMD_4_NAME "/dev/int_avs_cmd_4"
#define INT_AVS_CMD_4_SPAN 1024
#define INT_AVS_CMD_4_TYPE "int_avs_cmd"


/*
 * int_avs_cmd_ddr configuration
 *
 */

#define ALT_MODULE_CLASS_int_avs_cmd_ddr int_avs_cmd
#define INT_AVS_CMD_DDR_BASE 0x29000000
#define INT_AVS_CMD_DDR_IRQ -1
#define INT_AVS_CMD_DDR_IRQ_INTERRUPT_CONTROLLER_ID -1
#define INT_AVS_CMD_DDR_NAME "/dev/int_avs_cmd_ddr"
#define INT_AVS_CMD_DDR_SPAN 1024
#define INT_AVS_CMD_DDR_TYPE "int_avs_cmd"


/*
 * jtag_uart_0 configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart_0 altera_avalon_jtag_uart
#define JTAG_UART_0_BASE 0x2b101290
#define JTAG_UART_0_IRQ 0
#define JTAG_UART_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_0_NAME "/dev/jtag_uart_0"
#define JTAG_UART_0_READ_DEPTH 64
#define JTAG_UART_0_READ_THRESHOLD 8
#define JTAG_UART_0_SPAN 8
#define JTAG_UART_0_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_0_WRITE_DEPTH 64
#define JTAG_UART_0_WRITE_THRESHOLD 8


/*
 * mem_if_ddr3_emif_0 configuration
 *
 */

#define ALT_MODULE_CLASS_mem_if_ddr3_emif_0 altera_mem_if_ddr3_emif
#define MEM_IF_DDR3_EMIF_0_BASE 0x0
#define MEM_IF_DDR3_EMIF_0_IRQ -1
#define MEM_IF_DDR3_EMIF_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define MEM_IF_DDR3_EMIF_0_NAME "/dev/mem_if_ddr3_emif_0"
#define MEM_IF_DDR3_EMIF_0_SPAN 536870912
#define MEM_IF_DDR3_EMIF_0_TYPE "altera_mem_if_ddr3_emif"


/*
 * onchip_memory2_0 configuration
 *
 */

#define ALT_MODULE_CLASS_onchip_memory2_0 altera_avalon_onchip_memory2
#define ONCHIP_MEMORY2_0_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_MEMORY2_0_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_MEMORY2_0_BASE 0x2b080000
#define ONCHIP_MEMORY2_0_CONTENTS_INFO ""
#define ONCHIP_MEMORY2_0_DUAL_PORT 0
#define ONCHIP_MEMORY2_0_GUI_RAM_BLOCK_TYPE "M10K"
#define ONCHIP_MEMORY2_0_INIT_CONTENTS_FILE "nios_onchip_memory2_0"
#define ONCHIP_MEMORY2_0_INIT_MEM_CONTENT 1
#define ONCHIP_MEMORY2_0_INSTANCE_ID "NONE"
#define ONCHIP_MEMORY2_0_IRQ -1
#define ONCHIP_MEMORY2_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ONCHIP_MEMORY2_0_NAME "/dev/onchip_memory2_0"
#define ONCHIP_MEMORY2_0_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_MEMORY2_0_RAM_BLOCK_TYPE "M10K"
#define ONCHIP_MEMORY2_0_READ_DURING_WRITE_MODE "DONT_CARE"
#define ONCHIP_MEMORY2_0_SINGLE_CLOCK_OP 0
#define ONCHIP_MEMORY2_0_SIZE_MULTIPLE 1
#define ONCHIP_MEMORY2_0_SIZE_VALUE 393216
#define ONCHIP_MEMORY2_0_SPAN 393216
#define ONCHIP_MEMORY2_0_TYPE "altera_avalon_onchip_memory2"
#define ONCHIP_MEMORY2_0_WRITABLE 1


/*
 * pio_0 configuration
 *
 */

#define ALT_MODULE_CLASS_pio_0 altera_avalon_pio
#define PIO_0_BASE 0x2b101280
#define PIO_0_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_0_CAPTURE 0
#define PIO_0_DATA_WIDTH 1
#define PIO_0_DO_TEST_BENCH_WIRING 0
#define PIO_0_DRIVEN_SIM_VALUE 0
#define PIO_0_EDGE_TYPE "NONE"
#define PIO_0_FREQ 50000000
#define PIO_0_HAS_IN 0
#define PIO_0_HAS_OUT 1
#define PIO_0_HAS_TRI 0
#define PIO_0_IRQ -1
#define PIO_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_0_IRQ_TYPE "NONE"
#define PIO_0_NAME "/dev/pio_0"
#define PIO_0_RESET_VALUE 0
#define PIO_0_SPAN 16
#define PIO_0_TYPE "altera_avalon_pio"


/*
 * timer_0 configuration
 *
 */

#define ALT_MODULE_CLASS_timer_0 altera_avalon_timer
#define TIMER_0_ALWAYS_RUN 0
#define TIMER_0_BASE 0x2b101260
#define TIMER_0_COUNTER_SIZE 32
#define TIMER_0_FIXED_PERIOD 0
#define TIMER_0_FREQ 50000000
#define TIMER_0_IRQ 11
#define TIMER_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_0_LOAD_VALUE 49999
#define TIMER_0_MULT 0.001
#define TIMER_0_NAME "/dev/timer_0"
#define TIMER_0_PERIOD 1
#define TIMER_0_PERIOD_UNITS "ms"
#define TIMER_0_RESET_OUTPUT 0
#define TIMER_0_SNAPSHOT 1
#define TIMER_0_SPAN 32
#define TIMER_0_TICKS_PER_SEC 1000
#define TIMER_0_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_0_TYPE "altera_avalon_timer"


/*
 * uart_0 configuration
 *
 */

#define ALT_MODULE_CLASS_uart_0 altera_avalon_uart
#define UART_0_BASE 0x2b101240
#define UART_0_BAUD 115200
#define UART_0_DATA_BITS 8
#define UART_0_FIXED_BAUD 1
#define UART_0_FREQ 50000000
#define UART_0_IRQ 12
#define UART_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define UART_0_NAME "/dev/uart_0"
#define UART_0_PARITY 'N'
#define UART_0_SIM_CHAR_STREAM ""
#define UART_0_SIM_TRUE_BAUD 0
#define UART_0_SPAN 32
#define UART_0_STOP_BITS 1
#define UART_0_SYNC_REG_DEPTH 2
#define UART_0_TYPE "altera_avalon_uart"
#define UART_0_USE_CTS_RTS 0
#define UART_0_USE_EOP_REGISTER 0

#endif /* __SYSTEM_H_ */
