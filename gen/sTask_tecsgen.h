/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sTask_TECSGEN_H
#define sTask_TECSGEN_H

/*
 * signature   :  sTask
 * global name :  sTask
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sTask_VDES {
    struct tag_sTask_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sTask_VMT {
    ER             (*activate)( struct tag_sTask_VDES *edp );
    ER_UINT        (*cancelActivate)( struct tag_sTask_VDES *edp );
    ER             (*terminate)( struct tag_sTask_VDES *edp );
    ER             (*changePriority)( struct tag_sTask_VDES *edp, PRI priority );
    ER             (*getPriority)( struct tag_sTask_VDES *edp, PRI* p_priority );
    ER             (*refer)( struct tag_sTask_VDES *edp, T_RTSK* pk_taskStatus );
    ER             (*wakeup)( struct tag_sTask_VDES *edp );
    ER_UINT        (*cancelWakeup)( struct tag_sTask_VDES *edp );
    ER             (*releaseWait)( struct tag_sTask_VDES *edp );
    ER             (*suspend)( struct tag_sTask_VDES *edp );
    ER             (*resume)( struct tag_sTask_VDES *edp );
    ER             (*raiseException)( struct tag_sTask_VDES *edp, TEXPTN pattern );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_STASK_ACTIVATE                  (1)
#define	FUNCID_STASK_CANCELACTIVATE            (2)
#define	FUNCID_STASK_TERMINATE                 (3)
#define	FUNCID_STASK_CHANGEPRIORITY            (4)
#define	FUNCID_STASK_GETPRIORITY               (5)
#define	FUNCID_STASK_REFER                     (6)
#define	FUNCID_STASK_WAKEUP                    (7)
#define	FUNCID_STASK_CANCELWAKEUP              (8)
#define	FUNCID_STASK_RELEASEWAIT               (9)
#define	FUNCID_STASK_SUSPEND                   (10)
#define	FUNCID_STASK_RESUME                    (11)
#define	FUNCID_STASK_RAISEEXCEPTION            (12)

#endif /* sTask_TECSGEN_H */
