.
. MEHCJRIO.INC
. ------------
. Related FD   : MEHCJRFD.INC
. Filenames    : mehcjraf
. Description  : Mental Health System 'CJA Status Review History file'
. Variables    : OVRCD   FORM    1          0 = NOT OVER
.                                           1 = OVER
.                KEY21   DIM     21         KEY FOR MEHCJRA1
.                KEY21   DIM     21         KEY FOR MEHCJRA2
.
. -----------------------------------------
. ------- I/O routines for MEHCJRA1 -------
. -----------------------------------------
.
RSMHCJR1  RESET     KEY21                   * positional read
          READ      MEHCJRA1,KEY21;;
          RETURN
.
RAMHCJR1  RESET     KEY21                   * existing read ?
          MOVE      ZERO,OVRCD
          READ      MEHCJRA1,KEY21;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHCJR1  RESET     KEY21                   * full read
          MOVE      ZERO,OVRCD
          READ      MEHCJRA1,KEY21;DMHCRADM,MHCRDATE,MHCRTIME,MHCRDECI:
                                   MHCRLDAT,MHCRLTIM,MHCRREAS,MHCRNDAT,MHCRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHCRADM,MHCRADMN
          RETURN
.
RKMHCJR1  MOVE      ZERO,OVRCD              * next read
          READKS    MEHCJRA1;DMHCRADM,MHCRDATE,MHCRTIME,MHCRDECI:
                             MHCRLDAT,MHCRLTIM,MHCRREAS,MHCRNDAT,MHCRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHCRADM,MHCRADMN
          RETURN
.
RPMHCJR1  MOVE      ZERO,OVRCD              * previous read
          READKP    MEHCJRA1;DMHCRADM,MHCRDATE,MHCRTIME,MHCRDECI:
                             MHCRLDAT,MHCRLTIM,MHCRREAS,MHCRNDAT,MHCRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHCRADM,MHCRADMN
          RETURN
.
UPMHCJR1  MOVE      MHCRADMN,DMHCRADM       * update
          UPDATE    MEHCJRA1;DMHCRADM,MHCRDATE,MHCRTIME,MHCRDECI:
                             MHCRLDAT,MHCRLTIM,MHCRREAS,MHCRNDAT,MHCRSPAR
          RETURN
.
WRMHCJR1  RESET     KEY21                   * write
          MOVE      MHCRADMN,DMHCRADM 
          WRITE     MEHCJRA1,KEY21;DMHCRADM,MHCRDATE,MHCRTIME,MHCRDECI:
                                   MHCRLDAT,MHCRLTIM,MHCRREAS,MHCRNDAT,MHCRSPAR
          RETURN
.
DEMHCJR1  RESET     KEY21
          DELETE    MEHCJRA1,KEY21
          RETURN
...............................................................................
