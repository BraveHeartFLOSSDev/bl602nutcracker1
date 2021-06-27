typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef enum anon_enum_8.conflict31 {
    CNTLR_BB_OGF=3,
    INFO_PAR_OGF=4,
    KE_MEM_BLOCK_EM=1,
    KE_MEM_BLOCK_MAX=2,
    KE_MEM_BLOCK_RAM=0,
    KE_MEM_ENV=0,
    KE_MEM_KE_MSG=0,
    KE_MEM_NON_RETENTION=0,
    LE_CNTLR_OGF=8,
    LK_CNTL_OGF=1,
    LK_POL_OGF=2,
    MAX_OGF=64,
    STAT_PAR_OGF=5,
    TEST_OGF=6,
    VS_OGF=63
} anon_enum_8.conflict31;

typedef struct bd_addr bd_addr, *Pbd_addr;

typedef uchar uint8_t;

struct bd_addr { // DWARF DIE: 189
    uint8_t addr[6];
};

typedef struct adv_report adv_report, *Padv_report;

struct adv_report { // DWARF DIE: 1cb
    uint8_t evt_type;
    uint8_t adv_addr_type;
    struct bd_addr adv_addr;
    uint8_t data_len;
    uint8_t data[31];
    uint8_t rssi;
};

typedef struct dir_adv_report dir_adv_report, *Pdir_adv_report;

struct dir_adv_report { // DWARF DIE: 22e
    uint8_t evt_type;
    uint8_t addr_type;
    struct bd_addr addr;
    uint8_t dir_addr_type;
    struct bd_addr dir_addr;
    uint8_t rssi;
};

typedef struct evt_mask evt_mask, *Pevt_mask;

struct evt_mask { // DWARF DIE: 15c
    uint8_t mask[8];
};

typedef ushort uint16_t;

typedef ulong uint32_t;

typedef struct hci_host_nb_cmp_pkts_cmd hci_host_nb_cmp_pkts_cmd, *Phci_host_nb_cmp_pkts_cmd;

struct hci_host_nb_cmp_pkts_cmd { // DWARF DIE: c06
    uint8_t nb_of_hdl;
    undefined field_0x1;
    uint16_t con_hdl[3];
    uint16_t nb_comp_pkt[3];
};

