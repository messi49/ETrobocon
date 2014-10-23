/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tDisplayBody_TECSGEN_H
#define tDisplayBody_TECSGEN_H

/*
 * celltype    :  tDisplayBody
 * global name :  tDisplayBody
 * idx_is_id   :  no
 * singleton   :  yes
 * has_CB      :  true
 * has_INIB    :  true
 * rom         :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sDisplay_tecsgen.h"
#include "sInitializeRoutineBody_tecsgen.h"
#include "sTerminateRoutineBody_tecsgen.h"
#include "sLCD_tecsgen.h"

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tDisplayBody_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tLCD_tecsgen.h"
#ifdef  tDisplayBody_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tDisplayBody_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ��� #_GCB_# */
#define tDisplayBody_GET_CELLCB(idx) ((void *)0)

/* °�����������ޥ��� #_AAM_# */
#define tDisplayBody_ATTR_width	(tDisplayBody_SINGLE_CELL_INIB.width)
#define tDisplayBody_ATTR_depth	(tDisplayBody_SINGLE_CELL_INIB.depth)
#define tDisplayBody_ATTR_cellWidth	(tDisplayBody_SINGLE_CELL_INIB.cellWidth)
#define tDisplayBody_ATTR_charWidth	(tDisplayBody_SINGLE_CELL_INIB.charWidth)
#define tDisplayBody_ATTR_charDepth	(tDisplayBody_SINGLE_CELL_INIB.charDepth)

#define tDisplayBody_GET_width()	(tDisplayBody_SINGLE_CELL_INIB.width)
#define tDisplayBody_GET_depth()	(tDisplayBody_SINGLE_CELL_INIB.depth)
#define tDisplayBody_GET_cellWidth()	(tDisplayBody_SINGLE_CELL_INIB.cellWidth)
#define tDisplayBody_GET_charWidth()	(tDisplayBody_SINGLE_CELL_INIB.charWidth)
#define tDisplayBody_GET_charDepth()	(tDisplayBody_SINGLE_CELL_INIB.charDepth)


/* var ���������ޥ��� #_VAM_# */
#define tDisplayBody_VAR_buffer	(tDisplayBody_SINGLE_CELL_INIB.buffer)
#define tDisplayBody_VAR_currentX	(tDisplayBody_SINGLE_CELL_CB.currentX)
#define tDisplayBody_VAR_currentY	(tDisplayBody_SINGLE_CELL_CB.currentY)

#define tDisplayBody_GET_buffer()	(tDisplayBody_SINGLE_CELL_CB.buffer)
#define tDisplayBody_SET_buffer(val)	(tDisplayBody_SINGLE_CELL_CB.buffer=(val))
#define tDisplayBody_GET_currentX()	(tDisplayBody_SINGLE_CELL_CB.currentX)
#define tDisplayBody_SET_currentX(val)	(tDisplayBody_SINGLE_CELL_CB.currentX=(val))
#define tDisplayBody_GET_currentY()	(tDisplayBody_SINGLE_CELL_CB.currentY)
#define tDisplayBody_SET_currentY(val)	(tDisplayBody_SINGLE_CELL_CB.currentY=(val))

 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define tDisplayBody_cLCD_initialize( display ) \
	  tLCD_eLCD_initialize( \
	    (display) )
#define tDisplayBody_cLCD_powerOn( display ) \
	  tLCD_eLCD_powerOn( \
	    (display) )
#define tDisplayBody_cLCD_powerOff( ) \
	  tLCD_eLCD_powerOff( \
	    )
