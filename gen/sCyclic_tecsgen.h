/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sCyclic_TECSGEN_H
#define sCyclic_TECSGEN_H

/*
 * signature   :  sCyclic
 * global name :  sCyclic
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sCyclic_VDES {
    struct tag_sCyclic_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sCyclic_VMT {
    ER             (*start)( struct tag_sCyclic_VDES *edp );
    ER             (*stop)( struct tag_sCyclic_VDES *edp );
    ER             (*refer)( struct tag_sCyclic_VDES *edp, T_RCYC* pk_cyclicHandlerStatus );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SCYCLIC_START                   (1)
#define	FUNCID_SCYCLIC_STOP                    (2)
#define	FUNCID_SCYCLIC_REFER                   (3)

#endif /* sCyclic_TECSGEN_H */
