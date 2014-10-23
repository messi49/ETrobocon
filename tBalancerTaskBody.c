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
 *     (b) �����ۤη��֤��̤�������ˡ�ˤ�äơ�TOPPERS�ץ��������Ȥ�
 *         ��𤹤뤳�ȡ�
 *   (4) �ܥ��եȥ����������Ѥˤ��ľ��Ū�ޤ��ϴ���Ū�������뤤���ʤ�»
 *       ������⡤�嵭����Ԥ����TOPPERS�ץ��������Ȥ����դ��뤳�ȡ�
 *       �ޤ����ܥ��եȥ������Υ桼���ޤ��ϥ���ɥ桼������Τ����ʤ���
 *       ͳ�˴�Ť����ᤫ��⡤�嵭����Ԥ����TOPPERS�ץ��������Ȥ�
 *       ���դ��뤳�ȡ�
 *  
 *   �ܥ��եȥ������ϡ�̵�ݾڤ��󶡤���Ƥ����ΤǤ��롥�嵭����Ԥ�
 *   ���TOPPERS�ץ��������Ȥϡ��ܥ��եȥ������˴ؤ��ơ�����λ�����Ū
 *   ���Ф���Ŭ������ޤ�ơ������ʤ��ݾڤ�Ԥ�ʤ����ޤ����ܥ��եȥ���
 *   �������Ѥˤ��ľ��Ū�ޤ��ϴ���Ū�������������ʤ�»���˴ؤ��Ƥ⡤��
 *   ����Ǥ�����ʤ���
 *
 */

/*
 * ���Υե������ tecsgen �ˤ��ƥ�ץ졼�ȤȤ��Ƽ�ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥ��տޤ���Ƥ��ޤ���
 * tecsgen �κƼ¹Ԥˤ���񤭤���Ƥ��ޤ����ᡢ�̾�
 *   gen/tBalancerTaskBody_template.c => src/tBalancerTaskBody.c
 * �Τ褦��̾��, �ե�������ѹ����Ƥ��齤�����ޤ�
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ���� #[</...>]# �ǰϤޤ줿�����Ȥ��Խ����ʤ��Ǥ�������
 * tecsmerge �ˤ��ޡ����˻��Ѥ���ޤ�
 *
 * °�����������ޥ��� #_CAAM_#
 * maxSpeed         int16_t          ATTR_maxSpeed   
 * minSpeed         int16_t          ATTR_minSpeed   
 * gyroOffset       uint16_t         VAR_gyroOffset  
 * speed            int16_t          VAR_speed       
 * turn             int16_t          VAR_turn        
 * count            int32_t          VAR_count       
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
 * call port : cRightMotor  signature: sMotor context: task
 *   void           cRightMotor_setPWM( int8_t pwm, bool_t brakeMode );
 *   void           cRightMotor_setRevolution( int32_t revolution );
 *   void           cRightMotor_getRevolution( int32_t* revolution );
 * call port : cLeftMotor  signature: sMotor context: task
 *   void           cLeftMotor_setPWM( int8_t pwm, bool_t brakeMode );
 *   void           cLeftMotor_setRevolution( int32_t revolution );
 *   void           cLeftMotor_getRevolution( int32_t* revolution );
 * call port : cGyroSensor  signature: sSensor context: task
 *   void           cGyroSensor_getValue( uint16_t* value );
 * call port : cBattery  signature: sBattery context: task
 *   uint16_t       cBattery_getBatteryVoltage( );
 * call port : cBalancer  signature: sBalancer context: task
 *   void           cBalancer_control( int16_t forward, int16_t turn, uint16_t gyro, uint16_t gyroOffset, int32_t leftRevolution, int32_t rightRevolution, uint16_t battery, int8_t* pwm_l, int8_t* pwm_r );
 * call port : cPrintDisplayControl  signature: sPrintDisplayControl context: task
 *   void           cPrintDisplayControl_print_str( );
 *   void           cPrintDisplayControl_print_k( const char* string1, int16_t value1 );
 *   void           cPrintDisplayControl_print1( int16_t value1 );
 *   void           cPrintDisplayControl_print2( int16_t value1, int16_t value2 );
 *   void           cPrintDisplayControl_print3( int16_t value1, int16_t value2, int16_t value3 );
 *   void           cPrintDisplayControl_print4( int16_t value1, int16_t value2, int16_t value3, int16_t value4 );
 *   void           cPrintDisplayControl_print5( int16_t value1, int16_t value2, int16_t value3, int16_t value4, int16_t value5 );
 *   void           cPrintDisplayControl_printS1( const char* string1, int16_t value1 );
 *   void           cPrintDisplayControl_printS2( const char* string1, int16_t value1, const char* string2, int16_t value2 );
 *   void           cPrintDisplayControl_printS3( const char* string1, int16_t value1, const char* string2, int16_t value2, const char* string3, int16_t value3 );
 *
 * #[</PREAMBLE>]# */

