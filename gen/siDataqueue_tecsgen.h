/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef siDataqueue_TECSGEN_H
#define siDataqueue_TECSGEN_H

/*
 * signature   :  siDataqueue
 * global name :  siDataqueue
 * context     :  non-task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_siDataqueue_VDES {
    struct tag_siDataqueue_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_siDataqueue_VMT {
    ER             (*sendPolling)( struct tag_siDataqueue_VDES *edp, intptr_t data );
    ER             (*sendForce)( struct tag_siDataqueue_VDES *edp, intptr_t data );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SIDATAQUEUE_SENDPOLLING         (1)
#define	FUNCID_SIDATAQUEUE_SENDFORCE           (2)

#endif /* siDataqueue_TECSGEN_H */
