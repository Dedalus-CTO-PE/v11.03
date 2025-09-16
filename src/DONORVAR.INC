.**********************************************************************
.*  DONORVAR  :  Variables required for DONORDET.PBL                  *
.**********************************************************************
.
BOXHDR    DIM       20
CALLPOSN  FORM      1
.CMDLINE   DIM       80
.CODE      DIM       2
..CONTNAME  DIM       20
.. COUNTER   FORM      2
DONOREM   FORM      1
ERRVERT   FORM      2
ERRCOL    FORM      2
FNAME     DIM       8
FNHDR     INIT      "nzdonr"
ITEMARRY  DIM       3[10]
ITEMNUM   FORM      2
SAVCCOL   FORM      2
.. SAVCVERT  FORM      2
SCREEN    FORM      2
SVCDDESC  DIM       20
SVDNCODE  DIM       3
SAVINDIC  DIM       1
.
. Temp files
.
DONRFILA  IFILE     SQL, FIXED=4, KEY="U1-3"
DNCODE    DIM       3      1
.          End of record   4
