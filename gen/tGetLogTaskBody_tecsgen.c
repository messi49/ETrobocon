/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tGetLogTaskBody_tecsgen.h"

#include "tGetLogTaskBody_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eBody */
struct tag_tGetLogTaskBody_eBody_DES {
    const struct tag_sTaskBody_VMT *vmt;
    int           idx;
};

/* eGetLogControl : omitted by entry port optimize */
/* ������������ȥ�ؿ� #_EPSF_# */
/* eBody */
void           tGetLogTaskBody_eBody_main_skel( struct tag_sTaskBody_VDES *epd)
{
    tGetLogTaskBody_eBody_main( );
}
/* eGetLogControl : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eBody */
static const struct tag_sTaskBody_VMT tGetLogTaskBody_eBody_MT = {
    tGetLogTaskBody_eBody_main_skel,
};
/* eGetLogControl : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* �������ǥ�������ץ� #_EPD_# */
const struct tag_tGetLogTaskBody_eBody_DES GetLogTaskBody_eBody_des = {
    &tGetLogTaskBody_eBody_MT,
    0,
};
/* eGetLogControl : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tGetLogTaskBody_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
