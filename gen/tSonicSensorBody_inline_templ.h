/*
 * ���Υե������ tecsgen �ˤ��ƥ�ץ졼�ȤȤ��Ƽ�ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥ��տޤ���Ƥ��ޤ���
 * tecsgen �κƼ¹Ԥˤ���񤭤���Ƥ��ޤ����ᡢ�̾�
 *   gen/tSonicSensorBody_inline_template.h => src/tSonicSensorBody_inline.h
 * �Τ褦��̾��, �ե�������ѹ����Ƥ��齤�����ޤ�
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ���� #[</...>]# �ǰϤޤ줿�����Ȥ��Խ����ʤ��Ǥ�������
 * tecsmerge �ˤ��ޡ����˻��Ѥ���ޤ�
 *
 * °�����������ޥ��� #_CAAM_#
 * distance         uint8_t          VAR_distance    
 *
 * #[</PREAMBLE>]# */

/* �������ؿ� #_TEPF_# */
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
		/* ���顼���������ɤ򤳤��˵��Ҥ��ޤ� */
	} /* end if VALID_IDX(idx) */

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

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
		/* ���顼���������ɤ򤳤��˵��Ҥ��ޤ� */
	} /* end if VALID_IDX(idx) */

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

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
		/* ���顼���������ɤ򤳤��˵��Ҥ��ޤ� */
	} /* end if VALID_IDX(idx) */

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

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
		/* ���顼���������ɤ򤳤��˵��Ҥ��ޤ� */
	} /* end if VALID_IDX(idx) */

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

}
