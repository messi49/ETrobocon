/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
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

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "siMotorInterrupt_tecsgen.h"
#include "sInitializeRoutineBody_tecsgen.h"
#include "sTerminateRoutineBody_tecsgen.h"
#include "siHandlerBody_tecsgen.h"

#ifndef TOPPERS_CB_TYPE_ONLY

/* �ƤӸ�������礭��������ޥ��� #_NCPA_# */
#define N_CP_ciMotorInterrupt  (tRotaryEncoderBody_SINGLE_CELL_INIB.n_ciMotorInterrupt)
#define NCP_ciMotorInterrupt   (tRotaryEncoderBody_SINGLE_CELL_INIB.n_ciMotorInterrupt)

/* ����CB������ޥ��� #_GCB_# */
#define tRotaryEncoderBody_GET_CELLCB(idx) ((void *)0)

/* °�����������ޥ��� #_AAM_# */
#define tRotaryEncoderBody_ATTR_PIOBase	(tRotaryEncoderBody_SINGLE_CELL_INIB.PIOBase)
#define tRotaryEncoderBody_ATTR_interruptNumber	(tRotaryEncoderBody_SINGLE_CELL_INIB.interruptNumber)

#define tRotaryEncoderBody_GET_PIOBase()	(tRotaryEncoderBody_SINGLE_CELL_INIB.PIOBase)
#define tRotaryEncoderBody_GET_interruptNumber()	(tRotaryEncoderBody_SINGLE_CELL_INIB.interruptNumber)


/* var ���������ޥ��� #_VAM_# */
#define tRotaryEncoderBody_VAR_interruptCount	(tRotaryEncoderBody_SINGLE_CELL_CB.interruptCount)
#define tRotaryEncoderBody_VAR_initializedFlag	(tRotaryEncoderBody_SINGLE_CELL_CB.initializedFlag)

#define tRotaryEncoderBody_GET_interruptCount()	(tRotaryEncoderBody_SINGLE_CELL_CB.interruptCount)
#define tRotaryEncoderBody_SET_interruptCount(val)	(tRotaryEncoderBody_SINGLE_CELL_CB.interruptCount=(val))
#define tRotaryEncoderBody_GET_initializedFlag()	(tRotaryEncoderBody_SINGLE_CELL_CB.initializedFlag)
#define tRotaryEncoderBody_SET_initializedFlag(val)	(tRotaryEncoderBody_SINGLE_CELL_CB.initializedFlag=(val))

 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
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
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tRotaryEncoderBody_INIB {
    /* call port #_TCP_# */ 
    struct tag_siMotorInterrupt_VDES **ciMotorInterrupt;
    int_t n_ciMotorInterrupt;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    void*          PIOBase;
    INTNO          interruptNumber;
}  tRotaryEncoderBody_INIB;
/* ���� CB ����� #_CCTPA_# */
typedef struct tag_tRotaryEncoderBody_CB {
    tRotaryEncoderBody_INIB  *_inib;
    /* var #_VA_# */ 
    int32_t        interruptCount;
    bool_t         initializedFlag;
}  tRotaryEncoderBody_CB;
/* ���󥰥�ȥ󥻥� CB �ץ�ȥ�������� #_SCP_# */
extern  tRotaryEncoderBody_CB  tRotaryEncoderBody_SINGLE_CELL_CB;
extern  tRotaryEncoderBody_INIB  tRotaryEncoderBody_SINGLE_CELL_INIB;


/* ���륿���פ�IDX�� #_CTIX_# */
typedef struct tag_tRotaryEncoderBody_CB *tRotaryEncoderBody_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sInitializeRoutineBody */
void         tRotaryEncoderBody_eInitialize_main();
/* sTerminateRoutineBody */
void         tRotaryEncoderBody_eTerminate_main();
/* siHandlerBody */
void         tRotaryEncoderBody_eiCyclicBody_main();
/* siHandlerBody */
void         tRotaryEncoderBody_eiInterruptBody_main();

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tRotaryEncoderBody_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tRotaryEncoderBody_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tRotaryEncoderBody_IDX


/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_PIOBase         tRotaryEncoderBody_ATTR_PIOBase
#define ATTR_interruptNumber tRotaryEncoderBody_ATTR_interruptNumber


/* var ���������ޥ���(û�̷�) #_VAMA_# */
#define VAR_interruptCount   tRotaryEncoderBody_VAR_interruptCount
#define VAR_initializedFlag  tRotaryEncoderBody_VAR_initializedFlag

/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define ciMotorInterrupt_quadDecode( subscript, pins ) \
                      tRotaryEncoderBody_ciMotorInterrupt_quadDecode( subscript, pins ) 
#define ciMotorInterrupt_stopMotor( subscript ) \
                      tRotaryEncoderBody_ciMotorInterrupt_stopMotor( subscript ) 


/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eInitialize_main tRotaryEncoderBody_eInitialize_main
#define eTerminate_main  tRotaryEncoderBody_eTerminate_main
#define eiCyclicBody_main tRotaryEncoderBody_eiCyclicBody_main
#define eiInterruptBody_main tRotaryEncoderBody_eiInterruptBody_main

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	tRotaryEncoderBody_SINGLE_CELL_CB._inib = &tRotaryEncoderBody_SINGLE_CELL_INIB;

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tRotaryEncoderBody_TECSGEN_H */
