/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sDisplay_TECSGEN_H
#define sDisplay_TECSGEN_H

/*
 * signature   :  sDisplay
 * global name :  sDisplay
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sDisplay_VDES {
    struct tag_sDisplay_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sDisplay_VMT {
    void           (*update)( struct tag_sDisplay_VDES *edp );
    void           (*clear)( struct tag_sDisplay_VDES *edp, bool_t updateToo );
    void           (*gotoXY)( struct tag_sDisplay_VDES *edp, uint8_t x, uint8_t y );
    void           (*putChar)( struct tag_sDisplay_VDES *edp, char c );
    void           (*putString)( struct tag_sDisplay_VDES *edp, const char* string );
    void           (*putInt)( struct tag_sDisplay_VDES *edp, int32_t val, uint8_t places );
    void           (*putUnsigned)( struct tag_sDisplay_VDES *edp, uint32_t val, uint8_t places );
    void           (*putHex)( struct tag_sDisplay_VDES *edp, uint32_t val, uint8_t places );
    uint8_t*       (*getBuffer)( struct tag_sDisplay_VDES *edp );
    void           (*powerOff)( struct tag_sDisplay_VDES *edp, bool_t updateToo );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SDISPLAY_UPDATE                 (1)
#define	FUNCID_SDISPLAY_CLEAR                  (2)
#define	FUNCID_SDISPLAY_GOTOXY                 (3)
#define	FUNCID_SDISPLAY_PUTCHAR                (4)
#define	FUNCID_SDISPLAY_PUTSTRING              (5)
#define	FUNCID_SDISPLAY_PUTINT                 (6)
#define	FUNCID_SDISPLAY_PUTUNSIGNED            (7)
#define	FUNCID_SDISPLAY_PUTHEX                 (8)
#define	FUNCID_SDISPLAY_GETBUFFER              (9)
#define	FUNCID_SDISPLAY_POWEROFF               (10)

#endif /* sDisplay_TECSGEN_H */
