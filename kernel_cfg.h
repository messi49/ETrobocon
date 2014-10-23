/* kernel_cfg.h */
#ifndef TOPPERS_KERNEL_CFG_H
#define TOPPERS_KERNEL_CFG_H

#define TNUM_TSKID	8
#define TNUM_SEMID	4
#define TNUM_FLGID	0
#define TNUM_DTQID	0
#define TNUM_PDQID	0
#define TNUM_MBXID	0
#define TNUM_MPFID	0
#define TNUM_CYCID	8
#define TNUM_ALMID	1

#define TSKID_tTask_ConnectBluetoothTask	1
#define TSKID_tTask_StarterTask	2
#define TSKID_tTask_GetCommandTask	3
#define TSKID_tTask_LogTask_Task	4
#define TSKID_tTask_TailControllerTask_Task	5
#define TSKID_tTask_BalancerTask_Task	6
#define TSKID_tTask_LinetracerTask_Task	7
#define TSKID_tTask_GetLogTask_Task	8
#define SEMID_tSemaphore_BluetoothSemapohre	1
#define SEMID_tSemaphore_StartSemaphore	2
#define SEMID_tSemaphore_SerialPort1_ReceiveSemaphore	3
#define SEMID_tSemaphore_SerialPort1_SendSemaphore	4
#define CYCHDLRID_tCyclicHandler_CheckNXTButton	1
#define CYCHDLRID_tCyclicHandler_AVR_CyclicAVR	2
#define CYCHDLRID_tCyclicHandler_Button_ButtonUpdate	3
#define CYCHDLRID_tCyclicHandler_RotaryEncoder_CyclicMotor	4
#define CYCHDLRID_tCyclicHandler_TailControllerTask_CyclicHandler	5
#define CYCHDLRID_tCyclicHandler_BalancerTask_CyclicHandler	6
#define CYCHDLRID_tCyclicHandler_LinetracerTask_CyclicHandler	7
#define CYCHDLRID_tCyclicHandler_GetLogTask_CyclicHandler	8
#define ALMHDLRID_tAlarmHandler_Bluetooth_AlarmTimeOut	1

#endif /* TOPPERS_KERNEL_CFG_H */

