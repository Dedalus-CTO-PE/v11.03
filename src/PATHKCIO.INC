.
. PATHKCIO.INC
. ------------
. Filenames       : pathkcaf
. Description     : Patient Management 'Hong Kong Charging File'  
. Variables       : OVRCD   FORM   1        0 = NOT OVER
.                                           1 = OVER
.                   KEY15   DIM    15       KEY FOR PATHKCA1
.
. -----------------------------------------
. ------- I/O routines for PATHKCA1 -------
. -----------------------------------------
.
RSPTHKC1  RESET     KEY15
          READ      PATHKCA1,KEY15;;
          RETURN
.
RAPTHKC1  RESET     KEY15
          MOVE      ZERO,OVRCD
          READ      PATHKCA1,KEY15;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTHKC1  RESET     KEY15
          MOVE      ZERO,OVRCD
          READ      PATHKCA1,KEY15;PTHKCLAM,PTHKDEPT,PTHKDIET,PTHKBTYP:
                                   DPTHKAGE,PTHKCCHG,PTHKDESC,PTHKSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTHKAGE,PTHKAGER
          MOVE      PTHKCCHG,PTHKCHGE
          RETURN
.
RKPTHKC1  MOVE      ZERO,OVRCD
          READKS    PATHKCA1;PTHKCLAM,PTHKDEPT,PTHKDIET,PTHKBTYP:
                             DPTHKAGE,PTHKCCHG,PTHKDESC,PTHKSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTHKAGE,PTHKAGER
          MOVE      PTHKCCHG,PTHKCHGE
          RETURN
.
RPPTHKC1  MOVE      ZERO,OVRCD
          READKP    PATHKCA1;PTHKCLAM,PTHKDEPT,PTHKDIET,PTHKBTYP:
                             DPTHKAGE,PTHKCCHG,PTHKDESC,PTHKSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTHKAGE,PTHKAGER
          MOVE      PTHKCCHG,PTHKCHGE
          RETURN
.
UPPTHKC1  MOVE      PTHKAGER,DPTHKAGE
          MOVE      PTHKCHGE,PTHKCCHG
          UPDATE    PATHKCA1;PTHKCLAM,PTHKDEPT,PTHKDIET,PTHKBTYP:
                             DPTHKAGE,PTHKCCHG,PTHKDESC,PTHKSPAR
          RETURN
.
WRPTHKC1  RESET     KEY15
          MOVE      PTHKCHGE,PTHKCCHG
          MOVE      PTHKAGER,DPTHKAGE
          WRITE     PATHKCA1,KEY15;PTHKCLAM,PTHKDEPT,PTHKDIET,PTHKBTYP:
                                   DPTHKAGE,PTHKCCHG,PTHKDESC,PTHKSPAR
          RETURN
.
DEPTHKC1  RESET     KEY15
          DELETE    PATHKCA1,KEY15
          RETURN
.
