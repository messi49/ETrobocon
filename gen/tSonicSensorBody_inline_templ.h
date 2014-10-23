/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tSonicSensorBody_inline_template.h => src/tSonicSensorBody_inline.h
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * distance         uint8_t          VAR_distance    
 *
 * #[</PREAMBLE>]# */

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eSensor
 * entry port: eSensor
 * signature:  sSensor
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eSensor_getValue
 * name:         eSensor_getValue
 * global_name:  tSonicSensorBody_eSensor_getValue
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline void
eSensor_getValue(CELLIDX idx, uint16_t* value)
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

/* #[<ENTRY_PORT>]# eiSensorDriver
 * entry port: eiSensorDriver
 * signature:  siSensorDriver
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiSensorDriver_initialize
 * name:         eiSensorDriver_initialize
 * global_name:  tSonicSensorBody_eiSensorDriver_initialize
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline void
eiSensorDriver_initialize(CELLIDX idx)
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

/* #[<ENTRY_FUNC>]# eiSensorDriver_i2cInterruptBody
 * name:         eiSensorDriver_i2cInterruptBody
 * global_name:  tSonicSensorBody_eiSensorDriver_i2cInterruptBody
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline void
eiSensorDriver_i2cInterruptBody(CELLIDX idx, uint32_t inputs)
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

/* #[<ENTRY_PORT>]# eTerminate
 * entry port: eTerminate
 * signature:  sTerminateRoutineBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eTerminate_main
 * name:         eTerminate_main
 * global_name:  tSonicSensorBody_eTerminate_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline void
eTerminate_main(CELLIDX idx)
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

