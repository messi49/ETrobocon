/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sBattery_TECSGEN_H
#define sBattery_TECSGEN_H

/*
 * signature   :  sBattery
 * global name :  sBattery
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sBattery_VDES {
    struct tag_sBattery_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sBattery_VMT {
    uint16_t       (*getBatteryVoltage)( struct tag_sBattery_VDES *edp );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SBATTERY_GETBATTERYVOLTAGE      (1)

#endif /* sBattery_TECSGEN_H */
