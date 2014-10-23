/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSIOPort_TECSGEN_H
#define sSIOPort_TECSGEN_H

/*
 * signature   :  sSIOPort
 * global name :  sSIOPort
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSIOPort_VDES {
    struct tag_sSIOPort_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSIOPort_VMT {
    void           (*waitReady)( struct tag_sSIOPort_VDES *edp );
    bool_t         (*isOpened)( struct tag_sSIOPort_VDES *edp );
    void           (*open)( struct tag_sSIOPort_VDES *edp );
    void           (*close)( struct tag_sSIOPort_VDES *edp );
    bool_t         (*putChar)( struct tag_sSIOPort_VDES *edp, char c );
    int_t          (*getChar)( struct tag_sSIOPort_VDES *edp );
    void           (*enableCBR)( struct tag_sSIOPort_VDES *edp, uint_t cbrtn );
    void           (*disableCBR)( struct tag_sSIOPort_VDES *edp, uint_t cbrtn );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSIOPORT_WAITREADY              (1)
#define	FUNCID_SSIOPORT_ISOPENED               (2)
#define	FUNCID_SSIOPORT_OPEN                   (3)
#define	FUNCID_SSIOPORT_CLOSE                  (4)
#define	FUNCID_SSIOPORT_PUTCHAR                (5)
#define	FUNCID_SSIOPORT_GETCHAR                (6)
#define	FUNCID_SSIOPORT_ENABLECBR              (7)
#define	FUNCID_SSIOPORT_DISABLECBR             (8)

#endif /* sSIOPort_TECSGEN_H */
