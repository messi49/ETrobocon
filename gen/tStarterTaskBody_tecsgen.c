/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tStarterTaskBody_tecsgen.h"

#include "tStarterTaskBody_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eBody */
struct tag_tStarterTaskBody_eBody_DES {
    const struct tag_sTaskBody_VMT *vmt;
    int           idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eBody */
void           tStarterTaskBody_eBody_main_skel( struct tag_sTaskBody_VDES *epd)
{
    tStarterTaskBody_eBody_main( );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eBody */
static const struct tag_sTaskBody_VMT tStarterTaskBody_eBody_MT = {
    tStarterTaskBody_eBody_main_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* �������ǥ�������ץ� #_EPD_# */
const struct tag_tStarterTaskBody_eBody_DES StarterTaskBody_eBody_des = {
    &tStarterTaskBody_eBody_MT,
    0,
};
/* CB ����������� #_CIC_# */
void
tStarterTaskBody_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
