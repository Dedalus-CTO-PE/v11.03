.
.         INC       JHSBF2IO.INC
.
.         FILE  I/O REQUESTS FOR oldbfeaf FILE
.
.
.OVRCD  FORM            1             0=NOT OVER
.                                     1= OVER
.KEY26   DIM            26             KEY FOR JHSBF2A1
.
.         NOTE:-
.                  RDAAAX  IS THE READ CALL ON FILE PATAAAX
.                  RDKAAAX  IS THE READKS CALL
.                  WRAAAX  IS THE WRITE CALL
.                  UPAAAX  IS THE UPDATE CALL
.                  DEAAAX  IS THE DELETE CALL
.
RSJHB2A1 RESET     KEY26
         READ      JHSBF2A1,KEY26;;
.
RDJHB2A1 RESET     KEY26
         MOVE      ZERO,OVRCD
         READ      JHSBF2A1,KEY26;BFCLM,BFHFUND,BFHFTAB,BFATYPE,BFBTYPE:
                                  DBFENDDY,BFPAT,BFHF,BFNINV,BFDESC:
                                  BFHDP,BFSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DBFENDDY,BFENDDY
         RETURN
.
RKJHB2A1 MOVE      ZERO,OVRCD
         READKS    JHSBF2A1;BFCLM,BFHFUND,BFHFTAB,BFATYPE,BFBTYPE:
                                  DBFENDDY,BFPAT,BFHF,BFNINV,BFDESC:
                                  BFHDP,BFSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DBFENDDY,BFENDDY
         RETURN
.
RPJHB2A1 MOVE      ZERO,OVRCD
         READKP    JHSBF2A1;BFCLM,BFHFUND,BFHFTAB,BFATYPE,BFBTYPE:
                                  DBFENDDY,BFPAT,BFHF,BFNINV,BFDESC:
                                  BFHDP,BFSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DBFENDDY,BFENDDY
         RETURN
.
UPJHB2A1 MOVE      BFENDDY,DBFENDDY
         UPDATE    JHSBF2A1;BFCLM,BFHFUND,BFHFTAB,BFATYPE,BFBTYPE:
                                  DBFENDDY,BFPAT,BFHF,BFNINV,BFDESC:
                                  BFHDP,BFSPARE
         RETURN
.
WRJHB2A1 RESET     KEY26
         WRITE     JHSBF2A1,KEY26;KEY26:
                                  BFPAT,BFHF,BFNINV,BFDESC:
                                  BFHDP,BFSPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
DEJHB2A1 RESET     KEY26
         DELETE    JHSBF2A1,KEY26
         RETURN
.
RSJHB2A2 RESET     KEY26
         READ      JHSBF2A2,KEY26;;
         RETURN
.
RKJHB2A2 MOVE      ZERO,OVRCD
         READKS    JHSBF2A2;BFCLM,BFHFUND,BFHFTAB,BFATYPE,BFBTYPE:
                                  DBFENDDY,BFPAT,BFHF,BFNINV,BFDESC:
                                  BFHDP,BFSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DBFENDDY,BFENDDY
         RETURN
.
RPJHB2A2 MOVE      ZERO,OVRCD
         READKP    JHSBF2A2;BFCLM,BFHFUND,BFHFTAB,BFATYPE,BFBTYPE:
                                  DBFENDDY,BFPAT,BFHF,BFNINV,BFDESC:
                                  BFHDP,BFSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DBFENDDY,BFENDDY
         RETURN
.
RSJHB2A3 RESET     KEY26
         READ      JHSBF2A3,KEY26;;
         RETURN
.
RKJHB2A3 MOVE      ZERO,OVRCD
         READKS    JHSBF2A3;BFCLM,BFHFUND,BFHFTAB,BFATYPE,BFBTYPE:
                                  DBFENDDY,BFPAT,BFHF,BFNINV,BFDESC:
                                  BFHDP,BFSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DBFENDDY,BFENDDY
         RETURN
.
RPJHB2A3 MOVE      ZERO,OVRCD
         READKP    JHSBF2A3;BFCLM,BFHFUND,BFHFTAB,BFATYPE,BFBTYPE:
                                  DBFENDDY,BFPAT,BFHF,BFNINV,BFDESC:
                                  BFHDP,BFSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DBFENDDY,BFENDDY
         RETURN
+