typedef enum hci_opcode {
    HCI_ACCEPT_CON_REQ_CMD_OPCODE=1033,
    HCI_ACCEPT_SYNC_CON_REQ_CMD_OPCODE=1065,
    HCI_AUTH_REQ_CMD_OPCODE=1041,
    HCI_CHG_CON_LK_CMD_OPCODE=1045,
    HCI_CHG_CON_PKT_TYPE_CMD_OPCODE=1039,
    HCI_CREATE_CON_CANCEL_CMD_OPCODE=1032,
    HCI_CREATE_CON_CMD_OPCODE=1029,
    HCI_CREATE_NEW_UNIT_KEY_CMD_OPCODE=3083,
    HCI_DBG_BLE_TST_LLCP_PT_EN_CMD_OPCODE=-958,
    HCI_DBG_BLE_TST_SEND_LLCP_CMD_OPCODE=-957,
    HCI_DBG_BT_SEND_LMP_CMD_OPCODE=-1010,
    HCI_DBG_DEL_PAR_CMD_OPCODE=-1021,
    HCI_DBG_ER_FLASH_CMD_OPCODE=-1018,
    HCI_DBG_HW_REG_RD_CMD_OPCODE=-976,
    HCI_DBG_HW_REG_WR_CMD_OPCODE=-975,
    HCI_DBG_ID_FLASH_CMD_OPCODE=-1019,
    HCI_DBG_LLCP_DISCARD_CMD_OPCODE=-970,
    HCI_DBG_MWS_COEXTST_SCEN_CMD_OPCODE=-954,
    HCI_DBG_MWS_COEX_CMD_OPCODE=-955,
    HCI_DBG_PLF_RESET_CMD_OPCODE=-1007,
    HCI_DBG_RD_FLASH_CMD_OPCODE=-1016,
    HCI_DBG_RD_KE_STATS_CMD_OPCODE=-1008,
    HCI_DBG_RD_MEM_CMD_OPCODE=-1023,
    HCI_DBG_RD_MEM_INFO_CMD_OPCODE=-1006,
    HCI_DBG_RD_PAR_CMD_OPCODE=-1015,
    HCI_DBG_RESET_RX_CNT_CMD_OPCODE=-969,
    HCI_DBG_RESET_TX_CNT_CMD_OPCODE=-968,
    HCI_DBG_RF_CNTL_TX_CMD_OPCODE=-961,
    HCI_DBG_RF_RD_DATA_RX_CMD_OPCODE=-962,
    HCI_DBG_RF_REG_RD_CMD_OPCODE=-967,
    HCI_DBG_RF_REG_WR_CMD_OPCODE=-966,
    HCI_DBG_RF_SWITCH_CLK_CMD_OPCODE=-964,
    HCI_DBG_RF_SYNC_P_CNTL_CMD_OPCODE=-960,
    HCI_DBG_RF_WR_DATA_TX_CMD_OPCODE=-963,
    HCI_DBG_SET_BD_ADDR_CMD_OPCODE=-974,
    HCI_DBG_SET_CRC_CMD_OPCODE=-971,
    HCI_DBG_SET_LOCAL_CLOCK_CMD_OPCODE=-1009,
    HCI_DBG_SET_TX_PW_CMD_OPCODE=-965,
    HCI_DBG_SET_TYPE_PUB_CMD_OPCODE=-973,
    HCI_DBG_SET_TYPE_RAND_CMD_OPCODE=-972,
    HCI_DBG_WLAN_COEXTST_SCEN_CMD_OPCODE=-1011,
    HCI_DBG_WLAN_COEX_CMD_OPCODE=-1013,
    HCI_DBG_WR_DLE_DFT_VALUE_CMD_OPCODE=-959,
    HCI_DBG_WR_FLASH_CMD_OPCODE=-1017,
    HCI_DBG_WR_MEM_CMD_OPCODE=-1022,
    HCI_DBG_WR_PAR_CMD_OPCODE=-1014,
    HCI_DEL_RES_LT_ADDR_CMD_OPCODE=3189,
    HCI_DEL_STORED_LK_CMD_OPCODE=3090,
    HCI_DISCONNECT_CMD_OPCODE=1030,
    HCI_ENH_ACCEPT_SYNC_CON_CMD_OPCODE=1086,
    HCI_ENH_FLUSH_CMD_OPCODE=3167,
    HCI_ENH_SETUP_SYNC_CON_CMD_OPCODE=1085,
    HCI_EN_DUT_MODE_CMD_OPCODE=6147,
    HCI_EXIT_PARK_STATE_CMD_OPCODE=2054,
    HCI_EXIT_PER_INQ_MODE_CMD_OPCODE=1028,
    HCI_EXIT_SNIFF_MODE_CMD_OPCODE=2052,
    HCI_FLOW_SPEC_CMD_OPCODE=2064,
    HCI_FLUSH_CMD_OPCODE=3080,
    HCI_GET_MWS_TRANSPORT_LAYER_CONFIG_CMD_OPCODE=5132,
    HCI_HOLD_MODE_CMD_OPCODE=2049,
    HCI_HOST_BUF_SIZE_CMD_OPCODE=3123,
    HCI_HOST_NB_CMP_PKTS_CMD_OPCODE=3125,
    HCI_INQ_CANCEL_CMD_OPCODE=1026,
    HCI_INQ_CMD_OPCODE=1025,
    HCI_IO_CAP_REQ_NEG_REPLY_CMD_OPCODE=1076,
    HCI_IO_CAP_REQ_REPLY_CMD_OPCODE=1067,
    HCI_LE_ADD_DEV_TO_RSLV_LIST_CMD_OPCODE=8231,
    HCI_LE_ADD_DEV_TO_WLST_CMD_OPCODE=8209,
    HCI_LE_CLEAR_RSLV_LIST_CMD_OPCODE=8233,
    HCI_LE_CLEAR_WLST_CMD_OPCODE=8208,
    HCI_LE_CON_UPDATE_CMD_OPCODE=8211,
    HCI_LE_CREATE_CON_CANCEL_CMD_OPCODE=8206,
    HCI_LE_CREATE_CON_CMD_OPCODE=8205,
    HCI_LE_ENC_CMD_OPCODE=8215,
    HCI_LE_GEN_DHKEY_CMD_OPCODE=8230,
    HCI_LE_LTK_REQ_NEG_REPLY_CMD_OPCODE=8219,
    HCI_LE_LTK_REQ_REPLY_CMD_OPCODE=8218,
    HCI_LE_RAND_CMD_OPCODE=8216,
    HCI_LE_RD_ADV_CHNL_TX_PW_CMD_OPCODE=8199,
    HCI_LE_RD_BUFF_SIZE_CMD_OPCODE=8194,
    HCI_LE_RD_CHNL_MAP_CMD_OPCODE=8213,
    HCI_LE_RD_LOCAL_SUPP_FEATS_CMD_OPCODE=8195,
    HCI_LE_RD_LOC_P256_PUB_KEY_CMD_OPCODE=8229,
    HCI_LE_RD_LOC_RSLV_ADDR_CMD_OPCODE=8236,
    HCI_LE_RD_MAX_DATA_LEN_CMD_OPCODE=8239,
    HCI_LE_RD_PEER_RSLV_ADDR_CMD_OPCODE=8235,
    HCI_LE_RD_REM_USED_FEATS_CMD_OPCODE=8214,
    HCI_LE_RD_RFPATH_CPS_CMD_OPCODE=8268,
    HCI_LE_RD_RSLV_LIST_SIZE_CMD_OPCODE=8234,
    HCI_LE_RD_SUGGTED_DFT_DATA_LEN_CMD_OPCODE=8227,
    HCI_LE_RD_SUPP_STATES_CMD_OPCODE=8220,
    HCI_LE_RD_TRANS_PWR_CMD_OPCODE=8267,
    HCI_LE_RD_WLST_SIZE_CMD_OPCODE=8207,
    HCI_LE_REM_CON_PARAM_REQ_NEG_REPLY_CMD_OPCODE=8225,
    HCI_LE_REM_CON_PARAM_REQ_REPLY_CMD_OPCODE=8224,
    HCI_LE_RMV_DEV_FROM_RSLV_LIST_CMD_OPCODE=8232,
    HCI_LE_RMV_DEV_FROM_WLST_CMD_OPCODE=8210,
    HCI_LE_RX_TEST_CMD_OPCODE=8221,
    HCI_LE_SET_ADDR_RESOL_EN_CMD_OPCODE=8237,
    HCI_LE_SET_ADV_DATA_CMD_OPCODE=8200,
    HCI_LE_SET_ADV_EN_CMD_OPCODE=8202,
    HCI_LE_SET_ADV_PARAM_CMD_OPCODE=8198,
    HCI_LE_SET_DATA_LEN_CMD_OPCODE=8226,
    HCI_LE_SET_EVT_MASK_CMD_OPCODE=8193,
    HCI_LE_SET_HOST_CH_CLASS_CMD_OPCODE=8212,
    HCI_LE_SET_RAND_ADDR_CMD_OPCODE=8197,
    HCI_LE_SET_RSLV_PRIV_ADDR_TO_CMD_OPCODE=8238,
    HCI_LE_SET_SCAN_EN_CMD_OPCODE=8204,
    HCI_LE_SET_SCAN_PARAM_CMD_OPCODE=8203,
    HCI_LE_SET_SCAN_RSP_DATA_CMD_OPCODE=8201,
    HCI_LE_START_ENC_CMD_OPCODE=8217,
    HCI_LE_TEST_END_CMD_OPCODE=8223,
    HCI_LE_TX_TEST_CMD_OPCODE=8222,
    HCI_LE_WR_RFPATH_CPS_CMD_OPCODE=8269,
    HCI_LE_WR_SUGGTED_DFT_DATA_LEN_CMD_OPCODE=8228,
    HCI_LK_REQ_NEG_REPLY_CMD_OPCODE=1036,
    HCI_LK_REQ_REPLY_CMD_OPCODE=1035,
    HCI_MASTER_LK_CMD_OPCODE=1047,
    HCI_NO_OPERATION_CMD_OPCODE=0,
    HCI_PARK_STATE_CMD_OPCODE=2053,
    HCI_PER_INQ_MODE_CMD_OPCODE=1027,
    HCI_PIN_CODE_REQ_NEG_REPLY_CMD_OPCODE=1038,
    HCI_PIN_CODE_REQ_REPLY_CMD_OPCODE=1037,
    HCI_QOS_SETUP_CMD_OPCODE=2055,
    HCI_RD_AFH_CH_ASSESS_MODE_CMD_OPCODE=3144,
    HCI_RD_AFH_CH_MAP_CMD_OPCODE=5126,
    HCI_RD_AUTH_EN_CMD_OPCODE=3103,
    HCI_RD_AUTH_PAYL_TO_CMD_OPCODE=3195,
    HCI_RD_AUTO_FLUSH_TO_CMD_OPCODE=3111,
    HCI_RD_BD_ADDR_CMD_OPCODE=4105,
    HCI_RD_BUFF_SIZE_CMD_OPCODE=4101,
    HCI_RD_CLASS_OF_DEV_CMD_OPCODE=3107,
    HCI_RD_CLK_CMD_OPCODE=5127,
    HCI_RD_CLK_OFF_CMD_OPCODE=1055,
    HCI_RD_CON_ACCEPT_TO_CMD_OPCODE=3093,
    HCI_RD_CURR_IAC_LAP_CMD_OPCODE=3129,
    HCI_RD_DFT_ERR_DATA_REP_CMD_OPCODE=3162,
    HCI_RD_DFT_LINK_POL_STG_CMD_OPCODE=2062,
    HCI_RD_ENC_KEY_SIZE_CMD_OPCODE=5128,
    HCI_RD_ENH_TX_PWR_LVL_CMD_OPCODE=3176,
    HCI_RD_EXT_INQ_LEN_CMD_OPCODE=3200,
    HCI_RD_EXT_INQ_RSP_CMD_OPCODE=3153,
    HCI_RD_EXT_PAGE_TO_CMD_OPCODE=3198,
    HCI_RD_FAIL_CONTACT_CNT_CMD_OPCODE=5121,
    HCI_RD_FLOW_CNTL_MODE_CMD_OPCODE=3174,
    HCI_RD_HOLD_MODE_ACTIVITY_CMD_OPCODE=3115,
    HCI_RD_INQ_MODE_CMD_OPCODE=3140,
    HCI_RD_INQ_RSP_TX_PWR_LVL_CMD_OPCODE=3160,
    HCI_RD_INQ_SCAN_ACT_CMD_OPCODE=3101,
    HCI_RD_INQ_SCAN_TYPE_CMD_OPCODE=3138,
    HCI_RD_LE_HOST_SUPP_CMD_OPCODE=3180,
    HCI_RD_LINK_POL_STG_CMD_OPCODE=2060,
    HCI_RD_LINK_QUAL_CMD_OPCODE=5123,
    HCI_RD_LINK_SUPV_TO_CMD_OPCODE=3126,
    HCI_RD_LMP_HDL_CMD_OPCODE=1056,
    HCI_RD_LOCAL_EXT_FEATS_CMD_OPCODE=4100,
    HCI_RD_LOCAL_NAME_CMD_OPCODE=3092,
    HCI_RD_LOCAL_SUPP_CMDS_CMD_OPCODE=4098,
    HCI_RD_LOCAL_SUPP_CODECS_CMD_OPCODE=4107,
    HCI_RD_LOCAL_SUPP_FEATS_CMD_OPCODE=4099,
    HCI_RD_LOCAL_VER_INFO_CMD_OPCODE=4097,
    HCI_RD_LOC_OOB_DATA_CMD_OPCODE=3159,
    HCI_RD_LOC_OOB_EXT_DATA_CMD_OPCODE=3197,
    HCI_RD_LOOPBACK_MODE_CMD_OPCODE=6145,
    HCI_RD_NB_BDCST_RETX_CMD_OPCODE=3113,
    HCI_RD_NB_SUPP_IAC_CMD_OPCODE=3128,
    HCI_RD_PAGE_SCAN_ACT_CMD_OPCODE=3099,
    HCI_RD_PAGE_SCAN_TYPE_CMD_OPCODE=3142,
    HCI_RD_PAGE_TO_CMD_OPCODE=3095,
    HCI_RD_PIN_TYPE_CMD_OPCODE=3081,
    HCI_RD_REM_EXT_FEATS_CMD_OPCODE=1052,
    HCI_RD_REM_SUPP_FEATS_CMD_OPCODE=1051,
    HCI_RD_REM_VER_INFO_CMD_OPCODE=1053,
    HCI_RD_RSSI_CMD_OPCODE=5125,
    HCI_RD_SCAN_EN_CMD_OPCODE=3097,
    HCI_RD_SEC_CON_HOST_SUPP_CMD_OPCODE=3193,
    HCI_RD_SP_MODE_CMD_OPCODE=3157,
    HCI_RD_STORED_LK_CMD_OPCODE=3085,
    HCI_RD_SYNC_FLOW_CTRL_EN_CMD_OPCODE=3118,
    HCI_RD_SYNC_TRAIN_PARAM_CMD_OPCODE=3191,
    HCI_RD_TX_PWR_LVL_CMD_OPCODE=3117,
    HCI_RD_VOICE_STG_CMD_OPCODE=3109,
    HCI_REC_SYNC_TRAIN_CMD_OPCODE=1092,
    HCI_REFRESH_ENC_KEY_CMD_OPCODE=3155,
    HCI_REJECT_CON_REQ_CMD_OPCODE=1034,
    HCI_REJECT_SYNC_CON_REQ_CMD_OPCODE=1066,
    HCI_REM_NAME_REQ_CANCEL_CMD_OPCODE=1050,
    HCI_REM_NAME_REQ_CMD_OPCODE=1049,
    HCI_REM_OOB_DATA_REQ_NEG_REPLY_CMD_OPCODE=1075,
    HCI_REM_OOB_DATA_REQ_REPLY_CMD_OPCODE=1072,
    HCI_REM_OOB_EXT_DATA_REQ_REPLY_CMD_OPCODE=1093,
    HCI_RESET_CMD_OPCODE=3075,
    HCI_ROLE_DISCOVERY_CMD_OPCODE=2057,
    HCI_RST_FAIL_CONTACT_CNT_CMD_OPCODE=5122,
    HCI_SEND_KEYPRESS_NOTIF_CMD_OPCODE=3168,
    HCI_SETUP_SYNC_CON_CMD_OPCODE=1064,
    HCI_SET_AFH_HOST_CH_CLASS_CMD_OPCODE=3135,
    HCI_SET_CON_ENC_CMD_OPCODE=1043,
    HCI_SET_CON_SLV_BCST_CMD_OPCODE=1089,
    HCI_SET_CON_SLV_BCST_DATA_CMD_OPCODE=3190,
    HCI_SET_CON_SLV_BCST_REC_CMD_OPCODE=1090,
    HCI_SET_CTRL_TO_HOST_FLOW_CTRL_CMD_OPCODE=3121,
    HCI_SET_EVT_FILTER_CMD_OPCODE=3077,
    HCI_SET_EVT_MASK_CMD_OPCODE=3073,
    HCI_SET_EVT_MASK_PAGE_2_CMD_OPCODE=3171,
    HCI_SET_EXTERNAL_FRAME_CONFIG_CMD_OPCODE=3183,
    HCI_SET_MWS_CHANNEL_PARAMS_CMD_OPCODE=3182,
    HCI_SET_MWS_PATTERN_CONFIG_CMD_OPCODE=3187,
    HCI_SET_MWS_SCAN_FREQ_TABLE_CMD_OPCODE=3186,
    HCI_SET_MWS_SIGNALING_CMD_OPCODE=3184,
    HCI_SET_MWS_TRANSPORT_LAYER_CMD_OPCODE=3185,
    HCI_SET_RES_LT_ADDR_CMD_OPCODE=3188,
    HCI_SET_TX_PWR_CMD_OPCODE=-927,
    HCI_SNIFF_MODE_CMD_OPCODE=2051,
    HCI_SNIFF_SUB_CMD_OPCODE=2065,
    HCI_START_SYNC_TRAIN_CMD_OPCODE=1091,
    HCI_SWITCH_ROLE_CMD_OPCODE=2059,
    HCI_TESTER_SET_LE_PARAMS_CMD_OPCODE=-960,
    HCI_TRUNC_PAGE_CAN_CMD_OPCODE=1088,
    HCI_TRUNC_PAGE_CMD_OPCODE=1087,
    HCI_USER_CFM_REQ_NEG_REPLY_CMD_OPCODE=1069,
    HCI_USER_CFM_REQ_REPLY_CMD_OPCODE=1068,
    HCI_USER_PASSKEY_REQ_NEG_REPLY_CMD_OPCODE=1071,
    HCI_USER_PASSKEY_REQ_REPLY_CMD_OPCODE=1070,
    HCI_VS_AUDIO_ALLOCATE_CMD_OPCODE=-944,
    HCI_VS_AUDIO_CONFIGURE_CMD_OPCODE=-943,
    HCI_VS_AUDIO_GET_BUFFER_RANGE_CMD_OPCODE=-939,
    HCI_VS_AUDIO_RESET_CMD_OPCODE=-941,
    HCI_VS_AUDIO_SET_MODE_CMD_OPCODE=-942,
    HCI_VS_AUDIO_SET_POINTER_CMD_OPCODE=-940,
    HCI_WR_AFH_CH_ASSESS_MODE_CMD_OPCODE=3145,
    HCI_WR_AUTH_EN_CMD_OPCODE=3104,
    HCI_WR_AUTH_PAYL_TO_CMD_OPCODE=3196,
    HCI_WR_AUTO_FLUSH_TO_CMD_OPCODE=3112,
    HCI_WR_CLASS_OF_DEV_CMD_OPCODE=3108,
    HCI_WR_CON_ACCEPT_TO_CMD_OPCODE=3094,
    HCI_WR_CURR_IAC_LAP_CMD_OPCODE=3130,
    HCI_WR_DFT_ERR_DATA_REP_CMD_OPCODE=3163,
    HCI_WR_DFT_LINK_POL_STG_CMD_OPCODE=2063,
    HCI_WR_EXT_INQ_LEN_CMD_OPCODE=3201,
    HCI_WR_EXT_INQ_RSP_CMD_OPCODE=3154,
    HCI_WR_EXT_PAGE_TO_CMD_OPCODE=3199,
    HCI_WR_FLOW_CNTL_MODE_CMD_OPCODE=3175,
    HCI_WR_HOLD_MODE_ACTIVITY_CMD_OPCODE=3116,
    HCI_WR_INQ_MODE_CMD_OPCODE=3141,
    HCI_WR_INQ_SCAN_ACT_CMD_OPCODE=3102,
    HCI_WR_INQ_SCAN_TYPE_CMD_OPCODE=3139,
    HCI_WR_INQ_TX_PWR_LVL_CMD_OPCODE=3161,
    HCI_WR_LE_HOST_SUPP_CMD_OPCODE=3181,
    HCI_WR_LINK_POL_STG_CMD_OPCODE=2061,
    HCI_WR_LINK_SUPV_TO_CMD_OPCODE=3127,
    HCI_WR_LOCAL_NAME_CMD_OPCODE=3091,
    HCI_WR_LOOPBACK_MODE_CMD_OPCODE=6146,
    HCI_WR_NB_BDCST_RETX_CMD_OPCODE=3114,
    HCI_WR_PAGE_SCAN_ACT_CMD_OPCODE=3100,
    HCI_WR_PAGE_SCAN_TYPE_CMD_OPCODE=3143,
    HCI_WR_PAGE_TO_CMD_OPCODE=3096,
    HCI_WR_PIN_TYPE_CMD_OPCODE=3082,
    HCI_WR_SCAN_EN_CMD_OPCODE=3098,
    HCI_WR_SEC_CON_HOST_SUPP_CMD_OPCODE=3194,
    HCI_WR_SEC_CON_TEST_MODE_CMD_OPCODE=6154,
    HCI_WR_SP_DBG_MODE_CMD_OPCODE=6148,
    HCI_WR_SP_MODE_CMD_OPCODE=3158,
    HCI_WR_STORED_LK_CMD_OPCODE=3089,
    HCI_WR_SYNC_FLOW_CTRL_EN_CMD_OPCODE=3119,
    HCI_WR_SYNC_TRAIN_PARAM_CMD_OPCODE=3192,
    HCI_WR_VOICE_STG_CMD_OPCODE=3110
} hci_opcode;

