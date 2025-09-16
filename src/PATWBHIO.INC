.--------------------------------------------------------------------------
. PATWBHIO.INC
. ------------
. Filename       :  patwbhaf
. Description    :  Patient Ward Bed History File I/O Subroutines
. Variables      :  OVRCD     FORM      1
.                   KEY14     DIM       14
. Modifications  :  
.          V9.03.01 18/08/2003  Sylvek Litewka  CAR 41826
.                   Added new variables from UPID to CRID. 
. -------------------------------------------------------------------------
.                   V5.00  04.09.89  E.Phan
.                   Created file.
.                   07/04/94  I.Rutt  MTA
.                   Added effective time variable WBHTIME
.                   13/12/1999 Pat Dirito
.                   Added Lock & Unlock IO's
.-------------------------------------------------------------------------- 
.
RAPTWBH1  MOVE      ZERO,OVRCD
          RESET     KEY14
          READ      PATWBHA1,KEY14;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPTWBH1  RESET     KEY14
          READ      PATWBHA1,KEY14;;
          RETURN
.
RDPTWBH1  MOVE      ZERO,OVRCD
          RESET     KEY14
          READ      PATWBHA1,KEY14;WBHWARD,WBHBED,WBHDATE,WBHRTYP,WBHACTV:
                                   WBHNOCC,WBHCLAS,WBHDCHG,WBHTCHG,WBHTIME:
                                   WBHUPID,WBHIFST,WBHCRDT,WBHCRTM,WBHCRID:
                                   WBHSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RLPTWBH1  MOVE      ZERO,OVRCD
          RESET     KEY14
          READL     PATWBHA1,KEY14;WBHWARD,WBHBED,WBHDATE,WBHRTYP,WBHACTV:
                                   WBHNOCC,WBHCLAS,WBHDCHG,WBHTCHG,WBHTIME:
                                   WBHUPID,WBHIFST,WBHCRDT,WBHCRTM,WBHCRID:
                                   WBHSPAR
          GOTO      OVERLOCK IF LOCKED
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTWBH1  MOVE      ZERO,OVRCD
          READKS    PATWBHA1;WBHWARD,WBHBED,WBHDATE,WBHRTYP,WBHACTV:
                             WBHNOCC,WBHCLAS,WBHDCHG,WBHTCHG,WBHTIME:
                             WBHUPID,WBHIFST,WBHCRDT,WBHCRTM,WBHCRID:
                             WBHSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTWBH1  MOVE      ZERO,OVRCD
          READKP    PATWBHA1;WBHWARD,WBHBED,WBHDATE,WBHRTYP,WBHACTV:
                             WBHNOCC,WBHCLAS,WBHDCHG,WBHTCHG,WBHTIME:
                             WBHUPID,WBHIFST,WBHCRDT,WBHCRTM,WBHCRID:
                             WBHSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTWBH1  UPDATE    PATWBHA1;WBHWARD,WBHBED,WBHDATE,WBHRTYP,WBHACTV:
                             WBHNOCC,WBHCLAS,WBHDCHG,WBHTCHG,WBHTIME:
                             WBHUPID,WBHIFST,WBHCRDT,WBHCRTM,WBHCRID:
                             WBHSPAR
          RETURN
.
WRPTWBH1  RESET     KEY14
          WRITE     PATWBHA1,KEY14;KEY14,WBHRTYP,WBHACTV:
                                   WBHNOCC,WBHCLAS,WBHDCHG,WBHTCHG,WBHTIME:
                                   WBHUPID,WBHIFST,WBHCRDT,WBHCRTM,WBHCRID:
                                   WBHSPAR
          RETURN
.
DEPTWBH1  RESET     KEY14
          DELETE    PATWBHA1,KEY14
          RETURN
.
ULPTWBH1  UNLOCK    PATWBHA1
          RETURN
. 
RAPTWBH2  MOVE      ZERO,OVRCD
          RESET     KEY30
          READ      PATWBHA2,KEY30;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPTWBH2  RESET     KEY30
          READ      PATWBHA2,KEY30;;
          RETURN
.
RDPTWBH2  MOVE      ZERO,OVRCD
          RESET     KEY30
          READ      PATWBHA2,KEY30;WBHWARD,WBHBED,WBHDATE,WBHRTYP,WBHACTV:
                                   WBHNOCC,WBHCLAS,WBHDCHG,WBHTCHG,WBHTIME:
                                   WBHUPID,WBHIFST,WBHCRDT,WBHCRTM,WBHCRID:
                                   WBHSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RLPTWBH2  MOVE      ZERO,OVRCD
          RESET     KEY30
          READL     PATWBHA2,KEY30;WBHWARD,WBHBED,WBHDATE,WBHRTYP,WBHACTV:
                                   WBHNOCC,WBHCLAS,WBHDCHG,WBHTCHG,WBHTIME:
                                   WBHUPID,WBHIFST,WBHCRDT,WBHCRTM,WBHCRID:
                                   WBHSPAR
          GOTO      OVERLOCK IF LOCKED
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTWBH2  MOVE      ZERO,OVRCD
          READKS    PATWBHA2;WBHWARD,WBHBED,WBHDATE,WBHRTYP,WBHACTV:
                             WBHNOCC,WBHCLAS,WBHDCHG,WBHTCHG,WBHTIME:
                             WBHUPID,WBHIFST,WBHCRDT,WBHCRTM,WBHCRID:
                             WBHSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTWBH2  MOVE      ZERO,OVRCD
          READKP    PATWBHA2;WBHWARD,WBHBED,WBHDATE,WBHRTYP,WBHACTV:
                             WBHNOCC,WBHCLAS,WBHDCHG,WBHTCHG,WBHTIME:
                             WBHUPID,WBHIFST,WBHCRDT,WBHCRTM,WBHCRID:
                             WBHSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTWBH2  UPDATE    PATWBHA2;WBHWARD,WBHBED,WBHDATE,WBHRTYP,WBHACTV:
                             WBHNOCC,WBHCLAS,WBHDCHG,WBHTCHG,WBHTIME:
                             WBHUPID,WBHIFST,WBHCRDT,WBHCRTM,WBHCRID:
                             WBHSPAR
          RETURN
.
WRPTWBH2  RESET     KEY30
          WRITE     PATWBHA2,KEY30;KEY30,WBHRTYP,WBHACTV:
                                   WBHNOCC,WBHCLAS,WBHDCHG,WBHTCHG,WBHTIME:
                                   WBHUPID,WBHIFST,WBHCRDT,WBHCRTM,WBHCRID:
                                   WBHSPAR
          RETURN
.
DEPTWBH2  RESET     KEY30
          DELETE    PATWBHA2,KEY30
          RETURN
.
ULPTWBH2  UNLOCK    PATWBHA2
          RETURN
.

