/*
 *   TOPPERS Software
 *       Toyohashi Open Platform for Embedded Real-Time Systems
 *  
 *   Copyright (C) 2012 by Embedded and Real-Time Systems Laboratory
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
 *   gen/tGetCommandTaskBody_template.c => src/tGetCommandTaskBody.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * parameter        int32_t          VAR_parameter   
 * sign             int8_t           VAR_sign        
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
 * call port : cSerialPort  signature: sSerialPort context: task
 *   ER             cSerialPort_open( );
 *   ER             cSerialPort_close( );
 *   ER_UINT        cSerialPort_read( char* buffer, uint_t length );
 *   ER_UINT        cSerialPort_write( const char* buffer, uint_t length );
 *   ER             cSerialPort_control( uint_t ioControl );
 *   ER             cSerialPort_refer( T_SERIAL_RPOR* pk_rpor );
 * call port : cSysLog  signature: sSysLog context: task
 *   ER             cSysLog_write( uint_t priority, const SYSLOG* p_syslog );
 *   ER_UINT        cSysLog_read( SYSLOG* p_syslog );
 *   ER             cSysLog_mask( uint_t logMask, uint_t lowMask );
 *   ER             cSysLog_refer( T_SYSLOG_RLOG* pk_rlog );
 * call port : cLinetracerControl  signature: sLinetracerControl context: task
 *   void           cLinetracerControl_setLightThreshold( uint8_t color, uint16_t light );
 *   void           cLinetracerControl_getLightThreshold( uint8_t color, uint16_t* light );
 *   void           cLinetracerControl_setEdge( int8_t edge );
 *   void           cLinetracerControl_getEdge( int8_t* edge );
 * call port : cBalancerControl  signature: sBalancerControl context: task
 *   void           cBalancerControl_setSpeed( int16_t speed );
 *   void           cBalancerControl_getSpeed( int16_t* speed );
 *   void           cBalancerControl_setTurn( int16_t turn );
 *   void           cBalancerControl_getTurn( int16_t* turn );
 *   void           cBalancerControl_calibrate( );
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
 * call port : cTouchSensor  signature: sSensor context: task
 *   void           cTouchSensor_getValue( uint16_t* value );
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
 * call port : cBalancerTask  signature: sCyclic context: task
 *   ER             cBalancerTask_start( );
 *   ER             cBalancerTask_stop( );
 *   ER             cBalancerTask_refer( T_RCYC* pk_cyclicHandlerStatus );
 * call port : cLinetracerTask  signature: sCyclic context: task
 *   ER             cLinetracerTask_start( );
 *   ER             cLinetracerTask_stop( );
 *   ER             cLinetracerTask_refer( T_RCYC* pk_cyclicHandlerStatus );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tGetCommandTaskBody_tecsgen.h"

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
 * global_name:  tGetCommandTaskBody_eBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eBody_main()
{
    char buffer[2];
    char command = 0;
	SYSTIM current;

    static int16_t speed = 0;
    static int16_t turn = 0;

    /* シリアルポートをオープン */
    cSerialPort_open();

    while(1){
        command = '\0';

        /* シリアルポートから1文字受信 */
        syslog(LOG_INFO, "wait serial send time(%d)", current);
        cSerialPort_read(buffer, 1);
        syslog(LOG_INFO, "get serial data. buffer(%c) time(%d)", buffer[0], current);
        
        /* シリアル受信データの解析 */
        if(buffer[0] == '-'){
            VAR_sign = -1 * VAR_sign;
        }else if(buffer[0] >= '0' && buffer[0] <= '9'){
            VAR_parameter = VAR_parameter * 10 + (buffer[0] - '0');
        }else if(buffer[0] >= 'A'){
            if(buffer[0] <= 'Z'){
                buffer[0] += 0x20;
            }
            if(buffer[0] >= 'a' && buffer[0] <= 'z'){
                command = buffer[0];
                getTime(&current);
            }
        }

        /* 各タスクへのコマンドの送信 */
        switch(command){
            case 'g':
                /* スタート */
                if(cSemaphore_signal() == E_OK){
                    if((VAR_parameter*VAR_sign & 1) != 0){
                        cLinetracerControl_setEdge(-1);
                    } else {
                        cLinetracerControl_setEdge(1);
                    }
                    cBalancerControl_calibrate();
                    //syslog(LOG_NOTICE, "start running. edge(%d) time(%d)", VAR_parameter*VAR_sign, current);
                }
                break;

            case 's':
                /* ストップ */
                cBalancerControl_setSpeed(0);
                //syslog(LOG_NOTICE, "stop running. time(%d)", current);
                break;

            case 'b':
                /* 光センサの閾値セット */
                cLinetracerControl_setLightThreshold(0, VAR_parameter*VAR_sign);
                //syslog(LOG_NOTICE, "set black light. light(%d) time(%d)", VAR_parameter*VAR_sign, current);
                break;
            case 'w':
                /* 光センサの閾値セット */
                cLinetracerControl_setLightThreshold(1, VAR_parameter*VAR_sign);
                //syslog(LOG_NOTICE, "set white light. light(%d) time(%d)", VAR_parameter*VAR_sign, current);
                break;
            case 'l':
                /* 光センサの閾値セット */
                cLinetracerControl_setLightThreshold(2, VAR_parameter*VAR_sign);
                //syslog(LOG_NOTICE, "set light threshold. light(%d) time(%d)", VAR_parameter*VAR_sign, current);
                break;

            case 'i':
                /* ログマスクをセット */
                if(VAR_parameter*VAR_sign >= 3 && VAR_parameter*VAR_sign <= 7){
                    cSysLog_mask(LOG_UPTO(VAR_parameter*VAR_sign), LOG_UPTO(LOG_EMERG));
                    //syslog(LOG_NOTICE, "set log mask. log_mask(%d) time(%d)", VAR_parameter*VAR_sign, current);
                }
                break;

            case 'f':
                /* スピードセット */
                if(VAR_parameter != 0){
                    cBalancerControl_setSpeed((int16_t)VAR_parameter * (int16_t)VAR_sign);
                    //syslog(LOG_NOTICE, "set speed. speed(%d) time(%d)", VAR_parameter*VAR_sign, current);
                }
                break;
            case 't':
                /* 尻尾角セット */
                if(VAR_parameter >= 0){
                    cTailController_setAngle(VAR_parameter);
                    //syslog(LOG_NOTICE, "set tail angle. angle(%d) time(%d)", VAR_parameter*VAR_sign, current);
                }
                break;


            // --- fujiya added (2013/09/01)　from here----

            case 'z':
                /* turn set */
                if(VAR_parameter != 0){
                    cBalancerControl_setTurn((int16_t) VAR_parameter * (int16_t) VAR_sign);
                    //syslog(LOG_NOTICE, "set turn. turn(%d) time(%d)", VAR_parameter*VAR_sign, current);
                }
                break;

            case 'e':
                /* linetracer_kill */
                cLinetracerTask_stop();
                //syslog(LOG_NOTICE, "linetracerTask_stoped time(%d)", current);
                break;

            case 'd':
                /* go straight (VAR_parameter[ms])*/
                speed = 50;
                turn = 0;
                //syslog(LOG_NOTICE, "go straight turn(%d) speed(%d) time(%d)", turn, speed, current);
                cBalancerControl_setTurn(turn);
                cBalancerControl_setSpeed(speed);
                break;
            case 'c':
                /* go back (VAR_parameter[ms])*/
                speed = -50;
                turn = 0;
                //syslog(LOG_NOTICE, "go back turn(%d) speed(%d) time(%d)", turn, speed, current);
                cBalancerControl_setTurn(turn);
                cBalancerControl_setSpeed(speed);
                break;

            case 'x':
                /* turn right (VAR_parameter[ms]) */
                speed = 50;
                turn = -50;
                //syslog(LOG_NOTICE, "turn right turn(%d) speed(%d) time(%d)", turn, speed, current);
                cBalancerControl_setTurn(turn);
                cBalancerControl_setSpeed(speed);
                break;
            case 'v':
                /* turn left (VAR_parameter[ms]) */
                speed = 50;
                turn = 50;
                //syslog(LOG_NOTICE, "turn left turn(%d) speed(%d) time(%d)", turn, speed, current);
                cBalancerControl_setTurn(turn);
                cBalancerControl_setSpeed(speed);
                break;
            
            case 'q': //かっとべマグナム
                speed = 100;
                turn = 0;
                //syslog(LOG_NOTICE, "go magunamu turn(%d) speed(%d) time(%d)", turn, speed, current);
                cBalancerControl_setTurn(turn);
                cBalancerControl_setSpeed(speed);
                break;
            
            // --- fujiya added (2013/09/01)　to here ----


            default:
                /* 特定のcommandが指定されなかった場合は何もしない */
                break;
        }

        /* 受信バッファのクリア */
        if(command){
            VAR_parameter = 0;
            VAR_sign = 1;
            //syslog(LOG_NOTICE, "command(%d) time(%d): parameter reset.", VAR_parameter*VAR_sign, current);
        }
    }
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
