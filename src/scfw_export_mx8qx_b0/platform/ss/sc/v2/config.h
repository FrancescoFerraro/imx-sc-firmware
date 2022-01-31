/*
** ###################################################################
**
**     Copyright (c) 2016 Freescale Semiconductor, Inc.
**     Copyright 2017-2021 NXP
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

/*==========================================================================*/
/*!
 * @file
 *
 * Header file containing the entry points and debug resource strings
 * for the SC subsystem.
 *
 * @addtogroup SC_SS
 * @{
 */
/*==========================================================================*/

/* DO NOT EDIT - This file auto generated by bin/perl/config_ss_h.pl */

#ifndef SC_SS_SC_CONFIG_H
#define SC_SS_SC_CONFIG_H

/*!
 * This define defines the number of resources.
 */
#define SS_NUM_RSRC_SC 33U

/*! Define used to create subsystem function prototypes */
#define SS_FUNC_PROTO_SC \
    void ss_init_sc(sc_sub_t ss, sc_bool_t api_phase); \
    void ss_rdc_enable_sc(sc_sub_t ss, sc_bool_t master); \
    void ss_rdc_set_master_sc(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, sc_bool_t valid, sc_bool_t lock, sc_rm_spa_t sa, \
        sc_rm_spa_t pa, sc_rm_did_t did, sc_rm_sid_t sid, uint8_t cid); \
    void ss_rdc_set_peripheral_sc(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, sc_bool_t valid, sc_bool_t lock, const sc_rm_perm_t \
        *perms, sc_bool_t no_update); \
    sc_err_t ss_get_control_sc(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, uint32_t ctrl, uint32_t *val); \
    void ss_prepost_power_mode_sc(sc_sub_t ss, dsc_pdom_t pd, ss_prepost_t \
        type, sc_pm_power_mode_t from_mode, sc_pm_power_mode_t to_mode, \
        sc_bool_t rom_boot); \


/*!
 * This define is used to override the default SS function entry points.
 * If this isn't defined, then the SS uses functions in base.
 */
#define SS_EP_INIT_SC \
    { \
        ss_init_sc, \
        ss_trans_power_mode_base, \
        ss_rsrc_reset_base, \
        ss_set_cpu_power_mode_base, \
        ss_set_cpu_resume_base, \
        ss_req_sys_if_power_mode_base, \
        ss_set_clock_rate_base, \
        ss_get_clock_rate_base, \
        ss_clock_enable_base, \
        ss_force_clock_enable_base, \
        ss_set_clock_parent_base, \
        ss_get_clock_parent_base, \
        ss_is_rsrc_accessible_base, \
        ss_mu_irq_base, \
        ss_cpu_start_base, \
        ss_rdc_enable_sc, \
        ss_rdc_set_master_sc, \
        ss_rdc_set_peripheral_sc, \
        ss_rdc_set_memory_base, \
        ss_set_control_base, \
        ss_get_control_sc, \
        ss_irq_enable_base, \
        ss_irq_status_base, \
        ss_irq_trigger_base, \
        ss_dump_base, \
        ss_do_mem_repair_base, \
        ss_updown_base, \
        ss_prepost_power_mode_sc, \
        ss_iso_disable_base, \
        ss_link_enable_base, \
        ss_ssi_power_base, \
        ss_ssi_bhole_mode_base, \
        ss_ssi_pause_mode_base, \
        ss_ssi_wait_idle_base, \
        ss_adb_enable_base, \
        ss_adb_wait_base, \
        ss_prepost_clock_mode_base, \
        ss_rdc_is_did_vld_base, \
    }

#ifdef DEBUG
    /*!
     * This define is used to name resources for debug output.
     */
    #define RNAME_INIT_SC_0 \
        "SC_PID0", \
        "SC_PID1", \
        "SC_PID2", \
        "SC_PID3", \
        "SC_PID4", \
        "SC_SEMA42", \
        "SC_TPM", \
        "SC_PIT", \
        "SC_UART", \
        "SC_I2C", \
        "SC_MU_0B", \
        "SC_MU_0A0", \
        "SC_MU_0A1", \
        "SC_MU_0A2", \
        "SC_MU_0A3", \
        "SC_MU_1A", \
        "SYSCNT_RD", \
        "SYSCNT_CMP", \
        "DEBUG", \
        "SYSTEM", \
        "SECO", \
        "CAAM_JR1", \
        "CAAM_JR1_OUT", \
        "CAAM_JR2", \
        "CAAM_JR2_OUT", \
        "CAAM_JR3", \
        "CAAM_JR3_OUT", \
        "SECO_MU_2", \
        "SECO_MU_3", \
        "SECO_MU_4", \
        "OTP", \
        "ATTESTATION", \
        "SECVIO", \

#endif

#endif /* SC_SS_SC_CONFIG_H */

/** @} */

