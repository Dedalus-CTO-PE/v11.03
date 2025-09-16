.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIOTFE                              *
. *                                                        *
. *  Function     :  I/O for pattfeef file                 *
. *                                                        *
. *  Keys         :  KEY19                                 *
. *                                                        *
. *  Modifications:                                        *
. *        V10.01.01 13/12/2010 Peter Vela CAR 233048      *
. *                  Added PTTFHTYP and PTTFCNID           *
. *        V9.11.01  29/05/09 J.Tan    CAR 197391          *
. *                  Added RDATFEE1                        *
. *        V9.04.01  03/08/05 J.Tan    CAR 62750           *
. *                  Removed redefined amount variables    *
. *        V5.08.01 15/08/2000  Caleb Sharman              *
. *                 Changed Health Fund variables to be 8 chars *
. *        V5.00 01/06/89 K.Peak                           *
. *                 Change include heading                 *
. *                                                        *
. **********************************************************
.
WRTFEE1  RESET     KEY24
         WRITE     PATTFEE1,KEY24;TFCLM,TFHFUND,PTTFHTYP,TFDAYC,TFENDMBS:
                                  TFHF1,TFPAT1,TFHF2,TFPAT2,TFHF3,TFPAT3:
                                  TFHF4,TFPAT4,TFHF5,TFPAT5,TFHF6,TFPAT6:
                                  TFNINV,PTTFCNID,TFSPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
RDATFEE1 RESET     KEY24
         MOVE      ZERO,OVRCD
         READ      PATTFEE1,KEY24;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RDTFEE1  MOVE      ZERO,OVRCD
         RESET     KEY24
         READ      PATTFEE1,KEY24;TFCLM,TFHFUND,PTTFHTYP,TFDAYC,TFENDMBS:
                                  TFHF1,TFPAT1,TFHF2,TFPAT2,TFHF3,TFPAT3:
                                  TFHF4,TFPAT4,TFHF5,TFPAT5,TFHF6,TFPAT6:
                                  TFNINV,PTTFCNID,TFSPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
RDKTFEE1 MOVE      ZERO,OVRCD
         READKS    PATTFEE1;TFCLM,TFHFUND,PTTFHTYP,TFDAYC,TFENDMBS:
                            TFHF1,TFPAT1,TFHF2,TFPAT2,TFHF3,TFPAT3:
                            TFHF4,TFPAT4,TFHF5,TFPAT5,TFHF6,TFPAT6:
                            TFNINV,PTTFCNID,TFSPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
RDPTFEE1 MOVE      ZERO,OVRCD
         READKP    PATTFEE1;TFCLM,TFHFUND,PTTFHTYP,TFDAYC,TFENDMBS:
                            TFHF1,TFPAT1,TFHF2,TFPAT2,TFHF3,TFPAT3:
                            TFHF4,TFPAT4,TFHF5,TFPAT5,TFHF6,TFPAT6:
                            TFNINV,PTTFCNID,TFSPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
RDSTFEE1 RESET     KEY24
         READ      PATTFEE1,KEY24;;
.
         RETURN
.
DETFEE1  RESET     KEY24
         DELETE    PATTFEE1,KEY24
         RETURN
.
UPTFEE1  UPDATE    PATTFEE1;TFCLM,TFHFUND,PTTFHTYP,TFDAYC,TFENDMBS:
                            TFHF1,TFPAT1,TFHF2,TFPAT2,TFHF3,TFPAT3:
                            TFHF4,TFPAT4,TFHF5,TFPAT5,TFHF6,TFPAT6:
                            TFNINV,PTTFCNID,TFSPARE
         RETURN
.
WRTFEE2  RESET     KEY24
         WRITE     PATTFEE2,KEY24;TFCLM,TFHFUND,PTTFHTYP,TFDAYC,TFENDMBS:
                                  TFHF1,TFPAT1,TFHF2,TFPAT2,TFHF3,TFPAT3:
                                  TFHF4,TFPAT4,TFHF5,TFPAT5,TFHF6,TFPAT6:
                                  TFNINV,PTTFCNID,TFSPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
RDATFEE2 RESET     KEY24
         MOVE      ZERO,OVRCD
         READ      PATTFEE2,KEY24;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RDTFEE2  MOVE      ZERO,OVRCD
         RESET     KEY24
         READ      PATTFEE2,KEY24;TFCLM,TFHFUND,PTTFHTYP,TFDAYC,TFENDMBS:
                                  TFHF1,TFPAT1,TFHF2,TFPAT2,TFHF3,TFPAT3:
                                  TFHF4,TFPAT4,TFHF5,TFPAT5,TFHF6,TFPAT6:
                                  TFNINV,PTTFCNID,TFSPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
RDKTFEE2 MOVE      ZERO,OVRCD
         READKS    PATTFEE2;TFCLM,TFHFUND,PTTFHTYP,TFDAYC,TFENDMBS:
                            TFHF1,TFPAT1,TFHF2,TFPAT2,TFHF3,TFPAT3:
                            TFHF4,TFPAT4,TFHF5,TFPAT5,TFHF6,TFPAT6:
                            TFNINV,PTTFCNID,TFSPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
RDPTFEE2 MOVE      ZERO,OVRCD
         READKP    PATTFEE2;TFCLM,TFHFUND,PTTFHTYP,TFDAYC,TFENDMBS:
                            TFHF1,TFPAT1,TFHF2,TFPAT2,TFHF3,TFPAT3:
                            TFHF4,TFPAT4,TFHF5,TFPAT5,TFHF6,TFPAT6:
                            TFNINV,PTTFCNID,TFSPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
RDSTFEE2 RESET     KEY24
         READ      PATTFEE2,KEY24;;
.
         RETURN
.
DETFEE2  RESET     KEY24
         DELETE    PATTFEE2,KEY24
         RETURN
.
UPTFEE2  UPDATE    PATTFEE2;TFCLM,TFHFUND,PTTFHTYP,TFDAYC,TFENDMBS:
                            TFHF1,TFPAT1,TFHF2,TFPAT2,TFHF3,TFPAT3:
                            TFHF4,TFPAT4,TFHF5,TFPAT5,TFHF6,TFPAT6:
                            TFNINV,PTTFCNID,TFSPARE
         RETURN
.
         INC       JHSTFEIO/INC
.
