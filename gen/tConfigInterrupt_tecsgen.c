/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tConfigInterrupt_tecsgen.h"

#include "tConfigInterrupt_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eConfigInterrupt : omitted by entry port optimize */
/* ������������ȥ�ؿ� #_EPSF_# */
/* eConfigInterrupt : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eConfigInterrupt : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */






/* �ƤӸ����� #_CPA_# */






/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tConfigInterrupt_INIB tConfigInterrupt_INIB_tab[] = {
    /* cell: tConfigInterrupt_CB_tab[0]:  AVR_TWI_ISRTWI_ConfigInterrupt id=1 */
    {
        /* attribute(RO) */ 
        INTNO_TWI_PID,                           /* interruptNumber */
    },
    /* cell: tConfigInterrupt_CB_tab[1]:  SIOPortTarget_SIOISR_ConfigInterrupt id=2 */
    {
        /* attribute(RO) */ 
        7,                                       /* interruptNumber */
    },
    /* cell: tConfigInterrupt_CB_tab[2]:  SensorDriver_ISRI2C_ConfigInterrupt id=3 */
    {
        /* attribute(RO) */ 
        INTNO_TC0_PID,                           /* interruptNumber */
    },
    /* cell: tConfigInterrupt_CB_tab[3]:  RotaryEncoder_ISRMotor_ConfigInterrupt id=4 */
    {
        /* attribute(RO) */ 
        INTNO_PIOA_PID,                          /* interruptNumber */
    },
    /* cell: tConfigInterrupt_CB_tab[4]:  Display_SPI_ISRSPI_ConfigInterrupt id=5 */
    {
        /* attribute(RO) */ 
        INTNO_SPI_PID,                           /* interruptNumber */
    },
    /* cell: tConfigInterrupt_CB_tab[5]:  Sound_ISRSound_ConfigInterrupt id=6 */
    {
        /* attribute(RO) */ 
        INTNO_SSC_PID,                           /* interruptNumber */
    },
};
/* �������ǥ�������ץ� #_EPD_# */
/* eConfigInterrupt : omitted by entry port optimize */
/* eConfigInterrupt : omitted by entry port optimize */
/* eConfigInterrupt : omitted by entry port optimize */
/* eConfigInterrupt : omitted by entry port optimize */
/* eConfigInterrupt : omitted by entry port optimize */
/* eConfigInterrupt : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tConfigInterrupt_CB_initialize()
{
    tConfigInterrupt_CB	*p_cb;
	int		i;
	FOREACH_CELL(i,p_cb)
		SET_CB_INIB_POINTER(i,p_cb)
		INITIALIZE_CB(p_cb)
	END_FOREACH_CELL
}
