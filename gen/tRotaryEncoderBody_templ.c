/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tRotaryEncoderBody_template.c => src/tRotaryEncoderBody.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * PIOBase          void*            ATTR_PIOBase    
 * interruptNumber  INTNO            ATTR_interruptNumber
 * interruptCount   int32_t          VAR_interruptCount
 * initializedFlag  bool_t           VAR_initializedFlag
 *
 * 呼び口関数 #_TCPF_#
 * call port : ciMotorInterrupt  signature: siMotorInterrupt context: non-task
 *   void           ciMotorInterrupt_quadDecode( subscript, uint32_t pins );
 *   void           ciMotorInterrupt_stopMotor( subscript );
 *       subscript:  0...(NCP_ciMotorInterrupt-1)
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tRotaryEncoderBody_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eInitialize
 * entry port: eInitialize
 * signature:  sInitializeRoutineBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eInitialize_main
 * name:         eInitialize_main
 * global_name:  tRotaryEncoderBody_eInitialize_main
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
 * global_name:  tRotaryEncoderBody_eTerminate_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eTerminate_main()
{
}

/* #[<ENTRY_PORT>]# eiCyclicBody
 * entry port: eiCyclicBody
 * signature:  siHandlerBody
 * context:    non-task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiCyclicBody_main
 * name:         eiCyclicBody_main
 * global_name:  tRotaryEncoderBody_eiCyclicBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eiCyclicBody_main()
{
}

/* #[<ENTRY_PORT>]# eiInterruptBody
 * entry port: eiInterruptBody
 * signature:  siHandlerBody
 * context:    non-task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiInterruptBody_main
 * name:         eiInterruptBody_main
 * global_name:  tRotaryEncoderBody_eiInterruptBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eiInterruptBody_main()
{
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
