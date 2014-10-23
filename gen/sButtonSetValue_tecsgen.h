/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sButtonSetValue_TECSGEN_H
#define sButtonSetValue_TECSGEN_H

/*
 * signature   :  sButtonSetValue
 * global name :  sButtonSetValue
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sButtonSetValue_VDES {
    struct tag_sButtonSetValue_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sButtonSetValue_VMT {
    void           (*kvalue)( struct tag_sButtonSetValue_VDES *edp );
    void           (*threshold)( struct tag_sButtonSetValue_VDES *edp );
    void           (*speed)( struct tag_sButtonSetValue_VDES *edp );
    void           (*tailAngle)( struct tag_sButtonSetValue_VDES *edp );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SBUTTONSETVALUE_KVALUE          (1)
#define	FUNCID_SBUTTONSETVALUE_THRESHOLD       (2)
#define	FUNCID_SBUTTONSETVALUE_SPEED           (3)
#define	FUNCID_SBUTTONSETVALUE_TAILANGLE       (4)

#endif /* sButtonSetValue_TECSGEN_H */
