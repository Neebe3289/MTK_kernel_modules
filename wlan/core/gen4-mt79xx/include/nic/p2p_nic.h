/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2016 MediaTek Inc.
 */
/*
 ** Id: //Department/DaVinci/TRUNK/WiFi_P2P_Driver/include/nic/p2p_nic.h#1
 */

/*! \file   "p2p_nic.h"
 *  \brief  The declaration of nic functions
 *
 *  Detail description.
 */

#ifndef _P2P_NIC_H
#define _P2P_NIC_H

/******************************************************************************
 *                         C O M P I L E R   F L A G S
 ******************************************************************************
 */

/******************************************************************************
 *                    E X T E R N A L   R E F E R E N C E S
 ******************************************************************************
 */

/******************************************************************************
 *                              C O N S T A N T S
 ******************************************************************************
 */

/******************************************************************************
 *                                 M A C R O S
 ******************************************************************************
 */

/******************************************************************************
 *                             D A T A   T Y P E S
 ******************************************************************************
 */

/******************************************************************************
 *                            P U B L I C   D A T A
 ******************************************************************************
 */

/******************************************************************************
 *                           P R I V A T E   D A T A
 ******************************************************************************
 */

/******************************************************************************
 *                  F U N C T I O N   D E C L A R A T I O N S
 ******************************************************************************
 */

void
nicP2pMediaStateChange(IN struct ADAPTER *prAdapter,
		IN uint8_t ucBssIndex,
		IN struct EVENT_CONNECTION_STATUS *prConnectionStatus);

void
nicRxAddP2pDevice(IN struct ADAPTER *prAdapter,
		IN struct EVENT_P2P_DEV_DISCOVER_RESULT *prP2pResult,
		IN uint8_t *pucRxIEBuf,
		IN uint16_t u2RxIELength);

#endif