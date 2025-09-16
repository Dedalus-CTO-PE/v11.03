.
.         INC       JHSBF1IO.INC
.
.         FILE  I/O REQUESTS FOR newbfeef FILE
.
.
.OVRCD  FORM            1             0=NOT OVER
.                                     1= OVER
.KEY26   DIM            26             KEY FOR JHSBF1A1
.
RSJHB1A1 RESET     KEY26
         READ      JHSBF1A1,KEY26;;
.
RDJHB1A1 RESET     KEY26
         MOVE      ZERO,OVRCD
         READ      JHSBF1A1,KEY26;BFCLM,BFHFUND,BFHFTAB,BFATYPE,BFBTYPE:
                                  DBFENDDY,BFPAT,BFHF,BFNINV,BFDESC:
                                  BFHDP,BFSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DBFENDDY,BFENDDY
         RETURN
.
RKJHB1A1 MOVE      ZERO,OVRCD
         READKS    JHSBF1A1;BFCLM,BFHFUND,BFHFTAB,BFATYPE,BFBTYPE:
                                  DBFENDDY,BFPAT,BFHF,BFNINV,BFDESC:
                                  BFHDP,BFSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DBFENDDY,BFENDDY
         RETURN
.
RPJHB1A1 MOVE      ZERO,OVRCD
         READKP    JHSBF1A1;BFCLM,BFHFUND,BFHFTAB,BFATYPE,BFBTYPE:
                                  DBFENDDY,BFPAT,BFHF,BFNINV,BFDESC:
                                  BFHDP,BFSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DBFENDDY,BFENDDY
         RETURN
.
UPJHB1A1 MOVE      BFENDDY,DBFENDDY
         UPDATE    JHSBF1A1;BFCLM,BFHFUND,BFHFTAB,BFATYPE,BFBTYPE:
                                  DBFENDDY,BFPAT,BFHF,BFNINV,BFDESC:
                                  BFHDP,BFSPARE
         RETURN
.
WRJHB1A1 RESET     KEY26
         WRITE     JHSBF1A1,KEY26;KEY26:
                                  BFPAT,BFHF,BFNINV,BFDESC:
                                  BFHDP,BFSPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
DEJHB1A1 RESET     KEY26
         DELETE    JHSBF1A1,KEY26
         RETURN
+
