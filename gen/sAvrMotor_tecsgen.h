/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sAvrMotor_TECSGEN_H
#define sAvrMotor_TECSGEN_H

/*
 * signature   :  sAvrMotor
 * global name :  sAvrMotor
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sAvrMotor_VDES {
    struct tag_sAvrMotor_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sAvrMotor_VMT {
    void           (*setMotor)( struct tag_sAvrMotor_VDES *edp, uint8_t portNumber, int8_t powerPercent, bool_t brake );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SAVRMOTOR_SETMOTOR              (1)

#endif /* sAvrMotor_TECSGEN_H */
