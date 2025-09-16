.
. PATNHHIO.INC
. ------------
. Filename     : patnhhaf
. Description  : Patient Nursing Home/Hostel Additional Charging File I/O 
.                Subroutines
. Variables    : OVRCD    FORM    1
.                KEY6     DIM     6 
.
RAPTNH1   MOVE      ZERO,OVRCD
          RESET     KEY6
          READ      PATNHHA1,KEY6;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPTNH1   MOVE      ZERO,OVRCD
          RESET     KEY6
          READ      PATNHHA1,KEY6;;
          RETURN
.
RDPTNH1   MOVE      ZERO,OVRCD
          RESET     KEY6
          READ      PATNHHA1,KEY6;PTNHCLAM,PTNHATYP,PTNHMXDC,PTNHPAIC:
                                  PTNHCDES,PTNHSPAR
          GOTO      OVERCOND IF OVER
          MOVE      PTNHPAIC,PTNHPERC
          MOVE      PTNHMXDC,PTNHMAXD
          RETURN
.
RKPTNH1   MOVE      ZERO,OVRCD
          RESET     KEY6
          READKS    PATNHHA1;PTNHCLAM,PTNHATYP,PTNHMXDC,PTNHPAIC,PTNHCDES:
                             PTNHSPAR
          GOTO      OVERCOND IF OVER
          MOVE      PTNHPAIC,PTNHPERC
          MOVE      PTNHMXDC,PTNHMAXD
          RETURN
.
RPPTNH1   MOVE      ZERO,OVRCD
          RESET     KEY6
          READKP    PATNHHA1;PTNHCLAM,PTNHATYP,PTNHMXDC,PTNHPAIC,PTNHCDES:
                             PTNHSPAR
          GOTO      OVERCOND IF OVER
          MOVE      PTNHPAIC,PTNHPERC
          MOVE      PTNHMXDC,PTNHMAXD
          RETURN
.
WRPTNH1   MOVE      ZERO,OVRCD
          MOVE      PTNHPERC,PTNHPAIC
          MOVE      PTNHMAXD,PTNHMXDC
          RESET     KEY6
          WRITE     PATNHHA1,KEY6;KEY6,PTNHMXDC,PTNHPAIC,PTNHCDES,PTNHSPAR
          RETURN
.
UPPTNH1   MOVE      PTNHPERC,PTNHPAIC
          MOVE      PTNHMAXD,PTNHMXDC
          UPDATE    PATNHHA1;PTNHCLAM,PTNHATYP,PTNHMXDC,PTNHPAIC,PTNHCDES:
                             PTNHSPAR
          RETURN
.
DEPTNH1   RESET     KEY6
          DELETE    PATNHHA1,KEY6
          RETURN
.
