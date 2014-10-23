/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tSensorPort_template.c => src/tSensorPort.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * portNumber       uint8_t          ATTR_portNumber 
 *
 * 呼び口関数 #_TCPF_#
 * call port : cAvrSensor  signature: sAvrSensor context: task
 *   void           cAvrSensor_setInputPower( uint8_t portNumber, uint8_t powerType );
 *   uint16_t       cAvrSensor_getSensor( uint8_t portNumber );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tSensorPort_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eSensorPort
 * entry port: eSensorPort
 * signature:  sSensorPort
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eSensorPort_clearSCL
 * name:         eSensorPort_clearSCL
 * global_name:  tSensorPort_eSensorPort_clearSCL
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSensorPort_clearSCL(CELLIDX idx)
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

/* #[<ENTRY_FUNC>]# eSensorPort_clearSDA
 * name:         eSensorPort_clearSDA
 * global_name:  tSensorPort_eSensorPort_clearSDA
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSensorPort_clearSDA(CELLIDX idx)
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

/* #[<ENTRY_FUNC>]# eSensorPort_setSCL
 * name:         eSensorPort_setSCL
 * global_name:  tSensorPort_eSensorPort_setSCL
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSensorPort_setSCL(CELLIDX idx)
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

/* #[<ENTRY_FUNC>]# eSensorPort_setSDA
 * name:         eSensorPort_setSDA
 * global_name:  tSensorPort_eSensorPort_setSDA
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSensorPort_setSDA(CELLIDX idx)
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

/* #[<ENTRY_FUNC>]# eSensorPort_inputPower
 * name:         eSensorPort_inputPower
 * global_name:  tSensorPort_eSensorPort_inputPower
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSensorPort_inputPower(CELLIDX idx, uint8_t powerType)
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

/* #[<ENTRY_FUNC>]# eSensorPort_getValue
 * name:         eSensorPort_getValue
 * global_name:  tSensorPort_eSensorPort_getValue
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
uint16_t
eSensorPort_getValue(CELLIDX idx)
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
