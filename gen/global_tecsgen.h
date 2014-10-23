/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef GLOBAL_TECSGEN_H
#define GLOBAL_TECSGEN_H


/* import_C により import されるヘッダ #_IMP_# */
#include "tecs_kernel.h"
#include "t_syslog.h"
/**/

#ifndef TOPPERS_MACRO_ONLY

typedef struct {
    uint8_t  power;
    uint8_t  pwm_frequency;
    int8_t   output_percent[4];
    uint8_t  output_mode;
    uint8_t  input_power;
}  TOAVR;
typedef struct {
    uint16_t adc_value[4];
    uint16_t buttons;
    uint16_t battery_is_AA;
    uint16_t battery_mV;
    uint8_t  avr_fw_version_major;
    uint8_t  avr_fw_version_minor;
}  FROMAVR;
struct i2cPartialTransaction {
                uint8_t        start;
                uint8_t        restart;
                uint8_t        stop;
                uint8_t        tx;
                uint8_t        lastPT;
                uint16_t       size;
                uint8_t*       data;
};
typedef struct i2cPartialTransaction  I2CPT;
typedef struct {
    uint_t   reacnt;
    uint_t   wricnt;
}  T_SERIAL_RPOR;
 extern void tTask_CB_initialize();
 extern void tInitializeRoutine_CB_initialize();
 extern void tTerminateRoutine_CB_initialize();
 extern void tISR_CB_initialize();
 extern void tConfigInterrupt_CB_initialize();
 extern void tCyclicHandler_CB_initialize();
 extern void tCyclicTaskActivator_CB_initialize();
 extern void tAlarmHandler_CB_initialize();
 extern void tSemaphore_CB_initialize();
 extern void tKernel_CB_initialize();
 extern void tTWIBody_CB_initialize();
 extern void tAVRBody_CB_initialize();
 extern void tMotor_CB_initialize();
 extern void tRotaryEncoderBody_CB_initialize();
 extern void tSensorPort_CB_initialize();
 extern void tI2C_CB_initialize();
 extern void tLightSensorBody_CB_initialize();
 extern void tGyroSensorBody_CB_initialize();
 extern void tTouchSensorBody_CB_initialize();
 extern void tSonicSensorBody_CB_initialize();
 extern void tSensorDriverBody_CB_initialize();
 extern void tSPIBody_CB_initialize();
 extern void tLCD_CB_initialize();
 extern void tDisplayBody_CB_initialize();
 extern void tButtonBody_CB_initialize();
 extern void tBattery_CB_initialize();
 extern void tSoundBody_CB_initialize();
 extern void tBluetoothBody_CB_initialize();
 extern void tConnectBluetooth_CB_initialize();
 extern void tBalancerBody_CB_initialize();
 extern void tCheckNXTButtonBody_CB_initialize();
 extern void tSIOPortMindstormsNXT_CB_initialize();
 extern void tPutLogMindstormsNXT_CB_initialize();
 extern void tSerialPortMain_CB_initialize();
 extern void tSysLog_CB_initialize();
 extern void tLogTaskMain_CB_initialize();
 extern void tPrintDisplayTaskBody_CB_initialize();
 extern void tPIDControllerTaskBody_CB_initialize();
 extern void tTailControllerTaskBody_CB_initialize();
 extern void tBalancerTaskBody_CB_initialize();
 extern void tLinetracerTaskBody_CB_initialize();
 extern void tButtonSetTaskBody_CB_initialize();
 extern void tGetLogTaskBody_CB_initialize();
 extern void tStarterTaskBody_CB_initialize();
 extern void tGetCommandTaskBody_CB_initialize();

