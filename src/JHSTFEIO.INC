.
. **********************************************************
. *                                                        *
. *  Include Name :  JHSTFEIO                              *
. *                                                        *
. *  Function     :  I/O for jhstfeaf file                 *
. *                                                        *
. *  Keys         :  KEY19                                 *
. *                                                        *
. *  Modifications:                                        *
. *                                                        *
. **********************************************************
.
WRJHTFE1 RESET     KEY23
         WRITE     JHSTFEA1,KEY23;KEY23:
                                  TFHF1,TFPAT1,TFHF2,TFPAT2,TFHF3,TFPAT3:
                                  TFHF4,TFPAT4,TFHF5,TFPAT5,TFHF6,TFPAT6:
                                  TFNINV,TFSPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
RAJHTFE1 RESET     KEY23
         MOVE      ZERO,OVRCD
         READ      JHSTFEA1,KEY23;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RDJHTFE1 MOVE      ZERO,OVRCD
         RESET     KEY23
         READ      JHSTFEA1,KEY23;TFCLM,TFHFUND,TFHFTAB,TFDAYC,TFENDMBS:
                                  TFHF1,TFPAT1,TFHF2,TFPAT2,TFHF3,TFPAT3:
                                  TFHF4,TFPAT4,TFHF5,TFPAT5,TFHF6,TFPAT6:
                                  TFNINV,TFSPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
RKJHTFE1 MOVE      ZERO,OVRCD
         READKS    JHSTFEA1;TFCLM,TFHFUND,TFHFTAB,TFDAYC,TFENDMBS:
                            TFHF1,TFPAT1,TFHF2,TFPAT2,TFHF3,TFPAT3:
                            TFHF4,TFPAT4,TFHF5,TFPAT5,TFHF6,TFPAT6:
                            TFNINV,TFSPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
RPJHTFE1 MOVE      ZERO,OVRCD
         READKP    JHSTFEA1;TFCLM,TFHFUND,TFHFTAB,TFDAYC,TFENDMBS:
                            TFHF1,TFPAT1,TFHF2,TFPAT2,TFHF3,TFPAT3:
                            TFHF4,TFPAT4,TFHF5,TFPAT5,TFHF6,TFPAT6:
                            TFNINV,TFSPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
RSJHTFE1 RESET     KEY23
         READ      JHSTFEA1,KEY23;;
.
         RETURN
.
DEJHTFE1 RESET     KEY23
         DELETE    JHSTFEA1,KEY23
         RETURN
.
UPJHTFE1 UPDATE    JHSTFEA1;TFCLM,TFHFUND,TFHFTAB,TFDAYC,TFENDMBS:
                            TFHF1,TFPAT1,TFHF2,TFPAT2,TFHF3,TFPAT3:
                            TFHF4,TFPAT4,TFHF5,TFPAT5,TFHF6,TFPAT6:
                            TFNINV,TFSPARE
         RETURN
