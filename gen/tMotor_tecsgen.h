/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tMotor_TECSGEN_H
#define tMotor_TECSGEN_H

/*
 * celltype    :  tMotor
 * global name :  tMotor
 * idx_is_id   :  no
 * singleton   :  no
 * has_CB      :  true
 * has_INIB    :  true
 * rom         :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sMotor_tecsgen.h"
#include "siMotorInterrupt_tecsgen.h"
#include "sAvrMotor_tecsgen.h"

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tMotor_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tAVRBody_tecsgen.h"
#ifdef  tMotor_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tMotor_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tMotor_ID_BASE              (1)  /* ID のベース  #_NIDB_# */
#define tMotor_N_CELL               (3)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tMotor_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tMotor_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tMotor_ATTR_portNumber( p_that )	((p_that)->_inib->portNumber)

#define tMotor_GET_portNumber(p_that)	((p_that)->_inib->portNumber)


/* var アクセスマクロ #_VAM_# */
#define tMotor_VAR_revolution(p_that)	((p_that)->revolution)
#define tMotor_VAR_pwm(p_that)	((p_that)->pwm)
#define tMotor_VAR_preEdge(p_that)	((p_that)->preEdge)

#define tMotor_GET_revolution(p_that)	((p_that)->revolution)
#define tMotor_SET_revolution(p_that,val)	((p_that)->revolution=(val))
#define tMotor_GET_pwm(p_that)	((p_that)->pwm)
#define tMotor_SET_pwm(p_that,val)	((p_that)->pwm=(val))
#define tMotor_GET_preEdge(p_that)	((p_that)->preEdge)
#define tMotor_SET_preEdge(p_that,val)	((p_that)->preEdge=(val))

 /* 呼び口関数マクロ #_CPM_# */
#define tMotor_cAvrMotor_setMotor( p_that, portNumber, powerPercent, brake ) \
	  tAVRBody_eAvrMotor_setMotor( \
	    (portNumber), (powerPercent), (brake) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tMotor_INIB {
    /* call port #_TCP_# */ 
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    uint8_t        portNumber;
}  tMotor_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tMotor_CB {
    tMotor_INIB  *_inib;
    /* var #_VA_# */ 
    int32_t        revolution;
    int8_t         pwm;
    uint32_t       preEdge;
}  tMotor_CB;
extern tMotor_CB  tMotor_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tMotor_CB *tMotor_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sMotor */
void         tMotor_eMotor_setPWM(tMotor_IDX idx, int8_t pwm, bool_t brakeMode);
void         tMotor_eMotor_setRevolution(tMotor_IDX idx, int32_t revolution);
void         tMotor_eMotor_getRevolution(tMotor_IDX idx, int32_t* revolution);
/* siMotorInterrupt */
void         tMotor_eiMotorInterrupt_quadDecode(tMotor_IDX idx, uint32_t pins);
void         tMotor_eiMotorInterrupt_stopMotor(tMotor_IDX idx);

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tMotor_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tMotor_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tMotor_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tMotor_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_portNumber      tMotor_ATTR_portNumber( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_revolution       tMotor_VAR_revolution( p_cellcb )
#define VAR_pwm              tMotor_VAR_pwm( p_cellcb )
#define VAR_preEdge          tMotor_VAR_preEdge( p_cellcb )

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cAvrMotor_setMotor( portNumber, powerPercent, brake ) \
                      tMotor_cAvrMotor_setMotor( p_cellcb, portNumber, powerPercent, brake ) 


/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eMotor_setPWM    tMotor_eMotor_setPWM
#define eMotor_setRevolution tMotor_eMotor_setRevolution
#define eMotor_getRevolution tMotor_eMotor_getRevolution
#define eiMotorInterrupt_quadDecode tMotor_eiMotorInterrupt_quadDecode
#define eiMotorInterrupt_stopMotor tMotor_eiMotorInterrupt_stopMotor

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tMotor_N_CELL; (i)++ ){ \
       (p_cb) = &tMotor_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &tMotor_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tMotor_TECSGEN_H */