#define tDisplayBody_cLCD_sendData( buffer ) \
	  tLCD_eLCD_sendData( \
	    (buffer) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tDisplayBody_INIB {
    /* call port #_TCP_# */ 
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    uint8_t        width;
    uint8_t        depth;
    uint8_t        cellWidth;
    uint8_t        charWidth;
    uint8_t        charDepth;
    uint8_t*       buffer;
}  tDisplayBody_INIB;
/* ���� CB ����� #_CCTPA_# */
typedef struct tag_tDisplayBody_CB {
    tDisplayBody_INIB  *_inib;
    /* var #_VA_# */ 
    uint8_t        currentX;
    uint8_t        currentY;
}  tDisplayBody_CB;
/* ���󥰥�ȥ󥻥� CB �ץ�ȥ�������� #_SCP_# */
extern  tDisplayBody_CB  tDisplayBody_SINGLE_CELL_CB;
extern  tDisplayBody_INIB  tDisplayBody_SINGLE_CELL_INIB;


/* ���륿���פ�IDX�� #_CTIX_# */
typedef struct tag_tDisplayBody_CB *tDisplayBody_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sDisplay */
void         tDisplayBody_eDisplay_update();
void         tDisplayBody_eDisplay_clear( bool_t updateToo);
void         tDisplayBody_eDisplay_gotoXY( uint8_t x, uint8_t y);
void         tDisplayBody_eDisplay_putChar( char c);
void         tDisplayBody_eDisplay_putString( const char* string);
void         tDisplayBody_eDisplay_putInt( int32_t val, uint8_t places);
void         tDisplayBody_eDisplay_putUnsigned( uint32_t val, uint8_t places);
void         tDisplayBody_eDisplay_putHex( uint32_t val, uint8_t places);
uint8_t*     tDisplayBody_eDisplay_getBuffer();
void         tDisplayBody_eDisplay_powerOff( bool_t updateToo);
/* sInitializeRoutineBody */
void         tDisplayBody_eInitialize_main();
/* sTerminateRoutineBody */
void         tDisplayBody_eTerminate_main();

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tDisplayBody_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tDisplayBody_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tDisplayBody_IDX


/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_width           tDisplayBody_ATTR_width
#define ATTR_depth           tDisplayBody_ATTR_depth
#define ATTR_cellWidth       tDisplayBody_ATTR_cellWidth
#define ATTR_charWidth       tDisplayBody_ATTR_charWidth
#define ATTR_charDepth       tDisplayBody_ATTR_charDepth


/* var ���������ޥ���(û�̷�) #_VAMA_# */
#define VAR_buffer           tDisplayBody_VAR_buffer
#define VAR_currentX         tDisplayBody_VAR_currentX
#define VAR_currentY         tDisplayBody_VAR_currentY

/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cLCD_initialize( display ) \
                      tDisplayBody_cLCD_initialize( display ) 
#define cLCD_powerOn( display ) \
                      tDisplayBody_cLCD_powerOn( display ) 
#define cLCD_powerOff( ) \
                      tDisplayBody_cLCD_powerOff( ) 
#define cLCD_sendData( buffer ) \
                      tDisplayBody_cLCD_sendData( buffer ) 


/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eDisplay_update  tDisplayBody_eDisplay_update
#define eDisplay_clear   tDisplayBody_eDisplay_clear
#define eDisplay_gotoXY  tDisplayBody_eDisplay_gotoXY
#define eDisplay_putChar tDisplayBody_eDisplay_putChar
#define eDisplay_putString tDisplayBody_eDisplay_putString
#define eDisplay_putInt  tDisplayBody_eDisplay_putInt
#define eDisplay_putUnsigned tDisplayBody_eDisplay_putUnsigned
#define eDisplay_putHex  tDisplayBody_eDisplay_putHex
#define eDisplay_getBuffer tDisplayBody_eDisplay_getBuffer
#define eDisplay_powerOff tDisplayBody_eDisplay_powerOff
#define eInitialize_main tDisplayBody_eInitialize_main
#define eTerminate_main  tDisplayBody_eTerminate_main

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	tDisplayBody_SINGLE_CELL_CB._inib = &tDisplayBody_SINGLE_CELL_INIB;

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tDisplayBody_TECSGEN_H */
