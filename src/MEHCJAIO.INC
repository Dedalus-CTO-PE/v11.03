.
. MEHCJAIO.INC
. ------------
. Related FD   : MEHCJAFD.INC
. Filenames    : mehcjaaf
. Description  : Mental Health System 'CJA Status History file'
. Variables    : OVRCD   FORM    1          0 = NOT OVER
.                                           1 = OVER
.                KEY21   DIM     21         KEY FOR MEHCJAA1
.                KEY21   DIM     21         KEY FOR MEHCJAA2
.
. -----------------------------------------
. ------- I/O routines for MEHCJAA1 -------
. -----------------------------------------
.
RSMHCJA1  RESET     KEY21                   * positional read
          READ      MEHCJAA1,KEY21;;
          RETURN
.
RAMHCJA1  RESET     KEY21                   * existing read ?
          MOVE      ZERO,OVRCD
          READ      MEHCJAA1,KEY21;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHCJA1  RESET     KEY21                   * full read
          MOVE      ZERO,OVRCD
          READ      MEHCJAA1,KEY21;DMHCJADM,MHCJDATE,MHCJTIME,MHCJSTAT:
                                   MHCJSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHCJADM,MHCJADMN
          RETURN
.
RKMHCJA1  MOVE      ZERO,OVRCD              * next read
          READKS    MEHCJAA1;DMHCJADM,MHCJDATE,MHCJTIME,MHCJSTAT:
                             MHCJSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHCJADM,MHCJADMN
          RETURN
.
RPMHCJA1  MOVE      ZERO,OVRCD              * previous read
          READKP    MEHCJAA1;DMHCJADM,MHCJDATE,MHCJTIME,MHCJSTAT:
                             MHCJSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHCJADM,MHCJADMN
          RETURN
.
UPMHCJA1  MOVE      MHCJADMN,DMHCJADM       * update
          UPDATE    MEHCJAA1;DMHCJADM,MHCJDATE,MHCJTIME,MHCJSTAT:
                             MHCJSPAR
          RETURN
.
WRMHCJA1  RESET     KEY21                   * write
          MOVE      MHCJADMN,DMHCJADM
          WRITE     MEHCJAA1,KEY21;DMHCJADM,MHCJDATE,MHCJTIME,MHCJSTAT:
                                   MHCJSPAR
          RETURN
.
DEMHCJA1  RESET     KEY21                   * delete
          DELETE    MEHCJAA1,KEY21
          RETURN
.
. I/O for 2nd index
.
RSMHCJA2  RESET     KEY21                   * positional read
          READ      MEHCJAA2,KEY21;;
          RETURN
.
RAMHCJA2  RESET     KEY21                   * existing read ?
          MOVE      ZERO,OVRCD
          READ      MEHCJAA2,KEY21;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHCJA2  RESET     KEY21                   * full read
          MOVE      ZERO,OVRCD
          READ      MEHCJAA2,KEY21;DMHCJADM,MHCJDATE,MHCJTIME,MHCJSTAT:
                                   MHCJSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHCJADM,MHCJADMN
          RETURN
.
RKMHCJA2  MOVE      ZERO,OVRCD              * next read
          READKS    MEHCJAA2;DMHCJADM,MHCJDATE,MHCJTIME,MHCJSTAT:
                             MHCJSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHCJADM,MHCJADMN
          RETURN
.
RPMHCJA2  MOVE      ZERO,OVRCD              * previous read
          READKP    MEHCJAA2;DMHCJADM,MHCJDATE,MHCJTIME,MHCJSTAT:
                             MHCJSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHCJADM,MHCJADMN
          RETURN
.
................................................................................
