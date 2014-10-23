/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef siPriorityDataqueue_TECSGEN_H
#define siPriorityDataqueue_TECSGEN_H

/*
 * signature   :  siPriorityDataqueue
 * global name :  siPriorityDataqueue
 * context     :  non-task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_siPriorityDataqueue_VDES {
    struct tag_siPriorityDataqueue_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_siPriorityDataqueue_VMT {
    ER             (*sendPolling)( struct tag_siPriorityDataqueue_VDES *edp, intptr_t data, PRI dataPriority );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SIPRIORITYDATAQUEUE_SENDPOLLING (1)

#endif /* siPriorityDataqueue_TECSGEN_H */
