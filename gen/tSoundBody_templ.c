/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tSoundBody_template.c => src/tSoundBody.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * maxTonePattern   const uint32_t*  ATTR_maxTonePattern
 * toneCycles       uint32_t         VAR_toneCycles  
 * tonePattern      uint32_t*        VAR_tonePattern 
 * volume           int8_t           VAR_volume      
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tSoundBody_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eSound
 * entry port: eSound
 * signature:  sSound
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eSound_beepTone
 * name:         eSound_beepTone
 * global_name:  tSoundBody_eSound_beepTone
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSound_beepTone(uint32_t frequency, uint32_t msecond)
{
}

/* #[<ENTRY_FUNC>]# eSound_setVolume
 * name:         eSound_setVolume
 * global_name:  tSoundBody_eSound_setVolume
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSound_setVolume(uint8_t volume)
{
}

/* #[<ENTRY_PORT>]# eInitialize
 * entry port: eInitialize
 * signature:  sInitializeRoutineBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eInitialize_main
 * name:         eInitialize_main
 * global_name:  tSoundBody_eInitialize_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eInitialize_main()
{
}

/* #[<ENTRY_PORT>]# eiBody
 * entry port: eiBody
 * signature:  siHandlerBody
 * context:    non-task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiBody_main
 * name:         eiBody_main
 * global_name:  tSoundBody_eiBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eiBody_main()
{
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
