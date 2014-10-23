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
 *   gen/tTailControllerTaskBody_template.c => src/tTailControllerTaskBody.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * tailAngleStop    int32_t          ATTR_tailAngleStop
 * tailAngleDrive   int32_t          ATTR_tailAngleDrive
 * kp               float32_t        ATTR_kp         
 * maxPwm           int8_t           ATTR_maxPwm     
 * minPwm           int8_t           ATTR_minPwm     
 * targetAngle      int32_t          VAR_targetAngle 
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
 * call port : cTailMotor  signature: sMotor context: task
 *   void           cTailMotor_setPWM( int8_t pwm, bool_t brakeMode );
 *   void           cTailMotor_setRevolution( int32_t revolution );
 *   void           cTailMotor_getRevolution( int32_t* revolution );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます */
#include "tTailControllerTaskBody_tecsgen.h"

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
	
	cTailMotor_setPWM(ATTR_minPwm, 1); // 逆方向に精一杯回転させる

	cTailMotor_getRevolution(&rev);
	do{
		pre_rev = rev;
		delay(10); // fujiya
		cTailMotor_getRevolution(&rev);
	} while(rev != pre_rev); // 回転数が収束するまで

	cTailMotor_setPWM(0, 1); // 停止
	cTailMotor_setRevolution(0); // 回転数を初期化
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
