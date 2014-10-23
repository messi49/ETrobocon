/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sMotor_TECSGEN_H
#define sMotor_TECSGEN_H

/*
 * signature   :  sMotor
 * global name :  sMotor
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sMotor_VDES {
    struct tag_sMotor_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sMotor_VMT {
    void           (*setPWM)( struct tag_sMotor_VDES *edp, int8_t pwm, bool_t brakeMode );
    void           (*setRevolution)( struct tag_sMotor_VDES *edp, int32_t revolution );
    void           (*getRevolution)( struct tag_sMotor_VDES *edp, int32_t* revolution );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SMOTOR_SETPWM                   (1)
#define	FUNCID_SMOTOR_SETREVOLUTION            (2)
#define	FUNCID_SMOTOR_GETREVOLUTION            (3)

#endif /* sMotor_TECSGEN_H */
