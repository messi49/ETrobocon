/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef siTask_TECSGEN_H
#define siTask_TECSGEN_H

/*
 * signature   :  siTask
 * global name :  siTask
 * context     :  non-task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_siTask_VDES {
    struct tag_siTask_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_siTask_VMT {
    ER             (*activate)( struct tag_siTask_VDES *edp );
    ER             (*wakeup)( struct tag_siTask_VDES *edp );
    ER             (*releaseWait)( struct tag_siTask_VDES *edp );
    ER             (*raiseException)( struct tag_siTask_VDES *edp, TEXPTN pattern );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SITASK_ACTIVATE                 (1)
#define	FUNCID_SITASK_WAKEUP                   (2)
#define	FUNCID_SITASK_RELEASEWAIT              (3)
#define	FUNCID_SITASK_RAISEEXCEPTION           (4)

#endif /* siTask_TECSGEN_H */
