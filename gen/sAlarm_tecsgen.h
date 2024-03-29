/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sAlarm_TECSGEN_H
#define sAlarm_TECSGEN_H

/*
 * signature   :  sAlarm
 * global name :  sAlarm
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sAlarm_VDES {
    struct tag_sAlarm_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sAlarm_VMT {
    ER             (*start)( struct tag_sAlarm_VDES *edp, RELTIM alarmTime );
    ER             (*stop)( struct tag_sAlarm_VDES *edp );
    ER             (*refer)( struct tag_sAlarm_VDES *edp, T_RALM* pk_alarmStatus );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SALARM_START                    (1)
#define	FUNCID_SALARM_STOP                     (2)
#define	FUNCID_SALARM_REFER                    (3)

#endif /* sAlarm_TECSGEN_H */
