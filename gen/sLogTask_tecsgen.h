/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sLogTask_TECSGEN_H
#define sLogTask_TECSGEN_H

/*
 * signature   :  sLogTask
 * global name :  sLogTask
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sLogTask_VDES {
    struct tag_sLogTask_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sLogTask_VMT {
    ER             (*flush)( struct tag_sLogTask_VDES *edp, uint_t count );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SLOGTASK_FLUSH                  (1)

#endif /* sLogTask_TECSGEN_H */
