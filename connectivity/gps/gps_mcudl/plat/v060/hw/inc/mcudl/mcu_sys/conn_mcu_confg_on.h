/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2021 MediaTek Inc.
 */

/*[File]            : conn_mcu_confg_on.h*/
/*[Revision time]   : Mon Oct 25 13:37:58 2021*/
/*[Description]     : This file is auto generated by CODA*/
/*[Copyright]       : Copyright (C) 2021 Mediatek Incorportion. All rights reserved.*/

#ifndef __CONN_MCU_CONFG_ON_REGS_H__
#define __CONN_MCU_CONFG_ON_REGS_H__

#include "hal_common.h"

#ifdef __cplusplus
extern "C" {
#endif


/******************************************************************************/
/**/
/*                     CONN_MCU_CONFG_ON CR Definitions                     */
/**/
/******************************************************************************/

#define CONN_MCU_CONFG_ON_BASE                                 0x81025000

#define CONN_MCU_CONFG_ON_MCU_DBG_CTL_ADDR                     (CONN_MCU_CONFG_ON_BASE + 0x008)
#define CONN_MCU_CONFG_ON_MCU_DBG_STATUS_ADDR                  (CONN_MCU_CONFG_ON_BASE + 0x010)
#define CONN_MCU_CONFG_ON_MCU_VLP_DBG_STATUS_ADDR              (CONN_MCU_CONFG_ON_BASE + 0x014)
#define CONN_MCU_CONFG_ON_MCU_CFG_ON_CTL_ADDR                  (CONN_MCU_CONFG_ON_BASE + 0x018)
#define CONN_MCU_CONFG_ON_MCU_OFF_DBG_SEL_ADDR                 (CONN_MCU_CONFG_ON_BASE + 0x020)
#define CONN_MCU_CONFG_ON_MCU_OFF_MODULE_OP_ADDR               (CONN_MCU_CONFG_ON_BASE + 0x024)
#define CONN_MCU_CONFG_ON_HOST_MAILBOX_MCU_ADDR                (CONN_MCU_CONFG_ON_BASE + 0x034)
#define CONN_MCU_CONFG_ON_HOST_MAILBOX_BT_ADDR                 (CONN_MCU_CONFG_ON_BASE + 0x038)
#define CONN_MCU_CONFG_ON_PATCH_ON_EN_ADDR                     (CONN_MCU_CONFG_ON_BASE + 0x300)
#define CONN_MCU_CONFG_ON_PATCH_ON_SRC0_ADDR                   (CONN_MCU_CONFG_ON_BASE + 0x304)
#define CONN_MCU_CONFG_ON_PATCH_ON_DST0_ADDR                   (CONN_MCU_CONFG_ON_BASE + 0x308)
#define CONN_MCU_CONFG_ON_PATCH_ON_SRC1_ADDR                   (CONN_MCU_CONFG_ON_BASE + 0x30c)
#define CONN_MCU_CONFG_ON_PATCH_ON_DST1_ADDR                   (CONN_MCU_CONFG_ON_BASE + 0x310)





#define CONN_MCU_CONFG_ON_MCU_DBG_CTL_MCU_VLP_DBG_SEL_ADDR     CONN_MCU_CONFG_ON_MCU_DBG_CTL_ADDR
#define CONN_MCU_CONFG_ON_MCU_DBG_CTL_MCU_VLP_DBG_SEL_MASK     0x00000070
#define CONN_MCU_CONFG_ON_MCU_DBG_CTL_MCU_VLP_DBG_SEL_SHFT     4
#define CONN_MCU_CONFG_ON_MCU_DBG_CTL_MCU_DBG_SEL_ADDR         CONN_MCU_CONFG_ON_MCU_DBG_CTL_ADDR
#define CONN_MCU_CONFG_ON_MCU_DBG_CTL_MCU_DBG_SEL_MASK         0x0000000F
#define CONN_MCU_CONFG_ON_MCU_DBG_CTL_MCU_DBG_SEL_SHFT         0


#define CONN_MCU_CONFG_ON_MCU_DBG_STATUS_MCU_DBG_STATUS_ADDR   CONN_MCU_CONFG_ON_MCU_DBG_STATUS_ADDR
#define CONN_MCU_CONFG_ON_MCU_DBG_STATUS_MCU_DBG_STATUS_MASK   0xFFFFFFFF
#define CONN_MCU_CONFG_ON_MCU_DBG_STATUS_MCU_DBG_STATUS_SHFT   0


#define CONN_MCU_CONFG_ON_MCU_VLP_DBG_STATUS_MCU_DBG_STATUS_ADDR CONN_MCU_CONFG_ON_MCU_VLP_DBG_STATUS_ADDR
#define CONN_MCU_CONFG_ON_MCU_VLP_DBG_STATUS_MCU_DBG_STATUS_MASK 0xFFFFFFFF
#define CONN_MCU_CONFG_ON_MCU_VLP_DBG_STATUS_MCU_DBG_STATUS_SHFT 0


#define CONN_MCU_CONFG_ON_MCU_CFG_ON_CTL_MCU_CFG_ON_CTL_ADDR   CONN_MCU_CONFG_ON_MCU_CFG_ON_CTL_ADDR
#define CONN_MCU_CONFG_ON_MCU_CFG_ON_CTL_MCU_CFG_ON_CTL_MASK   0xFFFFFFF0
#define CONN_MCU_CONFG_ON_MCU_CFG_ON_CTL_MCU_CFG_ON_CTL_SHFT   4
#define CONN_MCU_CONFG_ON_MCU_CFG_ON_CTL_CORE_WARM_RESET_ADDR  CONN_MCU_CONFG_ON_MCU_CFG_ON_CTL_ADDR
#define CONN_MCU_CONFG_ON_MCU_CFG_ON_CTL_CORE_WARM_RESET_MASK  0x00000008
#define CONN_MCU_CONFG_ON_MCU_CFG_ON_CTL_CORE_WARM_RESET_SHFT  3
#define CONN_MCU_CONFG_ON_MCU_CFG_ON_CTL_NO_CACHE_INIT_ADDR    CONN_MCU_CONFG_ON_MCU_CFG_ON_CTL_ADDR
#define CONN_MCU_CONFG_ON_MCU_CFG_ON_CTL_NO_CACHE_INIT_MASK    0x00000004
#define CONN_MCU_CONFG_ON_MCU_CFG_ON_CTL_NO_CACHE_INIT_SHFT    2
#define CONN_MCU_CONFG_ON_MCU_CFG_ON_CTL_DLM_ERR_STA_EN_ADDR   CONN_MCU_CONFG_ON_MCU_CFG_ON_CTL_ADDR
#define CONN_MCU_CONFG_ON_MCU_CFG_ON_CTL_DLM_ERR_STA_EN_MASK   0x00000002
#define CONN_MCU_CONFG_ON_MCU_CFG_ON_CTL_DLM_ERR_STA_EN_SHFT   1
#define CONN_MCU_CONFG_ON_MCU_CFG_ON_CTL_ILM_ERR_STA_EN_ADDR   CONN_MCU_CONFG_ON_MCU_CFG_ON_CTL_ADDR
#define CONN_MCU_CONFG_ON_MCU_CFG_ON_CTL_ILM_ERR_STA_EN_MASK   0x00000001
#define CONN_MCU_CONFG_ON_MCU_CFG_ON_CTL_ILM_ERR_STA_EN_SHFT   0


#define CONN_MCU_CONFG_ON_MCU_OFF_DBG_SEL_MCU_OFF_DBG_SEL_ADDR CONN_MCU_CONFG_ON_MCU_OFF_DBG_SEL_ADDR
#define CONN_MCU_CONFG_ON_MCU_OFF_DBG_SEL_MCU_OFF_DBG_SEL_MASK 0xFFFFFFFF
#define CONN_MCU_CONFG_ON_MCU_OFF_DBG_SEL_MCU_OFF_DBG_SEL_SHFT 0


#define CONN_MCU_CONFG_ON_MCU_OFF_MODULE_OP_MCU_OFF_MODULE_OP_ADDR CONN_MCU_CONFG_ON_MCU_OFF_MODULE_OP_ADDR
#define CONN_MCU_CONFG_ON_MCU_OFF_MODULE_OP_MCU_OFF_MODULE_OP_MASK 0xFFFFFFFF
#define CONN_MCU_CONFG_ON_MCU_OFF_MODULE_OP_MCU_OFF_MODULE_OP_SHFT 0


#define CONN_MCU_CONFG_ON_HOST_MAILBOX_MCU_HOST_MAILBOX_MCU_ADDR CONN_MCU_CONFG_ON_HOST_MAILBOX_MCU_ADDR
#define CONN_MCU_CONFG_ON_HOST_MAILBOX_MCU_HOST_MAILBOX_MCU_MASK 0xFFFFFFFF
#define CONN_MCU_CONFG_ON_HOST_MAILBOX_MCU_HOST_MAILBOX_MCU_SHFT 0


#define CONN_MCU_CONFG_ON_HOST_MAILBOX_BT_HOST_MAILBOX_BT_ADDR CONN_MCU_CONFG_ON_HOST_MAILBOX_BT_ADDR
#define CONN_MCU_CONFG_ON_HOST_MAILBOX_BT_HOST_MAILBOX_BT_MASK 0xFFFFFFFF
#define CONN_MCU_CONFG_ON_HOST_MAILBOX_BT_HOST_MAILBOX_BT_SHFT 0


#define CONN_MCU_CONFG_ON_PATCH_ON_EN_PATCH_ON_EN1_ADDR        CONN_MCU_CONFG_ON_PATCH_ON_EN_ADDR
#define CONN_MCU_CONFG_ON_PATCH_ON_EN_PATCH_ON_EN1_MASK        0x00000002
#define CONN_MCU_CONFG_ON_PATCH_ON_EN_PATCH_ON_EN1_SHFT        1
#define CONN_MCU_CONFG_ON_PATCH_ON_EN_PATCH_ON_EN0_ADDR        CONN_MCU_CONFG_ON_PATCH_ON_EN_ADDR
#define CONN_MCU_CONFG_ON_PATCH_ON_EN_PATCH_ON_EN0_MASK        0x00000001
#define CONN_MCU_CONFG_ON_PATCH_ON_EN_PATCH_ON_EN0_SHFT        0


#define CONN_MCU_CONFG_ON_PATCH_ON_SRC0_PATCH_ON_SRC0_ADDR     CONN_MCU_CONFG_ON_PATCH_ON_SRC0_ADDR
#define CONN_MCU_CONFG_ON_PATCH_ON_SRC0_PATCH_ON_SRC0_MASK     0x000FFFFE
#define CONN_MCU_CONFG_ON_PATCH_ON_SRC0_PATCH_ON_SRC0_SHFT     1


#define CONN_MCU_CONFG_ON_PATCH_ON_DST0_PATCH_ON_DES0_ADDR     CONN_MCU_CONFG_ON_PATCH_ON_DST0_ADDR
#define CONN_MCU_CONFG_ON_PATCH_ON_DST0_PATCH_ON_DES0_MASK     0x01FFFFFF
#define CONN_MCU_CONFG_ON_PATCH_ON_DST0_PATCH_ON_DES0_SHFT     0


#define CONN_MCU_CONFG_ON_PATCH_ON_SRC1_PATCH_ON_SRC1_ADDR     CONN_MCU_CONFG_ON_PATCH_ON_SRC1_ADDR
#define CONN_MCU_CONFG_ON_PATCH_ON_SRC1_PATCH_ON_SRC1_MASK     0x000FFFFE
#define CONN_MCU_CONFG_ON_PATCH_ON_SRC1_PATCH_ON_SRC1_SHFT     1


#define CONN_MCU_CONFG_ON_PATCH_ON_DST1_PATCH_ON_DES1_ADDR     CONN_MCU_CONFG_ON_PATCH_ON_DST1_ADDR
#define CONN_MCU_CONFG_ON_PATCH_ON_DST1_PATCH_ON_DES1_MASK     0x01FFFFFF
#define CONN_MCU_CONFG_ON_PATCH_ON_DST1_PATCH_ON_DES1_SHFT     0

#ifdef __cplusplus
}
#endif

#endif /* __CONN_MCU_CONFG_ON_REGS_H__*/
