/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSensor_TECSGEN_H
#define sSensor_TECSGEN_H

/*
 * signature   :  sSensor
 * global name :  sSensor
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSensor_VDES {
    struct tag_sSensor_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSensor_VMT {
    void           (*getValue)( struct tag_sSensor_VDES *edp, uint16_t* value );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSENSOR_GETVALUE                (1)

#endif /* sSensor_TECSGEN_H */
