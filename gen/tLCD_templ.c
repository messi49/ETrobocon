/*
 * ���Υե������ tecsgen �ˤ��ƥ�ץ졼�ȤȤ��Ƽ�ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥ��տޤ���Ƥ��ޤ���
 * tecsgen �κƼ¹Ԥˤ���񤭤���Ƥ��ޤ����ᡢ�̾�
 *   gen/tLCD_template.c => src/tLCD.c
 * �Τ褦��̾��, �ե�������ѹ����Ƥ��齤�����ޤ�
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ���� #[</...>]# �ǰϤޤ줿�����Ȥ��Խ����ʤ��Ǥ�������
 * tecsmerge �ˤ��ޡ����˻��Ѥ���ޤ�
 *
 * °�����������ޥ��� #_CAAM_#
 * width            uint8_t          ATTR_width      
 * depth            uint8_t          ATTR_depth      
 *
 * �ƤӸ��ؿ� #_TCPF_#
 * call port : cSPI  signature: sSPI context: task
 *   void           cSPI_initialize( );
 *   void           cSPI_write( uint32_t CD, const uint8_t* data, uint32_t nBytes );
 *   void           cSPI_setDisplay( const uint8_t* display );
 *   void           cSPI_refresh( );
 *
 * #[</PREAMBLE>]# */

/* �ץ�ȥ�����������ѿ�������򤳤��˽񤭤ޤ� #_PAC_# */
#include "tLCD_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* �������ؿ� #_TEPF_# */
/* #[<ENTRY_PORT>]# eLCD
 * entry port: eLCD
 * signature:  sLCD
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eLCD_initialize
 * name:         eLCD_initialize
 * global_name:  tLCD_eLCD_initialize
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eLCD_initialize(const uint8_t* display)
{
}

/* #[<ENTRY_FUNC>]# eLCD_powerOn
 * name:         eLCD_powerOn
 * global_name:  tLCD_eLCD_powerOn
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eLCD_powerOn(const uint8_t* display)
{
}

/* #[<ENTRY_FUNC>]# eLCD_powerOff
 * name:         eLCD_powerOff
 * global_name:  tLCD_eLCD_powerOff
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eLCD_powerOff()
{
}

/* #[<ENTRY_FUNC>]# eLCD_sendData
 * name:         eLCD_sendData
 * global_name:  tLCD_eLCD_sendData
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eLCD_sendData(const uint8_t* buffer)
{
}

/* #[<POSTAMBLE>]#
 *   �����겼����������ؿ���񤭤ޤ�
 * #[</POSTAMBLE>]#*/
