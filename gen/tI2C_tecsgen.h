/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tI2C_TECSGEN_H
#define tI2C_TECSGEN_H

/*
 * celltype    :  tI2C
 * global name :  tI2C
 * idx_is_id   :  no
 * singleton   :  no
 * has_CB      :  true
 * has_INIB    :  true
 * rom         :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sI2C_tecsgen.h"

#ifndef TOPPERS_CB_TYPE_ONLY

#define tI2C_ID_BASE                (1)  /* ID �Υ١���  #_NIDB_# */
#define tI2C_N_CELL                 (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tI2C_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define tI2C_GET_CELLCB(idx) (idx)

/* °�����������ޥ��� #_AAM_# */
#define tI2C_ATTR_portNumber( p_that )	((p_that)->_inib->portNumber)
#define tI2C_ATTR_TimerBase( p_that )	((p_that)->_inib->TimerBase)

#define tI2C_GET_portNumber(p_that)	((p_that)->_inib->portNumber)
#define tI2C_GET_TimerBase(p_that)	((p_that)->_inib->TimerBase)


/* var ���������ޥ��� #_VAM_# */
#define tI2C_VAR_deviceAddress(p_that)	((p_that)->_inib->deviceAddress)
#define tI2C_VAR_partialTransaction(p_that)	((p_that)->_inib->partialTransaction)
#define tI2C_VAR_currentPT(p_that)	((p_that)->currentPT)
#define tI2C_VAR_state(p_that)	((p_that)->state)
#define tI2C_VAR_nbits(p_that)	((p_that)->nbits)
#define tI2C_VAR_ackSlot(p_that)	((p_that)->ackSlot)
#define tI2C_VAR_ackSlotPending(p_that)	((p_that)->ackSlotPending)
#define tI2C_VAR_data(p_that)	((p_that)->data)
#define tI2C_VAR_transmitting(p_that)	((p_that)->transmitting)

#define tI2C_GET_deviceAddress(p_that)	((p_that)->deviceAddress)
#define tI2C_SET_deviceAddress(p_that,val)	((p_that)->deviceAddress=(val))
#define tI2C_GET_partialTransaction(p_that)	((p_that)->partialTransaction)
#define tI2C_SET_partialTransaction(p_that,val)	((p_that)->partialTransaction=(val))
#define tI2C_GET_currentPT(p_that)	((p_that)->currentPT)
#define tI2C_SET_currentPT(p_that,val)	((p_that)->currentPT=(val))
#define tI2C_GET_state(p_that)	((p_that)->state)
#define tI2C_SET_state(p_that,val)	((p_that)->state=(val))
#define tI2C_GET_nbits(p_that)	((p_that)->nbits)
#define tI2C_SET_nbits(p_that,val)	((p_that)->nbits=(val))
#define tI2C_GET_ackSlot(p_that)	((p_that)->ackSlot)
#define tI2C_SET_ackSlot(p_that,val)	((p_that)->ackSlot=(val))
#define tI2C_GET_ackSlotPending(p_that)	((p_that)->ackSlotPending)
#define tI2C_SET_ackSlotPending(p_that,val)	((p_that)->ackSlotPending=(val))
#define tI2C_GET_data(p_that)	((p_that)->data)
#define tI2C_SET_data(p_that,val)	((p_that)->data=(val))
#define tI2C_GET_transmitting(p_that)	((p_that)->transmitting)
#define tI2C_SET_transmitting(p_that,val)	((p_that)->transmitting=(val))

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tI2C_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    uint8_t        portNumber;
    uint32_t       TimerBase;
    uint8_t*       deviceAddress;
    I2CPT*         partialTransaction;
}  tI2C_INIB;
/* ���� CB ����� #_CCTPA_# */
typedef struct tag_tI2C_CB {
    tI2C_INIB  *_inib;
    /* var #_VA_# */ 
    I2CPT*         currentPT;
    uint32_t       state;
    uint32_t       nbits;
    bool_t         ackSlot;
    bool_t         ackSlotPending;
    uint8_t*       data;
    bool_t         transmitting;
}  tI2C_CB;
extern tI2C_CB  tI2C_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef struct tag_tI2C_CB *tI2C_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sI2C */
void         tI2C_eI2C_enable(tI2C_IDX idx);
void         tI2C_eI2C_disable(tI2C_IDX idx);
bool_t       tI2C_eI2C_isBusy(tI2C_IDX idx);
bool_t       tI2C_eI2C_startTransaction(tI2C_IDX idx, uint32_t address, int32_t internalAddress, int32_t internalAddressBytes, uint8_t* data, uint32_t dataSize, int32_t direction);
void         tI2C_eI2C_initialize(tI2C_IDX idx);
void         tI2C_eI2C_interruptBody(tI2C_IDX idx, uint32_t inputs);

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  tI2C_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tI2C_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tI2C_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tI2C_IDX


/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_portNumber      tI2C_ATTR_portNumber( p_cellcb )
#define ATTR_TimerBase       tI2C_ATTR_TimerBase( p_cellcb )


/* var ���������ޥ���(û�̷�) #_VAMA_# */
#define VAR_deviceAddress    tI2C_VAR_deviceAddress( p_cellcb )
#define VAR_partialTransaction tI2C_VAR_partialTransaction( p_cellcb )
#define VAR_currentPT        tI2C_VAR_currentPT( p_cellcb )
#define VAR_state            tI2C_VAR_state( p_cellcb )
#define VAR_nbits            tI2C_VAR_nbits( p_cellcb )
#define VAR_ackSlot          tI2C_VAR_ackSlot( p_cellcb )
#define VAR_ackSlotPending   tI2C_VAR_ackSlotPending( p_cellcb )
#define VAR_data             tI2C_VAR_data( p_cellcb )
#define VAR_transmitting     tI2C_VAR_transmitting( p_cellcb )


/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eI2C_enable      tI2C_eI2C_enable
#define eI2C_disable     tI2C_eI2C_disable
#define eI2C_isBusy      tI2C_eI2C_isBusy
#define eI2C_startTransaction tI2C_eI2C_startTransaction
#define eI2C_initialize  tI2C_eI2C_initialize
#define eI2C_interruptBody tI2C_eI2C_interruptBody

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tI2C_N_CELL; (i)++ ){ \
       (p_cb) = &tI2C_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &tI2C_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tI2C_TECSGEN_H */
