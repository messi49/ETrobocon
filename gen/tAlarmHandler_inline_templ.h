/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tAlarmHandler_inline_template.h => src/tAlarmHandler_inline.h
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * id               ID               ATTR_id         
 *
 * #[</PREAMBLE>]# */

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eAlarm
 * entry port: eAlarm
 * signature:  sAlarm
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eAlarm_start
 * name:         eAlarm_start
 * global_name:  tAlarmHandler_eAlarm_start
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eAlarm_start(CELLIDX idx, RELTIM alarmTime)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eAlarm_stop
 * name:         eAlarm_stop
 * global_name:  tAlarmHandler_eAlarm_stop
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eAlarm_stop(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eAlarm_refer
 * name:         eAlarm_refer
 * global_name:  tAlarmHandler_eAlarm_refer
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eAlarm_refer(CELLIDX idx, T_RALM* pk_alarmStatus)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_PORT>]# eiAlarm
 * entry port: eiAlarm
 * signature:  siAlarm
 * context:    non-task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiAlarm_start
 * name:         eiAlarm_start
 * global_name:  tAlarmHandler_eiAlarm_start
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eiAlarm_start(CELLIDX idx, RELTIM alarmTime)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eiAlarm_stop
 * name:         eiAlarm_stop
 * global_name:  tAlarmHandler_eiAlarm_stop
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eiAlarm_stop(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

