/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tSPIBody_tecsgen.h"

#include "tSPIBody_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eSPI : omitted by entry port optimize */
/* eiInterruptBody */
struct tag_tSPIBody_eiInterruptBody_DES {
    const struct tag_siHandlerBody_VMT *vmt;
    tSPIBody_IDX  idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eSPI : omitted by entry port optimize */
/* eiInterruptBody */
void           tSPIBody_eiInterruptBody_main_skel( struct tag_siHandlerBody_VDES *epd)
{
    tSPIBody_eiInterruptBody_main( );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eSPI : omitted by entry port optimize */
/* eiInterruptBody */
static const struct tag_siHandlerBody_VMT tSPIBody_eiInterruptBody_MT = {
    tSPIBody_eiInterruptBody_main_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� CB #_CB_# */
struct tag_tSPIBody_CB tSPIBody_SINGLE_CELL_CB;
/* �������ǥ�������ץ� #_EPD_# */
/* eSPI : omitted by entry port optimize */
const struct tag_tSPIBody_eiInterruptBody_DES Display_SPI_SPIBody_eiInterruptBody_des = {
    &tSPIBody_eiInterruptBody_MT,
    &tSPIBody_SINGLE_CELL_CB,       /* CB */
};
/* CB ����������� #_CIC_# */
void
tSPIBody_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
