/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSensorDriverBody_TECSGEN_H
#define tSensorDriverBody_TECSGEN_H

/*
 * celltype    :  tSensorDriverBody
 * global name :  tSensorDriverBody
 * idx_is_id   :  no
 * singleton   :  yes
 * has_CB      :  false
 * has_INIB    :  true
 * rom         :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sInitializeRoutineBody_tecsgen.h"
#include "siHandlerBody_tecsgen.h"
#include "siSensorDriver_tecsgen.h"

#ifndef TOPPERS_CB_TYPE_ONLY

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_ciSensorDriver  (tSensorDriverBody_SINGLE_CELL_INIB.n_ciSensorDriver)
#define NCP_ciSensorDriver   (tSensorDriverBody_SINGLE_CELL_INIB.n_ciSensorDriver)

/* セルCBを得るマクロ #_GCB_# */
#define tSensorDriverBody_GET_CELLCB(idx) ((void *)0)

/* 属性アクセスマクロ #_AAM_# */
#define tSensorDriverBody_ATTR_portMax	(tSensorDriverBody_SINGLE_CELL_INIB.portMax)
#define tSensorDriverBody_ATTR_TimerBase	(tSensorDriverBody_SINGLE_CELL_INIB.TimerBase)
#define tSensorDriverBody_ATTR_interruptNumber	(tSensorDriverBody_SINGLE_CELL_INIB.interruptNumber)

#define tSensorDriverBody_GET_portMax()	(tSensorDriverBody_SINGLE_CELL_INIB.portMax)
#define tSensorDriverBody_GET_TimerBase()	(tSensorDriverBody_SINGLE_CELL_INIB.TimerBase)
#define tSensorDriverBody_GET_interruptNumber()	(tSensorDriverBody_SINGLE_CELL_INIB.interruptNumber)



 /* 呼び口関数マクロ #_CPM_# */
#define tSensorDriverBody_ciSensorDriver_initialize( subscript ) \
	  tSensorDriverBody_SINGLE_CELL_INIB.ciSensorDriver[subscript]->VMT->initialize( \
	  tSensorDriverBody_SINGLE_CELL_INIB.ciSensorDriver[subscript] )
#define tSensorDriverBody_ciSensorDriver_i2cInterruptBody( subscript, inputs ) \
	  tSensorDriverBody_SINGLE_CELL_INIB.ciSensorDriver[subscript]->VMT->i2cInterruptBody( \
	  tSensorDriverBody_SINGLE_CELL_INIB.ciSensorDriver[subscript], (inputs) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tSensorDriverBody_INIB {
    /* call port #_TCP_# */ 
    struct tag_siSensorDriver_VDES **ciSensorDriver;
    int_t n_ciSensorDriver;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    uint8_t        portMax;
    uint32_t       TimerBase;
    INTNO          interruptNumber;
}  tSensorDriverBody_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tSensorDriverBody_CB_tab           tSensorDriverBody_INIB_tab
#define tSensorDriverBody_SINGLE_CELL_CB   tSensorDriverBody_SINGLE_CELL_INIB
#define tSensorDriverBody_CB               tSensorDriverBody_INIB
#define tag_tSensorDriverBody_CB           tag_tSensorDriverBody_INIB

/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tSensorDriverBody_INIB  tSensorDriverBody_SINGLE_CELL_INIB;


/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tSensorDriverBody_INIB *tSensorDriverBody_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sInitializeRoutineBody */
void         tSensorDriverBody_eInitialize_main();
/* siHandlerBody */
void         tSensorDriverBody_eiBody_main();

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tSensorDriverBody_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSensorDriverBody_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSensorDriverBody_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_portMax         tSensorDriverBody_ATTR_portMax
#define ATTR_TimerBase       tSensorDriverBody_ATTR_TimerBase
#define ATTR_interruptNumber tSensorDriverBody_ATTR_interruptNumber


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define ciSensorDriver_initialize( subscript ) \
                      tSensorDriverBody_ciSensorDriver_initialize( subscript ) 
#define ciSensorDriver_i2cInterruptBody( subscript, inputs ) \
                      tSensorDriverBody_ciSensorDriver_i2cInterruptBody( subscript, inputs ) 


/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eInitialize_main tSensorDriverBody_eInitialize_main
#define eiBody_main      tSensorDriverBody_eiBody_main

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSensorDriverBody_TECSGEN_H */
