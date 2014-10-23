/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tLCD_TECSGEN_H
#define tLCD_TECSGEN_H

/*
 * celltype    :  tLCD
 * global name :  tLCD
 * idx_is_id   :  no
 * singleton   :  yes
 * has_CB      :  false
 * has_INIB    :  true
 * rom         :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sLCD_tecsgen.h"
#include "sSPI_tecsgen.h"

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tLCD_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSPIBody_tecsgen.h"
#ifdef  tLCD_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tLCD_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ��� #_GCB_# */
#define tLCD_GET_CELLCB(idx) ((void *)0)

/* °�����������ޥ��� #_AAM_# */
#define tLCD_ATTR_width     	(tLCD_SINGLE_CELL_INIB.width)
#define tLCD_ATTR_depth     	(tLCD_SINGLE_CELL_INIB.depth)

#define tLCD_GET_width()    	(tLCD_SINGLE_CELL_INIB.width)
#define tLCD_GET_depth()    	(tLCD_SINGLE_CELL_INIB.depth)



 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define tLCD_cSPI_initialize( ) \
	  tSPIBody_eSPI_initialize( \
	    )
#define tLCD_cSPI_write( CD, data, nBytes ) \
	  tSPIBody_eSPI_write( \
	    (CD), (data), (nBytes) )
#define tLCD_cSPI_setDisplay( display ) \
	  tSPIBody_eSPI_setDisplay( \
	    (display) )
#define tLCD_cSPI_refresh( ) \
	  tSPIBody_eSPI_refresh( \
	    )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tLCD_INIB {
    /* call port #_TCP_# */ 
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    uint8_t        width;
    uint8_t        depth;
}  tLCD_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define tLCD_CB_tab           tLCD_INIB_tab
#define tLCD_SINGLE_CELL_CB   tLCD_SINGLE_CELL_INIB
#define tLCD_CB               tLCD_INIB
#define tag_tLCD_CB           tag_tLCD_INIB

/* ���󥰥�ȥ󥻥� CB �ץ�ȥ�������� #_SCP_# */
extern  tLCD_INIB  tLCD_SINGLE_CELL_INIB;


/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_tLCD_INIB *tLCD_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sLCD */
void         tLCD_eLCD_initialize( const uint8_t* display);
void         tLCD_eLCD_powerOn( const uint8_t* display);
void         tLCD_eLCD_powerOff();
void         tLCD_eLCD_sendData( const uint8_t* buffer);

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tLCD_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tLCD_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tLCD_IDX


/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_width           tLCD_ATTR_width
#define ATTR_depth           tLCD_ATTR_depth


/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cSPI_initialize( ) \
                      tLCD_cSPI_initialize( ) 
#define cSPI_write( CD, data, nBytes ) \
                      tLCD_cSPI_write( CD, data, nBytes ) 
#define cSPI_setDisplay( display ) \
                      tLCD_cSPI_setDisplay( display ) 
#define cSPI_refresh( ) \
                      tLCD_cSPI_refresh( ) 


/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eLCD_initialize  tLCD_eLCD_initialize
#define eLCD_powerOn     tLCD_eLCD_powerOn
#define eLCD_powerOff    tLCD_eLCD_powerOff
#define eLCD_sendData    tLCD_eLCD_sendData

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tLCD_TECSGEN_H */
