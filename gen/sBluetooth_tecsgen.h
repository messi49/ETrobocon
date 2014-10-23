/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sBluetooth_TECSGEN_H
#define sBluetooth_TECSGEN_H

/*
 * signature   :  sBluetooth
 * global name :  sBluetooth
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sBluetooth_VDES {
    struct tag_sBluetooth_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sBluetooth_VMT {
    void           (*open)( struct tag_sBluetooth_VDES *edp );
    bool_t         (*getLocalAddress)( struct tag_sBluetooth_VDES *edp, uint8_t* address );
    bool_t         (*getDeviceName)( struct tag_sBluetooth_VDES *edp, uint8_t* name );
    bool_t         (*setDeviceName)( struct tag_sBluetooth_VDES *edp, const uint8_t* name );
    bool_t         (*setFactorySetting)( struct tag_sBluetooth_VDES *edp );
    uint8_t        (*initializeMaster)( struct tag_sBluetooth_VDES *edp, const uint8_t* address );
    uint8_t        (*initializeSlave)( struct tag_sBluetooth_VDES *edp );
    void           (*terminateConnection)( struct tag_sBluetooth_VDES *edp );
    uint32_t       (*sendPacket)( struct tag_sBluetooth_VDES *edp, const uint8_t* buffer, uint32_t length );
    uint32_t       (*readPacket)( struct tag_sBluetooth_VDES *edp, uint8_t* buffer, uint32_t length );
    bool_t         (*isConnected)( struct tag_sBluetooth_VDES *edp );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SBLUETOOTH_OPEN                 (1)
#define	FUNCID_SBLUETOOTH_GETLOCALADDRESS      (2)
#define	FUNCID_SBLUETOOTH_GETDEVICENAME        (3)
#define	FUNCID_SBLUETOOTH_SETDEVICENAME        (4)
#define	FUNCID_SBLUETOOTH_SETFACTORYSETTING    (5)
#define	FUNCID_SBLUETOOTH_INITIALIZEMASTER     (6)
#define	FUNCID_SBLUETOOTH_INITIALIZESLAVE      (7)
#define	FUNCID_SBLUETOOTH_TERMINATECONNECTION  (8)
#define	FUNCID_SBLUETOOTH_SENDPACKET           (9)
#define	FUNCID_SBLUETOOTH_READPACKET           (10)
#define	FUNCID_SBLUETOOTH_ISCONNECTED          (11)

#endif /* sBluetooth_TECSGEN_H */
