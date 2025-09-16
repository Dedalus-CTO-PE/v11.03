.
. WATCSUIO.INC
. ------------
. Related FD   : WATCSUFD.INC
. Filenames    : watcsuaf
. Description  : Waiting List Codes Summary File
. Variables    : OVRCD   FORM    1          0 = NOT OVER
.                                           1 = OVER
.                KEY18   DIM     18         KEY FOR WATCSUA1
.
. -----------------------------------------
. ------- I/O routines for WATCSUA1 -------
. -----------------------------------------
.
.         read to see if record exists 
.
RAWTCSU1  MOVE      ZERO,OVRCD
          RESET     KEY18
          READ      WATCSUA1,KEY18;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         positional read
.
RSWTCSU1  RESET     KEY18
          READ      WATCSUA1,KEY18;;
          RETURN
.
.         direct read 
.
RDWTCSU1  MOVE      ZERO,OVRCD
          RESET     KEY18
          READ      WATCSUA1,KEY18;WTCSDATE,WTCSUNIT,WTCSPRTY,WTCSATYP,WTCSCLSS:
                                   WTCSWLST,WTCSBOOK,WTCSCURA,WTCSADWL,WTCSADCN:
                                   WTCSADMT,WTCSBKED,WTCSDADM,WTCSWLAD,WTCSWLBK:
                                   WTCSSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         next read 
.
RKWTCSU1  MOVE      ZERO,OVRCD
          READKS    WATCSUA1;WTCSDATE,WTCSUNIT,WTCSPRTY,WTCSATYP,WTCSCLSS:
                             WTCSWLST,WTCSBOOK,WTCSCURA,WTCSADWL,WTCSADCN:
                             WTCSADMT,WTCSBKED,WTCSDADM,WTCSWLAD,WTCSWLBK:
                             WTCSSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         previous read 
.
RPWTCSU1  MOVE      ZERO,OVRCD
          READKP    WATCSUA1;WTCSDATE,WTCSUNIT,WTCSPRTY,WTCSATYP,WTCSCLSS:
                             WTCSWLST,WTCSBOOK,WTCSCURA,WTCSADWL,WTCSADCN:
                             WTCSADMT,WTCSBKED,WTCSDADM,WTCSWLAD,WTCSWLBK:
                             WTCSSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         write 
.
WRWTCSU1  RESET     KEY18
          WRITE     WATCSUA1,KEY18;WTCSDATE,WTCSUNIT,WTCSPRTY,WTCSATYP,WTCSCLSS:
                                   WTCSWLST,WTCSBOOK,WTCSCURA,WTCSADWL,WTCSADCN:
                                   WTCSADMT,WTCSBKED,WTCSDADM,WTCSWLAD,WTCSWLBK:
                                   WTCSSPAR
          RETURN
.
.         update 
.
UPWTCSU1  RESET     KEY18
          UPDATE    WATCSUA1;WTCSDATE,WTCSUNIT,WTCSPRTY,WTCSATYP,WTCSCLSS:
                             WTCSWLST,WTCSBOOK,WTCSCURA,WTCSADWL,WTCSADCN:
                             WTCSADMT,WTCSBKED,WTCSDADM,WTCSWLAD,WTCSWLBK:
                             WTCSSPAR
          RETURN
.
.         delete 
.
DEWTCSU1  RESET     KEY18
          DELETE    WATCSUA1,KEY18
          RETURN
................................................................................
