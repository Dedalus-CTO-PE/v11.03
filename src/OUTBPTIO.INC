.
. OUTBPTIO.INC
. ------------
. Filenames       : outbptaf
. Description     : Outpatients 'Booking Pathology Tests File'
.
. -----------------------------------------
. ------- I/O routines for OUTBPTA1 -------
. -----------------------------------------
.
.         positional read
.
RSOTBPT1  RESET     KEY10
          READ      OUTBPTA1,KEY10;;
          RETURN
.
.         read to see if record exists
.
RAOTBPT1  MOVE      ZERO,OVRCD
          RESET     KEY10
          READ      OUTBPTA1,KEY10;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDOTBPT1  MOVE      ZERO,OVRCD
          RESET     KEY10
          READ      OUTBPTA1,KEY10;DOTBPEVN,DOTBPCNT,OTBPCODE,OTBPSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTBPEVN,OTBPEVNT
          MOVE      DOTBPCNT,OTBPCNT
          RETURN
.
.         full read with a lock
.
RLOTBPT1  MOVE      ZERO,OVRCD
          RESET     KEY10
          READL     OUTBPTA1,KEY10;DOTBPEVN,DOTBPCNT,OTBPCODE,OTBPSPAR
          GOTO      OVERLOCK IF LOCKED
          GOTO      OVERCOND IF OVER
          MOVE      DOTBPEVN,OTBPEVNT
          MOVE      DOTBPCNT,OTBPCNT
          RETURN
.
.         next read
.
RKOTBPT1  MOVE      ZERO,OVRCD
          READKS    OUTBPTA1;DOTBPEVN,DOTBPCNT,OTBPCODE,OTBPSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTBPEVN,OTBPEVNT
          MOVE      DOTBPCNT,OTBPCNT
          RETURN
.
.         previous read
.
RPOTBPT1  MOVE      ZERO,OVRCD
          READKP    OUTBPTA1;DOTBPEVN,DOTBPCNT,OTBPCODE,OTBPSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTBPEVN,OTBPEVNT
          MOVE      DOTBPCNT,OTBPCNT
          RETURN
.
.         update
.
UPOTBPT1  MOVE      OTBPEVNT,DOTBPEVN
          MOVE      OTBPCNT,DOTBPCNT
          UPDATE    OUTBPTA1;DOTBPEVN,DOTBPCNT,OTBPCODE,OTBPSPAR
          RETURN
.
.         write
.
WROTBPT1  RESET     KEY10
          MOVE      OTBPEVNT,DOTBPEVN
          MOVE      OTBPCNT,DOTBPCNT
          WRITE     OUTBPTA1,KEY10;DOTBPEVN,DOTBPCNT,OTBPCODE,OTBPSPAR
          RETURN
.
.         delete a record
.
DEOTBPT1  RESET     KEY10
          DELETE    OUTBPTA1,KEY10
          RETURN
.
.         unlock all locks one user has on the file
.
ULOTBPT1  UNLOCK    OUTBPTA1
          RETURN
.
