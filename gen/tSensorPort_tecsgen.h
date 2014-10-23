/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSensorPort_TECSGEN_H
#define tSensorPort_TECSGEN_H

/*
 * celltype    :  tSensorPort
 * global name :  tSensorPort
 * idx_is_id   :  no
 * singleton   :  no
 * has_CB      :  false
 * has_INIB    :  true
 * rom         :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sSensorPort_tecsgen.h"
#include "sAvrSensor_tecsgen.h"

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tSensorPort_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tAVRBody_tecsgen.h"
#ifdef  tSensorPort_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tSensorPort_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tSensorPort_ID_BASE         (1)  /* ID のベース  #_NIDB_# */
#define tSensorPort_N_CELL          (4)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tSensorPort_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tSensorPort_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tSensorPort_ATTR_portNumber( p_that )	((p_that)->portNumber)

#define tSensorPort_GET_portNumber(p_that)	((p_that)->portNumber)



 /* 呼び口関数マクロ #_CPM_# */
#define tSensorPort_cAvrSensor_setInputPower( p_that, portNumber, powerType ) \
	  tAVRBody_eAvrSensor_setInputPower( \
	    (portNumber), (powerType) )
#define tSensorPort_cAvrSensor_getSensor( p_that, portNumber ) \
	  tAVRBody_eAvrSensor_getSensor( \
	    (portNumber) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tSensorPort_INIB {
    /* call port #_TCP_# */ 
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    uint8_t        portNumber;
}  tSensorPort_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tSensorPort_CB_tab           tSensorPort_INIB_tab
#define tSensorPort_SINGLE_CELL_CB   tSensorPort_SINGLE_CELL_INIB
#define tSensorPort_CB               tSensorPort_INIB
#define tag_tSensorPort_CB           tag_tSensorPort_INIB

extern tSensorPort_CB  tSensorPort_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tSensorPort_INIB *tSensorPort_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSensorPort */
void         tSensorPort_eSensorPort_clearSCL(tSensorPort_IDX idx);
void         tSensorPort_eSensorPort_clearSDA(tSensorPort_IDX idx);
void         tSensorPort_eSensorPort_setSCL(tSensorPort_IDX idx);
void         tSensorPort_eSensorPort_setSDA(tSensorPort_IDX idx);
void         tSensorPort_eSensorPort_inputPower(tSensorPort_IDX idx, uint8_t powerType);
uint16_t     tSensorPort_eSensorPort_getValue(tSensorPort_IDX idx);

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tSensorPort_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tSensorPort_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSensorPort_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSensorPort_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_portNumber      tSensorPort_ATTR_portNumber( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cAvrSensor_setInputPower( portNumber, powerType ) \
                      tSensorPort_cAvrSensor_setInputPower( p_cellcb, portNumber, powerType ) 
#define cAvrSensor_getSensor( portNumber ) \
                      tSensorPort_cAvrSensor_getSensor( p_cellcb, portNumber ) 


/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eSensorPort_clearSCL tSensorPort_eSensorPort_clearSCL
#define eSensorPort_clearSDA tSensorPort_eSensorPort_clearSDA
#define eSensorPort_setSCL tSensorPort_eSensorPort_setSCL
#define eSensorPort_setSDA tSensorPort_eSensorPort_setSDA
#define eSensorPort_inputPower tSensorPort_eSensorPort_inputPower
#define eSensorPort_getValue tSensorPort_eSensorPort_getValue

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tSensorPort_N_CELL; (i)++ ){ \
       (p_cb) = &tSensorPort_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSensorPort_TECSGEN_H */