/* �ץ��ȥ�����������ѿ�������򤳤��˽񤭤ޤ� */
#include "tBalancerTaskBody_tecsgen.h"

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
 * global_name:  tBalancerTaskBody_eBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eBody_main()
{
  uint16_t gyro;
  int32_t rev_r, rev_l;
  int8_t pwm_r, pwm_l;
  uint16_t battery;
  int16_t speed, turn;
  
  cRightMotor_getRevolution(&rev_r);
  cLeftMotor_getRevolution(&rev_l);
  cGyroSensor_getValue(&gyro);
  battery = cBattery_getBatteryVoltage();
  speed = VAR_speed;

  if(speed == 0){
    turn = 0;
  } else {
    turn = VAR_turn;
  }
  
  /*
   *  ��Ω����Τ����PWM�ͤη׻�
   */
  cBalancer_control(speed,
                    turn,
                    gyro,
                    VAR_gyroOffset,
                    rev_l,
                    rev_r,
                    battery,
                    &pwm_l,
                    &pwm_r);
  
  /*
   *  PWM�ͤ�⡼���˥��å�
   */
  cLeftMotor_setPWM(pwm_l, 1);
  cRightMotor_setPWM(pwm_r, 1);
  
  //cPrintDisplayControl_print5(rev_r, rev_l, gyro, (pwm_l * 1000), (pwm_r * 1000));
  
  

  if(VAR_count++ == 250){
    //syslog(LOG_NOTICE, "balancer running. speed(%d),turn(%d),gyro(%d),gyro_offset(%d)",speed,turn,gyro,VAR_gyroOffset);
    VAR_count = 0;
  }
  
    //eBalancerControl_exitBalancer();
}

/* #[<ENTRY_PORT>]# eBalancerControl
 * entry port: eBalancerControl
 * signature:  sBalancerControl
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eBalancerControl_setSpeed
 * name:         eBalancerControl_setSpeed
 * global_name:  tBalancerTaskBody_eBalancerControl_setSpeed
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eBalancerControl_setSpeed(int16_t speed)
{
  VAR_speed = speed;
}

/* #[<ENTRY_FUNC>]# eBalancerControl_getSpeed
 * name:         eBalancerControl_getSpeed
 * global_name:  tBalancerTaskBody_eBalancerControl_getSpeed
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eBalancerControl_getSpeed(int16_t* speed)
{
  *speed = VAR_speed;
}

/* #[<ENTRY_FUNC>]# eBalancerControl_setTurn
 * name:         eBalancerControl_setTurn
 * global_name:  tBalancerTaskBody_eBalancerControl_setTurn
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eBalancerControl_setTurn(int16_t turn)
{
	VAR_turn = turn;
}

/* #[<ENTRY_FUNC>]# eBalancerControl_getTurn
 * name:         eBalancerControl_getTurn
 * global_name:  tBalancerTaskBody_eBalancerControl_getTurn
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eBalancerControl_getTurn(int16_t* turn)
{
  *turn = VAR_turn;
}

/* #[<ENTRY_FUNC>]# eBalancerControl_calibrate
 * name:         eBalancerControl_calibrate
 * global_name:  tBalancerTaskBody_eBalancerControl_calibrate
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eBalancerControl_calibrate()
{
  uint16_t gyro;
  
  cGyroSensor_getValue(&gyro);
  VAR_gyroOffset = gyro;
  cRightMotor_setRevolution(0);
  cLeftMotor_setRevolution(0);
}

/* #[<POSTAMBLE>]#
 *   �����겼����������ؿ���񤭤ޤ�
 * #[</POSTAMBLE>]#*/