typedef struct hci_le_adv_report_evt hci_le_adv_report_evt, *Phci_le_adv_report_evt;

struct hci_le_adv_report_evt { // DWARF DIE: c56
    uint8_t subcode;
    uint8_t nb_reports;
    struct adv_report adv_rep[1];
};

typedef enum hci_evt_code {
    HCI_AUTH_CMP_EVT_CODE=6,
    HCI_AUTH_PAYL_TO_EXP_EVT_CODE=87,
    HCI_CHG_CON_LK_CMP_EVT_CODE=9,
    HCI_CMD_CMP_EVT_CODE=14,
    HCI_CMD_STATUS_EVT_CODE=15,
    HCI_CON_CMP_EVT_CODE=3,
    HCI_CON_PKT_TYPE_CHG_EVT_CODE=29,
    HCI_CON_REQ_EVT_CODE=4,
    HCI_CON_SLV_BCST_CH_MAP_CHG_EVT_CODE=85,
    HCI_CON_SLV_BCST_REC_EVT_CODE=81,
    HCI_CON_SLV_BCST_TO_EVT_CODE=82,
    HCI_DATA_BUF_OVFLW_EVT_CODE=26,
    HCI_DBG_META_EVT_CODE=-1,
    HCI_DISC_CMP_EVT_CODE=5,
    HCI_ENC_CHG_EVT_CODE=8,
    HCI_ENC_KEY_REFRESH_CMP_EVT_CODE=48,
    HCI_ENH_FLUSH_CMP_EVT_CODE=57,
    HCI_EXT_INQ_RES_EVT_CODE=47,
    HCI_FLOW_SPEC_CMP_EVT_CODE=33,
    HCI_FLUSH_OCCURRED_EVT_CODE=17,
    HCI_HW_ERR_EVT_CODE=16,
    HCI_INQ_CMP_EVT_CODE=1,
    HCI_INQ_RES_EVT_CODE=2,
    HCI_INQ_RES_WITH_RSSI_EVT_CODE=34,
    HCI_IO_CAP_REQ_EVT_CODE=49,
    HCI_IO_CAP_RSP_EVT_CODE=50,
    HCI_KEYPRESS_NOTIF_EVT_CODE=60,
    HCI_LE_ADV_REPORT_EVT_SUBCODE=2,
    HCI_LE_CH_SEL_ALGO_EVT_SUBCODE=20,
    HCI_LE_CON_CMP_EVT_SUBCODE=1,
    HCI_LE_CON_UPDATE_CMP_EVT_SUBCODE=3,
    HCI_LE_DATA_LEN_CHG_EVT_SUBCODE=7,
    HCI_LE_DIR_ADV_REP_EVT_SUBCODE=11,
    HCI_LE_ENH_CON_CMP_EVT_SUBCODE=10,
    HCI_LE_GEN_DHKEY_CMP_EVT_SUBCODE=9,
    HCI_LE_LTK_REQUEST_EVT_SUBCODE=5,
    HCI_LE_META_EVT_CODE=62,
    HCI_LE_RD_LOC_P256_PUB_KEY_CMP_EVT_SUBCODE=8,
    HCI_LE_RD_REM_USED_FEATS_CMP_EVT_SUBCODE=4,
    HCI_LE_REM_CON_PARAM_REQ_EVT_SUBCODE=6,
    HCI_LINK_SUPV_TO_CHG_EVT_CODE=56,
    HCI_LK_NOTIF_EVT_CODE=24,
    HCI_LK_REQ_EVT_CODE=23,
    HCI_MASTER_LK_CMP_EVT_CODE=10,
    HCI_MAX_EVT_MSK_PAGE_1_CODE=64,
    HCI_MAX_EVT_MSK_PAGE_2_CODE=88,
    HCI_MAX_SLOT_CHG_EVT_CODE=27,
    HCI_MODE_CHG_EVT_CODE=20,
    HCI_NB_CMP_PKTS_EVT_CODE=19,
    HCI_PAGE_SCAN_REPET_MODE_CHG_EVT_CODE=32,
    HCI_PIN_CODE_REQ_EVT_CODE=22,
    HCI_QOS_SETUP_CMP_EVT_CODE=13,
    HCI_QOS_VIOL_EVT_CODE=30,
    HCI_RD_CLK_OFF_CMP_EVT_CODE=28,
    HCI_RD_REM_EXT_FEATS_CMP_EVT_CODE=35,
    HCI_RD_REM_SUPP_FEATS_CMP_EVT_CODE=11,
    HCI_RD_REM_VER_INFO_CMP_EVT_CODE=12,
    HCI_REM_HOST_SUPP_FEATS_NOTIF_EVT_CODE=61,
    HCI_REM_NAME_REQ_CMP_EVT_CODE=7,
    HCI_REM_OOB_DATA_REQ_EVT_CODE=53,
    HCI_RETURN_LINK_KEYS_EVT_CODE=21,
    HCI_ROLE_CHG_EVT_CODE=18,
    HCI_SLV_PAGE_RSP_TO_EVT_CODE=84,
    HCI_SNIFF_SUB_EVT_CODE=46,
    HCI_SP_CMP_EVT_CODE=54,
    HCI_SYNC_CON_CHG_EVT_CODE=45,
    HCI_SYNC_CON_CMP_EVT_CODE=44,
    HCI_SYNC_TRAIN_CMP_EVT_CODE=79,
    HCI_SYNC_TRAIN_REC_EVT_CODE=80,
    HCI_TRUNC_PAGE_CMP_EVT_CODE=83,
    HCI_USER_CFM_REQ_EVT_CODE=51,
    HCI_USER_PASSKEY_NOTIF_EVT_CODE=59,
    HCI_USER_PASSKEY_REQ_EVT_CODE=52
} hci_evt_code;

