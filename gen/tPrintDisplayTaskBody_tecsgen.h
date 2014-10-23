/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tPrintDisplayTaskBody_TECSGEN_H
#define tPrintDisplayTaskBody_TECSGEN_H

/*
 * celltype    :  tPrintDisplayTaskBody
 * global name :  tPrintDisplayTaskBody
 * idx_is_id   :  no
 * singleton   :  yes
 * has_CB      :  false
 * has_INIB    :  false
 * rom         :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sPrintDisplayControl_tecsgen.h"
#include "sDisplay_tecsgen.h"

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tPrintDisplayTaskBody_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tDisplayBody_tecsgen.h"
#ifdef  tPrintDisplayTaskBody_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tPrintDisplayTaskBody_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ��� #_GCB_# */
#define tPrintDisplayTaskBody_GET_CELLCB(idx) ((void *)0)
 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define tPrintDisplayTaskBody_cDisplay_update( ) \
	  tDisplayBody_eDisplay_update( \
	    )
#define tPrintDisplayTaskBody_cDisplay_clear( updateToo ) \
	  tDisplayBody_eDisplay_clear( \
	    (updateToo) )
#define tPrintDisplayTaskBody_cDisplay_gotoXY( x, y ) \
	  tDisplayBody_eDisplay_gotoXY( \
	    (x), (y) )
#define tPrintDisplayTaskBody_cDisplay_putChar( c ) \
	  tDisplayBody_eDisplay_putChar( \
	    (c) )
#define tPrintDisplayTaskBody_cDisplay_putString( string ) \
	  tDisplayBody_eDisplay_putString( \
	    (string) )
#define tPrintDisplayTaskBody_cDisplay_putInt( val, places ) \
	  tDisplayBody_eDisplay_putInt( \
	    (val), (places) )
#define tPrintDisplayTaskBody_cDisplay_putUnsigned( val, places ) \
	  tDisplayBody_eDisplay_putUnsigned( \
	    (val), (places) )
#define tPrintDisplayTaskBody_cDisplay_putHex( val, places ) \
	  tDisplayBody_eDisplay_putHex( \
	    (val), (places) )
#define tPrintDisplayTaskBody_cDisplay_getBuffer( ) \
	  tDisplayBody_eDisplay_getBuffer( \
	    )
#define tPrintDisplayTaskBody_cDisplay_powerOff( updateToo ) \
	  tDisplayBody_eDisplay_powerOff( \
	    (updateToo) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� CB (���ߡ�)����� #_CCDP_# */
typedef struct tag_tPrintDisplayTaskBody_CB {
    int  dummy;
} tPrintDisplayTaskBody_CB;
/* ���󥰥�ȥ󥻥� CB �ץ�ȥ�������� #_SCP_# */


/* ���륿���פ�IDX�� #_CTIX_# */
typedef int   tPrintDisplayTaskBody_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sPrintDisplayControl */
void         tPrintDisplayTaskBody_ePrintDisplayControl_print_str();
void         tPrintDisplayTaskBody_ePrintDisplayControl_print_k( const char* string1, int16_t value1);
void         tPrintDisplayTaskBody_ePrintDisplayControl_print1( int16_t value1);
void         tPrintDisplayTaskBody_ePrintDisplayControl_print2( int16_t value1, int16_t value2);
void         tPrintDisplayTaskBody_ePrintDisplayControl_print3( int16_t value1, int16_t value2, int16_t value3);
void         tPrintDisplayTaskBody_ePrintDisplayControl_print4( int16_t value1, int16_t value2, int16_t value3, int16_t value4);
void         tPrintDisplayTaskBody_ePrintDisplayControl_print5( int16_t value1, int16_t value2, int16_t value3, int16_t value4, int16_t value5);
void         tPrintDisplayTaskBody_ePrintDisplayControl_print6( int16_t value1, int16_t value2, int16_t value3, int16_t value4, int16_t value5, int16_t value6);
void         tPrintDisplayTaskBody_ePrintDisplayControl_print7( int16_t value1, int16_t value2, int16_t value3, int16_t value4, int16_t value5, int16_t value6, int16_t value7);
void         tPrintDisplayTaskBody_ePrintDisplayControl_printS1( const char* string1, int16_t value1);
void         tPrintDisplayTaskBody_ePrintDisplayControl_printS2( const char* string1, int16_t value1, const char* string2, int16_t value2);
void         tPrintDisplayTaskBody_ePrintDisplayControl_printS3( const char* string1, int16_t value1, const char* string2, int16_t value2, const char* string3, int16_t value3);

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tPrintDisplayTaskBody_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tPrintDisplayTaskBody_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tPrintDisplayTaskBody_IDX

/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cDisplay_update( ) \
                      tPrintDisplayTaskBody_cDisplay_update( ) 
#define cDisplay_clear( updateToo ) \
                      tPrintDisplayTaskBody_cDisplay_clear( updateToo ) 
#define cDisplay_gotoXY( x, y ) \
                      tPrintDisplayTaskBody_cDisplay_gotoXY( x, y ) 
#define cDisplay_putChar( c ) \
                      tPrintDisplayTaskBody_cDisplay_putChar( c ) 
#define cDisplay_putString( string ) \
                      tPrintDisplayTaskBody_cDisplay_putString( string ) 
#define cDisplay_putInt( val, places ) \
                      tPrintDisplayTaskBody_cDisplay_putInt( val, places ) 
#define cDisplay_putUnsigned( val, places ) \
                      tPrintDisplayTaskBody_cDisplay_putUnsigned( val, places ) 
#define cDisplay_putHex( val, places ) \
                      tPrintDisplayTaskBody_cDisplay_putHex( val, places ) 
#define cDisplay_getBuffer( ) \
                      tPrintDisplayTaskBody_cDisplay_getBuffer( ) 
#define cDisplay_powerOff( updateToo ) \
                      tPrintDisplayTaskBody_cDisplay_powerOff( updateToo ) 


/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define ePrintDisplayControl_print_str tPrintDisplayTaskBody_ePrintDisplayControl_print_str
#define ePrintDisplayControl_print_k tPrintDisplayTaskBody_ePrintDisplayControl_print_k
#define ePrintDisplayControl_print1 tPrintDisplayTaskBody_ePrintDisplayControl_print1
#define ePrintDisplayControl_print2 tPrintDisplayTaskBody_ePrintDisplayControl_print2
#define ePrintDisplayControl_print3 tPrintDisplayTaskBody_ePrintDisplayControl_print3
#define ePrintDisplayControl_print4 tPrintDisplayTaskBody_ePrintDisplayControl_print4
#define ePrintDisplayControl_print5 tPrintDisplayTaskBody_ePrintDisplayControl_print5
#define ePrintDisplayControl_print6 tPrintDisplayTaskBody_ePrintDisplayControl_print6
#define ePrintDisplayControl_print7 tPrintDisplayTaskBody_ePrintDisplayControl_print7
#define ePrintDisplayControl_printS1 tPrintDisplayTaskBody_ePrintDisplayControl_printS1
#define ePrintDisplayControl_printS2 tPrintDisplayTaskBody_ePrintDisplayControl_printS2
#define ePrintDisplayControl_printS3 tPrintDisplayTaskBody_ePrintDisplayControl_printS3

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tPrintDisplayTaskBody_TECSGEN_H */
