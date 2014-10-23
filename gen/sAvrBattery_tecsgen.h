/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sAvrBattery_TECSGEN_H
#define sAvrBattery_TECSGEN_H

/*
 * signature   :  sAvrBattery
 * global name :  sAvrBattery
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sAvrBattery_VDES {
    struct tag_sAvrBattery_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sAvrBattery_VMT {
    uint16_t       (*batteryVoltage)( struct tag_sAvrBattery_VDES *edp );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SAVRBATTERY_BATTERYVOLTAGE      (1)

#endif /* sAvrBattery_TECSGEN_H */
