/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tSerialPortMain_TECSGEN_H
#define tSerialPortMain_TECSGEN_H

/*
 * celltype    :  tSerialPortMain
 * global name :  tSerialPortMain
 * idx_is_id   :  no
 * singleton   :  no
 * has_CB      :  true
 * has_INIB    :  true
 * rom         :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sSerialPort_tecsgen.h"
#include "snSerialPort_tecsgen.h"
#include "sSIOPort_tecsgen.h"
#include "siSIOCBR_tecsgen.h"
#include "sSemaphore_tecsgen.h"
#include "siSemaphore_tecsgen.h"

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tSerialPortMain_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSIOPortMindstormsNXT_tecsgen.h"
#include "tSemaphore_tecsgen.h"
#ifdef  tSerialPortMain_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tSerialPortMain_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tSerialPortMain_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define tSerialPortMain_N_CELL        (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tSerialPortMain_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define tSerialPortMain_GET_CELLCB(idx) (idx)

/* °�����������ޥ��� #_AAM_# */
#define tSerialPortMain_ATTR_receiveBufferSize( p_that )	((p_that)->_inib->receiveBufferSize)
#define tSerialPortMain_ATTR_sendBufferSize( p_that )	((p_that)->_inib->sendBufferSize)

#define tSerialPortMain_GET_receiveBufferSize(p_that)	((p_that)->_inib->receiveBufferSize)
#define tSerialPortMain_GET_sendBufferSize(p_that)	((p_that)->_inib->sendBufferSize)


/* var ���������ޥ��� #_VAM_# */
#define tSerialPortMain_VAR_openFlag(p_that)	((p_that)->openFlag)
#define tSerialPortMain_VAR_errorFlag(p_that)	((p_that)->errorFlag)
#define tSerialPortMain_VAR_ioControl(p_that)	((p_that)->ioControl)
#define tSerialPortMain_VAR_receiveBuffer(p_that)	((p_that)->_inib->receiveBuffer)
#define tSerialPortMain_VAR_receiveReadPointer(p_that)	((p_that)->receiveReadPointer)
#define tSerialPortMain_VAR_receiveWritePointer(p_that)	((p_that)->receiveWritePointer)
#define tSerialPortMain_VAR_receiveCount(p_that)	((p_that)->receiveCount)
#define tSerialPortMain_VAR_receiveFlowControl(p_that)	((p_that)->receiveFlowControl)
#define tSerialPortMain_VAR_receiveStopped(p_that)	((p_that)->receiveStopped)
#define tSerialPortMain_VAR_sendBuffer(p_that)	((p_that)->_inib->sendBuffer)
#define tSerialPortMain_VAR_sendReadPointer(p_that)	((p_that)->sendReadPointer)
#define tSerialPortMain_VAR_sendWritePointer(p_that)	((p_that)->sendWritePointer)
#define tSerialPortMain_VAR_sendCount(p_that)	((p_that)->sendCount)
#define tSerialPortMain_VAR_sendStopped(p_that)	((p_that)->sendStopped)

#define tSerialPortMain_GET_openFlag(p_that)	((p_that)->openFlag)
#define tSerialPortMain_SET_openFlag(p_that,val)	((p_that)->openFlag=(val))
#define tSerialPortMain_GET_errorFlag(p_that)	((p_that)->errorFlag)
#define tSerialPortMain_SET_errorFlag(p_that,val)	((p_that)->errorFlag=(val))
#define tSerialPortMain_GET_ioControl(p_that)	((p_that)->ioControl)
#define tSerialPortMain_SET_ioControl(p_that,val)	((p_that)->ioControl=(val))
#define tSerialPortMain_GET_receiveBuffer(p_that)	((p_that)->receiveBuffer)
#define tSerialPortMain_SET_receiveBuffer(p_that,val)	((p_that)->receiveBuffer=(val))
#define tSerialPortMain_GET_receiveReadPointer(p_that)	((p_that)->receiveReadPointer)
#define tSerialPortMain_SET_receiveReadPointer(p_that,val)	((p_that)->receiveReadPointer=(val))
#define tSerialPortMain_GET_receiveWritePointer(p_that)	((p_that)->receiveWritePointer)
#define tSerialPortMain_SET_receiveWritePointer(p_that,val)	((p_that)->receiveWritePointer=(val))
#define tSerialPortMain_GET_receiveCount(p_that)	((p_that)->receiveCount)
#define tSerialPortMain_SET_receiveCount(p_that,val)	((p_that)->receiveCount=(val))
#define tSerialPortMain_GET_receiveFlowControl(p_that)	((p_that)->receiveFlowControl)
#define tSerialPortMain_SET_receiveFlowControl(p_that,val)	((p_that)->receiveFlowControl=(val))
#define tSerialPortMain_GET_receiveStopped(p_that)	((p_that)->receiveStopped)
#define tSerialPortMain_SET_receiveStopped(p_that,val)	((p_that)->receiveStopped=(val))
#define tSerialPortMain_GET_sendBuffer(p_that)	((p_that)->sendBuffer)
#define tSerialPortMain_SET_sendBuffer(p_that,val)	((p_that)->sendBuffer=(val))
#define tSerialPortMain_GET_sendReadPointer(p_that)	((p_that)->sendReadPointer)
#define tSerialPortMain_SET_sendReadPointer(p_that,val)	((p_that)->sendReadPointer=(val))
#define tSerialPortMain_GET_sendWritePointer(p_that)	((p_that)->sendWritePointer)
#define tSerialPortMain_SET_sendWritePointer(p_that,val)	((p_that)->sendWritePointer=(val))
#define tSerialPortMain_GET_sendCount(p_that)	((p_that)->sendCount)
#define tSerialPortMain_SET_sendCount(p_that,val)	((p_that)->sendCount=(val))
#define tSerialPortMain_GET_sendStopped(p_that)	((p_that)->sendStopped)
#define tSerialPortMain_SET_sendStopped(p_that,val)	((p_that)->sendStopped=(val))

 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define tSerialPortMain_cSIOPort_waitReady( p_that ) \
	  tSIOPortMindstormsNXT_eSIOPort_waitReady( \
	   &tSIOPortMindstormsNXT_CB_tab[0] )
