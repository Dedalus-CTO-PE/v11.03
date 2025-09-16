.
. PATACTIO.INC
. ------------
. Filename     : patactaf
. Description  : Account status validation file
. Variables    : OVRCD    FORM    1       0 = NOT OVER
.                                         1 = OVER
.                KEY6     DIM     6       KEY FOR PATACTA1             *C-49016
.
. ------- I/O routines for PATACTA1 -------
.
RAPTACT1  MOVE      ZERO,OVRCD
          RESET     KEY6
          READ      PATACTA1,KEY6;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPTACT1  RESET     KEY6
          READ      PATACTA1,KEY6;;
          RETURN
.
RDPTACT1  MOVE      ZERO,OVRCD
          RESET     KEY6
          READ      PATACTA1,KEY6;PTACCLSS,PTACACCM,PTACCARE,PTACMEDI,PTACSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTACT1  MOVE      ZERO,OVRCD
          READKS    PATACTA1;PTACCLSS,PTACACCM,PTACCARE,PTACMEDI,PTACSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTACT1  MOVE      ZERO,OVRCD
          READKP    PATACTA1;PTACCLSS,PTACACCM,PTACCARE,PTACMEDI,PTACSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
WRPTACT1  RESET     KEY6
          WRITE     PATACTA1,KEY6;KEY6,PTACMEDI,PTACSPAR
          RETURN
.
UPPTACT1  UPDATE    PATACTA1;PTACCLSS,PTACACCM,PTACCARE,PTACMEDI,PTACSPAR
          RETURN 
.
DEPTACT1  RESET     KEY6
          DELETE    PATACTA1,KEY6
          RETURN
