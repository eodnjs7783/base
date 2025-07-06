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
#endif /* UANT_APP_EVENTS_H */
