/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tSPIBody_TECSGEN_H
#define tSPIBody_TECSGEN_H

/*
 * celltype    :  tSPIBody
 * global name :  tSPIBody
 * idx_is_id   :  no
 * singleton   :  yes
 * has_CB      :  true
 * has_INIB    :  false
 * rom         :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sSPI_tecsgen.h"
#include "siHandlerBody_tecsgen.h"

#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ��� #_GCB_# */
#define tSPIBody_GET_CELLCB(idx) ((void *)0)



/* var ���������ޥ��� #_VAM_# */
#define tSPIBody_VAR_display	(tSPIBody_SINGLE_CELL_CB.display)
#define tSPIBody_VAR_dirty  	(tSPIBody_SINGLE_CELL_CB.dirty)
#define tSPIBody_VAR_page   	(tSPIBody_SINGLE_CELL_CB.page)
#define tSPIBody_VAR_data   	(tSPIBody_SINGLE_CELL_CB.data)
#define tSPIBody_VAR_mode   	(tSPIBody_SINGLE_CELL_CB.mode)

#define tSPIBody_GET_display()	(tSPIBody_SINGLE_CELL_CB.display)
#define tSPIBody_SET_display(val)	(tSPIBody_SINGLE_CELL_CB.display=(val))
#define tSPIBody_GET_dirty()	(tSPIBody_SINGLE_CELL_CB.dirty)
#define tSPIBody_SET_dirty(val)	(tSPIBody_SINGLE_CELL_CB.dirty=(val))
#define tSPIBody_GET_page() 	(tSPIBody_SINGLE_CELL_CB.page)
#define tSPIBody_SET_page(val)	(tSPIBody_SINGLE_CELL_CB.page=(val))
#define tSPIBody_GET_data() 	(tSPIBody_SINGLE_CELL_CB.data)
#define tSPIBody_SET_data(val)	(tSPIBody_SINGLE_CELL_CB.data=(val))
#define tSPIBody_GET_mode() 	(tSPIBody_SINGLE_CELL_CB.mode)
#define tSPIBody_SET_mode(val)	(tSPIBody_SINGLE_CELL_CB.mode=(val))

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� CB ����� #_CCTPA_# */
typedef struct tag_tSPIBody_CB {
    /* var #_VA_# */ 
    uint8_t*       display;
    volatile bool_t dirty;
    volatile uint8_t page;
    volatile uint8_t* data;
    uint8_t        mode;
}  tSPIBody_CB;
/* ���󥰥�ȥ󥻥� CB �ץ�ȥ�������� #_SCP_# */
extern  tSPIBody_CB  tSPIBody_SINGLE_CELL_CB;


/* ���륿���פ�IDX�� #_CTIX_# */
typedef struct tag_tSPIBody_CB *tSPIBody_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sSPI */
void         tSPIBody_eSPI_initialize();
void         tSPIBody_eSPI_write( uint32_t CD, const uint8_t* data, uint32_t nBytes);
void         tSPIBody_eSPI_setDisplay( const uint8_t* display);
void         tSPIBody_eSPI_refresh();
/* siHandlerBody */
void         tSPIBody_eiInterruptBody_main();

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tSPIBody_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tSPIBody_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tSPIBody_IDX



/* var ���������ޥ���(û�̷�) #_VAMA_# */
#define VAR_display          tSPIBody_VAR_display
#define VAR_dirty            tSPIBody_VAR_dirty
#define VAR_page             tSPIBody_VAR_page
#define VAR_data             tSPIBody_VAR_data
#define VAR_mode             tSPIBody_VAR_mode


/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eSPI_initialize  tSPIBody_eSPI_initialize
#define eSPI_write       tSPIBody_eSPI_write
#define eSPI_setDisplay  tSPIBody_eSPI_setDisplay
#define eSPI_refresh     tSPIBody_eSPI_refresh
#define eiInterruptBody_main tSPIBody_eiInterruptBody_main

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSPIBody_TECSGEN_H */
