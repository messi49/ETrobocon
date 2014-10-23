/*
 * ���Υե������ tecsgen �ˤ��ƥ�ץ졼�ȤȤ��Ƽ�ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥ��տޤ���Ƥ��ޤ���
 * tecsgen �κƼ¹Ԥˤ���񤭤���Ƥ��ޤ����ᡢ�̾�
 *   gen/tTailControllerTaskBody_template.c => src/tTailControllerTaskBody.c
 * �Τ褦��̾��, �ե�������ѹ����Ƥ��齤�����ޤ�
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ���� #[</...>]# �ǰϤޤ줿�����Ȥ��Խ����ʤ��Ǥ�������
 * tecsmerge �ˤ��ޡ����˻��Ѥ���ޤ�
 *
 * °�����������ޥ��� #_CAAM_#
 * tailAngleStop    int32_t          ATTR_tailAngleStop
 * tailAngleDrive   int32_t          ATTR_tailAngleDrive
 * kp               float32_t        ATTR_kp         
 * maxPwm           int8_t           ATTR_maxPwm     
 * minPwm           int8_t           ATTR_minPwm     
 * targetAngle      int32_t          VAR_targetAngle 
 *
 * �ƤӸ��ؿ� #_TCPF_#
 * require port : signature: sKernel context: task
 *   ER             sleep( );
 *   ER             sleepTimeout( TMO timeout );
 *   ER             delay( RELTIM delayTime );
 *   ER             exitTask( );
 *   ER             getTaskId( ID* p_taskId );
 *   ER             rotateReadyQueue( PRI taskPriority );
 *   ER             getTime( SYSTIM* p_systemTime );
 *   ER             getMicroTime( SYSUTM* p_systemMicroTime );
 *   ER             lockCpu( );
 *   ER             unlockCpu( );
 *   ER             disableDispatch( );
 *   ER             enableDispatch( );
 *   ER             disableTaskException( );
 *   ER             enableTaskException( );
 *   ER             changeInterruptPriorityMask( PRI interruptPriority );
 *   ER             getInterruptPriorityMask( PRI* p_interruptPriority );
 *   ER             exitKernel( );
 *   bool_t         senseContext( );
 *   bool_t         senseLock( );
 *   bool_t         senseDispatch( );
 *   bool_t         senseDispatchPendingState( );
 *   bool_t         senseKernel( );
 * call port : cTailMotor  signature: sMotor context: task
 *   void           cTailMotor_setPWM( int8_t pwm, bool_t brakeMode );
 *   void           cTailMotor_setRevolution( int32_t revolution );
 *   void           cTailMotor_getRevolution( int32_t* revolution );
 *
 * #[</PREAMBLE>]# */

/* �ץ�ȥ�����������ѿ�������򤳤��˽񤭤ޤ� #_PAC_# */
#include "tTailControllerTaskBody_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* �������ؿ� #_TEPF_# */
/* #[<ENTRY_PORT>]# eBody
 * entry port: eBody
 * signature:  sTaskBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eBody_main
 * name:         eBody_main
 * global_name:  tTailControllerTaskBody_eBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eBody_main()
{
}

/* #[<ENTRY_PORT>]# eTailController
 * entry port: eTailController
 * signature:  sTailController
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eTailController_setAngle
 * name:         eTailController_setAngle
 * global_name:  tTailControllerTaskBody_eTailController_setAngle
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eTailController_setAngle(int32_t angle)
{
}

/* #[<ENTRY_FUNC>]# eTailController_getAngle
 * name:         eTailController_getAngle
 * global_name:  tTailControllerTaskBody_eTailController_getAngle
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eTailController_getAngle(int32_t* angle)
{
}

/* #[<ENTRY_FUNC>]# eTailController_signalStop
 * name:         eTailController_signalStop
 * global_name:  tTailControllerTaskBody_eTailController_signalStop
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eTailController_signalStop()
{
}

/* #[<ENTRY_FUNC>]# eTailController_signalStart
 * name:         eTailController_signalStart
 * global_name:  tTailControllerTaskBody_eTailController_signalStart
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eTailController_signalStart()
{
}

/* #[<ENTRY_FUNC>]# eTailController_calibrate
 * name:         eTailController_calibrate
 * global_name:  tTailControllerTaskBody_eTailController_calibrate
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eTailController_calibrate()
{
}

/* #[<POSTAMBLE>]#
 *   �����겼����������ؿ���񤭤ޤ�
 * #[</POSTAMBLE>]#*/
