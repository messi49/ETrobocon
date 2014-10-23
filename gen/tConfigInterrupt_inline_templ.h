/*
 * ���Υե������ tecsgen �ˤ��ƥ�ץ졼�ȤȤ��Ƽ�ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥ��տޤ���Ƥ��ޤ���
 * tecsgen �κƼ¹Ԥˤ���񤭤���Ƥ��ޤ����ᡢ�̾�
 *   gen/tConfigInterrupt_inline_template.h => src/tConfigInterrupt_inline.h
 * �Τ褦��̾��, �ե�������ѹ����Ƥ��齤�����ޤ�
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ���� #[</...>]# �ǰϤޤ줿�����Ȥ��Խ����ʤ��Ǥ�������
 * tecsmerge �ˤ��ޡ����˻��Ѥ���ޤ�
 *
 * °�����������ޥ��� #_CAAM_#
 * interruptNumber  INTNO            ATTR_interruptNumber
 *
 * #[</PREAMBLE>]# */

/* �������ؿ� #_TEPF_# */
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

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

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

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

	return(ercd);
}

