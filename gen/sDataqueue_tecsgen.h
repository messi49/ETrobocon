/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sDataqueue_TECSGEN_H
#define sDataqueue_TECSGEN_H

/*
 * signature   :  sDataqueue
 * global name :  sDataqueue
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sDataqueue_VDES {
    struct tag_sDataqueue_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sDataqueue_VMT {
    ER             (*send)( struct tag_sDataqueue_VDES *edp, intptr_t data );
    ER             (*sendPolling)( struct tag_sDataqueue_VDES *edp, intptr_t data );
    ER             (*sendTimeout)( struct tag_sDataqueue_VDES *edp, intptr_t data, TMO timeout );
    ER             (*sendForce)( struct tag_sDataqueue_VDES *edp, intptr_t data );
    ER             (*receive)( struct tag_sDataqueue_VDES *edp, intptr_t* p_data );
    ER             (*receivePolling)( struct tag_sDataqueue_VDES *edp, intptr_t* p_Data );
    ER             (*receiveTimeout)( struct tag_sDataqueue_VDES *edp, intptr_t* p_data, TMO timeout );
    ER             (*initialize)( struct tag_sDataqueue_VDES *edp );
    ER             (*refer)( struct tag_sDataqueue_VDES *edp, T_RDTQ* pk_dataqueueStatus );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SDATAQUEUE_SEND                 (1)
#define	FUNCID_SDATAQUEUE_SENDPOLLING          (2)
#define	FUNCID_SDATAQUEUE_SENDTIMEOUT          (3)
#define	FUNCID_SDATAQUEUE_SENDFORCE            (4)
#define	FUNCID_SDATAQUEUE_RECEIVE              (5)
#define	FUNCID_SDATAQUEUE_RECEIVEPOLLING       (6)
#define	FUNCID_SDATAQUEUE_RECEIVETIMEOUT       (7)
#define	FUNCID_SDATAQUEUE_INITIALIZE           (8)
#define	FUNCID_SDATAQUEUE_REFER                (9)

#endif /* sDataqueue_TECSGEN_H */
