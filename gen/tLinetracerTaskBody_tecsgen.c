/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tLinetracerTaskBody_tecsgen.h"

#include "tLinetracerTaskBody_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eBody */
struct tag_tLinetracerTaskBody_eBody_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tLinetracerTaskBody_IDX  idx;
};

/* eLinetracerControl : omitted by entry port optimize */
/* ������������ȥ�ؿ� #_EPSF_# */
/* eBody */
void           tLinetracerTaskBody_eBody_main_skel( struct tag_sTaskBody_VDES *epd)
{
    tLinetracerTaskBody_eBody_main( );
}
/* eLinetracerControl : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eBody */
static const struct tag_sTaskBody_VMT tLinetracerTaskBody_eBody_MT = {
    tLinetracerTaskBody_eBody_main_skel,
};
/* eLinetracerControl : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tLinetracerTaskBody_INIB tLinetracerTaskBody_SINGLE_CELL_INIB = 
{
    /* call port #_CP_# */ 
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    100,                                     /* maxTurn */
    -100,                                    /* minTurn */
};
/* ���� CB #_CB_# */
struct tag_tLinetracerTaskBody_CB tLinetracerTaskBody_SINGLE_CELL_CB;
/* �������ǥ�������ץ� #_EPD_# */
const struct tag_tLinetracerTaskBody_eBody_DES LinetracerTaskBody_eBody_des = {
    &tLinetracerTaskBody_eBody_MT,
    &tLinetracerTaskBody_SINGLE_CELL_CB,       /* CB */
};
/* eLinetracerControl : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tLinetracerTaskBody_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
