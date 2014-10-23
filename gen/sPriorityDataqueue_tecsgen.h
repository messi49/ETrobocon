/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sPriorityDataqueue_TECSGEN_H
#define sPriorityDataqueue_TECSGEN_H

/*
 * signature   :  sPriorityDataqueue
 * global name :  sPriorityDataqueue
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sPriorityDataqueue_VDES {
    struct tag_sPriorityDataqueue_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sPriorityDataqueue_VMT {
    ER             (*send)( struct tag_sPriorityDataqueue_VDES *edp, intptr_t data, PRI dataPriority );
    ER             (*sendPolling)( struct tag_sPriorityDataqueue_VDES *edp, intptr_t data, PRI dataPriority );
    ER             (*sendTimeout)( struct tag_sPriorityDataqueue_VDES *edp, intptr_t data, PRI dataPriority, TMO timeout );
    ER             (*receive)( struct tag_sPriorityDataqueue_VDES *edp, intptr_t* p_data, PRI* p_dataPriority );
    ER             (*receivePolling)( struct tag_sPriorityDataqueue_VDES *edp, intptr_t* p_data, PRI* p_dataPriority );
    ER             (*receiveTimeout)( struct tag_sPriorityDataqueue_VDES *edp, intptr_t* p_data, PRI* p_dataPriority, TMO timeout );
    ER             (*initialize)( struct tag_sPriorityDataqueue_VDES *edp );
    ER             (*refer)( struct tag_sPriorityDataqueue_VDES *edp, T_RPDQ* pk_priorityDataqueueStatus );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SPRIORITYDATAQUEUE_SEND         (1)
#define	FUNCID_SPRIORITYDATAQUEUE_SENDPOLLING  (2)
#define	FUNCID_SPRIORITYDATAQUEUE_SENDTIMEOUT  (3)
#define	FUNCID_SPRIORITYDATAQUEUE_RECEIVE      (4)
#define	FUNCID_SPRIORITYDATAQUEUE_RECEIVEPOLLING (5)
#define	FUNCID_SPRIORITYDATAQUEUE_RECEIVETIMEOUT (6)
#define	FUNCID_SPRIORITYDATAQUEUE_INITIALIZE   (7)
#define	FUNCID_SPRIORITYDATAQUEUE_REFER        (8)

#endif /* sPriorityDataqueue_TECSGEN_H */
