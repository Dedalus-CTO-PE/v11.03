.
. PATLDFIO.INC
. ------------
. Filename        : patldfaf
. Description     : Daily fee for Low outliers
. Variables       : OVRCD   FORM  1      0 = Not over
.                                        1 = Over
.                   KEY31   DIM   31     Key for PATLDFA1
.
. -------- I/O routines for PATLDFA1 -------
.
RAPTLDF1  MOVE      ZERO,OVRCD
          RESET     KEY31
          READ      PATLDFA1,KEY31;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPTLDF1  RESET     KEY31
          READ      PATLDFA1,KEY31;;
          RETURN
.
RDPTLDF1  MOVE      ZERO,OVRCD
          RESET     KEY31
          READ      PATLDFA1,KEY31;PTLDCLMN,PTLDHFND,PTLDTABT,PTLDCASM,DPTLDEDA:
                                   PTLDDES1,PTLDDES2,PTLDDREB,PTLDDPAT,PTLDCNID:
                                   PTLDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTLDEDA,PTLDEDAY
          RETURN
.
RKPTLDF1  MOVE      ZERO,OVRCD
          READKS    PATLDFA1;PTLDCLMN,PTLDHFND,PTLDTABT,PTLDCASM,DPTLDEDA:
                             PTLDDES1,PTLDDES2,PTLDDREB,PTLDDPAT,PTLDCNID:
                             PTLDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTLDEDA,PTLDEDAY
          RETURN
.
RPPTLDF1  MOVE      ZERO,OVRCD
          READKP    PATLDFA1;PTLDCLMN,PTLDHFND,PTLDTABT,PTLDCASM,DPTLDEDA:
                             PTLDDES1,PTLDDES2,PTLDDREB,PTLDDPAT,PTLDCNID:
                             PTLDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTLDEDA,PTLDEDAY
          RETURN
.
WRPTLDF1  RESET     KEY31
          UNPACK    KEY31,PTLDCNID,PTLDCLMN,PTLDHFND,PTLDTABT,PTLDCASM,DPTLDEDA
          WRITE     PATLDFA1,KEY31;PTLDCLMN,PTLDHFND,PTLDTABT,PTLDCASM,DPTLDEDA:
                                   PTLDDES1,PTLDDES2,PTLDDREB,PTLDDPAT,PTLDCNID:
                                   PTLDSPAR
          RETURN
.
UPPTLDF1  MOVE      PTLDEDAY,DPTLDEDA
          UPDATE    PATLDFA1;PTLDCLMN,PTLDHFND,PTLDTABT,PTLDCASM,DPTLDEDA:
                             PTLDDES1,PTLDDES2,PTLDDREB,PTLDDPAT,PTLDCNID:
                             PTLDSPAR
          RETURN
.
DEPTLDF1  RESET     KEY31
          DELETE    PATLDFA1,KEY31
          RETURN
.
.
