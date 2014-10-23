/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef siAlarm_TECSGEN_H
#define siAlarm_TECSGEN_H

/*
 * signature   :  siAlarm
 * global name :  siAlarm
 * context     :  non-task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_siAlarm_VDES {
    struct tag_siAlarm_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_siAlarm_VMT {
    ER             (*start)( struct tag_siAlarm_VDES *edp, RELTIM alarmTime );
    ER             (*stop)( struct tag_siAlarm_VDES *edp );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SIALARM_START                   (1)
#define	FUNCID_SIALARM_STOP                    (2)

#endif /* siAlarm_TECSGEN_H */
