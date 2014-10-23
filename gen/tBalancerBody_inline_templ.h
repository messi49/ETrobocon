/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tBalancerBody_inline_template.h => src/tBalancerBody_inline.h
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * #[</PREAMBLE>]# */

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eBalancer
 * entry port: eBalancer
 * signature:  sBalancer
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eBalancer_control
 * name:         eBalancer_control
 * global_name:  tBalancerBody_eBalancer_control
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline void
eBalancer_control(int16_t forward, int16_t turn, uint16_t gyro, uint16_t gyroOffset, int32_t leftRevolution, int32_t rightRevolution, uint16_t battery, int8_t* pwm_l, int8_t* pwm_r)
{
}

/* #[<ENTRY_PORT>]# eInitialize
 * entry port: eInitialize
 * signature:  sInitializeRoutineBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eInitialize_main
 * name:         eInitialize_main
 * global_name:  tBalancerBody_eInitialize_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline void
eInitialize_main()
{
}

