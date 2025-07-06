<<<<<<< HEAD
#ifndef UANT_APP_EVENTS_H
#define UANT_APP_EVENTS_H

/*--------------------------------------------------------------------
 * Informational / Init
 *-------------------------------------------------------------------*/
#define UANT_APP_RESERVED_EID        0
#define UANT_APP_INIT_INF_EID        1   /* App started                */
#define UANT_APP_NOOP_INF_EID        2   /* NOOP received              */
#define UANT_APP_RESET_INF_EID       3   /* Counters reset             */

/*--------------------------------------------------------------------
 * Framework / SB / Table
 *-------------------------------------------------------------------*/
#define UANT_APP_CC_ERR_EID          4   /* Unknown command‑code       */
#define UANT_APP_MID_ERR_EID         5   /* Unknown Msg ID             */
#define UANT_APP_CMD_LEN_ERR_EID     6   /* Length mismatch            */
#define UANT_APP_PIPE_ERR_EID        7   /* Pipe read failure          */
#define UANT_APP_CR_PIPE_ERR_EID     8   /* Pipe create failure        */
#define UANT_APP_SUB_HK_ERR_EID      9   /* HK subscription error      */
#define UANT_APP_SUB_CMD_ERR_EID    10   /* CMD subscription error     */
#define UANT_APP_TABLE_REG_ERR_EID  11   /* Table registration error   */

/*--------------------------------------------------------------------
 * ANT‑6F Command‑execution Failures
 *-------------------------------------------------------------------*/
#define UANT_APP_I2C_XFER_ERR_EID   12   /* Generic I²C transaction    */

#define UANT_APP_BURN_ERR_EID       13   /* burn_channel() failed      */
#define UANT_APP_STOP_BURN_ERR_EID  14   /* stop_burn() failed         */

#define UANT_APP_GET_STATUS_ERR_EID 15   /* get_release_status()       */
#define UANT_APP_GET_BACKUP_ERR_EID 16   /* get_backup_status()        */
#define UANT_APP_GET_BOARD_ERR_EID  17   /* get_board_status()         */
#define UANT_APP_GET_TEMP_ERR_EID   18   /* get_internal_temp()        */

#define UANT_APP_GET_SETTINGS_ERR_EID 19 /* get_backup_settings()      */
#define UANT_APP_SET_SETTINGS_ERR_EID 20 /* set_backup_settings()      */

#define UANT_APP_RESET_ERR_EID      21   /* soft_reset() failed        */
#define UANT_APP_I2C_INIT_ERR_EID   22
=======
/************************************************************************
 * NASA Docket No. GSC-18,719-1, and identified as “core Flight System: Bootes”
 *
 * Copyright (c) 2020 United States Government as represented by the
 * Administrator of the National Aeronautics and Space Administration.
 * All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License. You may obtain
 * a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ************************************************************************/

/**
 * @file
 *
 * Define Sample App Events IDs
 */

#ifndef UANT_APP_EVENTS_H
#define UANT_APP_EVENTS_H

#define UANT_APP_RESERVED_EID      0
#define UANT_APP_INIT_INF_EID      1
#define UANT_APP_CC_ERR_EID        2
#define UANT_APP_NOOP_INF_EID      3
#define UANT_APP_RESET_INF_EID     4
#define UANT_APP_MID_ERR_EID       5
#define UANT_APP_CMD_LEN_ERR_EID   6
#define UANT_APP_PIPE_ERR_EID      7
#define UANT_APP_VALUE_INF_EID     8
#define UANT_APP_CR_PIPE_ERR_EID   9
#define UANT_APP_SUB_HK_ERR_EID    10
#define UANT_APP_SUB_CMD_ERR_EID   11
#define UANT_APP_TABLE_REG_ERR_EID 12
/* ───── Error Events: Command Execution Failures ───── */
#define UANT_APP_I2C_XFER_ERR_EID      13  /* I2C 트랜잭션 실패 */
#define UANT_APP_BURN_ERR_EID          14  /* Burn 명령 실패 */
#define UANT_APP_STOP_BURN_ERR_EID     15  /* Stop-burn 실패 */
#define UANT_APP_GET_BOARD_ERR_EID     16  /* Board-status 조회 실패 */
#define UANT_APP_GET_TEMP_ERR_EID      17  /* Temperature 조회 실패 */
#define UANT_APP_GET_STATUS_ERR_EID    18  /* Release-status 조회 실패 */
#define UANT_APP_GET_BACKUP_ERR_EID    19  /* Backup-status 조회 실패 */
#define UANT_APP_GET_SETTINGS_ERR_EID  20  /* Backup-settings 읽기 실패 */
#define UANT_APP_SET_SETTINGS_ERR_EID  21  /* Backup-settings 쓰기 실패 */
#define UANT_APP_I2C_INIT_ERR_EID      22

>>>>>>> cabbd67b0a7f3827e498cf0b0b859971cd8a224e
#endif /* UANT_APP_EVENTS_H */
