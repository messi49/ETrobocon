/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tButtonBody_tecsgen.h"

#include "tButtonBody_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eButton : omitted by entry port optimize */
/* eiBody */
struct tag_tButtonBody_eiBody_DES {
    const struct tag_siHandlerBody_VMT *vmt;
    tButtonBody_IDX  idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eButton : omitted by entry port optimize */
/* eiBody */
void           tButtonBody_eiBody_main_skel( struct tag_siHandlerBody_VDES *epd)
{
    tButtonBody_eiBody_main( );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eButton : omitted by entry port optimize */
/* eiBody */
static const struct tag_siHandlerBody_VMT tButtonBody_eiBody_MT = {
    tButtonBody_eiBody_main_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tButtonBody_INIB tButtonBody_SINGLE_CELL_INIB = 
{
    /* call port #_CP_# */ 
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    20,                                      /* threshold */
};
/* ���� CB #_CB_# */
struct tag_tButtonBody_CB tButtonBody_SINGLE_CELL_CB;
/* �������ǥ�������ץ� #_EPD_# */
/* eButton : omitted by entry port optimize */
const struct tag_tButtonBody_eiBody_DES Button_ButtonBody_eiBody_des = {
    &tButtonBody_eiBody_MT,
    &tButtonBody_SINGLE_CELL_CB,       /* CB */
};
/* CB ����������� #_CIC_# */
void
tButtonBody_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
