/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tConfigInterrupt_inline_template.h => src/tConfigInterrupt_inline.h
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * interruptNumber  INTNO            ATTR_interruptNumber
 *
 * #[</PREAMBLE>]# */

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eConfigInterrupt
 * entry port: eConfigInterrupt
 * signature:  sConfigInterrupt
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eConfigInterrupt_disable
 * name:         eConfigInterrupt_disable
 * global_name:  tConfigInterrupt_eConfigInterrupt_disable
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eConfigInterrupt_disable(CELLIDX idx)
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

/* #[<ENTRY_FUNC>]# eConfigInterrupt_enable
 * name:         eConfigInterrupt_enable
 * global_name:  tConfigInterrupt_eConfigInterrupt_enable
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eConfigInterrupt_enable(CELLIDX idx)
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

