/*
** ###################################################################
**     Processors:          MX8
**
**     Compilers:           GNU C Compiler
**
**     Abstract:
**         CMSIS Peripheral Access Layer for MX8
**
**     Copyright (c) 1997 - 2015 Freescale Semiconductor, Inc.
**
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**
**     o Neither the name of the copyright holder nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**
**
** ###################################################################
*/

/*
 * WARNING! DO NOT EDIT THIS FILE DIRECTLY!
 *
 * This file was generated automatically and any changes may be lost.
 */
#ifndef HW_ASMC_REGISTERS_H
#define HW_ASMC_REGISTERS_H

/* ----------------------------------------------------------------------------
   -- ASMC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ASMC_Peripheral_Access_Layer ASMC Peripheral Access Layer
 * @{
 */

/** ASMC - Register Layout Typedef */
typedef struct {
  __I  uint32_t SRS;                               /**< System Reset Status Register, offset: 0x0 */
       uint8_t RESERVED_0[4];
  __IO uint32_t PMPROT;                            /**< Power Mode Protection register, offset: 0x8 */
  __IO uint32_t PMCTRL;                            /**< Power Mode Control register, offset: 0xC */
  __IO uint32_t STOPCTRL;                          /**< Stop Control Register, offset: 0x10 */
  __I  uint32_t PMSTAT;                            /**< Power Mode Status register, offset: 0x14 */
} ASMC_Type;

/* ----------------------------------------------------------------------------
   -- ASMC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ASMC_Register_Masks ASMC Register Masks
 * @{
 */

/*! @name SRS - System Reset Status Register */
#define ASMC_SRS_WAKEUP_MASK                     (0x1U)
#define ASMC_SRS_WAKEUP_SHIFT                    (0U)
#define ASMC_SRS_WAKEUP(x)                       (((uint32_t)(((uint32_t)(x)) << ASMC_SRS_WAKEUP_SHIFT)) & ASMC_SRS_WAKEUP_MASK)
#define ASMC_SRS_WDOG1_MASK                      (0x20U)
#define ASMC_SRS_WDOG1_SHIFT                     (5U)
#define ASMC_SRS_WDOG1(x)                        (((uint32_t)(((uint32_t)(x)) << ASMC_SRS_WDOG1_SHIFT)) & ASMC_SRS_WDOG1_MASK)
#define ASMC_SRS_RES_MASK                        (0x40U)
#define ASMC_SRS_RES_SHIFT                       (6U)
#define ASMC_SRS_RES(x)                          (((uint32_t)(((uint32_t)(x)) << ASMC_SRS_RES_SHIFT)) & ASMC_SRS_RES_MASK)
#define ASMC_SRS_POR_MASK                        (0x80U)
#define ASMC_SRS_POR_SHIFT                       (7U)
#define ASMC_SRS_POR(x)                          (((uint32_t)(((uint32_t)(x)) << ASMC_SRS_POR_SHIFT)) & ASMC_SRS_POR_MASK)
#define ASMC_SRS_LOCKUP_MASK                     (0x200U)
#define ASMC_SRS_LOCKUP_SHIFT                    (9U)
#define ASMC_SRS_LOCKUP(x)                       (((uint32_t)(((uint32_t)(x)) << ASMC_SRS_LOCKUP_SHIFT)) & ASMC_SRS_LOCKUP_MASK)
#define ASMC_SRS_SW_MASK                         (0x400U)
#define ASMC_SRS_SW_SHIFT                        (10U)
#define ASMC_SRS_SW(x)                           (((uint32_t)(((uint32_t)(x)) << ASMC_SRS_SW_SHIFT)) & ASMC_SRS_SW_MASK)
#define ASMC_SRS_UECC_MASK                       (0x1000U)
#define ASMC_SRS_UECC_SHIFT                      (12U)
#define ASMC_SRS_UECC(x)                         (((uint32_t)(((uint32_t)(x)) << ASMC_SRS_UECC_SHIFT)) & ASMC_SRS_UECC_MASK)

