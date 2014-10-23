/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSemaphore_TECSGEN_H
#define sSemaphore_TECSGEN_H

/*
 * signature   :  sSemaphore
 * global name :  sSemaphore
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSemaphore_VDES {
    struct tag_sSemaphore_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSemaphore_VMT {
    ER             (*signal)( struct tag_sSemaphore_VDES *edp );
    ER             (*wait)( struct tag_sSemaphore_VDES *edp );
    ER             (*waitPolling)( struct tag_sSemaphore_VDES *edp );
    ER             (*waitTimeout)( struct tag_sSemaphore_VDES *edp, TMO timeout );
    ER             (*initialize)( struct tag_sSemaphore_VDES *edp );
    ER             (*refer)( struct tag_sSemaphore_VDES *edp, T_RSEM* pk_semaphoreStatus );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSEMAPHORE_SIGNAL               (1)
#define	FUNCID_SSEMAPHORE_WAIT                 (2)
#define	FUNCID_SSEMAPHORE_WAITPOLLING          (3)
#define	FUNCID_SSEMAPHORE_WAITTIMEOUT          (4)
#define	FUNCID_SSEMAPHORE_INITIALIZE           (5)
#define	FUNCID_SSEMAPHORE_REFER                (6)

#endif /* sSemaphore_TECSGEN_H */
