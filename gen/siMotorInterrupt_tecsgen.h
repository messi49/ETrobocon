/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef siMotorInterrupt_TECSGEN_H
#define siMotorInterrupt_TECSGEN_H

/*
 * signature   :  siMotorInterrupt
 * global name :  siMotorInterrupt
 * context     :  non-task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_siMotorInterrupt_VDES {
    struct tag_siMotorInterrupt_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_siMotorInterrupt_VMT {
    void           (*quadDecode)( struct tag_siMotorInterrupt_VDES *edp, uint32_t pins );
    void           (*stopMotor)( struct tag_siMotorInterrupt_VDES *edp );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SIMOTORINTERRUPT_QUADDECODE     (1)
#define	FUNCID_SIMOTORINTERRUPT_STOPMOTOR      (2)

#endif /* siMotorInterrupt_TECSGEN_H */
