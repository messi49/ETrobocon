/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tLogTaskMain_TECSGEN_H
#define tLogTaskMain_TECSGEN_H

/*
 * celltype    :  tLogTaskMain
 * global name :  tLogTaskMain
 * idx_is_id   :  no
 * singleton   :  yes
 * has_CB      :  false
 * has_INIB    :  true
 * rom         :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sTaskBody_tecsgen.h"
#include "sLogTask_tecsgen.h"
#include "sSerialPort_tecsgen.h"
#include "snSerialPort_tecsgen.h"
#include "sSysLog_tecsgen.h"
#include "sPutLog_tecsgen.h"

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tLogTaskMain_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSerialPortMain_tecsgen.h"
#include "tSysLog_tecsgen.h"
#include "tPutLogMindstormsNXT_tecsgen.h"
#ifdef  tLogTaskMain_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tLogTaskMain_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ��� #_GCB_# */
#define tLogTaskMain_GET_CELLCB(idx) ((void *)0)

/* °�����������ޥ��� #_AAM_# */
#define tLogTaskMain_ATTR_interval	(tLogTaskMain_SINGLE_CELL_INIB.interval)
#define tLogTaskMain_ATTR_flushWait	(tLogTaskMain_SINGLE_CELL_INIB.flushWait)

#define tLogTaskMain_GET_interval()	(tLogTaskMain_SINGLE_CELL_INIB.interval)
#define tLogTaskMain_GET_flushWait()	(tLogTaskMain_SINGLE_CELL_INIB.flushWait)



 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define tLogTaskMain_cSerialPort_open( ) \
	  tSerialPortMain_eSerialPort_open( \
	   &tSerialPortMain_CB_tab[0] )
#define tLogTaskMain_cSerialPort_close( ) \
	  tSerialPortMain_eSerialPort_close( \
	   &tSerialPortMain_CB_tab[0] )
#define tLogTaskMain_cSerialPort_read( buffer, length ) \
	  tSerialPortMain_eSerialPort_read( \
	   &tSerialPortMain_CB_tab[0], (buffer), (length) )
#define tLogTaskMain_cSerialPort_write( buffer, length ) \
	  tSerialPortMain_eSerialPort_write( \
	   &tSerialPortMain_CB_tab[0], (buffer), (length) )
#define tLogTaskMain_cSerialPort_control( ioControl ) \
	  tSerialPortMain_eSerialPort_control( \
	   &tSerialPortMain_CB_tab[0], (ioControl) )
#define tLogTaskMain_cSerialPort_refer( pk_rpor ) \
	  tSerialPortMain_eSerialPort_refer( \
	   &tSerialPortMain_CB_tab[0], (pk_rpor) )
#define tLogTaskMain_cnSerialPort_getChar( p_char ) \
	  tSerialPortMain_enSerialPort_getChar( \
	   &tSerialPortMain_CB_tab[0], (p_char) )
#define tLogTaskMain_cSysLog_write( priority, p_syslog ) \
	  tSysLog_eSysLog_write( \
	    (priority), (p_syslog) )
#define tLogTaskMain_cSysLog_read( p_syslog ) \
	  tSysLog_eSysLog_read( \
	    (p_syslog) )
#define tLogTaskMain_cSysLog_mask( logMask, lowMask ) \
	  tSysLog_eSysLog_mask( \
	    (logMask), (lowMask) )
#define tLogTaskMain_cSysLog_refer( pk_rlog ) \
	  tSysLog_eSysLog_refer( \
	    (pk_rlog) )
#define tLogTaskMain_cPutLog_putChar( c ) \
	  tPutLogMindstormsNXT_ePutLog_putChar( \
	   &tPutLogMindstormsNXT_CB_tab[0], (c) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tLogTaskMain_INIB {
    /* call port #_TCP_# */ 
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    RELTIM         interval;
    RELTIM         flushWait;
}  tLogTaskMain_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define tLogTaskMain_CB_tab           tLogTaskMain_INIB_tab
#define tLogTaskMain_SINGLE_CELL_CB   tLogTaskMain_SINGLE_CELL_INIB
#define tLogTaskMain_CB               tLogTaskMain_INIB
#define tag_tLogTaskMain_CB           tag_tLogTaskMain_INIB

/* ���󥰥�ȥ󥻥� CB �ץ�ȥ�������� #_SCP_# */
extern  tLogTaskMain_INIB  tLogTaskMain_SINGLE_CELL_INIB;


/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_tLogTaskMain_INIB *tLogTaskMain_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sTaskBody */
void         tLogTaskMain_eLogTaskBody_main();
/* sLogTask */
ER           tLogTaskMain_eLogTask_flush( uint_t count);

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tLogTaskMain_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tLogTaskMain_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tLogTaskMain_IDX


/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_interval        tLogTaskMain_ATTR_interval
#define ATTR_flushWait       tLogTaskMain_ATTR_flushWait


/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cSerialPort_open( ) \
                      tLogTaskMain_cSerialPort_open( ) 
#define cSerialPort_close( ) \
                      tLogTaskMain_cSerialPort_close( ) 
#define cSerialPort_read( buffer, length ) \
                      tLogTaskMain_cSerialPort_read( buffer, length ) 
#define cSerialPort_write( buffer, length ) \
                      tLogTaskMain_cSerialPort_write( buffer, length ) 
#define cSerialPort_control( ioControl ) \
                      tLogTaskMain_cSerialPort_control( ioControl ) 
#define cSerialPort_refer( pk_rpor ) \
                      tLogTaskMain_cSerialPort_refer( pk_rpor ) 
#define cnSerialPort_getChar( p_char ) \
                      tLogTaskMain_cnSerialPort_getChar( p_char ) 
#define cSysLog_write( priority, p_syslog ) \
                      tLogTaskMain_cSysLog_write( priority, p_syslog ) 
#define cSysLog_read( p_syslog ) \
                      tLogTaskMain_cSysLog_read( p_syslog ) 
#define cSysLog_mask( logMask, lowMask ) \
                      tLogTaskMain_cSysLog_mask( logMask, lowMask ) 
#define cSysLog_refer( pk_rlog ) \
                      tLogTaskMain_cSysLog_refer( pk_rlog ) 
#define cPutLog_putChar( c ) \
                      tLogTaskMain_cPutLog_putChar( c ) 


/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eLogTaskBody_main tLogTaskMain_eLogTaskBody_main
#define eLogTask_flush   tLogTaskMain_eLogTask_flush

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tLogTaskMain_TECSGEN_H */
