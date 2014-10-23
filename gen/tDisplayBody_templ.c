/*
 * ���Υե������ tecsgen �ˤ��ƥ�ץ졼�ȤȤ��Ƽ�ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥ��տޤ���Ƥ��ޤ���
 * tecsgen �κƼ¹Ԥˤ���񤭤���Ƥ��ޤ����ᡢ�̾�
 *   gen/tDisplayBody_template.c => src/tDisplayBody.c
 * �Τ褦��̾��, �ե�������ѹ����Ƥ��齤�����ޤ�
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ���� #[</...>]# �ǰϤޤ줿�����Ȥ��Խ����ʤ��Ǥ�������
 * tecsmerge �ˤ��ޡ����˻��Ѥ���ޤ�
 *
 * °�����������ޥ��� #_CAAM_#
 * width            uint8_t          ATTR_width      
 * depth            uint8_t          ATTR_depth      
 * cellWidth        uint8_t          ATTR_cellWidth  
 * charWidth        uint8_t          ATTR_charWidth  
 * charDepth        uint8_t          ATTR_charDepth  
 * buffer           uint8_t*         VAR_buffer      
 * currentX         uint8_t          VAR_currentX    
 * currentY         uint8_t          VAR_currentY    
 *
 * �ƤӸ��ؿ� #_TCPF_#
 * call port : cLCD  signature: sLCD context: task
 *   void           cLCD_initialize( const uint8_t* display );
 *   void           cLCD_powerOn( const uint8_t* display );
 *   void           cLCD_powerOff( );
 *   void           cLCD_sendData( const uint8_t* buffer );
 *
 * #[</PREAMBLE>]# */

/* �ץ�ȥ�����������ѿ�������򤳤��˽񤭤ޤ� #_PAC_# */
#include "tDisplayBody_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* �������ؿ� #_TEPF_# */
/* #[<ENTRY_PORT>]# eDisplay
 * entry port: eDisplay
 * signature:  sDisplay
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eDisplay_update
 * name:         eDisplay_update
 * global_name:  tDisplayBody_eDisplay_update
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eDisplay_update()
{
}

/* #[<ENTRY_FUNC>]# eDisplay_clear
 * name:         eDisplay_clear
 * global_name:  tDisplayBody_eDisplay_clear
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eDisplay_clear(bool_t updateToo)
{
}

/* #[<ENTRY_FUNC>]# eDisplay_gotoXY
 * name:         eDisplay_gotoXY
 * global_name:  tDisplayBody_eDisplay_gotoXY
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eDisplay_gotoXY(uint8_t x, uint8_t y)
{
}

/* #[<ENTRY_FUNC>]# eDisplay_putChar
 * name:         eDisplay_putChar
 * global_name:  tDisplayBody_eDisplay_putChar
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eDisplay_putChar(char c)
{
}

/* #[<ENTRY_FUNC>]# eDisplay_putString
 * name:         eDisplay_putString
 * global_name:  tDisplayBody_eDisplay_putString
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eDisplay_putString(const char* string)
{
}

/* #[<ENTRY_FUNC>]# eDisplay_putInt
 * name:         eDisplay_putInt
 * global_name:  tDisplayBody_eDisplay_putInt
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eDisplay_putInt(int32_t val, uint8_t places)
{
}

/* #[<ENTRY_FUNC>]# eDisplay_putUnsigned
 * name:         eDisplay_putUnsigned
 * global_name:  tDisplayBody_eDisplay_putUnsigned
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eDisplay_putUnsigned(uint32_t val, uint8_t places)
{
}

/* #[<ENTRY_FUNC>]# eDisplay_putHex
 * name:         eDisplay_putHex
 * global_name:  tDisplayBody_eDisplay_putHex
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eDisplay_putHex(uint32_t val, uint8_t places)
{
}

/* #[<ENTRY_FUNC>]# eDisplay_getBuffer
 * name:         eDisplay_getBuffer
 * global_name:  tDisplayBody_eDisplay_getBuffer
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
uint8_t*
eDisplay_getBuffer()
{
}

/* #[<ENTRY_FUNC>]# eDisplay_powerOff
 * name:         eDisplay_powerOff
 * global_name:  tDisplayBody_eDisplay_powerOff
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eDisplay_powerOff(bool_t updateToo)
{
}

/* #[<ENTRY_PORT>]# eInitialize
 * entry port: eInitialize
 * signature:  sInitializeRoutineBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eInitialize_main
 * name:         eInitialize_main
 * global_name:  tDisplayBody_eInitialize_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eInitialize_main()
{
}

/* #[<ENTRY_PORT>]# eTerminate
 * entry port: eTerminate
 * signature:  sTerminateRoutineBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eTerminate_main
 * name:         eTerminate_main
 * global_name:  tDisplayBody_eTerminate_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eTerminate_main()
{
}

/* #[<POSTAMBLE>]#
 *   �����겼����������ؿ���񤭤ޤ�
 * #[</POSTAMBLE>]#*/
