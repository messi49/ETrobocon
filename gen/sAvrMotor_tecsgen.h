/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sAvrMotor_TECSGEN_H
#define sAvrMotor_TECSGEN_H

/*
 * signature   :  sAvrMotor
 * global name :  sAvrMotor
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sAvrMotor_VDES {
    struct tag_sAvrMotor_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sAvrMotor_VMT {
    void           (*setMotor)( struct tag_sAvrMotor_VDES *edp, uint8_t portNumber, int8_t powerPercent, bool_t brake );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SAVRMOTOR_SETMOTOR              (1)

#endif /* sAvrMotor_TECSGEN_H */
