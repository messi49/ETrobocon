/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tGetCommandTaskBody_tecsgen.h"

#include "tGetCommandTaskBody_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eBody */
struct tag_tGetCommandTaskBody_eBody_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tGetCommandTaskBody_IDX  idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eBody */
void           tGetCommandTaskBody_eBody_main_skel( struct tag_sTaskBody_VDES *epd)
{
    tGetCommandTaskBody_eBody_main( );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eBody */
static const struct tag_sTaskBody_VMT tGetCommandTaskBody_eBody_MT = {
    tGetCommandTaskBody_eBody_main_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� CB #_CB_# */
struct tag_tGetCommandTaskBody_CB tGetCommandTaskBody_SINGLE_CELL_CB;
/* �������ǥ�������ץ� #_EPD_# */
const struct tag_tGetCommandTaskBody_eBody_DES GetCommandTaskBody_eBody_des = {
    &tGetCommandTaskBody_eBody_MT,
    &tGetCommandTaskBody_SINGLE_CELL_CB,       /* CB */
};
/* CB ����������� #_CIC_# */
void
tGetCommandTaskBody_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
