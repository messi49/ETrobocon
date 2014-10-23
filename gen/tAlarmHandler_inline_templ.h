/*
 * ���Υե������ tecsgen �ˤ��ƥ�ץ졼�ȤȤ��Ƽ�ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥ��տޤ���Ƥ��ޤ���
 * tecsgen �κƼ¹Ԥˤ���񤭤���Ƥ��ޤ����ᡢ�̾�
 *   gen/tAlarmHandler_inline_template.h => src/tAlarmHandler_inline.h
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

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

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

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

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

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

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

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

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

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

	return(ercd);
}

