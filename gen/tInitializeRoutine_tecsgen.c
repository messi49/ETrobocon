/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tInitializeRoutine_tecsgen.h"

#include "tInitializeRoutine_factory.h"



/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */
extern struct tag_sInitializeRoutineBody_VDES AVR_AVRBody_eInitialize_des;

extern struct tag_sInitializeRoutineBody_VDES Bluetooth_BluetoothBody_eInitialize_des;

extern struct tag_sInitializeRoutineBody_VDES SIOPortTarget_SIOPortNXT_eInitialize_des;

extern struct tag_sInitializeRoutineBody_VDES SensorDriver_SensorDriverBody_eInitialize_des;

extern struct tag_sInitializeRoutineBody_VDES RotaryEncoder_RotaryEncoderBody_eInitialize_des;

extern struct tag_sInitializeRoutineBody_VDES Display_DisplayBody_eInitialize_des;

extern struct tag_sInitializeRoutineBody_VDES Sound_SoundBody_eInitialize_des;

extern struct tag_sInitializeRoutineBody_VDES Balancer_BalancerBody_eInitialize_des;

/* �ƤӸ����� #_CPA_# */








/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tInitializeRoutine_INIB tInitializeRoutine_INIB_tab[] = {
    /* cell: tInitializeRoutine_CB_tab[0]:  AVR_InitializeAVR id=1 */
    {
        /* call port #_CP_# */ 
        &AVR_AVRBody_eInitialize_des,            /* cInitializeRoutine #_CCP1_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tInitializeRoutine_CB_tab[1]:  Bluetooth_InitializeBluetooth id=2 */
    {
        /* call port #_CP_# */ 
        &Bluetooth_BluetoothBody_eInitialize_des, /* cInitializeRoutine #_CCP1_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tInitializeRoutine_CB_tab[2]:  SIOPortTarget_InitializeSIO id=3 */
    {
        /* call port #_CP_# */ 
        &SIOPortTarget_SIOPortNXT_eInitialize_des, /* cInitializeRoutine #_CCP1_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tInitializeRoutine_CB_tab[3]:  SensorDriver_InitializeSensor id=4 */
    {
        /* call port #_CP_# */ 
        &SensorDriver_SensorDriverBody_eInitialize_des, /* cInitializeRoutine #_CCP1_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tInitializeRoutine_CB_tab[4]:  RotaryEncoder_InitializeMotor id=5 */
    {
        /* call port #_CP_# */ 
        &RotaryEncoder_RotaryEncoderBody_eInitialize_des, /* cInitializeRoutine #_CCP1_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tInitializeRoutine_CB_tab[5]:  Display_InitializeDisplay id=6 */
    {
        /* call port #_CP_# */ 
        &Display_DisplayBody_eInitialize_des,    /* cInitializeRoutine #_CCP1_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tInitializeRoutine_CB_tab[6]:  Sound_InitialiseSound id=7 */
    {
        /* call port #_CP_# */ 
        &Sound_SoundBody_eInitialize_des,        /* cInitializeRoutine #_CCP1_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tInitializeRoutine_CB_tab[7]:  Balancer_InitializeBalancer id=8 */
    {
        /* call port #_CP_# */ 
        &Balancer_BalancerBody_eInitialize_des,  /* cInitializeRoutine #_CCP1_# */
        /* entry port #_EP_# */ 
    },
};
/* �������ǥ�������ץ� #_EPD_# */
/* CB ����������� #_CIC_# */
void
tInitializeRoutine_CB_initialize()
{
    tInitializeRoutine_CB	*p_cb;
	int		i;
	FOREACH_CELL(i,p_cb)
		SET_CB_INIB_POINTER(i,p_cb)
		INITIALIZE_CB(p_cb)
	END_FOREACH_CELL
}