#define INITIALZE_TECSGEN() \
 	tTask_CB_initialize();\
 	tInitializeRoutine_CB_initialize();\
 	tTerminateRoutine_CB_initialize();\
 	tISR_CB_initialize();\
 	tConfigInterrupt_CB_initialize();\
 	tCyclicHandler_CB_initialize();\
 	tCyclicTaskActivator_CB_initialize();\
 	tAlarmHandler_CB_initialize();\
 	tSemaphore_CB_initialize();\
 	tKernel_CB_initialize();\
 	tTWIBody_CB_initialize();\
 	tAVRBody_CB_initialize();\
 	tMotor_CB_initialize();\
 	tRotaryEncoderBody_CB_initialize();\
 	tSensorPort_CB_initialize();\
 	tI2C_CB_initialize();\
 	tLightSensorBody_CB_initialize();\
 	tGyroSensorBody_CB_initialize();\
 	tTouchSensorBody_CB_initialize();\
 	tSonicSensorBody_CB_initialize();\
 	tSensorDriverBody_CB_initialize();\
 	tSPIBody_CB_initialize();\
 	tLCD_CB_initialize();\
 	tDisplayBody_CB_initialize();\
 	tButtonBody_CB_initialize();\
 	tBattery_CB_initialize();\
 	tSoundBody_CB_initialize();\
 	tBluetoothBody_CB_initialize();\
 	tConnectBluetooth_CB_initialize();\
 	tBalancerBody_CB_initialize();\
 	tCheckNXTButtonBody_CB_initialize();\
 	tSIOPortMindstormsNXT_CB_initialize();\
 	tPutLogMindstormsNXT_CB_initialize();\
 	tSerialPortMain_CB_initialize();\
 	tSysLog_CB_initialize();\
 	tLogTaskMain_CB_initialize();\
 	tPrintDisplayTaskBody_CB_initialize();\
 	tPIDControllerTaskBody_CB_initialize();\
 	tTailControllerTaskBody_CB_initialize();\
 	tBalancerTaskBody_CB_initialize();\
 	tLinetracerTaskBody_CB_initialize();\
 	tButtonSetTaskBody_CB_initialize();\
 	tGetLogTaskBody_CB_initialize();\
 	tStarterTaskBody_CB_initialize();\
 	tGetCommandTaskBody_CB_initialize();\
/* INITIALIZE_TECSGEN terminator */

#endif /* TOPPERS_MACRO_ONLY */

#define NXT_PORT_A     ((const uint8_t)0)
#define NXT_PORT_B     ((const uint8_t)1)
#define NXT_PORT_C     ((const uint8_t)2)
#define NXT_PORT_S1    ((const uint8_t)0)
#define NXT_PORT_S2    ((const uint8_t)1)
#define NXT_PORT_S3    ((const uint8_t)2)
#define NXT_PORT_S4    ((const uint8_t)3)
#define NXT_AVR_ADDRESS ((const uint8_t)1)
#define NXT_AVR_N_INPUTS ((const uint8_t)4)
#define NXT_AVR_N_OUTPUTS ((const uint8_t)4)
#define MOTOR_A0       ((const uint32_t)15)
#define MOTOR_B0       ((const uint32_t)26)
#define MOTOR_C0       ((const uint32_t)0)
#define MOTOR_A1       ((const uint32_t)1)
#define MOTOR_B1       ((const uint32_t)9)
#define MOTOR_C1       ((const uint32_t)8)
#define MOTOR_PIN_MASK ((const uint32_t)67142403)
#define MOTOR_INTERRUPT_PINS ((const uint32_t)67141633)
#define SIO_RDY_SND    ((const uint32_t)1)
#define SIO_RDY_RCV    ((const uint32_t)2)
#define LogTaskStackSize ((const uint_t)512)
#define IOCTL_NULL     ((const uint_t)0)
#define IOCTL_ECHO     ((const uint_t)0x0001)
#define IOCTL_CRLF     ((const uint_t)0x0010)
#define IOCTL_FCSND    ((const uint_t)0x0100)
#define IOCTL_FCANY    ((const uint_t)0x0200)
#define IOCTL_FCRCV    ((const uint_t)0x0400)

#endif /* GLOBAL_TECSGEN_H */
