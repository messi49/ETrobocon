/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tTWIBody_TECSGEN_H
#define tTWIBody_TECSGEN_H

/*
 * celltype    :  tTWIBody
 * global name :  tTWIBody
 * idx_is_id   :  no
 * singleton   :  yes
 * has_CB      :  true
 * has_INIB    :  true
 * rom         :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sTWI_tecsgen.h"
#include "siHandlerBody_tecsgen.h"

#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ��� #_GCB_# */
#define tTWIBody_GET_CELLCB(idx) ((void *)0)

/* °�����������ޥ��� #_AAM_# */
#define tTWIBody_ATTR_clockDivisor	(tTWIBody_SINGLE_CELL_INIB.clockDivisor)

#define tTWIBody_GET_clockDivisor()	(tTWIBody_SINGLE_CELL_INIB.clockDivisor)


/* var ���������ޥ��� #_VAM_# */
#define tTWIBody_VAR_pending	(tTWIBody_SINGLE_CELL_CB.pending)
#define tTWIBody_VAR_buffer 	(tTWIBody_SINGLE_CELL_CB.buffer)
#define tTWIBody_VAR_state  	(tTWIBody_SINGLE_CELL_CB.state)

#define tTWIBody_GET_pending()	(tTWIBody_SINGLE_CELL_CB.pending)
#define tTWIBody_SET_pending(val)	(tTWIBody_SINGLE_CELL_CB.pending=(val))
#define tTWIBody_GET_buffer()	(tTWIBody_SINGLE_CELL_CB.buffer)
#define tTWIBody_SET_buffer(val)	(tTWIBody_SINGLE_CELL_CB.buffer=(val))
#define tTWIBody_GET_state()	(tTWIBody_SINGLE_CELL_CB.state)
#define tTWIBody_SET_state(val)	(tTWIBody_SINGLE_CELL_CB.state=(val))

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tTWIBody_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    uint32_t       clockDivisor;
}  tTWIBody_INIB;
/* ���� CB ����� #_CCTPA_# */
typedef struct tag_tTWIBody_CB {
    tTWIBody_INIB  *_inib;
    /* var #_VA_# */ 
    uint32_t       pending;
    uint8_t*       buffer;
    uint8_t        state;
}  tTWIBody_CB;
/* ���󥰥�ȥ󥻥� CB �ץ�ȥ�������� #_SCP_# */
extern  tTWIBody_CB  tTWIBody_SINGLE_CELL_CB;
extern  tTWIBody_INIB  tTWIBody_SINGLE_CELL_INIB;


/* ���륿���פ�IDX�� #_CTIX_# */
typedef struct tag_tTWIBody_CB *tTWIBody_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sTWI */
bool_t       tTWIBody_eTWI_initialize();
void         tTWIBody_eTWI_startWrite( uint32_t dev_addr, uint32_t int_addr_bytes, uint32_t int_addr, const uint8_t* data, uint32_t nBytes);
void         tTWIBody_eTWI_startRead( uint32_t dev_addr, uint32_t int_addr_bytes, uint32_t int_addr, uint8_t* data, uint32_t nBytes);
void         tTWIBody_eTWI_pollingUpdate();
bool_t       tTWIBody_eTWI_isBusy();
bool_t       tTWIBody_eTWI_isOk();
void         tTWIBody_eTWI_reset();
/* siHandlerBody */
void         tTWIBody_eiInterruptBody_main();

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tTWIBody_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tTWIBody_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tTWIBody_IDX


/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_clockDivisor    tTWIBody_ATTR_clockDivisor


/* var ���������ޥ���(û�̷�) #_VAMA_# */
#define VAR_pending          tTWIBody_VAR_pending
#define VAR_buffer           tTWIBody_VAR_buffer
#define VAR_state            tTWIBody_VAR_state


/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eTWI_initialize  tTWIBody_eTWI_initialize
#define eTWI_startWrite  tTWIBody_eTWI_startWrite
#define eTWI_startRead   tTWIBody_eTWI_startRead
#define eTWI_pollingUpdate tTWIBody_eTWI_pollingUpdate
#define eTWI_isBusy      tTWIBody_eTWI_isBusy
#define eTWI_isOk        tTWIBody_eTWI_isOk
#define eTWI_reset       tTWIBody_eTWI_reset
#define eiInterruptBody_main tTWIBody_eiInterruptBody_main

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	tTWIBody_SINGLE_CELL_CB._inib = &tTWIBody_SINGLE_CELL_INIB;

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTWIBody_TECSGEN_H */
