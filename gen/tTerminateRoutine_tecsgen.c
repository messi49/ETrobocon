/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tTerminateRoutine_tecsgen.h"

#include "tTerminateRoutine_factory.h"



/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */
extern struct tag_sTerminateRoutineBody_VDES AVR_AVRBody_eTerminate_des;

extern struct tag_sTerminateRoutineBody_VDES Bluetooth_BluetoothBody_eTerminate_des;

extern struct tag_sTerminateRoutineBody_VDES SIOPortTarget_SIOPortNXT_eTerminate_des;

extern struct tag_sTerminateRoutineBody_VDES SonicSensor_SonicSensorBody_eTerminate_des;

extern struct tag_sTerminateRoutineBody_VDES LightSensor_LightSensorBody_eTerminate_des;

extern struct tag_sTerminateRoutineBody_VDES RotaryEncoder_RotaryEncoderBody_eTerminate_des;

extern struct tag_sTerminateRoutineBody_VDES Display_DisplayBody_eTerminate_des;

/* �ƤӸ����� #_CPA_# */







/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tTerminateRoutine_INIB tTerminateRoutine_INIB_tab[] = {
    /* cell: tTerminateRoutine_CB_tab[0]:  AVR_TerminateAVR id=1 */
    {
        /* call port #_CP_# */ 
        &AVR_AVRBody_eTerminate_des,             /* cTerminateRoutine #_CCP1_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tTerminateRoutine_CB_tab[1]:  Bluetooth_TerminateBluetooth id=2 */
    {
        /* call port #_CP_# */ 
        &Bluetooth_BluetoothBody_eTerminate_des, /* cTerminateRoutine #_CCP1_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tTerminateRoutine_CB_tab[2]:  SIOPortTarget_TerminateSIO id=3 */
    {
        /* call port #_CP_# */ 
        &SIOPortTarget_SIOPortNXT_eTerminate_des, /* cTerminateRoutine #_CCP1_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tTerminateRoutine_CB_tab[3]:  SonicSensor_TerminateSonicSensor id=4 */
    {
        /* call port #_CP_# */ 
        &SonicSensor_SonicSensorBody_eTerminate_des, /* cTerminateRoutine #_CCP1_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tTerminateRoutine_CB_tab[4]:  LightSensor_TerminateLightSensor id=5 */
    {
        /* call port #_CP_# */ 
        &LightSensor_LightSensorBody_eTerminate_des, /* cTerminateRoutine #_CCP1_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tTerminateRoutine_CB_tab[5]:  RotaryEncoder_TerminateMotor id=6 */
    {
        /* call port #_CP_# */ 
        &RotaryEncoder_RotaryEncoderBody_eTerminate_des, /* cTerminateRoutine #_CCP1_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tTerminateRoutine_CB_tab[6]:  Display_TerminateDisplay id=7 */
    {
        /* call port #_CP_# */ 
        &Display_DisplayBody_eTerminate_des,     /* cTerminateRoutine #_CCP1_# */
        /* entry port #_EP_# */ 
    },
};
/* �������ǥ�������ץ� #_EPD_# */
/* CB ����������� #_CIC_# */
void
tTerminateRoutine_CB_initialize()
{
    tTerminateRoutine_CB	*p_cb;
	int		i;
	FOREACH_CELL(i,p_cb)
		SET_CB_INIB_POINTER(i,p_cb)
		INITIALIZE_CB(p_cb)
	END_FOREACH_CELL
}
