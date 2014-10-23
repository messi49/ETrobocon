/*
 * ���Υե������ tecsgen �ˤ��ƥ�ץ졼�ȤȤ��Ƽ�ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥ��տޤ���Ƥ��ޤ���
 * tecsgen �κƼ¹Ԥˤ���񤭤���Ƥ��ޤ����ᡢ�̾�
 *   gen/tSensorPort_template.c => src/tSensorPort.c
 * �Τ褦��̾��, �ե�������ѹ����Ƥ��齤�����ޤ�
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ���� #[</...>]# �ǰϤޤ줿�����Ȥ��Խ����ʤ��Ǥ�������
 * tecsmerge �ˤ��ޡ����˻��Ѥ���ޤ�
 *
 * °�����������ޥ��� #_CAAM_#
 * portNumber       uint8_t          ATTR_portNumber 
 *
 * �ƤӸ��ؿ� #_TCPF_#
 * call port : cAvrSensor  signature: sAvrSensor context: task
 *   void           cAvrSensor_setInputPower( uint8_t portNumber, uint8_t powerType );
 *   uint16_t       cAvrSensor_getSensor( uint8_t portNumber );
 *
 * #[</PREAMBLE>]# */

/* �ץ�ȥ�����������ѿ�������򤳤��˽񤭤ޤ� #_PAC_# */
#include "tSensorPort_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* �������ؿ� #_TEPF_# */
/* #[<ENTRY_PORT>]# eSensorPort
 * entry port: eSensorPort
 * signature:  sSensorPort
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eSensorPort_clearSCL
 * name:         eSensorPort_clearSCL
 * global_name:  tSensorPort_eSensorPort_clearSCL
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSensorPort_clearSCL(CELLIDX idx)
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

/* #[<ENTRY_FUNC>]# eSensorPort_clearSDA
 * name:         eSensorPort_clearSDA
 * global_name:  tSensorPort_eSensorPort_clearSDA
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSensorPort_clearSDA(CELLIDX idx)
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

/* #[<ENTRY_FUNC>]# eSensorPort_setSCL
 * name:         eSensorPort_setSCL
 * global_name:  tSensorPort_eSensorPort_setSCL
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSensorPort_setSCL(CELLIDX idx)
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

/* #[<ENTRY_FUNC>]# eSensorPort_setSDA
 * name:         eSensorPort_setSDA
 * global_name:  tSensorPort_eSensorPort_setSDA
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSensorPort_setSDA(CELLIDX idx)
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

/* #[<ENTRY_FUNC>]# eSensorPort_inputPower
 * name:         eSensorPort_inputPower
 * global_name:  tSensorPort_eSensorPort_inputPower
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSensorPort_inputPower(CELLIDX idx, uint8_t powerType)
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

/* #[<ENTRY_FUNC>]# eSensorPort_getValue
 * name:         eSensorPort_getValue
 * global_name:  tSensorPort_eSensorPort_getValue
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
uint16_t
eSensorPort_getValue(CELLIDX idx)
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