#define tSerialPortMain_cSIOPort_isOpened( p_that ) \
	  tSIOPortMindstormsNXT_eSIOPort_isOpened( \
	   &tSIOPortMindstormsNXT_CB_tab[0] )
#define tSerialPortMain_cSIOPort_open( p_that ) \
	  tSIOPortMindstormsNXT_eSIOPort_open( \
	   &tSIOPortMindstormsNXT_CB_tab[0] )
#define tSerialPortMain_cSIOPort_close( p_that ) \
	  tSIOPortMindstormsNXT_eSIOPort_close( \
	   &tSIOPortMindstormsNXT_CB_tab[0] )
#define tSerialPortMain_cSIOPort_putChar( p_that, c ) \
	  tSIOPortMindstormsNXT_eSIOPort_putChar( \
	   &tSIOPortMindstormsNXT_CB_tab[0], (c) )
#define tSerialPortMain_cSIOPort_getChar( p_that ) \
	  tSIOPortMindstormsNXT_eSIOPort_getChar( \
	   &tSIOPortMindstormsNXT_CB_tab[0] )
#define tSerialPortMain_cSIOPort_enableCBR( p_that, cbrtn ) \
	  tSIOPortMindstormsNXT_eSIOPort_enableCBR( \
	   &tSIOPortMindstormsNXT_CB_tab[0], (cbrtn) )
#define tSerialPortMain_cSIOPort_disableCBR( p_that, cbrtn ) \
	  tSIOPortMindstormsNXT_eSIOPort_disableCBR( \
	   &tSIOPortMindstormsNXT_CB_tab[0], (cbrtn) )
#define tSerialPortMain_cSendSemaphore_signal( p_that ) \
	  tSemaphore_eSemaphore_signal( \
	   &tSemaphore_CB_tab[3] )
#define tSerialPortMain_cSendSemaphore_wait( p_that ) \
	  tSemaphore_eSemaphore_wait( \
	   &tSemaphore_CB_tab[3] )
#define tSerialPortMain_cSendSemaphore_waitPolling( p_that ) \
	  tSemaphore_eSemaphore_waitPolling( \
	   &tSemaphore_CB_tab[3] )
#define tSerialPortMain_cSendSemaphore_waitTimeout( p_that, timeout ) \
	  tSemaphore_eSemaphore_waitTimeout( \
	   &tSemaphore_CB_tab[3], (timeout) )
#define tSerialPortMain_cSendSemaphore_initialize( p_that ) \
	  tSemaphore_eSemaphore_initialize( \
	   &tSemaphore_CB_tab[3] )
#define tSerialPortMain_cSendSemaphore_refer( p_that, pk_semaphoreStatus ) \
	  tSemaphore_eSemaphore_refer( \
	   &tSemaphore_CB_tab[3], (pk_semaphoreStatus) )
#define tSerialPortMain_ciSendSemaphore_signal( p_that ) \
	  tSemaphore_eiSemaphore_signal( \
	   &tSemaphore_CB_tab[3] )
#define tSerialPortMain_cReceiveSemaphore_signal( p_that ) \
	  tSemaphore_eSemaphore_signal( \
	   &tSemaphore_CB_tab[2] )
