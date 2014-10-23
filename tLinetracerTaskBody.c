/*
 *   TOPPERS Software
 *       Toyohashi Open Platform for Embedded Real-Time Systems
 *  
 *   Copyright (C) 2010-2012 by Embedded and Real-Time Systems Laboratory
 *               Graduate School of Information Science, Nagoya Univ., JAPAN
 *  
 *   上記著作権者は，以下の(1)?(4)の条件を満たす場合に限り，本ソフトウェ
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
 *   gen/tLinetracerTaskBody_template.c => src/tLinetracerTaskBody.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ､ｫ､?#[</...>]# ､????･ｳ･皈??ﾏﾊ?ｸ､ｷ､?､､?ｯ､ﾀ､ｵ､､
 * tecsmerge ､?隍??ｼ･ｸ､?ﾈﾍ?ｵ､??ｹ
 *
 * °ﾀｭ･｢･ｯ･ｻ･ｹ･?ｯ･?#_CAAM_#
 * maxTurn          int16_t          ATTR_maxTurn    
 * minTurn          int16_t          ATTR_minTurn    
 * lightThreshold   uint16_t         VAR_lightThreshold
 * edge             int8_t           VAR_edge        
 * black            uint16_t         VAR_black       
 * white            uint16_t         VAR_white       
 * count            int32_t          VAR_count       
 * xx               float32_t        VAR_xx          
 * yy               float32_t        VAR_yy          
 *
 * ｸ?????#_TCPF_#
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
 * call port : cLightSensor  signature: sSensor context: task
 *   void           cLightSensor_getValue( uint16_t* value );
 * call port : cLightSensorControl  signature: sSensorControl context: task
 *   void           cLightSensorControl_on( );
 *   void           cLightSensorControl_off( );
 * call port : cBalancerControl  signature: sBalancerControl context: task
 *   void           cBalancerControl_setSpeed( int16_t speed );
 *   void           cBalancerControl_getSpeed( int16_t* speed );
 *   void           cBalancerControl_setTurn( int16_t turn );
 *   void           cBalancerControl_getTurn( int16_t* turn );
 *   void           cBalancerControl_calibrate( );
 * call port : cPIDControl  signature: sPIDControl context: task
 *   void           cPIDControl_getPIDValue( uint16_t light, uint16_t VAR_lightThreshold, float32_t* turn_f );
 *   void           cPIDControl_getKValue( float32_t* kp, float32_t* ki, float32_t* kd );
 *   void           cPIDControl_setKValue( uint8_t kind, float32_t value );
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
 * call port : cRightMotor  signature: sMotor context: task
 *   void           cRightMotor_setPWM( int8_t pwm, bool_t brakeMode );
 *   void           cRightMotor_setRevolution( int32_t revolution );
 *   void           cRightMotor_getRevolution( int32_t* revolution );
 * call port : cLeftMotor  signature: sMotor context: task
 *   void           cLeftMotor_setPWM( int8_t pwm, bool_t brakeMode );
 *   void           cLeftMotor_setRevolution( int32_t revolution );
 *   void           cLeftMotor_getRevolution( int32_t* revolution );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます */
#include "tLinetracerTaskBody_tecsgen.h"
#include <t_syslog.h>
#include <math.h>