#define ASMC_SRSH_MSI_MASK                       (0x10000U)
#define ASMC_SRSH_MSI_SHIFT                      (16U)
#define ASMC_SRSH_MSI(x)                         (((uint32_t)(((uint32_t)(x)) << ASMC_SRSH_MSI_SHIFT)) & ASMC_SRSH_MSI_MASK)
#define ASMC_SRSH_SNVS_MASK                      (0x20000U)
#define ASMC_SRSH_SNVS_SHIFT                     (17U)
#define ASMC_SRSH_PANIC(x)                       (((uint32_t)(((uint32_t)(x)) << ASMC_SRSH_PANIC_SHIFT)) & ASMC_SRSH_PANIC_MASK)
#define ASMC_SRSH_PANIC_MASK                     (0x40000U)
#define ASMC_SRSH_PANIC_SHIFT                    (18U)
#define ASMC_SRSH_PANIC(x)                       (((uint32_t)(((uint32_t)(x)) << ASMC_SRSH_PANIC_SHIFT)) & ASMC_SRSH_PANIC_MASK)
#define ASMC_SRSH_JTAG_MASK                      (0x80000U)
#define ASMC_SRSH_JTAG_SHIFT                     (19U)
#define ASMC_SRSH_JTAG(x)                        (((uint32_t)(((uint32_t)(x)) << ASMC_SRSH_JTAG_SHIFT)) & ASMC_SRSH_JTAG_MASK)
#define ASMC_SRSH_WDOG_MASK                      (0x100000U)
#define ASMC_SRSH_WDOG_SHIFT                     (20U)
#define ASMC_SRSH_WDOG(x)                        (((uint32_t)(((uint32_t)(x)) << ASMC_SRSH_WDOG_SHIFT)) & ASMC_SRSH_WDOG_MASK)
#define ASMC_SRSH_SW_MASK                        (0x200000U)
#define ASMC_SRSH_SW_SHIFT                       (21U)
#define ASMC_SRSH_SRS(x)                         (((uint32_t)(((uint32_t)(x)) << ASMC_SRSH_SW_SHIFT)) & ASMC_SRSH_SW_MASK)

/*! @name PMPROT - Power Mode Protection register */
#define ASMC_PMPROT_AVLLS_MASK                   (0x2U)
#define ASMC_PMPROT_AVLLS_SHIFT                  (1U)
#define ASMC_PMPROT_AVLLS(x)                     (((uint32_t)(((uint32_t)(x)) << ASMC_PMPROT_AVLLS_SHIFT)) & ASMC_PMPROT_AVLLS_MASK)
#define ASMC_PMPROT_ALLS_MASK                    (0x8U)
#define ASMC_PMPROT_ALLS_SHIFT                   (3U)
#define ASMC_PMPROT_ALLS(x)                      (((uint32_t)(((uint32_t)(x)) << ASMC_PMPROT_ALLS_SHIFT)) & ASMC_PMPROT_ALLS_MASK)
#define ASMC_PMPROT_AVLP_MASK                    (0x20U)
#define ASMC_PMPROT_AVLP_SHIFT                   (5U)
#define ASMC_PMPROT_AVLP(x)                      (((uint32_t)(((uint32_t)(x)) << ASMC_PMPROT_AVLP_SHIFT)) & ASMC_PMPROT_AVLP_MASK)
#define ASMC_PMPROT_AHSRUN_MASK                  (0x80U)
#define ASMC_PMPROT_AHSRUN_SHIFT                 (7U)
#define ASMC_PMPROT_AHSRUN(x)                    (((uint32_t)(((uint32_t)(x)) << ASMC_PMPROT_AHSRUN_SHIFT)) & ASMC_PMPROT_AHSRUN_MASK)

/*! @name PMCTRL - Power Mode Control register */
#define ASMC_PMCTRL_STOPM_MASK                   (0x7U)
#define ASMC_PMCTRL_STOPM_SHIFT                  (0U)
#define ASMC_PMCTRL_STOPM(x)                     (((uint32_t)(((uint32_t)(x)) << ASMC_PMCTRL_STOPM_SHIFT)) & ASMC_PMCTRL_STOPM_MASK)
#define ASMC_PMCTRL_RUNM_MASK                    (0x60U)
#define ASMC_PMCTRL_RUNM_SHIFT                   (5U)
#define ASMC_PMCTRL_RUNM(x)                      (((uint32_t)(((uint32_t)(x)) << ASMC_PMCTRL_RUNM_SHIFT)) & ASMC_PMCTRL_RUNM_MASK)

/*! @name STOPCTRL - Stop Control Register */
#define ASMC_STOPCTRL_PSTOPO_MASK                (0xC0U)
#define ASMC_STOPCTRL_PSTOPO_SHIFT               (6U)
#define ASMC_STOPCTRL_PSTOPO(x)                  (((uint32_t)(((uint32_t)(x)) << ASMC_STOPCTRL_PSTOPO_SHIFT)) & ASMC_STOPCTRL_PSTOPO_MASK)

/*! @name PMSTAT - Power Mode Status register */
#define ASMC_PMSTAT_PMSTAT_MASK                  (0xFFU)
#define ASMC_PMSTAT_PMSTAT_SHIFT                 (0U)
#define ASMC_PMSTAT_PMSTAT(x)                    (((uint32_t)(((uint32_t)(x)) << ASMC_PMSTAT_PMSTAT_SHIFT)) & ASMC_PMSTAT_PMSTAT_MASK)


/*!
 * @}
 */ /* end of group ASMC_Register_Masks */


/** Peripheral ASMC base pointer */
#define ASMC                                     ((ASMC_Type *)ASMC_BASE)
/** Array initializer of ASMC peripheral base addresses */
#define ASMC_BASE_ADDRS                          { ASMC_BASE }
/** Array initializer of ASMC peripheral base pointers */
#define ASMC_BASE_PTRS                           { ASMC }

/*!
 * @}
 */ /* end of group ASMC_Peripheral_Access_Layer */

#endif /* HW_ASMC_REGISTERS_H */

/* EOF */
