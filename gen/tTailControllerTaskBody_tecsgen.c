/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tTailControllerTaskBody_tecsgen.h"

#include "tTailControllerTaskBody_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eBody */
struct tag_tTailControllerTaskBody_eBody_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tTailControllerTaskBody_IDX  idx;
};

/* eTailController : omitted by entry port optimize */
/* ������������ȥ�ؿ� #_EPSF_# */
/* eBody */
void           tTailControllerTaskBody_eBody_main_skel( struct tag_sTaskBody_VDES *epd)
{
    tTailControllerTaskBody_eBody_main( );
}
/* eTailController : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eBody */
static const struct tag_sTaskBody_VMT tTailControllerTaskBody_eBody_MT = {
    tTailControllerTaskBody_eBody_main_skel,
};
/* eTailController : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tTailControllerTaskBody_INIB tTailControllerTaskBody_SINGLE_CELL_INIB = 
{
    /* call port #_CP_# */ 
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    106,                                     /* tailAngleStop */
    60,                                      /* tailAngleDrive */
    2.5,                                     /* kp */
    60,                                      /* maxPwm */
    -60,                                     /* minPwm */
};
/* ���� CB #_CB_# */
struct tag_tTailControllerTaskBody_CB tTailControllerTaskBody_SINGLE_CELL_CB;
/* �������ǥ�������ץ� #_EPD_# */
const struct tag_tTailControllerTaskBody_eBody_DES TailControllerTaskBody_eBody_des = {
    &tTailControllerTaskBody_eBody_MT,
    &tTailControllerTaskBody_SINGLE_CELL_CB,       /* CB */
};
/* eTailController : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tTailControllerTaskBody_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
