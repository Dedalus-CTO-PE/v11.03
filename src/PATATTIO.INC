.
. PATATTIO.INC
. ------------
. Filenames       : patattaf
. Description     : Patient Management 'Address Translation File' 
. Variables       : OVRCD   FORM   1        0 = NOT OVER
.                                           1 = OVER
.                   KEY6    DIM    6        KEY FOR PATATTA1
.
. -----------------------------------------
. ------- I/O routines for PATATTA1 -------
. -----------------------------------------
.
RSPTATT1  RESET     KEY6
          READ      PATATTA1,KEY6;;
          RETURN
.
RAPTATT1  RESET     KEY6
          MOVE      ZERO,OVRCD
          READ      PATATTA1,KEY6;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTATT1  RESET     KEY6
          MOVE      ZERO,OVRCD
          READ      PATATTA1,KEY6;PTATADDR,PTATENGL,PTATHORI,PTATSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RLPTATT1  RESET     KEY6
          MOVE      ZERO,OVRCD
          READL     PATATTA1,KEY6;PTATADDR,PTATENGL,PTATHORI,PTATSPAR
          GOTO      OVERLOCK IF LOCKED
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTATT1  MOVE      ZERO,OVRCD
          READKS    PATATTA1;PTATADDR,PTATENGL,PTATHORI,PTATSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTATT1  MOVE      ZERO,OVRCD
          READKP    PATATTA1;PTATADDR,PTATENGL,PTATHORI,PTATSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTATT1  UPDATE    PATATTA1;PTATADDR,PTATENGL,PTATHORI,PTATSPAR
          RETURN
.
ULPTATT1  UNLOCK    PATATTA1
          RETURN
.
WRPTATT1  RESET     KEY6
          MOVE      ZERO,OVRCD
          TRAP      OVERLOCK IF IO
          WRITE     PATATTA1,KEY6;PTATADDR,PTATENGL,PTATHORI,PTATSPAR
          TRAPCLR   IO
          RETURN
.
DEPTATT1  RESET     KEY6
          DELETE    PATATTA1,KEY6
          RETURN
..............................................................................
