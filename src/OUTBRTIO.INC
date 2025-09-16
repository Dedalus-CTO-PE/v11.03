.
. OUTBRTIO.INC
. ------------
. Filenames       : outbrtaf
. Description     : Outpatients 'Booking Radiology Tests File'
.
. -----------------------------------------
. ------- I/O routines for OUTBRTA1 -------
. -----------------------------------------
.
.         positional read
.
RSOTBRT1  RESET     KEY10
          READ      OUTBRTA1,KEY10;;
          RETURN
.
.         read to see if record exists
.
RAOTBRT1  MOVE      ZERO,OVRCD
          RESET     KEY10
          READ      OUTBRTA1,KEY10;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDOTBRT1  MOVE      ZERO,OVRCD
          RESET     KEY10
          READ      OUTBRTA1,KEY10;DOTBREVN,DOTBRCNT,OTBRCODE,OTBRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTBREVN,OTBREVNT
          MOVE      DOTBRCNT,OTBRCNT
          RETURN
.
.         full read with a lock
.
RLOTBRT1  MOVE      ZERO,OVRCD
          RESET     KEY10
          READL     OUTBRTA1,KEY10;DOTBREVN,DOTBRCNT,OTBRCODE,OTBRSPAR
          GOTO      OVERLOCK IF LOCKED
          GOTO      OVERCOND IF OVER
          MOVE      DOTBREVN,OTBREVNT
          MOVE      DOTBRCNT,OTBRCNT
          RETURN
.
.         next read
.
RKOTBRT1  MOVE      ZERO,OVRCD
          READKS    OUTBRTA1;DOTBREVN,DOTBRCNT,OTBRCODE,OTBRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTBREVN,OTBREVNT
          MOVE      DOTBRCNT,OTBRCNT
          RETURN
.
.         previous read
.
RPOTBRT1  MOVE      ZERO,OVRCD
          READKP    OUTBRTA1;DOTBREVN,DOTBRCNT,OTBRCODE,OTBRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTBREVN,OTBREVNT
          MOVE      DOTBRCNT,OTBRCNT
          RETURN
.
.         update
.
UPOTBRT1  MOVE      OTBREVNT,DOTBREVN
          MOVE      OTBRCNT,DOTBRCNT
          UPDATE    OUTBRTA1;DOTBREVN,DOTBRCNT,OTBRCODE,OTBRSPAR
          RETURN
.
.         write
.
WROTBRT1  RESET     KEY10
          MOVE      OTBREVNT,DOTBREVN
          MOVE      OTBRCNT,DOTBRCNT
          WRITE     OUTBRTA1,KEY10;DOTBREVN,DOTBRCNT,OTBRCODE,OTBRSPAR
          RETURN
.
.         delete a record
.
DEOTBRT1  RESET     KEY10
          DELETE    OUTBRTA1,KEY10
          RETURN
.
.         unlock all locks one user has on the file
.
ULOTBRT1  UNLOCK    OUTBRTA1
          RETURN
.
