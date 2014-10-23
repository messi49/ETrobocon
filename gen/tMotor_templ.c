/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tMotor_template.c => src/tMotor.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * portNumber       uint8_t          ATTR_portNumber 
 * revolution       int32_t          VAR_revolution  
 * pwm              int8_t           VAR_pwm         
 * preEdge          uint32_t         VAR_preEdge     
 *
 * 呼び口関数 #_TCPF_#
 * call port : cAvrMotor  signature: sAvrMotor context: task
 *   void           cAvrMotor_setMotor( uint8_t portNumber, int8_t powerPercent, bool_t brake );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tMotor_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eMotor
 * entry port: eMotor
 * signature:  sMotor
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eMotor_setPWM
 * name:         eMotor_setPWM
 * global_name:  tMotor_eMotor_setPWM
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eMotor_setPWM(CELLIDX idx, int8_t pwm, bool_t brakeMode)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eMotor_setRevolution
 * name:         eMotor_setRevolution
 * global_name:  tMotor_eMotor_setRevolution
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eMotor_setRevolution(CELLIDX idx, int32_t revolution)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eMotor_getRevolution
 * name:         eMotor_getRevolution
 * global_name:  tMotor_eMotor_getRevolution
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eMotor_getRevolution(CELLIDX idx, int32_t* revolution)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<ENTRY_PORT>]# eiMotorInterrupt
 * entry port: eiMotorInterrupt
 * signature:  siMotorInterrupt
 * context:    non-task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiMotorInterrupt_quadDecode
 * name:         eiMotorInterrupt_quadDecode
 * global_name:  tMotor_eiMotorInterrupt_quadDecode
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eiMotorInterrupt_quadDecode(CELLIDX idx, uint32_t pins)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eiMotorInterrupt_stopMotor
 * name:         eiMotorInterrupt_stopMotor
 * global_name:  tMotor_eiMotorInterrupt_stopMotor
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eiMotorInterrupt_stopMotor(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
