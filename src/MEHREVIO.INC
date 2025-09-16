.
. MEHREVIO.INC
. ------------
. Related FD   : MEHREVFD.INC
. Filenames    : mehrevaf
. Description  : Mental Health System 'Legal Status Review History file'
. Variables    : OVRCD   FORM    1          0 = NOT OVER
.                                           1 = OVER
.                KEY21   DIM     16         KEY FOR MEHREVA1
.
. -----------------------------------------
. ------- I/O routines for MEHREVA1 -------
. -----------------------------------------
.
RSMHREV1  RESET     KEY21                   * positional read
          READ      MEHREVA1,KEY21;;
          RETURN
.
RAMHREV1  RESET     KEY21                   * existing read ?
          MOVE      ZERO,OVRCD
          READ      MEHREVA1,KEY21;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHREV1  RESET     KEY21                   * full read
          MOVE      ZERO,OVRCD
          READ      MEHREVA1,KEY21;DMHRVADM,MHRVDATE,MHRVTIME,MHRVDECI:
                                   MHRVLDAT,MHRVLTIM,MHRVREAS,MHRVNDAT,MHRVSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHRVADM,MHRVADMN
          RETURN
.
RKMHREV1  MOVE      ZERO,OVRCD              * next read
          READKS    MEHREVA1;DMHRVADM,MHRVDATE,MHRVTIME,MHRVDECI:
                             MHRVLDAT,MHRVLTIM,MHRVREAS,MHRVNDAT,MHRVSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHRVADM,MHRVADMN
          RETURN
.
RPMHREV1  MOVE      ZERO,OVRCD              * previous read
          READKP    MEHREVA1;DMHRVADM,MHRVDATE,MHRVTIME,MHRVDECI:
                             MHRVLDAT,MHRVLTIM,MHRVREAS,MHRVNDAT,MHRVSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHRVADM,MHRVADMN
          RETURN
.
UPMHREV1  MOVE      MHRVADMN,DMHRVADM       * update
          UPDATE    MEHREVA1;DMHRVADM,MHRVDATE,MHRVTIME,MHRVDECI:
                             MHRVLDAT,MHRVLTIM,MHRVREAS,MHRVNDAT,MHRVSPAR
          RETURN
.
WRMHREV1  RESET     KEY21                   * write
          MOVE      MHRVADMN,DMHRVADM 
          WRITE     MEHREVA1,KEY21;DMHRVADM,MHRVDATE,MHRVTIME,MHRVDECI:
                                   MHRVLDAT,MHRVLTIM,MHRVREAS,MHRVNDAT,MHRVSPAR
          RETURN
.
DEMHREV1  RESET     KEY21
          DELETE    MEHREVA1,KEY21
          RETURN
...............................................................................