#define tSerialPortMain_cReceiveSemaphore_wait( p_that ) \
	  tSemaphore_eSemaphore_wait( \
	   &tSemaphore_CB_tab[2] )
#define tSerialPortMain_cReceiveSemaphore_waitPolling( p_that ) \
	  tSemaphore_eSemaphore_waitPolling( \
	   &tSemaphore_CB_tab[2] )
#define tSerialPortMain_cReceiveSemaphore_waitTimeout( p_that, timeout ) \
	  tSemaphore_eSemaphore_waitTimeout( \
	   &tSemaphore_CB_tab[2], (timeout) )
#define tSerialPortMain_cReceiveSemaphore_initialize( p_that ) \
	  tSemaphore_eSemaphore_initialize( \
	   &tSemaphore_CB_tab[2] )
#define tSerialPortMain_cReceiveSemaphore_refer( p_that, pk_semaphoreStatus ) \
	  tSemaphore_eSemaphore_refer( \
	   &tSemaphore_CB_tab[2], (pk_semaphoreStatus) )
#define tSerialPortMain_ciReceiveSemaphore_signal( p_that ) \
	  tSemaphore_eiSemaphore_signal( \
	   &tSemaphore_CB_tab[2] )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tSerialPortMain_INIB {
    /* call port #_TCP_# */ 
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    uint_t         receiveBufferSize;
    uint_t         sendBufferSize;
    char*          receiveBuffer;
    char*          sendBuffer;
}  tSerialPortMain_INIB;
/* ���� CB ����� #_CCTPA_# */
typedef struct tag_tSerialPortMain_CB {
    tSerialPortMain_INIB  *_inib;
    /* var #_VA_# */ 
    bool_t         openFlag;
    bool_t         errorFlag;
    uint_t         ioControl;
    uint_t         receiveReadPointer;
    uint_t         receiveWritePointer;
    uint_t         receiveCount;
    char           receiveFlowControl;
    bool_t         receiveStopped;
    uint_t         sendReadPointer;
    uint_t         sendWritePointer;
    uint_t         sendCount;
    bool_t         sendStopped;
}  tSerialPortMain_CB;
extern tSerialPortMain_CB  tSerialPortMain_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef struct tag_tSerialPortMain_CB *tSerialPortMain_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sSerialPort */
ER           tSerialPortMain_eSerialPort_open(tSerialPortMain_IDX idx);
ER           tSerialPortMain_eSerialPort_close(tSerialPortMain_IDX idx);
ER_UINT      tSerialPortMain_eSerialPort_read(tSerialPortMain_IDX idx, char* buffer, uint_t length);
ER_UINT      tSerialPortMain_eSerialPort_write(tSerialPortMain_IDX idx, const char* buffer, uint_t length);
ER           tSerialPortMain_eSerialPort_control(tSerialPortMain_IDX idx, uint_t ioControl);
ER           tSerialPortMain_eSerialPort_refer(tSerialPortMain_IDX idx, T_SERIAL_RPOR* pk_rpor);
/* snSerialPort */
bool_t       tSerialPortMain_enSerialPort_getChar(tSerialPortMain_IDX idx, char* p_char);
/* siSIOCBR */
void         tSerialPortMain_eiSIOCBR_readySend(tSerialPortMain_IDX idx);
void         tSerialPortMain_eiSIOCBR_readyReceive(tSerialPortMain_IDX idx);

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  tSerialPortMain_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tSerialPortMain_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tSerialPortMain_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tSerialPortMain_IDX


/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_receiveBufferSize tSerialPortMain_ATTR_receiveBufferSize( p_cellcb )
#define ATTR_sendBufferSize  tSerialPortMain_ATTR_sendBufferSize( p_cellcb )


/* var ���������ޥ���(û�̷�) #_VAMA_# */
#define VAR_openFlag         tSerialPortMain_VAR_openFlag( p_cellcb )
#define VAR_errorFlag        tSerialPortMain_VAR_errorFlag( p_cellcb )
#define VAR_ioControl        tSerialPortMain_VAR_ioControl( p_cellcb )
#define VAR_receiveBuffer    tSerialPortMain_VAR_receiveBuffer( p_cellcb )
#define VAR_receiveReadPointer tSerialPortMain_VAR_receiveReadPointer( p_cellcb )
#define VAR_receiveWritePointer tSerialPortMain_VAR_receiveWritePointer( p_cellcb )
#define VAR_receiveCount     tSerialPortMain_VAR_receiveCount( p_cellcb )
#define VAR_receiveFlowControl tSerialPortMain_VAR_receiveFlowControl( p_cellcb )
#define VAR_receiveStopped   tSerialPortMain_VAR_receiveStopped( p_cellcb )
#define VAR_sendBuffer       tSerialPortMain_VAR_sendBuffer( p_cellcb )
#define VAR_sendReadPointer  tSerialPortMain_VAR_sendReadPointer( p_cellcb )
#define VAR_sendWritePointer tSerialPortMain_VAR_sendWritePointer( p_cellcb )
#define VAR_sendCount        tSerialPortMain_VAR_sendCount( p_cellcb )
#define VAR_sendStopped      tSerialPortMain_VAR_sendStopped( p_cellcb )

