/*
 * ���Υե������ tecsgen �ˤ��ƥ�ץ졼�ȤȤ��Ƽ�ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥ��տޤ���Ƥ��ޤ���
 * tecsgen �κƼ¹Ԥˤ���񤭤���Ƥ��ޤ����ᡢ�̾�
 *   gen/tLogTaskMain_template.c => src/tLogTaskMain.c
 * �Τ褦��̾��, �ե�������ѹ����Ƥ��齤�����ޤ�
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ���� #[</...>]# �ǰϤޤ줿�����Ȥ��Խ����ʤ��Ǥ�������
 * tecsmerge �ˤ��ޡ����˻��Ѥ���ޤ�
 *
 * °�����������ޥ��� #_CAAM_#
 * interval         RELTIM           ATTR_interval   
 * flushWait        RELTIM           ATTR_flushWait  
 *
 * �ƤӸ��ؿ� #_TCPF_#
 * call port : cSerialPort  signature: sSerialPort context: task
 *   ER             cSerialPort_open( );
 *   ER             cSerialPort_close( );
 *   ER_UINT        cSerialPort_read( char* buffer, uint_t length );
 *   ER_UINT        cSerialPort_write( const char* buffer, uint_t length );
 *   ER             cSerialPort_control( uint_t ioControl );
 *   ER             cSerialPort_refer( T_SERIAL_RPOR* pk_rpor );
 * call port : cnSerialPort  signature: snSerialPort context: task
 *   bool_t         cnSerialPort_getChar( char* p_char );
 * call port : cSysLog  signature: sSysLog context: task
 *   ER             cSysLog_write( uint_t priority, const SYSLOG* p_syslog );
 *   ER_UINT        cSysLog_read( SYSLOG* p_syslog );
 *   ER             cSysLog_mask( uint_t logMask, uint_t lowMask );
 *   ER             cSysLog_refer( T_SYSLOG_RLOG* pk_rlog );
 * call port : cPutLog  signature: sPutLog context: task
 *   ER             cPutLog_putChar( char c );
 *
 * #[</PREAMBLE>]# */

/* �ץ�ȥ�����������ѿ�������򤳤��˽񤭤ޤ� #_PAC_# */
#include "tLogTaskMain_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* �������ؿ� #_TEPF_# */
/* #[<ENTRY_PORT>]# eLogTaskBody
 * entry port: eLogTaskBody
 * signature:  sTaskBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eLogTaskBody_main
 * name:         eLogTaskBody_main
 * global_name:  tLogTaskMain_eLogTaskBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eLogTaskBody_main()
{
}

/* #[<ENTRY_PORT>]# eLogTask
 * entry port: eLogTask
 * signature:  sLogTask
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eLogTask_flush
 * name:         eLogTask_flush
 * global_name:  tLogTaskMain_eLogTask_flush
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eLogTask_flush(uint_t count)
{
}

/* #[<POSTAMBLE>]#
 *   �����겼����������ؿ���񤭤ޤ�
 * #[</POSTAMBLE>]#*/