uint16_t GrayDetector(uint16_t light);

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	        /* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eBody
 * entry port: eBody
 * signature:  sTaskBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eBody_main
 * name:         eBody_main
 * global_name:  tLinetracerTaskBody_eBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eBody_main()
{
  uint16_t light;
  int16_t turn;
  float32_t turn_f;
  int16_t grayDetectCount = 0;

  //cLightSensorControl_off(); // なんじゃこれ？　おためし　LEDの消灯とかだったりして。まいまい式に使えないかなー
  //cLightSensorControl_on( );

  // fujiya なんちゃって自己位置推定  
  estimatePosition();
  

  cLightSensor_getValue(&light);

  cPIDControl_getPIDValue(light, VAR_lightThreshold, &turn_f); //PID制御関数追加byno(13/08/18)
  
  //cPrintDisplayControl_print5(light, (int16_t)p * 1000,  (int16_t)(turn_f * 1000));
  
  if(turn_f > (float32_t)ATTR_maxTurn){
    turn = ATTR_maxTurn;
  } else if(turn_f < (float32_t)ATTR_minTurn){
    turn = ATTR_minTurn;
  } else {
    turn = (int8_t)turn_f;
  }
  
  //cPrintDisplayControl_print5(VAR_diff1, (VAR_DELTAT * 1000), ATTR_kp, (turn_f * 1000), (VAR_edge * turn * 1000));
  
  
  cBalancerControl_setTurn(VAR_edge * turn);
  

  
  //時限爆弾
  if(GrayDetector(light) == 1){
    cBalancerTask_stop();
  }


  
  if(VAR_count++ == 100){
    //syslog(LOG_NOTICE, "line tracer running. turn(%d),light(%d),threshold(%d)",turn,light,VAR_lightThreshold);
    VAR_count = 0;
  }
  

  //time_count = time_count + 10; //時間計測用
}

/* #[<ENTRY_PORT>]# eLinetracerControl
 * entry port: eLinetracerControl
 * signature:  sLinetracerControl
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eLinetracerControl_setLightThreshold
 * name:         eLinetracerControl_setLightThreshold
 * global_name:  tLinetracerTaskBody_eLinetracerControl_setLightThreshold
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eLinetracerControl_setLightThreshold(uint8_t color, uint16_t light)
{
  switch(color){
  case 0:
    if(light == 0){
      cLightSensor_getValue(&light);
    }
    VAR_black = light;
    break;
  case 1:
    if(light == 0){
      cLightSensor_getValue(&light);
    }
    VAR_white = light;
    break;
  case 2:
    if((VAR_white > light) || (light > VAR_black)){
      cLightSensor_getValue(&light);
    }
    VAR_lightThreshold = light;
    break;
  default:
    break;
  }
}

/* #[<ENTRY_FUNC>]# eLinetracerControl_getLightThreshold
 * name:         eLinetracerControl_getLightThreshold
 * global_name:  tLinetracerTaskBody_eLinetracerControl_getLightThreshold
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eLinetracerControl_getLightThreshold(uint8_t color, uint16_t* light)
{
    switch(color){
        case 0:
            *light = VAR_black;
            break;
        case 1:
            *light = VAR_white;
            break;
        case 2:
            *light = VAR_lightThreshold;
            break;
        default:
            break;
    }
}

/* #[<ENTRY_FUNC>]# eLinetracerControl_setEdge
 * name:         eLinetracerControl_setEdge
 * global_name:  tLinetracerTaskBody_eLinetracerControl_setEdge
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eLinetracerControl_setEdge(int8_t edge)
{
    VAR_edge = edge;
}

/* #[<ENTRY_FUNC>]# eLinetracerControl_getEdge
 * name:         eLinetracerControl_getEdge
 * global_name:  tLinetracerTaskBody_eLinetracerControl_getEdge
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eLinetracerControl_getEdge(int8_t* edge)
{
    *edge = VAR_edge;
}

/* #[<POSTAMBLE>]#
 *   ､ｳ､?隍?､ﾋﾈ??ｱｸ??????ｹ
 * #[</POSTAMBLE>]#*/

