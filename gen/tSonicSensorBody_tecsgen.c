/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tSonicSensorBody_tecsgen.h"

#include "tSonicSensorBody_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eSensor : omitted by entry port optimize */
/* eiSensorDriver */
struct tag_tSonicSensorBody_eiSensorDriver_DES {
    const struct tag_siSensorDriver_VMT *vmt;
    tSonicSensorBody_IDX  idx;
};

/* eTerminate */
struct tag_tSonicSensorBody_eTerminate_DES {
    const struct tag_sTerminateRoutineBody_VMT *vmt;
    tSonicSensorBody_IDX  idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eSensor : omitted by entry port optimize */
/* eiSensorDriver */
void           tSonicSensorBody_eiSensorDriver_initialize_skel( struct tag_siSensorDriver_VDES *epd)
{
    struct tag_tSonicSensorBody_eiSensorDriver_DES *lepd
        = (struct tag_tSonicSensorBody_eiSensorDriver_DES *)epd;
    tSonicSensorBody_eiSensorDriver_initialize( lepd->idx );
}
void           tSonicSensorBody_eiSensorDriver_i2cInterruptBody_skel( struct tag_siSensorDriver_VDES *epd, uint32_t inputs)
{
    struct tag_tSonicSensorBody_eiSensorDriver_DES *lepd
        = (struct tag_tSonicSensorBody_eiSensorDriver_DES *)epd;
    tSonicSensorBody_eiSensorDriver_i2cInterruptBody( lepd->idx, inputs );
}
/* eTerminate */
void           tSonicSensorBody_eTerminate_main_skel( struct tag_sTerminateRoutineBody_VDES *epd)
{
    struct tag_tSonicSensorBody_eTerminate_DES *lepd
        = (struct tag_tSonicSensorBody_eTerminate_DES *)epd;
    tSonicSensorBody_eTerminate_main( lepd->idx );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eSensor : omitted by entry port optimize */
/* eiSensorDriver */
static const struct tag_siSensorDriver_VMT tSonicSensorBody_eiSensorDriver_MT = {
    tSonicSensorBody_eiSensorDriver_initialize_skel,
    tSonicSensorBody_eiSensorDriver_i2cInterruptBody_skel,
};
/* eTerminate */
static const struct tag_sTerminateRoutineBody_VMT tSonicSensorBody_eTerminate_MT = {
    tSonicSensorBody_eTerminate_main_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� CB #_CB_# */
struct tag_tSonicSensorBody_CB tSonicSensorBody_CB_tab[1];
/* �������ǥ�������ץ� #_EPD_# */
/* eSensor : omitted by entry port optimize */
const struct tag_tSonicSensorBody_eiSensorDriver_DES SonicSensor_SonicSensorBody_eiSensorDriver_des = {
    &tSonicSensorBody_eiSensorDriver_MT,
    &tSonicSensorBody_CB_tab[0],     /* CB */
};
const struct tag_tSonicSensorBody_eTerminate_DES SonicSensor_SonicSensorBody_eTerminate_des = {
    &tSonicSensorBody_eTerminate_MT,
    &tSonicSensorBody_CB_tab[0],     /* CB */
};
/* CB ����������� #_CIC_# */
void
tSonicSensorBody_CB_initialize()
{
    tSonicSensorBody_CB	*p_cb;
	int		i;
	FOREACH_CELL(i,p_cb)
		SET_CB_INIB_POINTER(i,p_cb)
		INITIALIZE_CB(p_cb)
	END_FOREACH_CELL
}