typedef struct hci_le_dir_adv_rep_evt hci_le_dir_adv_rep_evt, *Phci_le_dir_adv_rep_evt;

struct hci_le_dir_adv_rep_evt { // DWARF DIE: c9f
    uint8_t subcode;
    uint8_t nb_reports;
    struct dir_adv_report adv_rep[1];
};

typedef enum TASK_API_ID {
    TASK_ID_AHI=16,
    TASK_ID_AM0=-16,
    TASK_ID_AM0_HAS=-15,
    TASK_ID_ANPC=48,
    TASK_ID_ANPS=47,
    TASK_ID_APP=15,
    TASK_ID_BASC=37,
    TASK_ID_BASS=36,
    TASK_ID_BCSC=64,
    TASK_ID_BCSS=63,
    TASK_ID_BLPC=29,
    TASK_ID_BLPS=28,
    TASK_ID_CPPC=52,
    TASK_ID_CPPS=51,
    TASK_ID_CSCPC=46,
    TASK_ID_CSCPS=45,
    TASK_ID_DBG=3,
    TASK_ID_DISC=21,
    TASK_ID_DISPLAY=9,
    TASK_ID_DISS=20,
    TASK_ID_ENVC=58,
    TASK_ID_ENVS=57,
    TASK_ID_FINDL=24,
    TASK_ID_FINDT=25,
    TASK_ID_GAPC=14,
    TASK_ID_GAPM=13,
    TASK_ID_GATTC=12,
    TASK_ID_GATTM=11,
    TASK_ID_GLPC=42,
    TASK_ID_GLPS=41,
    TASK_ID_HCI=8,
    TASK_ID_HOGPBH=39,
    TASK_ID_HOGPD=38,
    TASK_ID_HOGPRH=40,
    TASK_ID_HRPC=31,
    TASK_ID_HRPS=30,
    TASK_ID_HTPC=26,
    TASK_ID_HTPT=27,
    TASK_ID_INVALID=-1,
    TASK_ID_IPSC=56,
    TASK_ID_IPSS=55,
    TASK_ID_L2CC=10,
    TASK_ID_LANC=54,
    TASK_ID_LANS=53,
    TASK_ID_LB=6,
    TASK_ID_LC=5,
    TASK_ID_LD=7,
    TASK_ID_LLC=1,
    TASK_ID_LLD=2,
    TASK_ID_LLM=0,
    TASK_ID_LM=4,
    TASK_ID_PASPC=50,
    TASK_ID_PASPS=49,
    TASK_ID_PLXC=68,
    TASK_ID_PLXS=67,
    TASK_ID_PROXM=22,
    TASK_ID_PROXR=23,
    TASK_ID_RSCPC=44,
    TASK_ID_RSCPS=43,
    TASK_ID_SCPPC=35,
    TASK_ID_SCPPS=34,
    TASK_ID_TIPC=33,
    TASK_ID_TIPS=32,
    TASK_ID_UDSC=62,
    TASK_ID_UDSS=61,
    TASK_ID_WPTC=66,
    TASK_ID_WPTS=65,
    TASK_ID_WSCC=60,
    TASK_ID_WSCS=59
} TASK_API_ID;

typedef enum HCI_MSG_DEST_LL {
    BLE_CTRL=3,
    BLE_MNG=2,
    BT_BCST=7,
    BT_CTRL_BD_ADDR=6,
    BT_CTRL_CONHDL=5,
    BT_MNG=4,
    CTRL=1,
    DBG=8,
    LL_UNDEF=9,
    MNG=0
} HCI_MSG_DEST_LL;

typedef struct hci_cmd_desc_tag hci_cmd_desc_tag, *Phci_cmd_desc_tag;

struct hci_cmd_desc_tag { // DWARF DIE: 100e
    uint16_t opcode;
    uint8_t dest_field;
    uint8_t par_size_max;
    void * par_fmt;
    void * ret_par_fmt;
};

typedef struct hci_evt_desc_tag hci_evt_desc_tag, *Phci_evt_desc_tag;

struct hci_evt_desc_tag { // DWARF DIE: 1068
    uint8_t code;
    uint8_t dest_field;
    uint8_t special_pack;
    undefined field_0x3;
    void * par_fmt;
};

typedef struct hci_env_tag hci_env_tag, *Phci_env_tag;

struct hci_env_tag { // DWARF DIE: 10bb
    struct evt_mask evt_msk;
    struct evt_mask evt_msk_page_2;
};

typedef struct hci_cmd_desc_tab_ref hci_cmd_desc_tab_ref, *Phci_cmd_desc_tab_ref;

struct hci_cmd_desc_tab_ref { // DWARF DIE: fd4
    uint8_t ogf;
    undefined field_0x1;
    uint16_t nb_cmds;
    struct hci_cmd_desc_tag * cmd_desc_tab;
};

typedef enum HCI_MSG_DEST_HL {
    HL_AM0=3,
    HL_CTRL=1,
    HL_DATA=2,
    HL_MNG=0,
    HL_UNDEF=4
} HCI_MSG_DEST_HL;

typedef enum HCI_PACK_STATUS {
    HCI_PACK_ERROR=4,
    HCI_PACK_IN_BUF_OVFLW=1,
    HCI_PACK_OK=0,
    HCI_PACK_OUT_BUF_OVFLW=2,
    HCI_PACK_WRONG_FORMAT=3
} HCI_PACK_STATUS;

typedef struct Elf32_Rela Elf32_Rela, *PElf32_Rela;

struct Elf32_Rela {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
    dword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

typedef enum Elf_SectionHeaderType_RISCV {
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_CHECKSUM=1879048184,
    SHT_DYNAMIC=6,
    SHT_DYNSYM=11,
    SHT_FINI_ARRAY=15,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_GROUP=17,
    SHT_HASH=5,
    SHT_INIT_ARRAY=14,
    SHT_NOBITS=8,
    SHT_NOTE=7,
    SHT_NULL=0,
    SHT_PREINIT_ARRAY=16,
    SHT_PROGBITS=1,
    SHT_REL=9,
    SHT_RELA=4,
    SHT_SHLIB=10,
    SHT_STRTAB=3,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_syminfo=1879048188,
    SHT_SYMTAB=2,
    SHT_SYMTAB_SHNDX=18
} Elf_SectionHeaderType_RISCV;

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_RISCV sh_type;
    dword sh_flags;
    dword sh_addr;
    dword sh_offset;
    dword sh_size;
    dword sh_link;
    dword sh_info;
    dword sh_addralign;
    dword sh_entsize;
};

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

typedef struct Elf32_Ehdr Elf32_Ehdr, *PElf32_Ehdr;