/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cSIOPort_waitReady( ) \
                      tSerialPortMain_cSIOPort_waitReady( p_cellcb ) 
#define cSIOPort_isOpened( ) \
                      tSerialPortMain_cSIOPort_isOpened( p_cellcb ) 
#define cSIOPort_open( ) \
                      tSerialPortMain_cSIOPort_open( p_cellcb ) 
#define cSIOPort_close( ) \
                      tSerialPortMain_cSIOPort_close( p_cellcb ) 
#define cSIOPort_putChar( c ) \
                      tSerialPortMain_cSIOPort_putChar( p_cellcb, c ) 
#define cSIOPort_getChar( ) \
                      tSerialPortMain_cSIOPort_getChar( p_cellcb ) 
#define cSIOPort_enableCBR( cbrtn ) \
                      tSerialPortMain_cSIOPort_enableCBR( p_cellcb, cbrtn ) 
#define cSIOPort_disableCBR( cbrtn ) \
                      tSerialPortMain_cSIOPort_disableCBR( p_cellcb, cbrtn ) 
#define cSendSemaphore_signal( ) \
                      tSerialPortMain_cSendSemaphore_signal( p_cellcb ) 
#define cSendSemaphore_wait( ) \
                      tSerialPortMain_cSendSemaphore_wait( p_cellcb ) 
#define cSendSemaphore_waitPolling( ) \
                      tSerialPortMain_cSendSemaphore_waitPolling( p_cellcb ) 
#define cSendSemaphore_waitTimeout( timeout ) \
                      tSerialPortMain_cSendSemaphore_waitTimeout( p_cellcb, timeout ) 
#define cSendSemaphore_initialize( ) \
                      tSerialPortMain_cSendSemaphore_initialize( p_cellcb ) 
#define cSendSemaphore_refer( pk_semaphoreStatus ) \
                      tSerialPortMain_cSendSemaphore_refer( p_cellcb, pk_semaphoreStatus ) 
#define ciSendSemaphore_signal( ) \
                      tSerialPortMain_ciSendSemaphore_signal( p_cellcb ) 
#define cReceiveSemaphore_signal( ) \
                      tSerialPortMain_cReceiveSemaphore_signal( p_cellcb ) 
#define cReceiveSemaphore_wait( ) \
                      tSerialPortMain_cReceiveSemaphore_wait( p_cellcb ) 
#define cReceiveSemaphore_waitPolling( ) \
                      tSerialPortMain_cReceiveSemaphore_waitPolling( p_cellcb ) 
#define cReceiveSemaphore_waitTimeout( timeout ) \
                      tSerialPortMain_cReceiveSemaphore_waitTimeout( p_cellcb, timeout ) 
#define cReceiveSemaphore_initialize( ) \
                      tSerialPortMain_cReceiveSemaphore_initialize( p_cellcb ) 
#define cReceiveSemaphore_refer( pk_semaphoreStatus ) \
                      tSerialPortMain_cReceiveSemaphore_refer( p_cellcb, pk_semaphoreStatus ) 
#define ciReceiveSemaphore_signal( ) \
                      tSerialPortMain_ciReceiveSemaphore_signal( p_cellcb ) 


/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eSerialPort_open tSerialPortMain_eSerialPort_open
#define eSerialPort_close tSerialPortMain_eSerialPort_close
#define eSerialPort_read tSerialPortMain_eSerialPort_read
#define eSerialPort_write tSerialPortMain_eSerialPort_write
#define eSerialPort_control tSerialPortMain_eSerialPort_control
#define eSerialPort_refer tSerialPortMain_eSerialPort_refer
#define enSerialPort_getChar tSerialPortMain_enSerialPort_getChar
#define eiSIOCBR_readySend tSerialPortMain_eiSIOCBR_readySend
#define eiSIOCBR_readyReceive tSerialPortMain_eiSIOCBR_readyReceive

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tSerialPortMain_N_CELL; (i)++ ){ \
       (p_cb) = &tSerialPortMain_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)\
	(p_that)->openFlag = false;
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &tSerialPortMain_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSerialPortMain_TECSGEN_H */
