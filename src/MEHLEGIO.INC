.
. MEHLEGIO.INC
. ------------
. Related FD   : MEHLEGFD.INC
. Filenames    : mehlegaf
. Description  : Mental Health System 'Legal Status History file'
. Variables    : OVRCD   FORM    1          0 = NOT OVER
.                                           1 = OVER
.                KEY21   DIM     21         KEY FOR MEHLEGA1
.                KEY21   DIM     21         KEY FOR MEHLEGA2
.
. -----------------------------------------
. ------- I/O routines for MEHLEGA1 -------
. -----------------------------------------
.
RSMHLEG1  RESET     KEY21                   * positional read
          READ      MEHLEGA1,KEY21;;
          RETURN
.
RAMHLEG1  RESET     KEY21                   * existing read ?
          MOVE      ZERO,OVRCD
          READ      MEHLEGA1,KEY21;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHLEG1  RESET     KEY21                   * full read
          MOVE      ZERO,OVRCD
          READ      MEHLEGA1,KEY21;DMHLEADM,MHLEDATE,MHLETIME,MHLESTAT:
                                   MHLESENT,MHLEREVW,MHLEFLAG,MHLEEMPC:
                                   MHLEEMPT,MHLESPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHLEADM,MHLEADMN
          RETURN
.
RKMHLEG1  MOVE      ZERO,OVRCD              * next read
          READKS    MEHLEGA1;DMHLEADM,MHLEDATE,MHLETIME,MHLESTAT:
                             MHLESENT,MHLEREVW,MHLEFLAG,MHLEEMPC:
                             MHLEEMPT,MHLESPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHLEADM,MHLEADMN
          RETURN
.
RPMHLEG1  MOVE      ZERO,OVRCD              * previous read
          READKP    MEHLEGA1;DMHLEADM,MHLEDATE,MHLETIME,MHLESTAT:
                             MHLESENT,MHLEREVW,MHLEFLAG,MHLEEMPC:
                             MHLEEMPT,MHLESPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHLEADM,MHLEADMN
          RETURN
.
UPMHLEG1  MOVE      MHLEADMN,DMHLEADM       * update
          UPDATE    MEHLEGA1;DMHLEADM,MHLEDATE,MHLETIME,MHLESTAT:
                             MHLESENT,MHLEREVW,MHLEFLAG,MHLEEMPC:
                             MHLEEMPT,MHLESPAR
          RETURN
.
WRMHLEG1  RESET     KEY21                   * write
          MOVE      MHLEADMN,DMHLEADM
          WRITE     MEHLEGA1,KEY21;DMHLEADM,MHLEDATE,MHLETIME,MHLESTAT:
                                   MHLESENT,MHLEREVW,MHLEFLAG,MHLEEMPC:
                                   MHLEEMPT,MHLESPAR
          RETURN
.
DEMHLEG1  RESET     KEY21                   * delete
          DELETE    MEHLEGA1,KEY21
          RETURN
.
. I/O for 2nd index
.
RSMHLEG2  RESET     KEY21                   * positional read
          READ      MEHLEGA2,KEY21;;
          RETURN
.
RAMHLEG2  RESET     KEY21                   * existing read ?
          MOVE      ZERO,OVRCD
          READ      MEHLEGA2,KEY21;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHLEG2  RESET     KEY21                   * full read
          MOVE      ZERO,OVRCD
          READ      MEHLEGA2,KEY21;DMHLEADM,MHLEDATE,MHLETIME,MHLESTAT:
                                   MHLESENT,MHLEREVW,MHLEFLAG,MHLEEMPC:
                                   MHLEEMPT,MHLESPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHLEADM,MHLEADMN
          RETURN
.
RKMHLEG2  MOVE      ZERO,OVRCD              * next read
          READKS    MEHLEGA2;DMHLEADM,MHLEDATE,MHLETIME,MHLESTAT:
                             MHLESENT,MHLEREVW,MHLEFLAG,MHLEEMPC:
                             MHLEEMPT,MHLESPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHLEADM,MHLEADMN
          RETURN
.
RPMHLEG2  MOVE      ZERO,OVRCD              * previous read
          READKP    MEHLEGA2;DMHLEADM,MHLEDATE,MHLETIME,MHLESTAT:
                             MHLESENT,MHLEREVW,MHLEFLAG,MHLEEMPC:
                             MHLEEMPT,MHLESPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHLEADM,MHLEADMN
          RETURN
.
UPMHLEG2  MOVE      MHLEADMN,DMHLEADM       * update
          UPDATE    MEHLEGA2;DMHLEADM,MHLEDATE,MHLETIME,MHLESTAT:
                             MHLESENT,MHLEREVW,MHLEFLAG,MHLEEMPC:
                             MHLEEMPT,MHLESPAR
          RETURN
.
................................................................................
