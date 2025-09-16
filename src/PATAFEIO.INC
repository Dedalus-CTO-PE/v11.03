.
. PATAFEIO.INC
. ------------
. Filename        : patafeaf
. Description     : Additional fee for Overnight
. Variables       : OVRCD   FORM  1      0 = Not over
.                                        1 = Over
.                   KEY34   DIM   34     Key for PATAFEA1
.
. -------- I/O routines for PATAFEA1 -------
.
RAPTAFE1  MOVE      ZERO,OVRCD
          RESET     KEY34
          READ      PATAFEA1,KEY34;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPTAFE1  RESET     KEY34
          READ      PATAFEA1,KEY34;;
          RETURN
.
RDPTAFE1  MOVE      ZERO,OVRCD
          RESET     KEY34
          READ      PATAFEA1,KEY34;PTFECLMN,PTFEHFND,PTFETABT,PTFECASM,PTFEBTYP:
                                   DPTFEEDA,PTFEDESC1,PTFEDESC2:
                                   PTFEDREB,PTFEDPAT,PTFEACIN,PTFECNID,PTFEFIGR:
                                   PTFENPDY,PTFESPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTFEEDA,PTFEEDAY
          RETURN
.
RKPTAFE1  MOVE      ZERO,OVRCD
          READKS    PATAFEA1;PTFECLMN,PTFEHFND,PTFETABT,PTFECASM,PTFEBTYP:
                             DPTFEEDA,PTFEDESC1,PTFEDESC2:
                             PTFEDREB,PTFEDPAT,PTFEACIN,PTFECNID,PTFEFIGR:
                             PTFENPDY,PTFESPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTFEEDA,PTFEEDAY
          RETURN
.
RPPTAFE1  MOVE      ZERO,OVRCD
          READKP    PATAFEA1;PTFECLMN,PTFEHFND,PTFETABT,PTFECASM,PTFEBTYP:
                             DPTFEEDA,PTFEDESC1,PTFEDESC2:
                             PTFEDREB,PTFEDPAT,PTFEACIN,PTFECNID,PTFEFIGR:
                             PTFENPDY,PTFESPAR
          MOVE      DPTFEEDA,PTFEEDAY
          GOTO      OVERCOND IF OVER
          RETURN
.
WRPTAFE1  RESET     KEY34
          UNPACK    KEY34,PTFECNID,PTFECLMN,PTFEHFND,PTFETABT,PTFECASM:
                          PTFEBTYP,DPTFEEDA
          WRITE     PATAFEA1,KEY34;PTFECLMN,PTFEHFND,PTFETABT,PTFECASM,PTFEBTYP:
                                   DPTFEEDA,PTFEDESC1,PTFEDESC2:
                                   PTFEDREB,PTFEDPAT,PTFEACIN,PTFECNID,PTFEFIGR:
                                   PTFENPDY,PTFESPAR
          RETURN
.
UPPTAFE1  MOVE      PTFEEDAY,DPTFEEDA
          UPDATE    PATAFEA1;PTFECLMN,PTFEHFND,PTFETABT,PTFECASM,PTFEBTYP:
                             DPTFEEDA,PTFEDESC1,PTFEDESC2:
                             PTFEDREB,PTFEDPAT,PTFEACIN,PTFECNID,PTFEFIGR:
                             PTFENPDY,PTFESPAR
          RETURN
.
DEPTAFE1  RESET     KEY34
          DELETE    PATAFEA1,KEY34
          RETURN
.
.
