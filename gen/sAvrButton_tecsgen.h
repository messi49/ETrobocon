/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sAvrButton_TECSGEN_H
#define sAvrButton_TECSGEN_H

/*
 * signature   :  sAvrButton
 * global name :  sAvrButton
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sAvrButton_VDES {
    struct tag_sAvrButton_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sAvrButton_VMT {
    uint8_t        (*getButton)( struct tag_sAvrButton_VDES *edp );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SAVRBUTTON_GETBUTTON            (1)

#endif /* sAvrButton_TECSGEN_H */
