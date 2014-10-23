/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sPutLog_TECSGEN_H
#define sPutLog_TECSGEN_H

/*
 * signature   :  sPutLog
 * global name :  sPutLog
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sPutLog_VDES {
    struct tag_sPutLog_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sPutLog_VMT {
    ER             (*putChar)( struct tag_sPutLog_VDES *edp, char c );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SPUTLOG_PUTCHAR                 (1)

#endif /* sPutLog_TECSGEN_H */
