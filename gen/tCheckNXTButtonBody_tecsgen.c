/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tCheckNXTButtonBody_tecsgen.h"

#include "tCheckNXTButtonBody_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eiBody */
struct tag_tCheckNXTButtonBody_eiBody_DES {
    const struct tag_siHandlerBody_VMT *vmt;
    int           idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eiBody */
void           tCheckNXTButtonBody_eiBody_main_skel( struct tag_siHandlerBody_VDES *epd)
{
    tCheckNXTButtonBody_eiBody_main( );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eiBody */
static const struct tag_siHandlerBody_VMT tCheckNXTButtonBody_eiBody_MT = {
    tCheckNXTButtonBody_eiBody_main_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* �������ǥ�������ץ� #_EPD_# */
const struct tag_tCheckNXTButtonBody_eiBody_DES CheckNXTButtonBody_eiBody_des = {
    &tCheckNXTButtonBody_eiBody_MT,
    0,
};
/* CB ����������� #_CIC_# */
void
tCheckNXTButtonBody_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
