/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tBalancerTaskBody_tecsgen.h"

#include "tBalancerTaskBody_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eBody */
struct tag_tBalancerTaskBody_eBody_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tBalancerTaskBody_IDX  idx;
};

/* eBalancerControl : omitted by entry port optimize */
/* ������������ȥ�ؿ� #_EPSF_# */
/* eBody */
void           tBalancerTaskBody_eBody_main_skel( struct tag_sTaskBody_VDES *epd)
{
    tBalancerTaskBody_eBody_main( );
}
/* eBalancerControl : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eBody */
static const struct tag_sTaskBody_VMT tBalancerTaskBody_eBody_MT = {
    tBalancerTaskBody_eBody_main_skel,
};
/* eBalancerControl : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tBalancerTaskBody_INIB tBalancerTaskBody_SINGLE_CELL_INIB = 
{
    /* call port #_CP_# */ 
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    100,                                     /* maxSpeed */
    -100,                                    /* minSpeed */
};
/* ���� CB #_CB_# */
struct tag_tBalancerTaskBody_CB tBalancerTaskBody_SINGLE_CELL_CB;
/* �������ǥ�������ץ� #_EPD_# */
const struct tag_tBalancerTaskBody_eBody_DES BalancerTaskBody_eBody_des = {
    &tBalancerTaskBody_eBody_MT,
    &tBalancerTaskBody_SINGLE_CELL_CB,       /* CB */
};
/* eBalancerControl : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tBalancerTaskBody_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
