/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sEventflag_TECSGEN_H
#define sEventflag_TECSGEN_H

/*
 * signature   :  sEventflag
 * global name :  sEventflag
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sEventflag_VDES {
    struct tag_sEventflag_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sEventflag_VMT {
    ER             (*set)( struct tag_sEventflag_VDES *edp, FLGPTN setPattern );
    ER             (*clear)( struct tag_sEventflag_VDES *edp, FLGPTN clearPattern );
    ER             (*wait)( struct tag_sEventflag_VDES *edp, FLGPTN waitPattern, MODE waitFlagMode, FLGPTN* p_flagPattern );
    ER             (*waitPolling)( struct tag_sEventflag_VDES *edp, FLGPTN waitPattern, MODE waitFlagMode, FLGPTN* p_flagPattern );
    ER             (*waitTimeout)( struct tag_sEventflag_VDES *edp, FLGPTN waitPattern, MODE waitFlagMode, FLGPTN* p_flagPattern, TMO timeout );
    ER             (*initialize)( struct tag_sEventflag_VDES *edp );
    ER             (*refer)( struct tag_sEventflag_VDES *edp, T_RFLG* pk_eventflagStatus );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SEVENTFLAG_SET                  (1)
#define	FUNCID_SEVENTFLAG_CLEAR                (2)
#define	FUNCID_SEVENTFLAG_WAIT                 (3)
#define	FUNCID_SEVENTFLAG_WAITPOLLING          (4)
#define	FUNCID_SEVENTFLAG_WAITTIMEOUT          (5)
#define	FUNCID_SEVENTFLAG_INITIALIZE           (6)
#define	FUNCID_SEVENTFLAG_REFER                (7)

#endif /* sEventflag_TECSGEN_H */
