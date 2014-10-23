/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tRotaryEncoderBody_TECSGEN_H
#define tRotaryEncoderBody_TECSGEN_H

/*
 * celltype    :  tRotaryEncoderBody
 * global name :  tRotaryEncoderBody
 * idx_is_id   :  no
 * singleton   :  yes
 * has_CB      :  true
 * has_INIB    :  true
 * rom         :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "siMotorInterrupt_tecsgen.h"
#include "sInitializeRoutineBody_tecsgen.h"
#include "sTerminateRoutineBody_tecsgen.h"
#include "siHandlerBody_tecsgen.h"

#ifndef TOPPERS_CB_TYPE_ONLY

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_ciMotorInterrupt  (tRotaryEncoderBody_SINGLE_CELL_INIB.n_ciMotorInterrupt)
#define NCP_ciMotorInterrupt   (tRotaryEncoderBody_SINGLE_CELL_INIB.n_ciMotorInterrupt)

/* セルCBを得るマクロ #_GCB_# */
#define tRotaryEncoderBody_GET_CELLCB(idx) ((void *)0)

/* 属性アクセスマクロ #_AAM_# */
#define tRotaryEncoderBody_ATTR_PIOBase	(tRotaryEncoderBody_SINGLE_CELL_INIB.PIOBase)
#define tRotaryEncoderBody_ATTR_interruptNumber	(tRotaryEncoderBody_SINGLE_CELL_INIB.interruptNumber)

#define tRotaryEncoderBody_GET_PIOBase()	(tRotaryEncoderBody_SINGLE_CELL_INIB.PIOBase)
#define tRotaryEncoderBody_GET_interruptNumber()	(tRotaryEncoderBody_SINGLE_CELL_INIB.interruptNumber)


/* var アクセスマクロ #_VAM_# */
#define tRotaryEncoderBody_VAR_interruptCount	(tRotaryEncoderBody_SINGLE_CELL_CB.interruptCount)
#define tRotaryEncoderBody_VAR_initializedFlag	(tRotaryEncoderBody_SINGLE_CELL_CB.initializedFlag)

#define tRotaryEncoderBody_GET_interruptCount()	(tRotaryEncoderBody_SINGLE_CELL_CB.interruptCount)
#define tRotaryEncoderBody_SET_interruptCount(val)	(tRotaryEncoderBody_SINGLE_CELL_CB.interruptCount=(val))
#define tRotaryEncoderBody_GET_initializedFlag()	(tRotaryEncoderBody_SINGLE_CELL_CB.initializedFlag)
#define tRotaryEncoderBody_SET_initializedFlag(val)	(tRotaryEncoderBody_SINGLE_CELL_CB.initializedFlag=(val))

 /* 呼び口関数マクロ #_CPM_# */
#define tRotaryEncoderBody_ciMotorInterrupt_quadDecode( subscript, pins ) \
	  tRotaryEncoderBody_SINGLE_CELL_INIB.ciMotorInterrupt[subscript]->VMT->quadDecode( \
	  tRotaryEncoderBody_SINGLE_CELL_INIB.ciMotorInterrupt[subscript], (pins) )
#define tRotaryEncoderBody_ciMotorInterrupt_stopMotor( subscript ) \
	  tRotaryEncoderBody_SINGLE_CELL_INIB.ciMotorInterrupt[subscript]->VMT->stopMotor( \
	  tRotaryEncoderBody_SINGLE_CELL_INIB.ciMotorInterrupt[subscript] )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tRotaryEncoderBody_INIB {
    /* call port #_TCP_# */ 
    struct tag_siMotorInterrupt_VDES **ciMotorInterrupt;
    int_t n_ciMotorInterrupt;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    void*          PIOBase;
    INTNO          interruptNumber;
}  tRotaryEncoderBody_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tRotaryEncoderBody_CB {
    tRotaryEncoderBody_INIB  *_inib;
    /* var #_VA_# */ 
    int32_t        interruptCount;
    bool_t         initializedFlag;
}  tRotaryEncoderBody_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tRotaryEncoderBody_CB  tRotaryEncoderBody_SINGLE_CELL_CB;
extern  tRotaryEncoderBody_INIB  tRotaryEncoderBody_SINGLE_CELL_INIB;


/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tRotaryEncoderBody_CB *tRotaryEncoderBody_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sInitializeRoutineBody */
void         tRotaryEncoderBody_eInitialize_main();
/* sTerminateRoutineBody */
void         tRotaryEncoderBody_eTerminate_main();
/* siHandlerBody */
void         tRotaryEncoderBody_eiCyclicBody_main();
/* siHandlerBody */
void         tRotaryEncoderBody_eiInterruptBody_main();

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tRotaryEncoderBody_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tRotaryEncoderBody_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tRotaryEncoderBody_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_PIOBase         tRotaryEncoderBody_ATTR_PIOBase
#define ATTR_interruptNumber tRotaryEncoderBody_ATTR_interruptNumber


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_interruptCount   tRotaryEncoderBody_VAR_interruptCount
#define VAR_initializedFlag  tRotaryEncoderBody_VAR_initializedFlag

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define ciMotorInterrupt_quadDecode( subscript, pins ) \
                      tRotaryEncoderBody_ciMotorInterrupt_quadDecode( subscript, pins ) 
#define ciMotorInterrupt_stopMotor( subscript ) \
                      tRotaryEncoderBody_ciMotorInterrupt_stopMotor( subscript ) 


/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eInitialize_main tRotaryEncoderBody_eInitialize_main
#define eTerminate_main  tRotaryEncoderBody_eTerminate_main
#define eiCyclicBody_main tRotaryEncoderBody_eiCyclicBody_main
#define eiInterruptBody_main tRotaryEncoderBody_eiInterruptBody_main

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	tRotaryEncoderBody_SINGLE_CELL_CB._inib = &tRotaryEncoderBody_SINGLE_CELL_INIB;

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tRotaryEncoderBody_TECSGEN_H */
