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
 *   gen/tStarterTaskBody_template.c => src/tStarterTaskBody.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
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
 * call port : cTailControllerTask  signature: sCyclic context: task
 *   ER             cTailControllerTask_start( );
 *   ER             cTailControllerTask_stop( );
 *   ER             cTailControllerTask_refer( T_RCYC* pk_cyclicHandlerStatus );
 * call port : cBalancerTask  signature: sCyclic context: task
 *   ER             cBalancerTask_start( );
 *   ER             cBalancerTask_stop( );
 *   ER             cBalancerTask_refer( T_RCYC* pk_cyclicHandlerStatus );
 * call port : cLinetracerTask  signature: sCyclic context: task
 *   ER             cLinetracerTask_start( );
 *   ER             cLinetracerTask_stop( );
 *   ER             cLinetracerTask_refer( T_RCYC* pk_cyclicHandlerStatus );
 * call port : cGetLogTask  signature: sCyclic context: task
 *   ER             cGetLogTask_start( );
 *   ER             cGetLogTask_stop( );
 *   ER             cGetLogTask_refer( T_RCYC* pk_cyclicHandlerStatus );
 * call port : cTailController  signature: sTailController context: task
 *   void           cTailController_setAngle( int32_t angle );
 *   void           cTailController_getAngle( int32_t* angle );
 *   void           cTailController_signalStop( );
 *   void           cTailController_signalStart( );
 *   void           cTailController_calibrate( );
 * call port : cSemaphore  signature: sSemaphore context: task
 *   ER             cSemaphore_signal( );
 *   ER             cSemaphore_wait( );
 *   ER             cSemaphore_waitPolling( );
 *   ER             cSemaphore_waitTimeout( TMO timeout );
 *   ER             cSemaphore_initialize( );
 *   ER             cSemaphore_refer( T_RSEM* pk_semaphoreStatus );
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
 * call port : cButtonSetValue  signature: sButtonSetValue context: task
 *   void           cButtonSetValue_kvalue( );
 *   void           cButtonSetValue_threshold( );
 *   void           cButtonSetValue_speed( );
 *   void           cButtonSetValue_tailAngle( );
 * call port : cBattery  signature: sBattery context: task
 *   uint16_t       cBattery_getBatteryVoltage( );
 * call port : cLightSensor  signature: sSensor context: task
 *   void           cLightSensor_getValue( uint16_t* value );
 * call port : cTouchSensor  signature: sSensor context: task
 *   void           cTouchSensor_getValue( uint16_t* value );
 * call port : cBalancerControl  signature: sBalancerControl context: task
 *   void           cBalancerControl_setSpeed( int16_t speed );
 *   void           cBalancerControl_getSpeed( int16_t* speed );
 *   void           cBalancerControl_setTurn( int16_t turn );
 *   void           cBalancerControl_getTurn( int16_t* turn );
 *   void           cBalancerControl_calibrate( );
 * call port : cLinetracerControl  signature: sLinetracerControl context: task
 *   void           cLinetracerControl_setLightThreshold( uint8_t color, uint16_t light );
 *   void           cLinetracerControl_getLightThreshold( uint8_t color, uint16_t* light );
 *   void           cLinetracerControl_setEdge( int8_t edge );
 *   void           cLinetracerControl_getEdge( int8_t* edge );
 * call port : cGetLogControl  signature: sGetLogControl context: task
 *   void           cGetLogControl_portOpen( );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます */
#include "tStarterTaskBody_tecsgen.h"

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
 * global_name:  tStarterTaskBody_eBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eBody_main()
{
  //fujiya
  int16_t touch = false;
  int16_t light = 0;
  int16_t pre_touch = false;
  int16_t battery = 0;
  int16_t count = 0;
  
  //初期設定(Black,White,Threshold値設定) added by no
  while(1)
    {
      cLightSensor_getValue(&light);
      cTouchSensor_getValue(&touch);
      cPrintDisplayControl_print1(light);

      if(touch == 1 && count == 0)
        {
          cLinetracerControl_setLightThreshold(0, light);
          cPrintDisplayControl_printS1("BLACK=", light);
          delay(500);
          count++;
        }
      else if(touch == 1 && count == 1)
        {
          cLinetracerControl_setLightThreshold(1, light);
          cPrintDisplayControl_printS1("WHITE=", light);
          delay(500);
          count++;
        }
      else if(count == 2)
        {
          cLinetracerControl_setLightThreshold(2, 580); //initialize the Threshold
          cBalancerControl_setSpeed((int16_t)65); //initialize the speed
          break;
        }
    }
  //cLinetracerControl_setLightThreshold(0, 665); //721 BLACK:665
  //cLinetracerControl_setLightThreshold(1, 400); //574 WHITE:545
  //cLinetracerControl_setLightThreshold(2, 580); //630 Threshold:600,3:2地点(559),1:1地点(533)
  //cBalancerControl_setSpeed((int16_t)65);

  //ボタンで値調整
  cButtonSetValue_kvalue(); //added by no 2013/08/26
  cButtonSetValue_threshold(); //added by no 2013/08/27
  cButtonSetValue_speed(); //added by no
  //cButtonSetValue_tailAngle(); 

  delay(3000); //wait until robot moves on Course

  cTailController_calibrate();
  cTailController_signalStop();
  cTailControllerTask_start();
  
  //messi
  cGetLogControl_portOpen();
  cGetLogTask_start();
 
  while(1){
    //fujiya
    cLightSensor_getValue(&light);
    cTouchSensor_getValue(&touch);
    battery = cBattery_getBatteryVoltage();

    cPrintDisplayControl_print3(light,touch, battery);//display on LCD the value of light, touch, battery
    
    /* バグあり?電池のほうのNXTはちゃんと動く */
    if(touch == true && pre_touch == false){
      pre_touch = true;
      if(cSemaphore_signal() == E_OK){
        cLinetracerControl_setEdge(1);
        cBalancerControl_calibrate();
      }
    }		
    
    if(cSemaphore_waitPolling() == E_OK){  //fujiya
      cBalancerTask_start();
      cTailController_signalStart();
      delay(500);
      cLinetracerTask_start();
      exitTask();
    }  
  }
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/

