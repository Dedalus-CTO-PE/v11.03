.
. PATHDFIO.INC
. ------------
. Filename        : pathdfaf
. Description     : Daily charge for Inliers/High outliers
. Variables       : OVRCD   FORM  1      0 = Not over
.                                        1 = Over
.                   KEY31   DIM   31     Key for PATHDFA1
.
. -------- I/O routines for PATHDFA1 -------
.
RAPTHDF1  MOVE      ZERO,OVRCD
          RESET     KEY31
          READ      PATHDFA1,KEY31;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPTHDF1  RESET     KEY31
          READ      PATHDFA1,KEY31;;
          RETURN
.
RDPTHDF1  MOVE      ZERO,OVRCD
          RESET     KEY31
          READ      PATHDFA1,KEY31;PTHDCLMN,PTHDHFND,PTHDTABT,PTHDCASM,DPTHDEDA:
                                   PTHDDTYP,PTHDDES1,PTHDDES2,PTHDDREB,PTHDDPAT:
                                   PTHDCNID,PTHDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTHDEDA,PTHDEDAY
          RETURN
.
RKPTHDF1  MOVE      ZERO,OVRCD
          READKS    PATHDFA1;PTHDCLMN,PTHDHFND,PTHDTABT,PTHDCASM,DPTHDEDA:
                             PTHDDTYP,PTHDDES1,PTHDDES2,PTHDDREB,PTHDDPAT:
                             PTHDCNID,PTHDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTHDEDA,PTHDEDAY
          RETURN
.
RPPTHDF1  MOVE      ZERO,OVRCD
          READKP    PATHDFA1;PTHDCLMN,PTHDHFND,PTHDTABT,PTHDCASM,DPTHDEDA:
                             PTHDDTYP,PTHDDES1,PTHDDES2,PTHDDREB,PTHDDPAT:
                             PTHDCNID,PTHDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTHDEDA,PTHDEDAY
          RETURN
.
WRPTHDF1  RESET     KEY31
          UNPACK    KEY31,PTHDCNID,PTHDCLMN,PTHDHFND,PTHDTABT,PTHDCASM,DPTHDEDA
          WRITE     PATHDFA1,KEY31;PTHDCLMN,PTHDHFND,PTHDTABT,PTHDCASM,DPTHDEDA:
                                   PTHDDTYP,PTHDDES1,PTHDDES2,PTHDDREB,PTHDDPAT:
                                   PTHDCNID,PTHDSPAR
          RETURN
.
UPPTHDF1  MOVE      PTHDEDAY,DPTHDEDA
          UPDATE    PATHDFA1;PTHDCLMN,PTHDHFND,PTHDTABT,PTHDCASM,DPTHDEDA:
                             PTHDDTYP,PTHDDES1,PTHDDES2,PTHDDREB,PTHDDPAT:
                             PTHDCNID,PTHDSPAR
          RETURN
.
DEPTHDF1  RESET     KEY31
          DELETE    PATHDFA1,KEY31
          RETURN
.
.
