/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tLogTaskMain_tecsgen.h"

#include "tLogTaskMain_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eLogTaskBody */
struct tag_tLogTaskMain_eLogTaskBody_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tLogTaskMain_IDX  idx;
};

/* eLogTask : omitted by entry port optimize */
/* ������������ȥ�ؿ� #_EPSF_# */
/* eLogTaskBody */
void           tLogTaskMain_eLogTaskBody_main_skel( struct tag_sTaskBody_VDES *epd)
{
    tLogTaskMain_eLogTaskBody_main( );
}
/* eLogTask : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eLogTaskBody */
static const struct tag_sTaskBody_VMT tLogTaskMain_eLogTaskBody_MT = {
    tLogTaskMain_eLogTaskBody_main_skel,
};
/* eLogTask : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tLogTaskMain_INIB tLogTaskMain_SINGLE_CELL_INIB = 
{
    /* call port #_CP_# */ 
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    10,                                      /* interval */
    1,                                       /* flushWait */
};
/* �������ǥ�������ץ� #_EPD_# */
const struct tag_tLogTaskMain_eLogTaskBody_DES LogTask_LogTaskMain_eLogTaskBody_des = {
    &tLogTaskMain_eLogTaskBody_MT,
    &tLogTaskMain_SINGLE_CELL_INIB,     /* INIB */
};
/* eLogTask : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tLogTaskMain_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
