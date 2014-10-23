/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSPI_TECSGEN_H
#define sSPI_TECSGEN_H

/*
 * signature   :  sSPI
 * global name :  sSPI
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSPI_VDES {
    struct tag_sSPI_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSPI_VMT {
    void           (*initialize)( struct tag_sSPI_VDES *edp );
    void           (*write)( struct tag_sSPI_VDES *edp, uint32_t CD, const uint8_t* data, uint32_t nBytes );
    void           (*setDisplay)( struct tag_sSPI_VDES *edp, const uint8_t* display );
    void           (*refresh)( struct tag_sSPI_VDES *edp );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSPI_INITIALIZE                 (1)
#define	FUNCID_SSPI_WRITE                      (2)
#define	FUNCID_SSPI_SETDISPLAY                 (3)
#define	FUNCID_SSPI_REFRESH                    (4)

#endif /* sSPI_TECSGEN_H */
