/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sPIDControl_TECSGEN_H
#define sPIDControl_TECSGEN_H

/*
 * signature   :  sPIDControl
 * global name :  sPIDControl
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sPIDControl_VDES {
    struct tag_sPIDControl_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sPIDControl_VMT {
    void           (*getPIDValue)( struct tag_sPIDControl_VDES *edp, uint16_t light, uint16_t VAR_lightThreshold, float32_t* turn_f );
    void           (*getKValue)( struct tag_sPIDControl_VDES *edp, float32_t* kp, float32_t* ki, float32_t* kd );
    void           (*setKValue)( struct tag_sPIDControl_VDES *edp, uint8_t kind, float32_t value );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SPIDCONTROL_GETPIDVALUE         (1)
#define	FUNCID_SPIDCONTROL_GETKVALUE           (2)
#define	FUNCID_SPIDCONTROL_SETKVALUE           (3)

#endif /* sPIDControl_TECSGEN_H */
