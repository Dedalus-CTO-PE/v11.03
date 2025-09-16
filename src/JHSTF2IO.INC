.
. **********************************************************
. *                                                        *
. *  Include Name :  JHSTF2IO                              *
. *                                                        *
. *  Function     :  I/O for oldtfeaf file                 *
. *                                                        *
. *  Keys         :  KEY19                                 *
. *                                                        *
. *  Modifications:                                        *
. *                                                        *
. **********************************************************
.
WRJHT2A1 RESET     KEY23
         WRITE     JHSTF2A1,KEY23;KEY23:
                                  TFHF1,TFPAT1,TFHF2,TFPAT2,TFHF3,TFPAT3:
                                  TFHF4,TFPAT4,TFHF5,TFPAT5,TFHF6,TFPAT6:
                                  TFNINV,TFSPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
RDJHT2A1 MOVE      ZERO,OVRCD
         RESET     KEY23
         READ      JHSTF2A1,KEY23;TFCLM,TFHFUND,TFHFTAB,TFDAYC,TFENDMBS:
                                  TFHF1,TFPAT1,TFHF2,TFPAT2,TFHF3,TFPAT3:
                                  TFHF4,TFPAT4,TFHF5,TFPAT5,TFHF6,TFPAT6:
                                  TFNINV,TFSPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
RKJHT2A1 MOVE      ZERO,OVRCD
         READKS    JHSTF2A1;TFCLM,TFHFUND,TFHFTAB,TFDAYC,TFENDMBS:
                            TFHF1,TFPAT1,TFHF2,TFPAT2,TFHF3,TFPAT3:
                            TFHF4,TFPAT4,TFHF5,TFPAT5,TFHF6,TFPAT6:
                            TFNINV,TFSPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
RPJHT2A1 MOVE      ZERO,OVRCD
         READKP    JHSTF2A1;TFCLM,TFHFUND,TFHFTAB,TFDAYC,TFENDMBS:
                            TFHF1,TFPAT1,TFHF2,TFPAT2,TFHF3,TFPAT3:
                            TFHF4,TFPAT4,TFHF5,TFPAT5,TFHF6,TFPAT6:
                            TFNINV,TFSPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
RSJHT2A1 RESET     KEY23
         READ      JHSTF2A1,KEY23;;
.
         RETURN
.
DEJHT2A1 RESET     KEY23
         DELETE    JHSTF2A1,KEY23
         RETURN
.
UPJHT2A1 UPDATE    JHSTF2A1;TFCLM,TFHFUND,TFHFTAB,TFDAYC,TFENDMBS:
                            TFHF1,TFPAT1,TFHF2,TFPAT2,TFHF3,TFPAT3:
                            TFHF4,TFPAT4,TFHF5,TFPAT5,TFHF6,TFPAT6:
                            TFNINV,TFSPARE
         RETURN
