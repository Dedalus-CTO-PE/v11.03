.
.         INC       JHSBFEIO.INC
.
.         FILE  I/O REQUESTS FOR JOHNS HOPKINS SINGAPORE BFESS FILE
.
.  Modifications : 
.
.OVRCD  FORM            1             0=NOT OVER
.                                     1= OVER
.KEY26   DIM            26             KEY FOR JHSBFEA1
.
RSJHBFE1 RESET     KEY26
         READ      JHSBFEA1,KEY26;;
         RETURN
.
RAJHBFE1 RESET     KEY26
         MOVE      ZERO,OVRCD
         READ      JHSBFEA1,KEY26;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RDJHBFE1 RESET     KEY26  
         MOVE      ZERO,OVRCD
         READ      JHSBFEA1,KEY26;BFCLM,BFHFUND,BFHFTAB,BFATYPE,BFBTYPE:
                                  DBFENDDY,BFPAT,BFHF,BFNINV,BFDESC:
                                  BFHDP,BFSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DBFENDDY,BFENDDY
         RETURN
.
RKJHBFE1 MOVE      ZERO,OVRCD
         READKS    JHSBFEA1;BFCLM,BFHFUND,BFHFTAB,BFATYPE,BFBTYPE:
                                  DBFENDDY,BFPAT,BFHF,BFNINV,BFDESC:
                                  BFHDP,BFSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DBFENDDY,BFENDDY
         RETURN
.
RPJHBFE1 MOVE      ZERO,OVRCD
         READKP    JHSBFEA1;BFCLM,BFHFUND,BFHFTAB,BFATYPE,BFBTYPE:
                                  DBFENDDY,BFPAT,BFHF,BFNINV,BFDESC:
                                  BFHDP,BFSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DBFENDDY,BFENDDY
         RETURN
.
UPJHBFE1 MOVE      BFENDDY,DBFENDDY
         UPDATE    JHSBFEA1;BFCLM,BFHFUND,BFHFTAB,BFATYPE,BFBTYPE:
                                  DBFENDDY,BFPAT,BFHF,BFNINV,BFDESC:
                                  BFHDP,BFSPARE
         RETURN
.
WRJHBFE1 RESET     KEY26
         WRITE     JHSBFEA1,KEY26;KEY26:
                                  BFPAT,BFHF,BFNINV,BFDESC:
                                  BFHDP,BFSPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
DEJHBFE1 RESET     KEY26
         DELETE    JHSBFEA1,KEY26
         RETURN
.
RSJHBFE2 RESET     KEY26
         READ      JHSBFEA2,KEY26;;
         RETURN
.
RKJHBFE2 MOVE      ZERO,OVRCD
         READKS    JHSBFEA2;BFCLM,BFHFUND,BFHFTAB,BFATYPE,BFBTYPE:
                                  DBFENDDY,BFPAT,BFHF,BFNINV,BFDESC:
                                  BFHDP,BFSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DBFENDDY,BFENDDY
         RETURN
.
RDJHBFE2 MOVE      ZERO,OVRCD
         READKP    JHSBFEA2;BFCLM,BFHFUND,BFHFTAB,BFATYPE,BFBTYPE:
                                  DBFENDDY,BFPAT,BFHF,BFNINV,BFDESC:
                                  BFHDP,BFSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DBFENDDY,BFENDDY
         RETURN
.
RSJHBFE3 RESET     KEY26
         READ      JHSBFEA3,KEY26;;
         RETURN
.
RKJHBFE3 MOVE      ZERO,OVRCD
         READKS    JHSBFEA3;BFCLM,BFHFUND,BFHFTAB,BFATYPE,BFBTYPE:
                                  DBFENDDY,BFPAT,BFHF,BFNINV,BFDESC:
                                  BFHDP,BFSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DBFENDDY,BFENDDY
         RETURN
.
RPJHBFE3 MOVE      ZERO,OVRCD
         READKP    JHSBFEA3;BFCLM,BFHFUND,BFHFTAB,BFATYPE,BFBTYPE:
                                  DBFENDDY,BFPAT,BFHF,BFNINV,BFDESC:
                                  BFHDP,BFSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DBFENDDY,BFENDDY
         RETURN
