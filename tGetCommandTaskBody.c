/*
 *   TOPPERS Software
 *       Toyohashi Open Platform for Embedded Real-Time Systems
 *  
 *   Copyright (C) 2012 by Embedded and Real-Time Systems Laboratory
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
 *   gen/tGetCommandTaskBody_template.c => src/tGetCommandTaskBody.c
 * �Τ褦��̾��, �ե�������ѹ����Ƥ��齤�����ޤ�
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ���� #[</...>]# �ǰϤޤ줿�����Ȥ��Խ����ʤ��Ǥ�������
 * tecsmerge �ˤ��ޡ����˻��Ѥ���ޤ�
 *
 * °�����������ޥ��� #_CAAM_#
 * parameter        int32_t          VAR_parameter   
 * sign             int8_t           VAR_sign        
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

/* �ץ�ȥ�����������ѿ�������򤳤��˽񤭤ޤ� #_PAC_# */
#include "tGetCommandTaskBody_tecsgen.h"

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

    /* ���ꥢ��ݡ��Ȥ򥪡��ץ� */
    cSerialPort_open();

    while(1){
        command = '\0';

        /* ���ꥢ��ݡ��Ȥ���1ʸ������ */
        syslog(LOG_INFO, "wait serial send time(%d)", current);
        cSerialPort_read(buffer, 1);
        syslog(LOG_INFO, "get serial data. buffer(%c) time(%d)", buffer[0], current);
        
        /* ���ꥢ������ǡ����β��� */
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

        /* �ƥ������ؤΥ��ޥ�ɤ����� */
        switch(command){
            case 'g':
                /* �������� */
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
                /* ���ȥå� */
                cBalancerControl_setSpeed(0);
                //syslog(LOG_NOTICE, "stop running. time(%d)", current);
                break;

            case 'b':
                /* �����󥵤����ͥ��å� */
                cLinetracerControl_setLightThreshold(0, VAR_parameter*VAR_sign);
                //syslog(LOG_NOTICE, "set black light. light(%d) time(%d)", VAR_parameter*VAR_sign, current);
                break;
            case 'w':
                /* �����󥵤����ͥ��å� */
                cLinetracerControl_setLightThreshold(1, VAR_parameter*VAR_sign);
                //syslog(LOG_NOTICE, "set white light. light(%d) time(%d)", VAR_parameter*VAR_sign, current);
                break;
            case 'l':
                /* �����󥵤����ͥ��å� */
                cLinetracerControl_setLightThreshold(2, VAR_parameter*VAR_sign);
                //syslog(LOG_NOTICE, "set light threshold. light(%d) time(%d)", VAR_parameter*VAR_sign, current);
                break;

            case 'i':
                /* ���ޥ����򥻥å� */
                if(VAR_parameter*VAR_sign >= 3 && VAR_parameter*VAR_sign <= 7){
                    cSysLog_mask(LOG_UPTO(VAR_parameter*VAR_sign), LOG_UPTO(LOG_EMERG));
                    //syslog(LOG_NOTICE, "set log mask. log_mask(%d) time(%d)", VAR_parameter*VAR_sign, current);
                }
                break;

            case 'f':
                /* ���ԡ��ɥ��å� */
                if(VAR_parameter != 0){
                    cBalancerControl_setSpeed((int16_t)VAR_parameter * (int16_t)VAR_sign);
                    //syslog(LOG_NOTICE, "set speed. speed(%d) time(%d)", VAR_parameter*VAR_sign, current);
                }
                break;
            case 't':
                /* �����ѥ��å� */
                if(VAR_parameter >= 0){
                    cTailController_setAngle(VAR_parameter);
                    //syslog(LOG_NOTICE, "set tail angle. angle(%d) time(%d)", VAR_parameter*VAR_sign, current);
                }
                break;


            // --- fujiya added (2013/09/01)��from here----

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
            
            case 'q': //���äȤ٥ޥ��ʥ�
                speed = 100;
                turn = 0;
                //syslog(LOG_NOTICE, "go magunamu turn(%d) speed(%d) time(%d)", turn, speed, current);
                cBalancerControl_setTurn(turn);
                cBalancerControl_setSpeed(speed);
                break;
            
            // --- fujiya added (2013/09/01)��to here ----


            default:
                /* �����command�����ꤵ��ʤ��ä����ϲ��⤷�ʤ� */
                break;
        }

        /* �����Хåե��Υ��ꥢ */
        if(command){
            VAR_parameter = 0;
            VAR_sign = 1;
            //syslog(LOG_NOTICE, "command(%d) time(%d): parameter reset.", VAR_parameter*VAR_sign, current);
        }
    }
}

/* #[<POSTAMBLE>]#
 *   �����겼����������ؿ���񤭤ޤ�
 * #[</POSTAMBLE>]#*/
