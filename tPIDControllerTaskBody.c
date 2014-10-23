/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tPIDControllerTaskBody_template.c => src/tPIDControllerTaskBody.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * kp               float32_t        VAR_kp          
 * ki               float32_t        VAR_ki          
 * kd               float32_t        VAR_kd          
 * integral         float32_t        VAR_integral    
 * diff0            float32_t        VAR_diff0       
 * diff1            float32_t        VAR_diff1       
 * DELTAT           float32_t        VAR_DELTAT      
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
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tPIDControllerTaskBody_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# ePIDControl
 * entry port: ePIDControl
 * signature:  sPIDControl
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# ePIDControl_getPIDValue
 * name:         ePIDControl_getPIDValue
 * global_name:  tPIDControllerTaskBody_ePIDControl_getPIDValue
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
ePIDControl_getPIDValue(uint16_t light, uint16_t lightThreshold, float32_t* turn_f)
{
  float32_t p;
  //float32_t i;
  float32_t d;
  
  VAR_diff0 = VAR_diff1;
  VAR_diff1 = light - lightThreshold;
  VAR_integral += (VAR_diff1 + VAR_diff0) / 2 * VAR_DELTAT;

  p = (float32_t)(VAR_diff1 * VAR_kp);  //->ATTR_kp
 // i = (float32_t)(VAR_integral * ATTR_ki); 
  d = (float32_t)((VAR_diff1 - VAR_diff0) / VAR_DELTAT * VAR_kd); //->ATTR_kd
 // turn_f = p + i + d; i制御を除去
  *turn_f = p + d;
}

/* #[<ENTRY_FUNC>]# ePIDControl_getKValue
 * name:         ePIDControl_getKValue
 * global_name:  tPIDControllerTaskBody_ePIDControl_getKValue
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
ePIDControl_getKValue(float32_t* kp, float32_t* ki, float32_t* kd)
{
  //kp, ki, kdの初期化
  /*VAR_kp=0.6;
  VAR_ki=0;
  VAR_kd=0.2;*/
  
  *kp = VAR_kp;
  *ki = VAR_ki;
  *kd = VAR_kd;
}

/* #[<ENTRY_FUNC>]# ePIDControl_setKValue
 * name:         ePIDControl_setKValue
 * global_name:  tPIDControllerTaskBody_ePIDControl_setKValue
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
ePIDControl_setKValue(uint8_t kind, float32_t value)
{

  switch(kind){
  case 0:
    VAR_kp = value;
    break;
  case 1:
    VAR_ki = value;
    break;
  case 2:
    VAR_kd = value;
    break;
  default:
    break;
  }

  
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
