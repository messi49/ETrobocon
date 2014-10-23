/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sGetLogControl_TECSGEN_H
#define sGetLogControl_TECSGEN_H

/*
 * signature   :  sGetLogControl
 * global name :  sGetLogControl
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sGetLogControl_VDES {
    struct tag_sGetLogControl_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sGetLogControl_VMT {
    void           (*portOpen)( struct tag_sGetLogControl_VDES *edp );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SGETLOGCONTROL_PORTOPEN         (1)

#endif /* sGetLogControl_TECSGEN_H */