struct Elf32_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    dword e_entry;
    dword e_phoff;
    dword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};




// DWARF DIE: 19ca

uint8_t hci_pack_bytes(uint8_t **pp_in,uint8_t **pp_out,uint8_t *p_in_end,uint8_t *p_out_end,
                      uint8_t len)

{
  uint8_t uVar1;
  undefined3 in_register_00002039;
  int iVar2;
  
  iVar2 = CONCAT31(in_register_00002039,len);
  uVar1 = '\x01';
  if (*pp_in + iVar2 <= p_in_end) {
    uVar1 = '\0';
    if (p_out_end != (uint8_t *)0x0) {
      uVar1 = (p_out_end < *pp_out + iVar2) << 1;
      (*pcRam00000000)(iVar2,pcRam00000000);
    }
    *pp_in = *pp_in + iVar2;
    *pp_out = *pp_out + iVar2;
  }
  return uVar1;
}



// DWARF DIE: 186f

uint8_t hci_host_nb_cmp_pkts_cmd_pkupk(uint8_t *out,uint8_t *in,uint16_t *out_len,uint16_t in_len)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint8_t uVar5;
  uint8_t *puStack56;
  uint8_t *p_in;
  uint8_t *p_out;
  
  if (in == (uint8_t *)0x0) {
    *out_len = 0xe;
    uVar5 = '\0';
  }
  else {
    puStack56 = in;
    p_in = out;
    iVar1 = _LVL15();
    iVar2 = iVar1;
    if (iVar1 == 0) {
      uVar3 = 0;
      while ((iVar2 = iVar1, uVar3 < *in && (p_in + -(int)out < (uint8_t *)0xf))) {
        iVar4 = (uVar3 + 1) * 2;
        p_in = out + iVar4;
        iVar2 = _L0((undefined *)&puStack56,&p_in,2);
        if (iVar2 != 0) break;
        p_in = out + iVar4 + 6;
        iVar2 = _L0((undefined *)&puStack56,&p_in,2);
        if (iVar2 != 0) break;
        uVar3 = uVar3 + 1 & 0xff;
      }
    }
    uVar5 = (uint8_t)iVar2;
    *out_len = (short)p_in - (short)out;
  }
  return uVar5;
}



int _LVL15(void)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *unaff_s3;
  int iVar4;
  short *unaff_s6;
  int in_stack_0000000c;
  
  iVar1 = _LVL15();
  iVar2 = iVar1;
  if (iVar1 == 0) {
    uVar3 = 0;
    while ((iVar2 = iVar1, uVar3 < *unaff_s3 && ((uint)(in_stack_0000000c - unaff_s0) < 0xf))) {
      iVar4 = (uVar3 + 1) * 2;
      in_stack_0000000c = unaff_s0 + iVar4;
      iVar2 = _L0(&stack0x00000008,(undefined4 *)&stack0x0000000c,2);
      if (iVar2 != 0) break;
      in_stack_0000000c = iVar4 + 6 + unaff_s0;
      iVar2 = _L0(&stack0x00000008,(undefined4 *)&stack0x0000000c,2);
      if (iVar2 != 0) break;
      uVar3 = uVar3 + 1 & 0xff;
    }
  }
  *unaff_s6 = (short)in_stack_0000000c - (short)unaff_s0;
  return iVar2;
}



int _L0(undefined *param_1,undefined4 *param_2,undefined4 param_3)

{
  int unaff_s0;
  int iVar1;
  uint unaff_s2;
  byte *unaff_s3;
  int unaff_s4;
  int unaff_s5;
  short *unaff_s6;
  uint unaff_s8;
  int in_stack_0000000c;
  
  while (iVar1 = _L0(param_1,param_2,param_3), iVar1 == 0) {
    in_stack_0000000c = unaff_s4 + 6 + unaff_s0;
    iVar1 = _L0(&stack0x00000008,(undefined4 *)&stack0x0000000c,2);
    if (iVar1 != 0) break;
    iVar1 = unaff_s5;
    if (((uint)*unaff_s3 <= (unaff_s2 & 0xff)) || (unaff_s8 < (uint)(in_stack_0000000c - unaff_s0)))
    break;
    unaff_s2 = (unaff_s2 & 0xff) + 1;
    unaff_s4 = unaff_s2 * 2;
    in_stack_0000000c = unaff_s0 + unaff_s4;
    param_3 = 2;
    param_2 = (undefined4 *)&stack0x0000000c;
    param_1 = &stack0x00000008;
  }
  *unaff_s6 = (short)in_stack_0000000c - (short)unaff_s0;
  return iVar1;
}



int _L0(undefined *param_1,undefined4 *param_2,undefined4 param_3)

{
  int unaff_s0;
  int iVar1;
  uint unaff_s2;
  byte *unaff_s3;
  int unaff_s5;
  short *unaff_s6;
  uint unaff_s8;
  int in_stack_0000000c;
  
  while (iVar1 = _L0(param_1,param_2,param_3), iVar1 == 0) {
    iVar1 = unaff_s5;
    if (((uint)*unaff_s3 <= (unaff_s2 & 0xff)) || (unaff_s8 < (uint)(in_stack_0000000c - unaff_s0)))
    break;
    unaff_s2 = (unaff_s2 & 0xff) + 1;
    in_stack_0000000c = unaff_s0 + unaff_s2 * 2;
    iVar1 = _L0(&stack0x00000008,(undefined4 *)&stack0x0000000c,2);
    if (iVar1 != 0) break;
    in_stack_0000000c = unaff_s2 * 2 + 6 + unaff_s0;
    param_3 = 2;
    param_2 = (undefined4 *)&stack0x0000000c;
    param_1 = &stack0x00000008;
  }
  *unaff_s6 = (short)in_stack_0000000c - (short)unaff_s0;
  return iVar1;
}



// WARNING: Variable defined which should be unmapped: temp_out
// DWARF DIE: 15f9

uint8_t hci_le_adv_report_evt_pkupk(uint8_t *out,uint8_t *in,uint16_t *out_len,uint16_t in_len)

{
  uint8_t uVar1;
  int iVar2;
  int iVar3;
  uint8_t **ppuVar4;
  int iVar5;
  uint8_t **ppuStack84;
  uint8_t *p_in;
  uint8_t *p_out;
  hci_le_adv_report_evt temp_out;
  
  if (in == (uint8_t *)0x0) {
    *out_len = 0;
    uVar1 = '\0';
  }
  else {
    if (out == (uint8_t *)0x0) {
      out = (uint8_t *)&p_out;
    }
    ppuStack84 = (uint8_t **)out;
    p_in = out;
    iVar2 = _L0();
    if (iVar2 == 0) {
      ppuStack84 = (uint8_t **)((int)out + 1);
      iVar3 = _L0();
      iVar2 = iVar3;
      if (iVar3 == 0) {
        ppuVar4 = (uint8_t **)((int)out + 10);
        for (iVar5 = 0; iVar2 = iVar3, iVar5 < (int)(uint)*(byte *)((int)out + 1); iVar5 += 1) {
          ppuStack84 = ppuVar4 + -2;
          iVar2 = _L0(&ppuStack84,&p_in,1);
          if (iVar2 != 0) break;
          ppuStack84 = (uint8_t **)((int)ppuVar4 + -7);
          iVar2 = _L0(&ppuStack84,&p_in,1);
          if (iVar2 != 0) break;
          ppuStack84 = (uint8_t **)((int)ppuVar4 + -6);
          iVar2 = _L0(&ppuStack84,&p_in,6);
          if ((iVar2 != 0) || (ppuStack84 = ppuVar4, iVar2 = _L0(&ppuStack84,&p_in,1), iVar2 != 0))
          break;
          ppuStack84 = (uint8_t **)((int)ppuVar4 + 1);
          iVar2 = _L0(&ppuStack84,&p_in,(uint)*(byte *)ppuVar4);
          if (iVar2 != 0) break;
          ppuStack84 = ppuVar4 + 8;
          iVar2 = _L0(&ppuStack84,&p_in,1);
          ppuVar4 = (uint8_t **)((int)ppuVar4 + 0x29);
          if (iVar2 != 0) break;
        }
      }
    }
    uVar1 = (uint8_t)iVar2;
    *out_len = (short)p_in - (short)out;
  }
  return uVar1;
}



int _L0(void)

{
  int iVar1;
  int iVar2;
  int unaff_s3;
  byte *pbVar3;
  short *unaff_s5;
  int iVar4;
  byte *pbStack0000000c;
  short sStack00000010;
  undefined4 in_stack_00000010;
  
  iVar1 = _L0();
  if (iVar1 == 0) {
    pbStack0000000c = (byte *)(unaff_s3 + 1);
    iVar2 = _L0();
    iVar1 = iVar2;
    if (iVar2 == 0) {
      pbVar3 = (byte *)(unaff_s3 + 10);
      for (iVar4 = 0; iVar1 = iVar2, iVar4 < (int)(uint)*(byte *)(unaff_s3 + 1); iVar4 += 1) {
        pbStack0000000c = pbVar3 + -8;
        iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,1);
        if (iVar1 != 0) break;
        pbStack0000000c = pbVar3 + -7;
        iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,1);
        if (iVar1 != 0) break;
        pbStack0000000c = pbVar3 + -6;
        iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,6);
        if (iVar1 != 0) break;
        pbStack0000000c = pbVar3;
        iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,1);
        if (iVar1 != 0) break;
        pbStack0000000c = pbVar3 + 1;
        iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,(uint)*pbVar3);
        if (iVar1 != 0) break;
        pbStack0000000c = pbVar3 + 0x20;
        iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,1);
        pbVar3 = pbVar3 + 0x29;
        if (iVar1 != 0) break;
      }
    }
  }
  *unaff_s5 = sStack00000010 - (short)unaff_s3;
  return iVar1;
}



