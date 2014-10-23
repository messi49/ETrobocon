/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sI2C_TECSGEN_H
#define sI2C_TECSGEN_H

/*
 * signature   :  sI2C
 * global name :  sI2C
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sI2C_VDES {
    struct tag_sI2C_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sI2C_VMT {
    void           (*enable)( struct tag_sI2C_VDES *edp );
    void           (*disable)( struct tag_sI2C_VDES *edp );
    bool_t         (*isBusy)( struct tag_sI2C_VDES *edp );
    bool_t         (*startTransaction)( struct tag_sI2C_VDES *edp, uint32_t address, int32_t internalAddress, int32_t internalAddressBytes, uint8_t* data, uint32_t dataSize, int32_t direction );
    void           (*initialize)( struct tag_sI2C_VDES *edp );
    void           (*interruptBody)( struct tag_sI2C_VDES *edp, uint32_t inputs );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SI2C_ENABLE                     (1)
#define	FUNCID_SI2C_DISABLE                    (2)
#define	FUNCID_SI2C_ISBUSY                     (3)
#define	FUNCID_SI2C_STARTTRANSACTION           (4)
#define	FUNCID_SI2C_INITIALIZE                 (5)
#define	FUNCID_SI2C_INTERRUPTBODY              (6)

#endif /* sI2C_TECSGEN_H */
