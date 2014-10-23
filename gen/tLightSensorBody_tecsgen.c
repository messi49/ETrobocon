/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tLightSensorBody_tecsgen.h"

#include "tLightSensorBody_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eSensor : omitted by entry port optimize */
/* eSensorControl : omitted by entry port optimize */
/* eiSensorDriver */
struct tag_tLightSensorBody_eiSensorDriver_DES {
    const struct tag_siSensorDriver_VMT *vmt;
    int           idx;
};

/* eTerminate */
struct tag_tLightSensorBody_eTerminate_DES {
    const struct tag_sTerminateRoutineBody_VMT *vmt;
    int           idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eSensor : omitted by entry port optimize */
/* eSensorControl : omitted by entry port optimize */
/* eiSensorDriver */
void           tLightSensorBody_eiSensorDriver_initialize_skel( struct tag_siSensorDriver_VDES *epd)
{
    struct tag_tLightSensorBody_eiSensorDriver_DES *lepd
        = (struct tag_tLightSensorBody_eiSensorDriver_DES *)epd;
    tLightSensorBody_eiSensorDriver_initialize( lepd->idx );
}
void           tLightSensorBody_eiSensorDriver_i2cInterruptBody_skel( struct tag_siSensorDriver_VDES *epd, uint32_t inputs)
{
    struct tag_tLightSensorBody_eiSensorDriver_DES *lepd
        = (struct tag_tLightSensorBody_eiSensorDriver_DES *)epd;
    tLightSensorBody_eiSensorDriver_i2cInterruptBody( lepd->idx, inputs );
}
/* eTerminate */
void           tLightSensorBody_eTerminate_main_skel( struct tag_sTerminateRoutineBody_VDES *epd)
{
    struct tag_tLightSensorBody_eTerminate_DES *lepd
        = (struct tag_tLightSensorBody_eTerminate_DES *)epd;
    tLightSensorBody_eTerminate_main( lepd->idx );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eSensor : omitted by entry port optimize */
/* eSensorControl : omitted by entry port optimize */
/* eiSensorDriver */
static const struct tag_siSensorDriver_VMT tLightSensorBody_eiSensorDriver_MT = {
    tLightSensorBody_eiSensorDriver_initialize_skel,
    tLightSensorBody_eiSensorDriver_i2cInterruptBody_skel,
};
/* eTerminate */
static const struct tag_sTerminateRoutineBody_VMT tLightSensorBody_eTerminate_MT = {
    tLightSensorBody_eTerminate_main_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* �������ǥ�������ץ� #_EPD_# */
/* eSensor : omitted by entry port optimize */
/* eSensorControl : omitted by entry port optimize */
const struct tag_tLightSensorBody_eiSensorDriver_DES LightSensor_LightSensorBody_eiSensorDriver_des = {
    &tLightSensorBody_eiSensorDriver_MT,
    0,
};
const struct tag_tLightSensorBody_eTerminate_DES LightSensor_LightSensorBody_eTerminate_des = {
    &tLightSensorBody_eTerminate_MT,
    0,
};
/* CB ����������� #_CIC_# */
void
tLightSensorBody_CB_initialize()
{
    tLightSensorBody_CB	*p_cb;
	int		i;
	FOREACH_CELL(i,p_cb)
		SET_CB_INIB_POINTER(i,p_cb)
		INITIALIZE_CB(p_cb)
	END_FOREACH_CELL
}
