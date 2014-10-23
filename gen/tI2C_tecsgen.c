/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tI2C_tecsgen.h"

#include "tI2C_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eI2C : omitted by entry port optimize */
/* ������������ȥ�ؿ� #_EPSF_# */
/* eI2C : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eI2C : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
uint8_t tI2C_SonicSensor_I2C_CB_deviceAddress_INIT[3];
I2CPT tI2C_SonicSensor_I2C_CB_partialTransaction_INIT[3];
/* ���� INIB #_INIB_# */
tI2C_INIB tI2C_INIB_tab[] = {
    /* cell: tI2C_CB_tab[0]:  SonicSensor_I2C id=1 */
    {
        /* attribute(RO) */ 
        1,                                       /* portNumber */
        0xFFFA0000,                              /* TimerBase */
        tI2C_SonicSensor_I2C_CB_deviceAddress_INIT, /* deviceAddress */
        tI2C_SonicSensor_I2C_CB_partialTransaction_INIT, /* partialTransaction */
    },
};
/* ���� CB #_CB_# */
struct tag_tI2C_CB tI2C_CB_tab[1];
/* �������ǥ�������ץ� #_EPD_# */
/* eI2C : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tI2C_CB_initialize()
{
    tI2C_CB	*p_cb;
	int		i;
	FOREACH_CELL(i,p_cb)
		SET_CB_INIB_POINTER(i,p_cb)
		INITIALIZE_CB(p_cb)
	END_FOREACH_CELL
}
