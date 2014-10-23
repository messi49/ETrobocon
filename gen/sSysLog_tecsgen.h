/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSysLog_TECSGEN_H
#define sSysLog_TECSGEN_H

/*
 * signature   :  sSysLog
 * global name :  sSysLog
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSysLog_VDES {
    struct tag_sSysLog_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSysLog_VMT {
    ER             (*write)( struct tag_sSysLog_VDES *edp, uint_t priority, const SYSLOG* p_syslog );
    ER_UINT        (*read)( struct tag_sSysLog_VDES *edp, SYSLOG* p_syslog );
    ER             (*mask)( struct tag_sSysLog_VDES *edp, uint_t logMask, uint_t lowMask );
    ER             (*refer)( struct tag_sSysLog_VDES *edp, T_SYSLOG_RLOG* pk_rlog );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSYSLOG_WRITE                   (1)
#define	FUNCID_SSYSLOG_READ                    (2)
#define	FUNCID_SSYSLOG_MASK                    (3)
#define	FUNCID_SSYSLOG_REFER                   (4)

#endif /* sSysLog_TECSGEN_H */
