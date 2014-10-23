/*
 *   TOPPERS Software
 *       Toyohashi Open Platform for Embedded Real-Time Systems
 *  
 *   Copyright (C) 2010-2012 by Embedded and Real-Time Systems Laboratory
 *               Graduate School of Information Science, Nagoya Univ., JAPAN
 *  
 *   �嵭����Ԥϡ��ʲ���(1)��(4)�ξ������������˸¤ꡤ�ܥ��եȥ���
 *   �����ܥ��եȥ���������Ѥ�����Τ�ޤࡥ�ʲ�Ʊ���ˤ���ѡ�ʣ������
 *   �ѡ������ۡʰʲ������ѤȸƤ֡ˤ��뤳�Ȥ�̵���ǵ������롥
 *   (1) �ܥ��եȥ������򥽡��������ɤη������Ѥ�����ˤϡ��嵭������
 *       ��ɽ�����������Ѿ�浪��Ӳ�����̵�ݾڵ��꤬�����Τޤޤη��ǥ���
 *       ����������˴ޤޤ�Ƥ��뤳�ȡ�
 *   (2) �ܥ��եȥ������򡤥饤�֥������ʤɡ�¾�Υ��եȥ�������ȯ�˻�
 *       �ѤǤ�����Ǻ����ۤ�����ˤϡ������ۤ�ȼ���ɥ�����ȡ�����
 *       �ԥޥ˥奢��ʤɡˤˡ��嵭�����ɽ�����������Ѿ�浪��Ӳ���
 *       ��̵�ݾڵ����Ǻܤ��뤳�ȡ�
 *   (3) �ܥ��եȥ������򡤵�����Ȥ߹���ʤɡ�¾�Υ��եȥ�������ȯ�˻�
 *       �ѤǤ��ʤ����Ǻ����ۤ�����ˤϡ����Τ����줫�ξ�����������
 *       �ȡ�
 *     (a) �����ۤ�ȼ���ɥ�����ȡ����Ѽԥޥ˥奢��ʤɡˤˡ��嵭����
 *         �ɽ�����������Ѿ�浪��Ӳ�����̵�ݾڵ����Ǻܤ��뤳�ȡ�
 *     (b) �����ۤη��֤��̤�������ˡ�ˤ�äơ�TOPPERS�ץ������Ȥ�
 *         ��𤹤뤳�ȡ�
 *   (4) �ܥ��եȥ����������Ѥˤ��ľ��Ū�ޤ��ϴ���Ū�������뤤���ʤ�»
 *       ������⡤�嵭����Ԥ����TOPPERS�ץ������Ȥ����դ��뤳�ȡ�
 *       �ޤ����ܥ��եȥ������Υ桼���ޤ��ϥ���ɥ桼������Τ����ʤ���
 *       ͳ�˴�Ť����ᤫ��⡤�嵭����Ԥ����TOPPERS�ץ������Ȥ�
 *       ���դ��뤳�ȡ�
 *  
 *   �ܥ��եȥ������ϡ�̵�ݾڤ��󶡤���Ƥ����ΤǤ��롥�嵭����Ԥ�
 *   ���TOPPERS�ץ������Ȥϡ��ܥ��եȥ������˴ؤ��ơ�����λ�����Ū
 *   ���Ф���Ŭ������ޤ�ơ������ʤ��ݾڤ�Ԥ�ʤ����ޤ����ܥ��եȥ���
 *   �������Ѥˤ��ľ��Ū�ޤ��ϴ���Ū�������������ʤ�»���˴ؤ��Ƥ⡤��
 *   ����Ǥ�����ʤ���
 *
 */

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

/* �ץ�ȥ�����������ѿ�������򤳤��˽񤭤ޤ� */
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
	float32_t pwm_f;
	int8_t pwm;
	int32_t rev;

	cTailMotor_getRevolution(&rev);

	pwm_f = (float32_t)(VAR_targetAngle - rev) * ATTR_kp;

	if(pwm_f > (float32_t)ATTR_maxPwm){
		pwm = ATTR_maxPwm;
	} else if(pwm_f < (float32_t)ATTR_minPwm){
		pwm = ATTR_minPwm;
	} else {
		pwm = (int8_t)pwm_f;
	}

	cTailMotor_setPWM(pwm, 1);
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
    if((ATTR_tailAngleDrive <= angle) && (angle <= ATTR_tailAngleStop)){
        VAR_targetAngle = angle;
    }
}

/* #[<ENTRY_FUNC>]# eTailController_getAngle
 * name:         eTailController_getAngle
 * global_name:  tTailControllerTaskBody_eTailController_getAngle
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eTailController_getAngle(int32_t* angle)
{
  *angle = VAR_targetAngle;
}

/* #[<ENTRY_FUNC>]# eTailController_signalStop
 * name:         eTailController_signalStop
 * global_name:  tTailControllerTaskBody_eTailController_signalStop
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eTailController_signalStop()
{
	VAR_targetAngle = ATTR_tailAngleStop; //ATTR_tailAngleStop
}

/* #[<ENTRY_FUNC>]# eTailController_signalStart
 * name:         eTailController_signalStart
 * global_name:  tTailControllerTaskBody_eTailController_signalStart
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eTailController_signalStart()
{
	VAR_targetAngle = ATTR_tailAngleDrive; //ATTR_tailAngleDrive
}

/* #[<ENTRY_FUNC>]# eTailController_calibrate
 * name:         eTailController_calibrate
 * global_name:  tTailControllerTaskBody_eTailController_calibrate
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eTailController_calibrate()
{
	int32_t rev, pre_rev;
	
	cTailMotor_setPWM(ATTR_minPwm, 1); // �������������ղ�ž������

	cTailMotor_getRevolution(&rev);
	do{
		pre_rev = rev;
		delay(10); // fujiya
		cTailMotor_getRevolution(&rev);
	} while(rev != pre_rev); // ��ž������«����ޤ�

	cTailMotor_setPWM(0, 1); // ���
	cTailMotor_setRevolution(0); // ��ž��������
}

/* #[<POSTAMBLE>]#
 *   �����겼����������ؿ���񤭤ޤ�
 * #[</POSTAMBLE>]#*/