//なんちゃって自己位置推定
void estimatePosition(){
  /*
  車輪移動ロボット http://www.mech.tohoku-gakuin.ac.jp/rde/contents/course/robotics/wheelrobot.html
  オドメトリ | マイクロマウス委員会　関西支部 http://mmk.rulez.jp/technical/dead-reckoning
  ET ロボコン 2011 チャンピオンシップ大会を目指して ?東京連合 第 1 回集会? http://www.ogis-ri.co.jp/otc/hiroba/technical/ETRoboconTokyoRengo/2011/ETRoboconTokyoRengo_1/index.html
  odmetory オドメトリ - Shogo Computing Laboratory http://sora-blue.net/~shogo82148/memo/tenchijin/odmetry.html
  */
  static float32_t r = 40.0;
  static float32_t pi = 3.14159265359;
  static float32_t d = 160.0; 
  int32_t left;
  int32_t right; // static宣言の初期値かってどうなるんだっけ？まあいいや

  float32_t delta_sita;
  float32_t x, y;
  float32_t left_length;
  float32_t right_length;
  float32_t sinc_val, avg, sita_dash;

  cLeftMotor_getRevolution(&left);
  cRightMotor_getRevolution(&right);
  
  //回転数から移動距離を算出
  left_length = (float32_t)(2.0 * pi * r * (left - VAR_preLeft)) / 360.0;
  right_length = (float32_t)(2.0 * pi * r * (right - VAR_preRight)) / 360.0;

  delta_sita = (right_length - left_length) / (d);
  avg = (right_length + left_length) / 2.0;
  sita_dash = VAR_sita + (delta_sita / 2.0);

  //syslog(LOG_NOTICE, "%d %d %d %d", (int32_t)(left_length * 1000), (int32_t)(right_length * 1000), left - VAR_preLeft, right - VAR_preRight);
  //syslog(LOG_NOTICE, "sita %d %d %d", (int32_t)(delta_sita * 1000),(int32_t)(avg * 1000), (int32_t)(sita_dash*1000));

  if(delta_sita == 0){
    sinc_val = 1.0;
  }else{
    sinc_val = sin(delta_sita / 2.0) / (delta_sita / 2.0);
  }
  x = avg * cos(sita_dash) * sinc_val;
  y = avg * sin(sita_dash) * sinc_val;
  VAR_sita += delta_sita;
  //syslog(LOG_NOTICE,"xy %d %d", (int32_t)(x*10000), (int32_t)(y*10000));

  VAR_xx += x;
  VAR_yy += y;
  //syslog(LOG_NOTICE, "%d, %d", (int32_t)(VAR_xx*10000), (int32_t)(VAR_yy*10000));

  //syslog(LOG_NOTICE, "left: %d, 
  //right:%d, VAR_preLeft:%d, 
  //VAR_preRight:%d, left_length:%d,
  //right_length: %d, avg %d, 
  //VAR_sita:%d, delta_sita:%d
  //sita_dash: %d, 
  //x:%d, y:%d, VAR_xx:%d, VAR_yy:%d 
  //avg:%d hoge:%d", left,
  // right, VAR_preLeft, 
  //VAR_preRight, (int32_t)(left_length * 1000),
  //  (int32_t)(right_length *1000),
  // (int32_t)(avg * 1000),
  // (int32_t)(VAR_sita * 1000), (int32_t)(delta_sita*1000), 
  //(int32_t)(sita_dash*1000), (int32_t)(x*1000), 
  //(int32_t)(y*1000),  (int32_t)(VAR_xx*1000), (int32_t)(VAR_yy*1000), 
  //(int32_t) (avg*1000), (int32_t)(2 * pi * r * (left-VAR_preLeft *1000)));
  
  VAR_preLeft = left;
  VAR_preRight = right;
}




uint16_t GrayDetector(uint16_t light){
  static uint16_t licount = 0;
  uint16_t GRAY_DETECTION_VALUE = 100;
  uint16_t GRAY_OFFSET = 50;
  if( (VAR_lightThreshold - GRAY_OFFSET) <= light && light <= (VAR_lightThreshold + GRAY_OFFSET)){ //グレー判定
    licount++;
    if(licount > GRAY_DETECTION_VALUE){
      licount = 0;
      return 1;
    }
  }else{
    licount = 0;
    return 0;
  }
}
