/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tSensorPort_tecsgen.h"

#include "tSensorPort_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eSensorPort : omitted by entry port optimize */
/* ������������ȥ�ؿ� #_EPSF_# */
/* eSensorPort : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eSensorPort : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */




/* �ƤӸ����� #_CPA_# */




/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tSensorPort_INIB tSensorPort_INIB_tab[] = {
    /* cell: tSensorPort_CB_tab[0]:  GyroSensor_SensorPort id=1 */
    {
        /* call port #_CP_# */ 
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        0,                                       /* portNumber */
    },
    /* cell: tSensorPort_CB_tab[1]:  SonicSensor_SensorPort id=2 */
    {
        /* call port #_CP_# */ 
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* portNumber */
    },
    /* cell: tSensorPort_CB_tab[2]:  LightSensor_SensorPort id=3 */
    {
        /* call port #_CP_# */ 
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        2,                                       /* portNumber */
    },
    /* cell: tSensorPort_CB_tab[3]:  TouchSensor_SensorPort id=4 */
    {
        /* call port #_CP_# */ 
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        3,                                       /* portNumber */
    },
};
/* �������ǥ�������ץ� #_EPD_# */
/* eSensorPort : omitted by entry port optimize */
/* eSensorPort : omitted by entry port optimize */
/* eSensorPort : omitted by entry port optimize */
/* eSensorPort : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tSensorPort_CB_initialize()
{
    tSensorPort_CB	*p_cb;
	int		i;
	FOREACH_CELL(i,p_cb)
		SET_CB_INIB_POINTER(i,p_cb)
		INITIALIZE_CB(p_cb)
	END_FOREACH_CELL
}
