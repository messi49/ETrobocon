/*
 * ���Υե������ tecsgen �ˤ��ƥ�ץ졼�ȤȤ��Ƽ�ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥ��տޤ���Ƥ��ޤ���
 * tecsgen �κƼ¹Ԥˤ���񤭤���Ƥ��ޤ����ᡢ�̾�
 *   gen/tSemaphore_inline_template.h => src/tSemaphore_inline.h
 * �Τ褦��̾��, �ե�������ѹ����Ƥ��齤�����ޤ�
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ���� #[</...>]# �ǰϤޤ줿�����Ȥ��Խ����ʤ��Ǥ�������
 * tecsmerge �ˤ��ޡ����˻��Ѥ���ޤ�
 *
 * °�����������ޥ��� #_CAAM_#
 * id               ID               ATTR_id         
 *
 * #[</PREAMBLE>]# */

/* �������ؿ� #_TEPF_# */
/* #[<ENTRY_PORT>]# eSemaphore
 * entry port: eSemaphore
 * signature:  sSemaphore
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eSemaphore_signal
 * name:         eSemaphore_signal
 * global_name:  tSemaphore_eSemaphore_signal
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eSemaphore_signal(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eSemaphore_wait
 * name:         eSemaphore_wait
 * global_name:  tSemaphore_eSemaphore_wait
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eSemaphore_wait(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eSemaphore_waitPolling
 * name:         eSemaphore_waitPolling
 * global_name:  tSemaphore_eSemaphore_waitPolling
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eSemaphore_waitPolling(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eSemaphore_waitTimeout
 * name:         eSemaphore_waitTimeout
 * global_name:  tSemaphore_eSemaphore_waitTimeout
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eSemaphore_waitTimeout(CELLIDX idx, TMO timeout)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eSemaphore_initialize
 * name:         eSemaphore_initialize
 * global_name:  tSemaphore_eSemaphore_initialize
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eSemaphore_initialize(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eSemaphore_refer
 * name:         eSemaphore_refer
 * global_name:  tSemaphore_eSemaphore_refer
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eSemaphore_refer(CELLIDX idx, T_RSEM* pk_semaphoreStatus)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_PORT>]# eiSemaphore
 * entry port: eiSemaphore
 * signature:  siSemaphore
 * context:    non-task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiSemaphore_signal
 * name:         eiSemaphore_signal
 * global_name:  tSemaphore_eiSemaphore_signal
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eiSemaphore_signal(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

	return(ercd);
}

