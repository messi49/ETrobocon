/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tGyroSensorBody_tecsgen.h"

#include "tGyroSensorBody_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eSensor : omitted by entry port optimize */
/* eiSensorDriver */
struct tag_tGyroSensorBody_eiSensorDriver_DES {
    const struct tag_siSensorDriver_VMT *vmt;
    int           idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eSensor : omitted by entry port optimize */
/* eiSensorDriver */
void           tGyroSensorBody_eiSensorDriver_initialize_skel( struct tag_siSensorDriver_VDES *epd)
{
    struct tag_tGyroSensorBody_eiSensorDriver_DES *lepd
        = (struct tag_tGyroSensorBody_eiSensorDriver_DES *)epd;
    tGyroSensorBody_eiSensorDriver_initialize( lepd->idx );
}
void           tGyroSensorBody_eiSensorDriver_i2cInterruptBody_skel( struct tag_siSensorDriver_VDES *epd, uint32_t inputs)
{
    struct tag_tGyroSensorBody_eiSensorDriver_DES *lepd
        = (struct tag_tGyroSensorBody_eiSensorDriver_DES *)epd;
    tGyroSensorBody_eiSensorDriver_i2cInterruptBody( lepd->idx, inputs );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eSensor : omitted by entry port optimize */
/* eiSensorDriver */
static const struct tag_siSensorDriver_VMT tGyroSensorBody_eiSensorDriver_MT = {
    tGyroSensorBody_eiSensorDriver_initialize_skel,
    tGyroSensorBody_eiSensorDriver_i2cInterruptBody_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* �������ǥ�������ץ� #_EPD_# */
/* eSensor : omitted by entry port optimize */
const struct tag_tGyroSensorBody_eiSensorDriver_DES GyroSensor_GyroSensorBody_eiSensorDriver_des = {
    &tGyroSensorBody_eiSensorDriver_MT,
    0,
};
/* CB ����������� #_CIC_# */
void
tGyroSensorBody_CB_initialize()
{
    tGyroSensorBody_CB	*p_cb;
	int		i;
	FOREACH_CELL(i,p_cb)
		SET_CB_INIB_POINTER(i,p_cb)
		INITIALIZE_CB(p_cb)
	END_FOREACH_CELL
}
