/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tSysLog_TECSGEN_H
#define tSysLog_TECSGEN_H

/*
 * celltype    :  tSysLog
 * global name :  tSysLog
 * idx_is_id   :  no
 * singleton   :  yes
 * has_CB      :  true
 * has_INIB    :  true
 * rom         :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sSysLog_tecsgen.h"
#include "sPutLog_tecsgen.h"

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tSysLog_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tPutLogMindstormsNXT_tecsgen.h"
#ifdef  tSysLog_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tSysLog_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ��� #_GCB_# */
#define tSysLog_GET_CELLCB(idx) ((void *)0)

/* °�����������ޥ��� #_AAM_# */
#define tSysLog_ATTR_logBufferSize	(tSysLog_SINGLE_CELL_INIB.logBufferSize)

#define tSysLog_GET_logBufferSize()	(tSysLog_SINGLE_CELL_INIB.logBufferSize)


/* var ���������ޥ��� #_VAM_# */
#define tSysLog_VAR_logBuffer	(tSysLog_SINGLE_CELL_INIB.logBuffer)
#define tSysLog_VAR_count   	(tSysLog_SINGLE_CELL_CB.count)
#define tSysLog_VAR_head    	(tSysLog_SINGLE_CELL_CB.head)
#define tSysLog_VAR_tail    	(tSysLog_SINGLE_CELL_CB.tail)
#define tSysLog_VAR_lost    	(tSysLog_SINGLE_CELL_CB.lost)
#define tSysLog_VAR_logMask 	(tSysLog_SINGLE_CELL_CB.logMask)
#define tSysLog_VAR_lowMaskNot	(tSysLog_SINGLE_CELL_CB.lowMaskNot)

#define tSysLog_GET_logBuffer()	(tSysLog_SINGLE_CELL_CB.logBuffer)
#define tSysLog_SET_logBuffer(val)	(tSysLog_SINGLE_CELL_CB.logBuffer=(val))
#define tSysLog_GET_count() 	(tSysLog_SINGLE_CELL_CB.count)
#define tSysLog_SET_count(val)	(tSysLog_SINGLE_CELL_CB.count=(val))
#define tSysLog_GET_head()  	(tSysLog_SINGLE_CELL_CB.head)
#define tSysLog_SET_head(val)	(tSysLog_SINGLE_CELL_CB.head=(val))
#define tSysLog_GET_tail()  	(tSysLog_SINGLE_CELL_CB.tail)
#define tSysLog_SET_tail(val)	(tSysLog_SINGLE_CELL_CB.tail=(val))
#define tSysLog_GET_lost()  	(tSysLog_SINGLE_CELL_CB.lost)
#define tSysLog_SET_lost(val)	(tSysLog_SINGLE_CELL_CB.lost=(val))
#define tSysLog_GET_logMask()	(tSysLog_SINGLE_CELL_CB.logMask)
#define tSysLog_SET_logMask(val)	(tSysLog_SINGLE_CELL_CB.logMask=(val))
#define tSysLog_GET_lowMaskNot()	(tSysLog_SINGLE_CELL_CB.lowMaskNot)
#define tSysLog_SET_lowMaskNot(val)	(tSysLog_SINGLE_CELL_CB.lowMaskNot=(val))

 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define tSysLog_cPutLog_putChar( c ) \
	  tPutLogMindstormsNXT_ePutLog_putChar( \
	   &tPutLogMindstormsNXT_CB_tab[0], (c) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tSysLog_INIB {
    /* call port #_TCP_# */ 
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    uint_t         logBufferSize;
    SYSLOG*        logBuffer;
}  tSysLog_INIB;
/* ���� CB ����� #_CCTPA_# */
typedef struct tag_tSysLog_CB {
    tSysLog_INIB  *_inib;
    /* var #_VA_# */ 
    uint_t         count;
    uint_t         head;
    uint_t         tail;
    uint_t         lost;
    uint_t         logMask;
    uint_t         lowMaskNot;
}  tSysLog_CB;
/* ���󥰥�ȥ󥻥� CB �ץ�ȥ�������� #_SCP_# */
extern  tSysLog_CB  tSysLog_SINGLE_CELL_CB;
extern  tSysLog_INIB  tSysLog_SINGLE_CELL_INIB;


/* ���륿���פ�IDX�� #_CTIX_# */
typedef struct tag_tSysLog_CB *tSysLog_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sSysLog */
ER           tSysLog_eSysLog_write( uint_t priority, const SYSLOG* p_syslog);
ER_UINT      tSysLog_eSysLog_read( SYSLOG* p_syslog);
ER           tSysLog_eSysLog_mask( uint_t logMask, uint_t lowMask);
ER           tSysLog_eSysLog_refer( T_SYSLOG_RLOG* pk_rlog);

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tSysLog_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tSysLog_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tSysLog_IDX


/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_logBufferSize   tSysLog_ATTR_logBufferSize


/* var ���������ޥ���(û�̷�) #_VAMA_# */
#define VAR_logBuffer        tSysLog_VAR_logBuffer
#define VAR_count            tSysLog_VAR_count
#define VAR_head             tSysLog_VAR_head
#define VAR_tail             tSysLog_VAR_tail
#define VAR_lost             tSysLog_VAR_lost
#define VAR_logMask          tSysLog_VAR_logMask
#define VAR_lowMaskNot       tSysLog_VAR_lowMaskNot

/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cPutLog_putChar( c ) \
                      tSysLog_cPutLog_putChar( c ) 


/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eSysLog_write    tSysLog_eSysLog_write
#define eSysLog_read     tSysLog_eSysLog_read
#define eSysLog_mask     tSysLog_eSysLog_mask
#define eSysLog_refer    tSysLog_eSysLog_refer

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB()\
	tSysLog_SINGLE_CELL_CB.count = 0;\
	tSysLog_SINGLE_CELL_CB.head = 0;\
	tSysLog_SINGLE_CELL_CB.tail = 0;\
	tSysLog_SINGLE_CELL_CB.lost = 0;\
	tSysLog_SINGLE_CELL_CB.logMask = 0;\
	tSysLog_SINGLE_CELL_CB.lowMaskNot = 0;
#define SET_CB_INIB_POINTER(i,p_that)\
	tSysLog_SINGLE_CELL_CB._inib = &tSysLog_SINGLE_CELL_INIB;

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSysLog_TECSGEN_H */
