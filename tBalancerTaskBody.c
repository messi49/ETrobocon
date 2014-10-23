/*
 *   TOPPERS Software
 *       Toyohashi Open Platform for Embedded Real-Time Systems
 *  
 *   Copyright (C) 2010-2012 by Embedded and Real-Time Systems Laboratory
 *               Graduate School of Information Science, Nagoya Univ., JAPAN
 *  
 *   上記著作権者は，以下の(1)〜(4)の条件を満たす場合に限り，本ソフトウェ
 *   ア（本ソフトウェアを改変したものを含む．以下同じ）を使用・複製・改
 *   変・再配布（以下，利用と呼ぶ）することを無償で許諾する．
 *   (1) 本ソフトウェアをソースコードの形で利用する場合には，上記の著作
 *       権表示，この利用条件および下記の無保証規定が，そのままの形でソー
 *       スコード中に含まれていること．
 *   (2) 本ソフトウェアを，ライブラリ形式など，他のソフトウェア開発に使
 *       用できる形で再配布する場合には，再配布に伴うドキュメント（利用
 *       者マニュアルなど）に，上記の著作権表示，この利用条件および下記
 *       の無保証規定を掲載すること．
 *   (3) 本ソフトウェアを，機器に組み込むなど，他のソフトウェア開発に使
 *       用できない形で再配布する場合には，次のいずれかの条件を満たすこ
 *       と．
 *     (a) 再配布に伴うドキュメント（利用者マニュアルなど）に，上記の著
 *         作権表示，この利用条件および下記の無保証規定を掲載すること．
 *     (b) 再配布の形態を，別に定める方法によって，TOPPERSプロジェクトに
 *         報告すること．
 *   (4) 本ソフトウェアの利用により直接的または間接的に生じるいかなる損
 *       害からも，上記著作権者およびTOPPERSプロジェクトを免責すること．
 *       また，本ソフトウェアのユーザまたはエンドユーザからのいかなる理
 *       由に基づく請求からも，上記著作権者およびTOPPERSプロジェクトを
 *       免責すること．
 *  
 *   本ソフトウェアは，無保証で提供されているものである．上記著作権者お
 *   よびTOPPERSプロジェクトは，本ソフトウェアに関して，特定の使用目的
 *   に対する適合性も含めて，いかなる保証も行わない．また，本ソフトウェ
 *   アの利用により直接的または間接的に生じたいかなる損害に関しても，そ
 *   の責任を負わない．
 *
 */

/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tBalancerTaskBody_template.c => src/tBalancerTaskBody.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * maxSpeed         int16_t          ATTR_maxSpeed   
 * minSpeed         int16_t          ATTR_minSpeed   
 * gyroOffset       uint16_t         VAR_gyroOffset  
 * speed            int16_t          VAR_speed       
 * turn             int16_t          VAR_turn        
 * count            int32_t          VAR_count       
 *
 * 呼び口関数 #_TCPF_#
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

/* プロトタイプ宣言や変数の定義をここに書きます */
#include "tBalancerTaskBody_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
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
   *  倒立制御のためのPWM値の計算
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
   *  PWM値をモータにセット
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
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