int _L0(void)

{
  int iVar1;
  int iVar2;
  int unaff_s3;
  byte *pbVar3;
  short *unaff_s5;
  int iVar4;
  byte *pbStack0000000c;
  short sStack00000010;
  undefined4 in_stack_00000010;
  
  iVar1 = _L0();
  iVar2 = iVar1;
  if (iVar1 == 0) {
    pbVar3 = (byte *)(unaff_s3 + 10);
    for (iVar4 = 0; iVar2 = iVar1, iVar4 < (int)(uint)*(byte *)(unaff_s3 + 1); iVar4 += 1) {
      pbStack0000000c = pbVar3 + -8;
      iVar2 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,1);
      if (iVar2 != 0) break;
      pbStack0000000c = pbVar3 + -7;
      iVar2 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,1);
      if (iVar2 != 0) break;
      pbStack0000000c = pbVar3 + -6;
      iVar2 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,6);
      if (iVar2 != 0) break;
      pbStack0000000c = pbVar3;
      iVar2 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,1);
      if (iVar2 != 0) break;
      pbStack0000000c = pbVar3 + 1;
      iVar2 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,(uint)*pbVar3);
      if (iVar2 != 0) break;
      pbStack0000000c = pbVar3 + 0x20;
      iVar2 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,1);
      pbVar3 = pbVar3 + 0x29;
      if (iVar2 != 0) break;
    }
  }
  *unaff_s5 = sStack00000010 - (short)unaff_s3;
  return iVar2;
}



int _L0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int unaff_s0;
  int iVar1;
  int unaff_s3;
  byte *unaff_s4;
  short *unaff_s5;
  int unaff_s6;
  byte *in_stack_0000000c;
  short sStack00000010;
  undefined4 in_stack_00000010;
  
  while( true ) {
    iVar1 = _L0(param_1,param_2,param_3);
    if (iVar1 != 0) break;
    in_stack_0000000c = unaff_s4 + -7;
    iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,1);
    if (iVar1 != 0) break;
    in_stack_0000000c = unaff_s4 + -6;
    iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,6);
    if (iVar1 != 0) break;
    in_stack_0000000c = unaff_s4;
    iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,1);
    if (iVar1 != 0) break;
    in_stack_0000000c = unaff_s4 + 1;
    iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,(uint)*unaff_s4);
    if (iVar1 != 0) break;
    in_stack_0000000c = unaff_s4 + 0x20;
    iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,1);
    if ((iVar1 != 0) ||
       (unaff_s6 += 1, iVar1 = unaff_s0, (int)(uint)*(byte *)(unaff_s3 + 1) <= unaff_s6)) break;
    in_stack_0000000c = unaff_s4 + 0x21;
    param_3 = 1;
    param_2 = (undefined4 *)&stack0x00000010;
    param_1 = (undefined4 *)&stack0x0000000c;
    unaff_s4 = unaff_s4 + 0x29;
  }
  *unaff_s5 = sStack00000010 - (short)unaff_s3;
  return iVar1;
}



int _L0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int unaff_s0;
  int iVar1;
  int unaff_s3;
  byte *unaff_s4;
  short *unaff_s5;
  int unaff_s6;
  byte *in_stack_0000000c;
  short sStack00000010;
  undefined4 in_stack_00000010;
  
  while( true ) {
    iVar1 = _L0(param_1,param_2,param_3);
    if (iVar1 != 0) break;
    in_stack_0000000c = unaff_s4 + -6;
    iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,6);
    if (iVar1 != 0) break;
    in_stack_0000000c = unaff_s4;
    iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,1);
    if (iVar1 != 0) break;
    in_stack_0000000c = unaff_s4 + 1;
    iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,(uint)*unaff_s4);
    if (iVar1 != 0) break;
    in_stack_0000000c = unaff_s4 + 0x20;
    iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,1);
    if ((iVar1 != 0) ||
       (unaff_s6 += 1, iVar1 = unaff_s0, (int)(uint)*(byte *)(unaff_s3 + 1) <= unaff_s6)) break;
    in_stack_0000000c = unaff_s4 + 0x21;
    iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,1);
    if (iVar1 != 0) break;
    in_stack_0000000c = unaff_s4 + 0x22;
    param_3 = 1;
    param_2 = (undefined4 *)&stack0x00000010;
    param_1 = (undefined4 *)&stack0x0000000c;
    unaff_s4 = unaff_s4 + 0x29;
  }
  *unaff_s5 = sStack00000010 - (short)unaff_s3;
  return iVar1;
}



int _L0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int unaff_s0;
  int iVar1;
  int unaff_s3;
  byte *unaff_s4;
  short *unaff_s5;
  int unaff_s6;
  byte *in_stack_0000000c;
  short sStack00000010;
  undefined4 in_stack_00000010;
  
  while( true ) {
    iVar1 = _L0(param_1,param_2,param_3);
    if (iVar1 != 0) break;
    in_stack_0000000c = unaff_s4;
    iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,1);
    if (iVar1 != 0) break;
    in_stack_0000000c = unaff_s4 + 1;
    iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,(uint)*unaff_s4);
    if (iVar1 != 0) break;
    in_stack_0000000c = unaff_s4 + 0x20;
    iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,1);
    if ((iVar1 != 0) ||
       (unaff_s6 += 1, iVar1 = unaff_s0, (int)(uint)*(byte *)(unaff_s3 + 1) <= unaff_s6)) break;
    in_stack_0000000c = unaff_s4 + 0x21;
    iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,1);
    if (iVar1 != 0) break;
    in_stack_0000000c = unaff_s4 + 0x22;
    iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,1);
    if (iVar1 != 0) break;
    in_stack_0000000c = unaff_s4 + 0x23;
    param_3 = 6;
    param_2 = (undefined4 *)&stack0x00000010;
    param_1 = (undefined4 *)&stack0x0000000c;
    unaff_s4 = unaff_s4 + 0x29;
  }
  *unaff_s5 = sStack00000010 - (short)unaff_s3;
  return iVar1;
}



int _L0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int unaff_s0;
  int iVar1;
  int unaff_s3;
  byte *unaff_s4;
  byte *pbVar2;
  short *unaff_s5;
  int unaff_s6;
  byte *in_stack_0000000c;
  short sStack00000010;
  undefined4 in_stack_00000010;
  
  while( true ) {
    iVar1 = _L0(param_1,param_2,param_3);
    if (iVar1 != 0) break;
    in_stack_0000000c = unaff_s4 + 1;
    iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,(uint)*unaff_s4);
    if (iVar1 != 0) break;
    in_stack_0000000c = unaff_s4 + 0x20;
    iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,1);
    pbVar2 = unaff_s4 + 0x29;
    if ((iVar1 != 0) ||
       (unaff_s6 += 1, iVar1 = unaff_s0, (int)(uint)*(byte *)(unaff_s3 + 1) <= unaff_s6)) break;
    in_stack_0000000c = unaff_s4 + 0x21;
    iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,1);
    if (iVar1 != 0) break;
    in_stack_0000000c = unaff_s4 + 0x22;
    iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,1);
    if (iVar1 != 0) break;
    in_stack_0000000c = unaff_s4 + 0x23;
    iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,6);
    if (iVar1 != 0) break;
    param_3 = 1;
    param_2 = (undefined4 *)&stack0x00000010;
    param_1 = (undefined4 *)&stack0x0000000c;
    unaff_s4 = pbVar2;
    in_stack_0000000c = pbVar2;
  }
  *unaff_s5 = sStack00000010 - (short)unaff_s3;
  return iVar1;
}



int _L0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int unaff_s0;
  int iVar1;
  int unaff_s3;
  byte *unaff_s4;
  byte *pbVar2;
  short *unaff_s5;
  int unaff_s6;
  byte *in_stack_0000000c;
  short sStack00000010;
  undefined4 in_stack_00000010;
  
  while( true ) {
    iVar1 = _L0(param_1,param_2,param_3);
    if (iVar1 != 0) break;
    in_stack_0000000c = unaff_s4 + 0x20;
    iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,1);
    pbVar2 = unaff_s4 + 0x29;
    if ((iVar1 != 0) ||
       (unaff_s6 += 1, iVar1 = unaff_s0, (int)(uint)*(byte *)(unaff_s3 + 1) <= unaff_s6)) break;
    in_stack_0000000c = unaff_s4 + 0x21;
    iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,1);
    if (iVar1 != 0) break;
    in_stack_0000000c = unaff_s4 + 0x22;
    iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,1);
    if (iVar1 != 0) break;
    in_stack_0000000c = unaff_s4 + 0x23;
    iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,6);
    if (iVar1 != 0) break;
    in_stack_0000000c = pbVar2;
    iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,1);
    if (iVar1 != 0) break;
    param_3 = (uint)*pbVar2;
    in_stack_0000000c = unaff_s4 + 0x2a;
    param_2 = (undefined4 *)&stack0x00000010;
    param_1 = (undefined4 *)&stack0x0000000c;
    unaff_s4 = pbVar2;
  }
  *unaff_s5 = sStack00000010 - (short)unaff_s3;
  return iVar1;
}



