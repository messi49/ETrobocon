/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sTaskBody_TECSGEN_H
#define sTaskBody_TECSGEN_H

/*
 * signature   :  sTaskBody
 * global name :  sTaskBody
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sTaskBody_VDES {
    struct tag_sTaskBody_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sTaskBody_VMT {
    void           (*main)( struct tag_sTaskBody_VDES *edp );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_STASKBODY_MAIN                  (1)

#endif /* sTaskBody_TECSGEN_H */
