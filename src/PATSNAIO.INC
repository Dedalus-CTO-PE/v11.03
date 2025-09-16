.
. Include : PATSNAIO.INC
. File    : patsnaaf.dat
. Keys    : KEY12
.
.         positional read
.
RSPTSNA1  RESET     KEY12
          READ      PATSNAA1,KEY12;;
          RETURN
.
.         read to see if record exists
.
RAPTSNA1  MOVE      ZERO,OVRCD
          RESET     KEY12
          READ      PATSNAA1,KEY12;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDPTSNA1  MOVE      ZERO,OVRCD
          RESET     KEY12
          READ      PATSNAA1,KEY12;PTSNURNO,PTSNYEAR,PTSNAMNT,PTSNSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         next read
.
RKPTSNA1  MOVE      ZERO,OVRCD
          READKS    PATSNAA1;PTSNURNO,PTSNYEAR,PTSNAMNT,PTSNSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         previous read
.
RPPTSNA1  MOVE      ZERO,OVRCD
          READKP    PATSNAA1;PTSNURNO,PTSNYEAR,PTSNAMNT,PTSNSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         update
.
UPPTSNA1  UPDATE    PATSNAA1;PTSNURNO,PTSNYEAR,PTSNAMNT,PTSNSPAR
          RETURN
.
.         write
.
WRPTSNA1  RESET     KEY12
          WRITE     PATSNAA1,KEY12;PTSNURNO,PTSNYEAR,PTSNAMNT,PTSNSPAR
          RETURN
.
.         delete a record
.
DEPTSNA1  RESET     KEY12
          DELETE    PATSNAA1,KEY12
          RETURN
.
