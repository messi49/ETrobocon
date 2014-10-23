/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
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

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sInitializeRoutineBody_tecsgen.h"
#include "siHandlerBody_tecsgen.h"
#include "siSensorDriver_tecsgen.h"

#ifndef TOPPERS_CB_TYPE_ONLY

/* �ƤӸ�������礭��������ޥ��� #_NCPA_# */
#define N_CP_ciSensorDriver  (tSensorDriverBody_SINGLE_CELL_INIB.n_ciSensorDriver)
#define NCP_ciSensorDriver   (tSensorDriverBody_SINGLE_CELL_INIB.n_ciSensorDriver)

/* ����CB������ޥ��� #_GCB_# */
#define tSensorDriverBody_GET_CELLCB(idx) ((void *)0)

/* °�����������ޥ��� #_AAM_# */
#define tSensorDriverBody_ATTR_portMax	(tSensorDriverBody_SINGLE_CELL_INIB.portMax)
#define tSensorDriverBody_ATTR_TimerBase	(tSensorDriverBody_SINGLE_CELL_INIB.TimerBase)
#define tSensorDriverBody_ATTR_interruptNumber	(tSensorDriverBody_SINGLE_CELL_INIB.interruptNumber)

#define tSensorDriverBody_GET_portMax()	(tSensorDriverBody_SINGLE_CELL_INIB.portMax)
#define tSensorDriverBody_GET_TimerBase()	(tSensorDriverBody_SINGLE_CELL_INIB.TimerBase)
#define tSensorDriverBody_GET_interruptNumber()	(tSensorDriverBody_SINGLE_CELL_INIB.interruptNumber)



 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
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
/* ���� INIB ����� #_CIP_# */
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

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define tSensorDriverBody_CB_tab           tSensorDriverBody_INIB_tab
#define tSensorDriverBody_SINGLE_CELL_CB   tSensorDriverBody_SINGLE_CELL_INIB
#define tSensorDriverBody_CB               tSensorDriverBody_INIB
#define tag_tSensorDriverBody_CB           tag_tSensorDriverBody_INIB

/* ���󥰥�ȥ󥻥� CB �ץ�ȥ�������� #_SCP_# */
extern  tSensorDriverBody_INIB  tSensorDriverBody_SINGLE_CELL_INIB;


/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_tSensorDriverBody_INIB *tSensorDriverBody_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sInitializeRoutineBody */
void         tSensorDriverBody_eInitialize_main();
/* siHandlerBody */
void         tSensorDriverBody_eiBody_main();

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tSensorDriverBody_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tSensorDriverBody_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tSensorDriverBody_IDX


/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_portMax         tSensorDriverBody_ATTR_portMax
#define ATTR_TimerBase       tSensorDriverBody_ATTR_TimerBase
#define ATTR_interruptNumber tSensorDriverBody_ATTR_interruptNumber


/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define ciSensorDriver_initialize( subscript ) \
                      tSensorDriverBody_ciSensorDriver_initialize( subscript ) 
#define ciSensorDriver_i2cInterruptBody( subscript, inputs ) \
                      tSensorDriverBody_ciSensorDriver_i2cInterruptBody( subscript, inputs ) 


/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eInitialize_main tSensorDriverBody_eInitialize_main
#define eiBody_main      tSensorDriverBody_eiBody_main

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSensorDriverBody_TECSGEN_H */
