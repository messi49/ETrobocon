/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tTask_inline_template.h => src/tTask_inline.h
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
/* #[<ENTRY_PORT>]# eTask
 * entry port: eTask
 * signature:  sTask
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eTask_activate
 * name:         eTask_activate
 * global_name:  tTask_eTask_activate
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTask_activate(CELLIDX idx)
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

/* #[<ENTRY_FUNC>]# eTask_cancelActivate
 * name:         eTask_cancelActivate
 * global_name:  tTask_eTask_cancelActivate
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER_UINT
eTask_cancelActivate(CELLIDX idx)
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

/* #[<ENTRY_FUNC>]# eTask_terminate
 * name:         eTask_terminate
 * global_name:  tTask_eTask_terminate
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTask_terminate(CELLIDX idx)
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

/* #[<ENTRY_FUNC>]# eTask_changePriority
 * name:         eTask_changePriority
 * global_name:  tTask_eTask_changePriority
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTask_changePriority(CELLIDX idx, PRI priority)
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

/* #[<ENTRY_FUNC>]# eTask_getPriority
 * name:         eTask_getPriority
 * global_name:  tTask_eTask_getPriority
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTask_getPriority(CELLIDX idx, PRI* p_priority)
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

/* #[<ENTRY_FUNC>]# eTask_refer
 * name:         eTask_refer
 * global_name:  tTask_eTask_refer
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTask_refer(CELLIDX idx, T_RTSK* pk_taskStatus)
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

/* #[<ENTRY_FUNC>]# eTask_wakeup
 * name:         eTask_wakeup
 * global_name:  tTask_eTask_wakeup
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTask_wakeup(CELLIDX idx)
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

/* #[<ENTRY_FUNC>]# eTask_cancelWakeup
 * name:         eTask_cancelWakeup
 * global_name:  tTask_eTask_cancelWakeup
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER_UINT
eTask_cancelWakeup(CELLIDX idx)
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

/* #[<ENTRY_FUNC>]# eTask_releaseWait
 * name:         eTask_releaseWait
 * global_name:  tTask_eTask_releaseWait
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTask_releaseWait(CELLIDX idx)
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

/* #[<ENTRY_FUNC>]# eTask_suspend
 * name:         eTask_suspend
 * global_name:  tTask_eTask_suspend
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTask_suspend(CELLIDX idx)
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

/* #[<ENTRY_FUNC>]# eTask_resume
 * name:         eTask_resume
 * global_name:  tTask_eTask_resume
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTask_resume(CELLIDX idx)
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

/* #[<ENTRY_FUNC>]# eTask_raiseException
 * name:         eTask_raiseException
 * global_name:  tTask_eTask_raiseException
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTask_raiseException(CELLIDX idx, TEXPTN pattern)
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

/* #[<ENTRY_PORT>]# eiTask
 * entry port: eiTask
 * signature:  siTask
 * context:    non-task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiTask_activate
 * name:         eiTask_activate
 * global_name:  tTask_eiTask_activate
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eiTask_activate(CELLIDX idx)
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

/* #[<ENTRY_FUNC>]# eiTask_wakeup
 * name:         eiTask_wakeup
 * global_name:  tTask_eiTask_wakeup
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eiTask_wakeup(CELLIDX idx)
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

/* #[<ENTRY_FUNC>]# eiTask_releaseWait
 * name:         eiTask_releaseWait
 * global_name:  tTask_eiTask_releaseWait
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eiTask_releaseWait(CELLIDX idx)
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

/* #[<ENTRY_FUNC>]# eiTask_raiseException
 * name:         eiTask_raiseException
 * global_name:  tTask_eiTask_raiseException
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eiTask_raiseException(CELLIDX idx, TEXPTN pattern)
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

