.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIOTFE                              *
. *                                                        *
. *  Function     :  I/O for newtfeef file                 *
. *                                                        *
. *  Keys         :  KEY19                                 *
. *                                                        *
. *  Modifications:  V5.00 01/06/89 K.Peak                 *
. *                        Change include heading          *
. *              V9.04.01  03/08/05 J.Tan    CAR 62750     *
. *                        Removed redefined amount var.   *
. *                                                        *
. **********************************************************
.
WRJHT1A1 RESET     KEY23
         WRITE     JHSTF1A1,KEY23;KEY23:
                                  TFHF1,TFPAT1,TFHF2,TFPAT2,TFHF3,TFPAT3:
                                  TFHF4,TFPAT4,TFHF5,TFPAT5,TFHF6,TFPAT6:
                                  TFNINV,TFSPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
RDJHT1A1 MOVE      ZERO,OVRCD
         RESET     KEY23
         READ      JHSTF1A1,KEY23;TFCLM,TFHFUND,TFHFTAB,TFDAYC,TFENDMBS:
                                  TFHF1,TFPAT1,TFHF2,TFPAT2,TFHF3,TFPAT3:
                                  TFHF4,TFPAT4,TFHF5,TFPAT5,TFHF6,TFPAT6:
                                  TFNINV,TFSPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
RKJHT1A1 MOVE      ZERO,OVRCD
         READKS    JHSTF1A1;TFCLM,TFHFUND,TFHFTAB,TFDAYC,TFENDMBS:
                            TFHF1,TFPAT1,TFHF2,TFPAT2,TFHF3,TFPAT3:
                            TFHF4,TFPAT4,TFHF5,TFPAT5,TFHF6,TFPAT6:
                            TFNINV,TFSPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
RPJHT1A1 MOVE      ZERO,OVRCD
         READKP    JHSTF1A1;TFCLM,TFHFUND,TFHFTAB,TFDAYC,TFENDMBS:
                            TFHF1,TFPAT1,TFHF2,TFPAT2,TFHF3,TFPAT3:
                            TFHF4,TFPAT4,TFHF5,TFPAT5,TFHF6,TFPAT6:
                            TFNINV,TFSPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
RSJHT1A1 RESET     KEY23
         READ      JHSTF1A1,KEY23;;
.
         RETURN
.
DEJHT1A1 RESET     KEY23
         DELETE    JHSTF1A1,KEY23
         RETURN
.
UPJHT1A1 UPDATE    JHSTF1A1;TFCLM,TFHFUND,TFHFTAB,TFDAYC,TFENDMBS:
                            TFHF1,TFPAT1,TFHF2,TFPAT2,TFHF3,TFPAT3:
                            TFHF4,TFPAT4,TFHF5,TFPAT5,TFHF6,TFPAT6:
                            TFNINV,TFSPARE
         RETURN
