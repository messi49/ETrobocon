/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tBalancerBody_tecsgen.h"

#include "tBalancerBody_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eBalancer : omitted by entry port optimize */
/* eInitialize */
struct tag_tBalancerBody_eInitialize_DES {
    const struct tag_sInitializeRoutineBody_VMT *vmt;
    int           idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eBalancer : omitted by entry port optimize */
/* eInitialize */
void           tBalancerBody_eInitialize_main_skel( struct tag_sInitializeRoutineBody_VDES *epd)
{
    tBalancerBody_eInitialize_main( );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eBalancer : omitted by entry port optimize */
/* eInitialize */
static const struct tag_sInitializeRoutineBody_VMT tBalancerBody_eInitialize_MT = {
    tBalancerBody_eInitialize_main_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* �������ǥ�������ץ� #_EPD_# */
/* eBalancer : omitted by entry port optimize */
const struct tag_tBalancerBody_eInitialize_DES Balancer_BalancerBody_eInitialize_des = {
    &tBalancerBody_eInitialize_MT,
    0,
};
/* CB ����������� #_CIC_# */
void
tBalancerBody_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
