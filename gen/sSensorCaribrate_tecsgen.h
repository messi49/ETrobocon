/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSensorCaribrate_TECSGEN_H
#define sSensorCaribrate_TECSGEN_H

/*
 * signature   :  sSensorCaribrate
 * global name :  sSensorCaribrate
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSensorCaribrate_VDES {
    struct tag_sSensorCaribrate_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSensorCaribrate_VMT {
    bool_t         (*calibrate)( struct tag_sSensorCaribrate_VDES *edp );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSENSORCARIBRATE_CALIBRATE      (1)

#endif /* sSensorCaribrate_TECSGEN_H */
