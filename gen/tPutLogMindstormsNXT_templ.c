/*
 * ���Υե������ tecsgen �ˤ��ƥ�ץ졼�ȤȤ��Ƽ�ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥ��տޤ���Ƥ��ޤ���
 * tecsgen �κƼ¹Ԥˤ���񤭤���Ƥ��ޤ����ᡢ�̾�
 *   gen/tPutLogMindstormsNXT_template.c => src/tPutLogMindstormsNXT.c
 * �Τ褦��̾��, �ե�������ѹ����Ƥ��齤�����ޤ�
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ���� #[</...>]# �ǰϤޤ줿�����Ȥ��Խ����ʤ��Ǥ�������
 * tecsmerge �ˤ��ޡ����˻��Ѥ���ޤ�
 *
 * °�����������ޥ��� #_CAAM_#
 * US1_BASE         uint32_t         ATTR_US1_BASE   
 * sendBufferSize   uint32_t         ATTR_sendBufferSize
 * sendBufferPointerInitialize char*            ATTR_sendBufferPointerInitialize
 * sendBuffer1      char*            VAR_sendBuffer1 
 * sendBuffer2      char*            VAR_sendBuffer2 
 * sendBufferPointer char*            VAR_sendBufferPointer
 * sendBufferCount  uint32_t         VAR_sendBufferCount
 *
 * �ƤӸ��ؿ� #_TCPF_#
 * call port : cBluetooth  signature: sBluetooth context: task
 *   void           cBluetooth_open( );
 *   bool_t         cBluetooth_getLocalAddress( uint8_t* address );
 *   bool_t         cBluetooth_getDeviceName( uint8_t* name );
 *   bool_t         cBluetooth_setDeviceName( const uint8_t* name );
 *   bool_t         cBluetooth_setFactorySetting( );
 *   uint8_t        cBluetooth_initializeMaster( const uint8_t* address );
 *   uint8_t        cBluetooth_initializeSlave( );
 *   void           cBluetooth_terminateConnection( );
 *   uint32_t       cBluetooth_sendPacket( const uint8_t* buffer, uint32_t length );
 *   uint32_t       cBluetooth_readPacket( uint8_t* buffer, uint32_t length );
 *   bool_t         cBluetooth_isConnected( );
 * call port : cSIOPort  signature: sSIOPort context: task
 *   void           cSIOPort_waitReady( );
 *   bool_t         cSIOPort_isOpened( );
 *   void           cSIOPort_open( );
 *   void           cSIOPort_close( );
 *   bool_t         cSIOPort_putChar( char c );
 *   int_t          cSIOPort_getChar( );
 *   void           cSIOPort_enableCBR( uint_t cbrtn );
 *   void           cSIOPort_disableCBR( uint_t cbrtn );
 *
 * #[</PREAMBLE>]# */

/* �ץ�ȥ�����������ѿ�������򤳤��˽񤭤ޤ� #_PAC_# */
#include "tPutLogMindstormsNXT_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* �������ؿ� #_TEPF_# */
/* #[<ENTRY_PORT>]# ePutLog
 * entry port: ePutLog
 * signature:  sPutLog
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# ePutLog_putChar
 * name:         ePutLog_putChar
 * global_name:  tPutLogMindstormsNXT_ePutLog_putChar
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
ePutLog_putChar(CELLIDX idx, char c)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

	return(ercd);
}

/* #[<POSTAMBLE>]#
 *   �����겼����������ؿ���񤭤ޤ�
 * #[</POSTAMBLE>]#*/
