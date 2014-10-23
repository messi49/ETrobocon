/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sButton_TECSGEN_H
#define sButton_TECSGEN_H

/*
 * signature   :  sButton
 * global name :  sButton
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sButton_VDES {
    struct tag_sButton_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sButton_VMT {
    bool_t         (*isENTERButton)( struct tag_sButton_VDES *edp );
    bool_t         (*isRUNButton)( struct tag_sButton_VDES *edp );
    bool_t         (*isSTOPButton)( struct tag_sButton_VDES *edp );
    bool_t         (*isEXITButton)( struct tag_sButton_VDES *edp );
    bool_t         (*isENTERButtonOnly)( struct tag_sButton_VDES *edp );
    bool_t         (*isRUNButtonOnly)( struct tag_sButton_VDES *edp );
    bool_t         (*isSTOPButtonOnly)( struct tag_sButton_VDES *edp );
    bool_t         (*isEXITButtonOnly)( struct tag_sButton_VDES *edp );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SBUTTON_ISENTERBUTTON           (1)
#define	FUNCID_SBUTTON_ISRUNBUTTON             (2)
#define	FUNCID_SBUTTON_ISSTOPBUTTON            (3)
#define	FUNCID_SBUTTON_ISEXITBUTTON            (4)
#define	FUNCID_SBUTTON_ISENTERBUTTONONLY       (5)
#define	FUNCID_SBUTTON_ISRUNBUTTONONLY         (6)
#define	FUNCID_SBUTTON_ISSTOPBUTTONONLY        (7)
#define	FUNCID_SBUTTON_ISEXITBUTTONONLY        (8)

#endif /* sButton_TECSGEN_H */
