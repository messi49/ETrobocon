/*
 * ���Υե������ tecsgen �ˤ��ƥ�ץ졼�ȤȤ��Ƽ�ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥ��տޤ���Ƥ��ޤ���
 * tecsgen �κƼ¹Ԥˤ���񤭤���Ƥ��ޤ����ᡢ�̾�
 *   gen/tConnectBluetooth_template.c => src/tConnectBluetooth.c
 * �Τ褦��̾��, �ե�������ѹ����Ƥ��齤�����ޤ�
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ���� #[</...>]# �ǰϤޤ줿�����Ȥ��Խ����ʤ��Ǥ�������
 * tecsmerge �ˤ��ޡ����˻��Ѥ���ޤ�
 *
 * °�����������ޥ��� #_CAAM_#
 * deviceNameSize   uint8_t          ATTR_deviceNameSize
 * deviceName       const char*      ATTR_deviceName 
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
 *
 * #[</PREAMBLE>]# */

/* �ץ�ȥ�����������ѿ�������򤳤��˽񤭤ޤ� #_PAC_# */
#include "tConnectBluetooth_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* �������ؿ� #_TEPF_# */
/* #[<ENTRY_PORT>]# eConnectBluetooth
 * entry port: eConnectBluetooth
 * signature:  sTaskBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eConnectBluetooth_main
 * name:         eConnectBluetooth_main
 * global_name:  tConnectBluetooth_eConnectBluetooth_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eConnectBluetooth_main()
{
}

/* #[<POSTAMBLE>]#
 *   �����겼����������ؿ���񤭤ޤ�
 * #[</POSTAMBLE>]#*/
