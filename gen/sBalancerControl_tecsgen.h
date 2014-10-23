/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sBalancerControl_TECSGEN_H
#define sBalancerControl_TECSGEN_H

/*
 * signature   :  sBalancerControl
 * global name :  sBalancerControl
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sBalancerControl_VDES {
    struct tag_sBalancerControl_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sBalancerControl_VMT {
    void           (*setSpeed)( struct tag_sBalancerControl_VDES *edp, int16_t speed );
    void           (*getSpeed)( struct tag_sBalancerControl_VDES *edp, int16_t* speed );
    void           (*setTurn)( struct tag_sBalancerControl_VDES *edp, int16_t turn );
    void           (*getTurn)( struct tag_sBalancerControl_VDES *edp, int16_t* turn );
    void           (*calibrate)( struct tag_sBalancerControl_VDES *edp );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SBALANCERCONTROL_SETSPEED       (1)
#define	FUNCID_SBALANCERCONTROL_GETSPEED       (2)
#define	FUNCID_SBALANCERCONTROL_SETTURN        (3)
#define	FUNCID_SBALANCERCONTROL_GETTURN        (4)
#define	FUNCID_SBALANCERCONTROL_CALIBRATE      (5)

#endif /* sBalancerControl_TECSGEN_H */
