/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tTWIBody_tecsgen.h"

#include "tTWIBody_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eTWI : omitted by entry port optimize */
/* eiInterruptBody */
struct tag_tTWIBody_eiInterruptBody_DES {
    const struct tag_siHandlerBody_VMT *vmt;
    tTWIBody_IDX  idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eTWI : omitted by entry port optimize */
/* eiInterruptBody */
void           tTWIBody_eiInterruptBody_main_skel( struct tag_siHandlerBody_VDES *epd)
{
    tTWIBody_eiInterruptBody_main( );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eTWI : omitted by entry port optimize */
/* eiInterruptBody */
static const struct tag_siHandlerBody_VMT tTWIBody_eiInterruptBody_MT = {
    tTWIBody_eiInterruptBody_main_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tTWIBody_INIB tTWIBody_SINGLE_CELL_INIB = 
{
    /* attribute(RO) */ 
    (((48000000/400000L)/2)-3),              /* clockDivisor */
};
/* ���� CB #_CB_# */
struct tag_tTWIBody_CB tTWIBody_SINGLE_CELL_CB;
/* �������ǥ�������ץ� #_EPD_# */
/* eTWI : omitted by entry port optimize */
const struct tag_tTWIBody_eiInterruptBody_DES AVR_TWI_TWIBody_eiInterruptBody_des = {
    &tTWIBody_eiInterruptBody_MT,
    &tTWIBody_SINGLE_CELL_CB,       /* CB */
};
/* CB ����������� #_CIC_# */
void
tTWIBody_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