int _L0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int unaff_s0;
  int iVar1;
  int unaff_s3;
  byte *unaff_s4;
  byte *pbVar2;
  short *unaff_s5;
  int unaff_s6;
  byte *in_stack_0000000c;
  short sStack00000010;
  undefined4 in_stack_00000010;
  
  while( true ) {
    iVar1 = _L0(param_1,param_2,param_3);
    pbVar2 = unaff_s4 + 0x29;
    if ((iVar1 != 0) ||
       (unaff_s6 += 1, iVar1 = unaff_s0, (int)(uint)*(byte *)(unaff_s3 + 1) <= unaff_s6)) break;
    in_stack_0000000c = unaff_s4 + 0x21;
    iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,1);
    if (iVar1 != 0) break;
    in_stack_0000000c = unaff_s4 + 0x22;
    iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,1);
    if (iVar1 != 0) break;
    in_stack_0000000c = unaff_s4 + 0x23;
    iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,6);
    if (iVar1 != 0) break;
    in_stack_0000000c = pbVar2;
    iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,1);
    if (iVar1 != 0) break;
    in_stack_0000000c = unaff_s4 + 0x2a;
    iVar1 = _L0((undefined4 *)&stack0x0000000c,(undefined4 *)&stack0x00000010,(uint)*pbVar2);
    if (iVar1 != 0) break;
    in_stack_0000000c = unaff_s4 + 0x49;
    param_3 = 1;
    param_2 = (undefined4 *)&stack0x00000010;
    param_1 = (undefined4 *)&stack0x0000000c;
    unaff_s4 = pbVar2;
  }
  *unaff_s5 = sStack00000010 - (short)unaff_s3;
  return iVar1;
}



// WARNING: Variable defined which should be unmapped: temp_out
// DWARF DIE: 13a8

uint8_t hci_le_dir_adv_report_evt_pkupk(uint8_t *out,uint8_t *in,uint16_t *out_len,uint16_t in_len)

{
  uint8_t uVar1;
  int iVar2;
  int iVar3;
  uint8_t **ppuVar4;
  int iVar5;
  uint8_t **ppuStack60;
  uint8_t *p_in;
  uint8_t *p_out;
  hci_le_dir_adv_rep_evt temp_out;
  
  if (in == (uint8_t *)0x0) {
    *out_len = 0;
    uVar1 = '\0';
  }
  else {
    if (out == (uint8_t *)0x0) {
      out = (uint8_t *)&p_out;
    }
    ppuStack60 = (uint8_t **)out;
    p_in = out;
    iVar2 = _L0();
    if (iVar2 == 0) {
      ppuStack60 = (uint8_t **)((int)out + 1);
      iVar3 = _L0();
      iVar2 = iVar3;
      if (iVar3 == 0) {
        ppuVar4 = (uint8_t **)((int)out + 0x11);
        for (iVar5 = 0; iVar2 = iVar3, iVar5 < (int)(uint)*(byte *)((int)out + 1); iVar5 += 1) {
          ppuStack60 = (uint8_t **)((int)ppuVar4 + -0xf);
          iVar2 = _L0(&ppuStack60,&p_in,1);
          if (iVar2 != 0) break;
          ppuStack60 = (uint8_t **)((int)ppuVar4 + -0xe);
          iVar2 = _L0(&ppuStack60,&p_in,1);
          if (iVar2 != 0) break;
          ppuStack60 = (uint8_t **)((int)ppuVar4 + -0xd);
          iVar2 = _L0(&ppuStack60,&p_in,6);
          if (iVar2 != 0) break;
          ppuStack60 = (uint8_t **)((int)ppuVar4 + -7);
          iVar2 = _L0(&ppuStack60,&p_in,1);
          if (iVar2 != 0) break;
          ppuStack60 = (uint8_t **)((int)ppuVar4 + -6);
          iVar2 = _L0(&ppuStack60,&p_in,6);
          if (iVar2 != 0) break;
          ppuStack60 = ppuVar4;
          iVar2 = _L0(&ppuStack60,&p_in,1);
          ppuVar4 = ppuVar4 + 4;
          if (iVar2 != 0) break;
        }
      }
    }
    uVar1 = (uint8_t)iVar2;
    *out_len = (short)p_in - (short)out;
  }
  return uVar1;
}



int _L0(void)

{
  int iVar1;
  int iVar2;
  int unaff_s3;
  int iVar3;
  short *unaff_s5;
  int iVar4;
  int iStack00000004;
  short sStack00000008;
  undefined4 in_stack_00000008;
  
  iVar1 = _L0();
  if (iVar1 == 0) {
    iStack00000004 = unaff_s3 + 1;
    iVar2 = _L0();
    iVar1 = iVar2;
    if (iVar2 == 0) {
      iVar3 = unaff_s3 + 0x11;
      for (iVar4 = 0; iVar1 = iVar2, iVar4 < (int)(uint)*(byte *)(unaff_s3 + 1); iVar4 += 1) {
        iStack00000004 = iVar3 + -0xf;
        iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,1);
        if (iVar1 != 0) break;
        iStack00000004 = iVar3 + -0xe;
        iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,1);
        if (iVar1 != 0) break;
        iStack00000004 = iVar3 + -0xd;
        iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,6);
        if (iVar1 != 0) break;
        iStack00000004 = iVar3 + -7;
        iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,1);
        if (iVar1 != 0) break;
        iStack00000004 = iVar3 + -6;
        iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,6);
        if (iVar1 != 0) break;
        iStack00000004 = iVar3;
        iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,1);
        iVar3 += 0x10;
        if (iVar1 != 0) break;
      }
    }
  }
  *unaff_s5 = sStack00000008 - (short)unaff_s3;
  return iVar1;
}



int _L0(void)

{
  int iVar1;
  int iVar2;
  int unaff_s3;
  int iVar3;
  short *unaff_s5;
  int iVar4;
  int iStack00000004;
  short sStack00000008;
  undefined4 in_stack_00000008;
  
  iVar1 = _L0();
  iVar2 = iVar1;
  if (iVar1 == 0) {
    iVar3 = unaff_s3 + 0x11;
    for (iVar4 = 0; iVar2 = iVar1, iVar4 < (int)(uint)*(byte *)(unaff_s3 + 1); iVar4 += 1) {
      iStack00000004 = iVar3 + -0xf;
      iVar2 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,1);
      if (iVar2 != 0) break;
      iStack00000004 = iVar3 + -0xe;
      iVar2 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,1);
      if (iVar2 != 0) break;
      iStack00000004 = iVar3 + -0xd;
      iVar2 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,6);
      if (iVar2 != 0) break;
      iStack00000004 = iVar3 + -7;
      iVar2 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,1);
      if (iVar2 != 0) break;
      iStack00000004 = iVar3 + -6;
      iVar2 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,6);
      if (iVar2 != 0) break;
      iStack00000004 = iVar3;
      iVar2 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,1);
      iVar3 += 0x10;
      if (iVar2 != 0) break;
    }
  }
  *unaff_s5 = sStack00000008 - (short)unaff_s3;
  return iVar2;
}



int _L0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int unaff_s0;
  int iVar1;
  int unaff_s3;
  int unaff_s4;
  short *unaff_s5;
  int unaff_s6;
  int in_stack_00000004;
  short sStack00000008;
  undefined4 in_stack_00000008;
  
  while( true ) {
    iVar1 = _L0(param_1,param_2,param_3);
    if (iVar1 != 0) break;
    in_stack_00000004 = unaff_s4 + -0xe;
    iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,1);
    if (iVar1 != 0) break;
    in_stack_00000004 = unaff_s4 + -0xd;
    iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,6);
    if (iVar1 != 0) break;
    in_stack_00000004 = unaff_s4 + -7;
    iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,1);
    if (iVar1 != 0) break;
    in_stack_00000004 = unaff_s4 + -6;
    iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,6);
    if (iVar1 != 0) break;
    in_stack_00000004 = unaff_s4;
    iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,1);
    if ((iVar1 != 0) ||
       (unaff_s6 += 1, iVar1 = unaff_s0, (int)(uint)*(byte *)(unaff_s3 + 1) <= unaff_s6)) break;
    in_stack_00000004 = unaff_s4 + 1;
    param_3 = 1;
    param_2 = (undefined4 *)&stack0x00000008;
    param_1 = (undefined4 *)&stack0x00000004;
    unaff_s4 = unaff_s4 + 0x10;
  }
  *unaff_s5 = sStack00000008 - (short)unaff_s3;
  return iVar1;
}



