.
. MEHLERIO.INC
. ------------
. Related FD   : MEHLERFD.INC
. Filenames    : mehleraf
. Description  : Mental Health System 'Leave End Reason File'  
. Variables    : OVRCD   FORM    1          0 = NOT OVER
.                                           1 = OVER
.                KEY24   DIM     24         KEY FOR MEHLERA1
.
. -----------------------------------------
. ------- I/O routines for MEHLERA1 -------
. -----------------------------------------
.
RSMHLER1  RESET     KEY24                   * positional read
          READ      MEHLERA1,KEY24;;
          RETURN
.
RAMHLER1  RESET     KEY24                   * existing read
          MOVE      ZERO,OVRCD
          READ      MEHLERA1,KEY24;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHLER1  RESET     KEY24                   * full read
          MOVE      ZERO,OVRCD
          READ      MEHLERA1,KEY24;DMHLRADM,MHLRDATE,MHLRTIME,MHLRCODE:
                                   MHLRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHLRADM,MHLRADMN
          RETURN
.
RKMHLER1  MOVE      ZERO,OVRCD              * next read
          READKS    MEHLERA1;DMHLRADM,MHLRDATE,MHLRTIME,MHLRCODE:
                             MHLRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHLRADM,MHLRADMN
          RETURN
.
RPMHLER1  MOVE      ZERO,OVRCD              * previous read
          READKP    MEHLERA1;DMHLRADM,MHLRDATE,MHLRTIME,MHLRCODE:
                             MHLRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHLRADM,MHLRADMN
          RETURN
.
UPMHLER1  MOVE      MHLRADMN,DMHLRADM       * update
          UPDATE    MEHLERA1;DMHLRADM,MHLRDATE,MHLRTIME,MHLRCODE:
                             MHLRSPAR
          RETURN
.
WRMHLER1  RESET     KEY24                   * write
          MOVE      MHLRADMN,DMHLRADM
          WRITE     MEHLERA1,KEY24;DMHLRADM,MHLRDATE,MHLRTIME,MHLRCODE:
                                   MHLRSPAR
          RETURN
.
DEMHLER1  RESET     KEY24                   * delete
          DELETE    MEHLERA1,KEY24
          RETURN
