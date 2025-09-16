.
. PATDLTIO.INC
. ------------
. Related FD   : PATDLTFD.INC
. Filenames    : patdltaf
. Description  : Patient Management Doctors Letter's File
. Variables    : OVRCD   FORM    1          0 = NOT OVER
.                                           1 = OVER
.                KEY6    DIM     6          KEY FOR PATDLTA1
.                KEY6    DIM     6          KEY FOR PATDLTA2
.
. Mods : 
.
. -----------------------------------------
. ------- I/O routines for PATDLTA1 -------
. -----------------------------------------
.
.         read to see if record exists 
.
RAPTDLT1  MOVE      ZERO,OVRCD
          RESET     KEY6
          READ      PATDLTA1,KEY6;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         positional read
.
RSPTDLT1  RESET     KEY6
          READ      PATDLTA1,KEY6;;
          RETURN
.
.         direct read 
.
RDPTDLT1  MOVE      ZERO,OVRCD
          RESET     KEY6
          READ      PATDLTA1,KEY6;DPTDLLTN,DPTDLLIN,PTDLTEXT,PTDLLVAR,PTDLPBOT:
                                  PTDLPTOP,PTDLPPAG,PTDLPTAB,PTDLACTV,PTDLSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTDLLTN,PTDLLTNO
          MOVE      DPTDLLIN,PTDLLINO
          RETURN
.
RLPTDLT1  MOVE      ZERO,OVRCD
          RESET     KEY6
          READL     PATDLTA1,KEY6;DPTDLLTN,DPTDLLIN,PTDLTEXT,PTDLLVAR,PTDLPBOT:
                                  PTDLPTOP,PTDLPPAG,PTDLPTAB,PTDLACTV,PTDLSPAR
          GOTO      OVERLOCK IF LOCKED
          GOTO      OVERCOND IF OVER
          MOVE      DPTDLLTN,PTDLLTNO
          MOVE      DPTDLLIN,PTDLLINO
          RETURN
.
.         next read 
.
RKPTDLT1  MOVE      ZERO,OVRCD
          READKS    PATDLTA1;DPTDLLTN,DPTDLLIN,PTDLTEXT,PTDLLVAR,PTDLPBOT:
                             PTDLPTOP,PTDLPPAG,PTDLPTAB,PTDLACTV,PTDLSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTDLLTN,PTDLLTNO
          MOVE      DPTDLLIN,PTDLLINO
          RETURN
.
.         previous read 
.
RPPTDLT1  MOVE      ZERO,OVRCD
          READKP    PATDLTA1;DPTDLLTN,DPTDLLIN,PTDLTEXT,PTDLLVAR,PTDLPBOT:
                             PTDLPTOP,PTDLPPAG,PTDLPTAB,PTDLACTV,PTDLSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTDLLTN,PTDLLTNO
          MOVE      DPTDLLIN,PTDLLINO
          RETURN
.
.         write 
.
WRPTDLT1  MOVE      ZERO,OVRCD 
          RESET     KEY6
          MOVE      PTDLLTNO,DPTDLLTN
          MOVE      PTDLLINO,DPTDLLIN
          TRAP      OVERLOCK IF IO
          WRITE     PATDLTA1,KEY6;KEY6,PTDLTEXT,PTDLLVAR,PTDLPBOT:
                                  PTDLPTOP,PTDLPPAG,PTDLPTAB,PTDLACTV,PTDLSPAR
          TRAPCLR   IO
          RETURN
.
.         update 
.
UPPTDLT1  RESET     KEY6
          UPDATE    PATDLTA1;DPTDLLTN,DPTDLLIN,PTDLTEXT,PTDLLVAR,PTDLPBOT:
                             PTDLPTOP,PTDLPPAG,PTDLPTAB,PTDLACTV,PTDLSPAR
          RETURN
.
.         unlock
.
ULPTDLT1  UNLOCK    PATDLTA1
          RETURN
.
.         delete 
.
DEPTDLT1  RESET     KEY6
          DELETE    PATDLTA1,KEY6
          RETURN
.
. -----------------------------------------
. ------- I/O routines for PATDLTA2 -------
. -----------------------------------------
.
.         read to see if record exists 
.
RAPTDLT2  MOVE      ZERO,OVRCD
          RESET     KEY6
          READ      PATDLTA2,KEY6;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         positional read 
.
RSPTDLT2  RESET     KEY6
          READ      PATDLTA2,KEY6;;
          RETURN
.
.         direct read 
.
RDPTDLT2  MOVE      ZERO,OVRCD
          RESET     KEY6
          READ      PATDLTA2,KEY6;DPTDLLTN,DPTDLLIN,PTDLTEXT,PTDLLVAR,PTDLPBOT:
                                  PTDLPTOP,PTDLPPAG,PTDLPTAB,PTDLACTV,PTDLSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTDLLTN,PTDLLTNO
          MOVE      DPTDLLIN,PTDLLINO
          RETURN
.
.         next read 
.
RKPTDLT2  MOVE      ZERO,OVRCD
          READKS    PATDLTA2;DPTDLLTN,DPTDLLIN,PTDLTEXT,PTDLLVAR,PTDLPBOT:
                             PTDLPTOP,PTDLPPAG,PTDLPTAB,PTDLACTV,PTDLSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTDLLTN,PTDLLTNO
          MOVE      DPTDLLIN,PTDLLINO
          RETURN
.
.         previous read 
.
RPPTDLT2  MOVE      ZERO,OVRCD
          READKP    PATDLTA2;DPTDLLTN,DPTDLLIN,PTDLTEXT,PTDLLVAR,PTDLPBOT:
                             PTDLPTOP,PTDLPPAG,PTDLPTAB,PTDLACTV,PTDLSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTDLLTN,PTDLLTNO
          MOVE      DPTDLLIN,PTDLLINO
          RETURN
.