int _L0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int unaff_s0;
  int iVar1;
  int unaff_s3;
  int unaff_s4;
  short *unaff_s5;
  int unaff_s6;
  int in_stack_00000004;
  short sStack00000008;
  undefined4 in_stack_00000008;
  
  while( true ) {
    iVar1 = _L0(param_1,param_2,param_3);
    if (iVar1 != 0) break;
    in_stack_00000004 = unaff_s4 + -0xd;
    iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,6);
    if (iVar1 != 0) break;
    in_stack_00000004 = unaff_s4 + -7;
    iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,1);
    if (iVar1 != 0) break;
    in_stack_00000004 = unaff_s4 + -6;
    iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,6);
    if (iVar1 != 0) break;
    in_stack_00000004 = unaff_s4;
    iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,1);
    if ((iVar1 != 0) ||
       (unaff_s6 += 1, iVar1 = unaff_s0, (int)(uint)*(byte *)(unaff_s3 + 1) <= unaff_s6)) break;
    in_stack_00000004 = unaff_s4 + 1;
    iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,1);
    if (iVar1 != 0) break;
    in_stack_00000004 = unaff_s4 + 2;
    param_3 = 1;
    param_2 = (undefined4 *)&stack0x00000008;
    param_1 = (undefined4 *)&stack0x00000004;
    unaff_s4 = unaff_s4 + 0x10;
  }
  *unaff_s5 = sStack00000008 - (short)unaff_s3;
  return iVar1;
}



int _L0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int unaff_s0;
  int iVar1;
  int unaff_s3;
  int unaff_s4;
  short *unaff_s5;
  int unaff_s6;
  int in_stack_00000004;
  short sStack00000008;
  undefined4 in_stack_00000008;
  
  while( true ) {
    iVar1 = _L0(param_1,param_2,param_3);
    if (iVar1 != 0) break;
    in_stack_00000004 = unaff_s4 + -7;
    iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,1);
    if (iVar1 != 0) break;
    in_stack_00000004 = unaff_s4 + -6;
    iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,6);
    if (iVar1 != 0) break;
    in_stack_00000004 = unaff_s4;
    iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,1);
    if ((iVar1 != 0) ||
       (unaff_s6 += 1, iVar1 = unaff_s0, (int)(uint)*(byte *)(unaff_s3 + 1) <= unaff_s6)) break;
    in_stack_00000004 = unaff_s4 + 1;
    iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,1);
    if (iVar1 != 0) break;
    in_stack_00000004 = unaff_s4 + 2;
    iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,1);
    if (iVar1 != 0) break;
    in_stack_00000004 = unaff_s4 + 3;
    param_3 = 6;
    param_2 = (undefined4 *)&stack0x00000008;
    param_1 = (undefined4 *)&stack0x00000004;
    unaff_s4 = unaff_s4 + 0x10;
  }
  *unaff_s5 = sStack00000008 - (short)unaff_s3;
  return iVar1;
}



int _L0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int unaff_s0;
  int iVar1;
  int unaff_s3;
  int unaff_s4;
  short *unaff_s5;
  int unaff_s6;
  int in_stack_00000004;
  short sStack00000008;
  undefined4 in_stack_00000008;
  
  while( true ) {
    iVar1 = _L0(param_1,param_2,param_3);
    if (iVar1 != 0) break;
    in_stack_00000004 = unaff_s4 + -6;
    iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,6);
    if (iVar1 != 0) break;
    in_stack_00000004 = unaff_s4;
    iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,1);
    if ((iVar1 != 0) ||
       (unaff_s6 += 1, iVar1 = unaff_s0, (int)(uint)*(byte *)(unaff_s3 + 1) <= unaff_s6)) break;
    in_stack_00000004 = unaff_s4 + 1;
    iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,1);
    if (iVar1 != 0) break;
    in_stack_00000004 = unaff_s4 + 2;
    iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,1);
    if (iVar1 != 0) break;
    in_stack_00000004 = unaff_s4 + 3;
    iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,6);
    if (iVar1 != 0) break;
    in_stack_00000004 = unaff_s4 + 9;
    param_3 = 1;
    param_2 = (undefined4 *)&stack0x00000008;
    param_1 = (undefined4 *)&stack0x00000004;
    unaff_s4 = unaff_s4 + 0x10;
  }
  *unaff_s5 = sStack00000008 - (short)unaff_s3;
  return iVar1;
}



int _L0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int unaff_s0;
  int iVar1;
  int unaff_s3;
  int unaff_s4;
  short *unaff_s5;
  int unaff_s6;
  int in_stack_00000004;
  short sStack00000008;
  undefined4 in_stack_00000008;
  
  while( true ) {
    iVar1 = _L0(param_1,param_2,param_3);
    if (iVar1 != 0) break;
    in_stack_00000004 = unaff_s4;
    iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,1);
    if ((iVar1 != 0) ||
       (unaff_s6 += 1, iVar1 = unaff_s0, (int)(uint)*(byte *)(unaff_s3 + 1) <= unaff_s6)) break;
    in_stack_00000004 = unaff_s4 + 1;
    iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,1);
    if (iVar1 != 0) break;
    in_stack_00000004 = unaff_s4 + 2;
    iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,1);
    if (iVar1 != 0) break;
    in_stack_00000004 = unaff_s4 + 3;
    iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,6);
    if (iVar1 != 0) break;
    in_stack_00000004 = unaff_s4 + 9;
    iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,1);
    if (iVar1 != 0) break;
    in_stack_00000004 = unaff_s4 + 10;
    param_3 = 6;
    param_2 = (undefined4 *)&stack0x00000008;
    param_1 = (undefined4 *)&stack0x00000004;
    unaff_s4 = unaff_s4 + 0x10;
  }
  *unaff_s5 = sStack00000008 - (short)unaff_s3;
  return iVar1;
}



int _L0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int unaff_s0;
  int iVar1;
  int unaff_s3;
  int unaff_s4;
  int iVar2;
  short *unaff_s5;
  int unaff_s6;
  int in_stack_00000004;
  short sStack00000008;
  undefined4 in_stack_00000008;
  
  while( true ) {
    iVar1 = _L0(param_1,param_2,param_3);
    iVar2 = unaff_s4 + 0x10;
    if ((iVar1 != 0) ||
       (unaff_s6 += 1, iVar1 = unaff_s0, (int)(uint)*(byte *)(unaff_s3 + 1) <= unaff_s6)) break;
    in_stack_00000004 = unaff_s4 + 1;
    iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,1);
    if (iVar1 != 0) break;
    in_stack_00000004 = unaff_s4 + 2;
    iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,1);
    if (iVar1 != 0) break;
    in_stack_00000004 = unaff_s4 + 3;
    iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,6);
    if (iVar1 != 0) break;
    in_stack_00000004 = unaff_s4 + 9;
    iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,1);
    if (iVar1 != 0) break;
    in_stack_00000004 = unaff_s4 + 10;
    iVar1 = _L0((undefined4 *)&stack0x00000004,(undefined4 *)&stack0x00000008,6);
    if (iVar1 != 0) break;
    param_3 = 1;
    param_2 = (undefined4 *)&stack0x00000008;
    param_1 = (undefined4 *)&stack0x00000004;
    unaff_s4 = iVar2;
    in_stack_00000004 = iVar2;
  }
  *unaff_s5 = sStack00000008 - (short)unaff_s3;
  return iVar1;
}



// DWARF DIE: 131a

hci_cmd_desc_tag * hci_look_for_cmd_desc(uint16_t opcode)

{
  undefined2 in_register_0000202a;
  hci_cmd_desc_tag *phVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = CONCAT22(in_register_0000202a,opcode) >> 10;
  if (uVar3 == 1) {
    iVar4 = 0;
  }
  else {
    if (uVar3 == 3) {
      iVar4 = 1;
    }
    else {
      if (uVar3 == 4) {
        iVar4 = 2;
      }
      else {
        if (uVar3 == 5) {
          iVar4 = 3;
        }
        else {
          if (uVar3 == 8) {
            iVar4 = 4;
          }
          else {
            if (uVar3 != 0x3f) {
              return (hci_cmd_desc_tag *)0x0;
            }
            iVar4 = 5;
          }
        }
      }
    }
  }
  phVar1 = *(hci_cmd_desc_tag **)(iVar4 * 8 + 4);
  sVar2 = 0;
  if (phVar1 != (hci_cmd_desc_tag *)0x0) {
    while( true ) {
      if (sVar2 == *(short *)(iVar4 * 8 + 2)) {
        return (hci_cmd_desc_tag *)0x0;
      }
      if ((phVar1->opcode & 0x3ff) == (opcode & 0x3ff)) break;
      sVar2 += 1;
      phVar1 = phVar1 + 1;
    }
    return phVar1;
  }
  return (hci_cmd_desc_tag *)0x0;
}



// DWARF DIE: 12cb

hci_evt_desc_tag * hci_look_for_evt_desc(uint8_t code)

{
  undefined3 in_register_00002029;
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = (byte *)0x0;
  iVar2 = 0;
  do {
    if ((uint)*pbVar1 == CONCAT31(in_register_00002029,code)) {
      return (hci_evt_desc_tag *)(iVar2 * 8);
    }
    iVar2 += 1;
    pbVar1 = pbVar1 + 8;
  } while (iVar2 != 9);
  return (hci_evt_desc_tag *)0x0;
}



// DWARF DIE: 1276

hci_evt_desc_tag * hci_look_for_le_evt_desc(uint8_t subcode)

{
  undefined3 in_register_00002029;
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = (byte *)0x0;
  iVar2 = 0;
  do {
    if ((uint)*pbVar1 == CONCAT31(in_register_00002029,subcode)) {
      return (hci_evt_desc_tag *)(iVar2 * 8);
    }
    iVar2 += 1;
    pbVar1 = pbVar1 + 8;
  } while (iVar2 != 0xc);
  return (hci_evt_desc_tag *)0x0;
}


