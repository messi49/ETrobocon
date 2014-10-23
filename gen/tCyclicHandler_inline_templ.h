/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tCyclicHandler_inline_template.h => src/tCyclicHandler_inline.h
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
/* #[<ENTRY_PORT>]# eCyclic
 * entry port: eCyclic
 * signature:  sCyclic
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eCyclic_start
 * name:         eCyclic_start
 * global_name:  tCyclicHandler_eCyclic_start
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eCyclic_start(CELLIDX idx)
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

/* #[<ENTRY_FUNC>]# eCyclic_stop
 * name:         eCyclic_stop
 * global_name:  tCyclicHandler_eCyclic_stop
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eCyclic_stop(CELLIDX idx)
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

/* #[<ENTRY_FUNC>]# eCyclic_refer
 * name:         eCyclic_refer
 * global_name:  tCyclicHandler_eCyclic_refer
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eCyclic_refer(CELLIDX idx, T_RCYC* pk_cyclicHandlerStatus)
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

