/*
 * ���Υե������ tecsgen �ˤ��ƥ�ץ졼�ȤȤ��Ƽ�ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥ��տޤ���Ƥ��ޤ���
 * tecsgen �κƼ¹Ԥˤ���񤭤���Ƥ��ޤ����ᡢ�̾�
 *   gen/tMotor_template.c => src/tMotor.c
 * �Τ褦��̾��, �ե�������ѹ����Ƥ��齤�����ޤ�
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ���� #[</...>]# �ǰϤޤ줿�����Ȥ��Խ����ʤ��Ǥ�������
 * tecsmerge �ˤ��ޡ����˻��Ѥ���ޤ�
 *
 * °�����������ޥ��� #_CAAM_#
 * portNumber       uint8_t          ATTR_portNumber 
 * revolution       int32_t          VAR_revolution  
 * pwm              int8_t           VAR_pwm         
 * preEdge          uint32_t         VAR_preEdge     
 *
 * �ƤӸ��ؿ� #_TCPF_#
 * call port : cAvrMotor  signature: sAvrMotor context: task
 *   void           cAvrMotor_setMotor( uint8_t portNumber, int8_t powerPercent, bool_t brake );
 *
 * #[</PREAMBLE>]# */

/* �ץ�ȥ�����������ѿ�������򤳤��˽񤭤ޤ� #_PAC_# */
#include "tMotor_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* �������ؿ� #_TEPF_# */
/* #[<ENTRY_PORT>]# eMotor
 * entry port: eMotor
 * signature:  sMotor
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eMotor_setPWM
 * name:         eMotor_setPWM
 * global_name:  tMotor_eMotor_setPWM
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eMotor_setPWM(CELLIDX idx, int8_t pwm, bool_t brakeMode)
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

/* #[<ENTRY_FUNC>]# eMotor_setRevolution
 * name:         eMotor_setRevolution
 * global_name:  tMotor_eMotor_setRevolution
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eMotor_setRevolution(CELLIDX idx, int32_t revolution)
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

/* #[<ENTRY_FUNC>]# eMotor_getRevolution
 * name:         eMotor_getRevolution
 * global_name:  tMotor_eMotor_getRevolution
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eMotor_getRevolution(CELLIDX idx, int32_t* revolution)
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

/* #[<ENTRY_PORT>]# eiMotorInterrupt
 * entry port: eiMotorInterrupt
 * signature:  siMotorInterrupt
 * context:    non-task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiMotorInterrupt_quadDecode
 * name:         eiMotorInterrupt_quadDecode
 * global_name:  tMotor_eiMotorInterrupt_quadDecode
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eiMotorInterrupt_quadDecode(CELLIDX idx, uint32_t pins)
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

/* #[<ENTRY_FUNC>]# eiMotorInterrupt_stopMotor
 * name:         eiMotorInterrupt_stopMotor
 * global_name:  tMotor_eiMotorInterrupt_stopMotor
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eiMotorInterrupt_stopMotor(CELLIDX idx)
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

/* #[<POSTAMBLE>]#
 *   �����겼����������ؿ���񤭤ޤ�
 * #[</POSTAMBLE>]#*/
