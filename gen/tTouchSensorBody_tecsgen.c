/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tTouchSensorBody_tecsgen.h"

#include "tTouchSensorBody_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eSensor : omitted by entry port optimize */
/* eiSensorDriver */
struct tag_tTouchSensorBody_eiSensorDriver_DES {
    const struct tag_siSensorDriver_VMT *vmt;
    int           idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eSensor : omitted by entry port optimize */
/* eiSensorDriver */
void           tTouchSensorBody_eiSensorDriver_initialize_skel( struct tag_siSensorDriver_VDES *epd)
{
    struct tag_tTouchSensorBody_eiSensorDriver_DES *lepd
        = (struct tag_tTouchSensorBody_eiSensorDriver_DES *)epd;
    tTouchSensorBody_eiSensorDriver_initialize( lepd->idx );
}
void           tTouchSensorBody_eiSensorDriver_i2cInterruptBody_skel( struct tag_siSensorDriver_VDES *epd, uint32_t inputs)
{
    struct tag_tTouchSensorBody_eiSensorDriver_DES *lepd
        = (struct tag_tTouchSensorBody_eiSensorDriver_DES *)epd;
    tTouchSensorBody_eiSensorDriver_i2cInterruptBody( lepd->idx, inputs );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eSensor : omitted by entry port optimize */
/* eiSensorDriver */
static const struct tag_siSensorDriver_VMT tTouchSensorBody_eiSensorDriver_MT = {
    tTouchSensorBody_eiSensorDriver_initialize_skel,
    tTouchSensorBody_eiSensorDriver_i2cInterruptBody_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* �������ǥ�������ץ� #_EPD_# */
/* eSensor : omitted by entry port optimize */
const struct tag_tTouchSensorBody_eiSensorDriver_DES TouchSensor_TouchSensorBody_eiSensorDriver_des = {
    &tTouchSensorBody_eiSensorDriver_MT,
    0,
};
/* CB ����������� #_CIC_# */
void
tTouchSensorBody_CB_initialize()
{
    tTouchSensorBody_CB	*p_cb;
	int		i;
	FOREACH_CELL(i,p_cb)
		SET_CB_INIB_POINTER(i,p_cb)
		INITIALIZE_CB(p_cb)
	END_FOREACH_CELL
}
