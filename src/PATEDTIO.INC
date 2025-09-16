.*****************************************************************************
.*        PATEDTIO.INC                                                       *
.*****************************************************************************
.
RSPTEDT1  RESET     KEY26
          READ      PATEDTA1,KEY26;;
          RETURN
.
RAPTEDT1  RESET     KEY26
          MOVE      ZERO,OVRCD
          READ      PATEDTA1,KEY26;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTEDT1  RESET     KEY26
          MOVE      ZERO,OVRCD
          READ      PATEDTA1,KEY26;DPTETFLG,PTETPAYC,PTETADMN,PTETINVN:
                                  PTETBATN,PTETURNO,PTETPBAT,PTETNBAT:
                                  PTETINDT,PTETINTY,PTETEXCL,PTETCCST:
                                  PTETRCAL,PTETINAM,PTETISYS,PTETSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTETFLG,PTETFLAG
          RETURN
.
RKPTEDT1  MOVE      ZERO,OVRCD
          READKS    PATEDTA1;DPTETFLG,PTETPAYC,PTETADMN,PTETINVN:
                                  PTETBATN,PTETURNO,PTETPBAT,PTETNBAT:
                                  PTETINDT,PTETINTY,PTETEXCL,PTETCCST:
                                  PTETRCAL,PTETINAM,PTETISYS,PTETSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTETFLG,PTETFLAG
          RETURN
.
RPPTEDT1  MOVE      ZERO,OVRCD
          READKP    PATEDTA1;DPTETFLG,PTETPAYC,PTETADMN,PTETINVN:
                                  PTETBATN,PTETURNO,PTETPBAT,PTETNBAT:
                                  PTETINDT,PTETINTY,PTETEXCL,PTETCCST:
                                  PTETRCAL,PTETINAM,PTETISYS,PTETSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTETFLG,PTETFLAG
          RETURN
.
UPPTEDT1  MOVE      PTETFLAG,DPTETFLG
          UPDATE    PATEDTA1;DPTETFLG,PTETPAYC,PTETADMN,PTETINVN:
                                  PTETBATN,PTETURNO,PTETPBAT,PTETNBAT:
                                  PTETINDT,PTETINTY,PTETEXCL,PTETCCST:
                                  PTETRCAL,PTETINAM,PTETISYS,PTETSPAR
          RETURN
.
WRPTEDT1  RESET     KEY26
          MOVE      PTETFLAG,DPTETFLG
          WRITE     PATEDTA1,KEY26;DPTETFLG,PTETPAYC,PTETADMN,PTETINVN:
                                  PTETBATN,PTETURNO,PTETPBAT,PTETNBAT:
                                  PTETINDT,PTETINTY,PTETEXCL,PTETCCST:
                                  PTETRCAL,PTETINAM,PTETISYS,PTETSPAR
          RETURN
.
DEPTEDT1  RESET     KEY26
          DELETE    PATEDTA1,KEY26
          RETURN
.
.         Index 1 Routines
.
RSPTEDT2  RESET     KEY16
          READ      PATEDTA2,KEY16;;
          RETURN
.
RAPTEDT2  RESET     KEY16
          MOVE      ZERO,OVRCD
          READ      PATEDTA2,KEY16;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTEDT2  RESET     KEY16
          MOVE      ZERO,OVRCD
          READ      PATEDTA2,KEY16;DPTETFLG,PTETPAYC,PTETADMN,PTETINVN:
                                  PTETBATN,PTETURNO,PTETPBAT,PTETNBAT:
                                  PTETINDT,PTETINTY,PTETEXCL,PTETCCST:
                                  PTETRCAL,PTETINAM,PTETISYS,PTETSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTETFLG,PTETFLAG
          RETURN
.
RKPTEDT2  MOVE      ZERO,OVRCD
          READKS    PATEDTA2;DPTETFLG,PTETPAYC,PTETADMN,PTETINVN:
                                  PTETBATN,PTETURNO,PTETPBAT,PTETNBAT:
                                  PTETINDT,PTETINTY,PTETEXCL,PTETCCST:
                                  PTETRCAL,PTETINAM,PTETISYS,PTETSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTETFLG,PTETFLAG
          RETURN
.
RPPTEDT2  MOVE      ZERO,OVRCD
          READKP    PATEDTA2;DPTETFLG,PTETPAYC,PTETADMN,PTETINVN:
                                  PTETBATN,PTETURNO,PTETPBAT,PTETNBAT:
                                  PTETINDT,PTETINTY,PTETEXCL,PTETCCST:
                                  PTETRCAL,PTETINAM,PTETISYS,PTETSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTETFLG,PTETFLAG
          RETURN
.
UPPTEDT2  MOVE      PTETFLAG,DPTETFLG
          UPDATE    PATEDTA2;DPTETFLG,PTETPAYC,PTETADMN,PTETINVN:
                                  PTETBATN,PTETURNO,PTETPBAT,PTETNBAT:
                                  PTETINDT,PTETINTY,PTETEXCL,PTETCCST:
                                  PTETRCAL,PTETINAM,PTETISYS,PTETSPAR
          RETURN
.
WRPTEDT2  RESET     KEY16
          MOVE      PTETFLAG,DPTETFLG
          WRITE     PATEDTA2,KEY26;DPTETFLG,PTETPAYC,PTETADMN,PTETINVN:
                                  PTETBATN,PTETURNO,PTETPBAT,PTETNBAT:
                                  PTETINDT,PTETINTY,PTETEXCL,PTETCCST:
                                  PTETRCAL,PTETINAM,PTETISYS,PTETSPAR
          RETURN
.
.         Index 3 Routines
.
RSPTEDT3  RESET     KEY24
          READ      PATEDTA3,KEY24;;
          RETURN
.
RAPTEDT3  RESET     KEY24
          MOVE      ZERO,OVRCD
          READ      PATEDTA3,KEY24;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTEDT3  RESET     KEY24
          MOVE      ZERO,OVRCD
          READ      PATEDTA3,KEY24;DPTETFLG,PTETPAYC,PTETADMN,PTETINVN:
                                  PTETBATN,PTETURNO,PTETPBAT,PTETNBAT:
                                  PTETINDT,PTETINTY,PTETEXCL,PTETCCST:
                                  PTETRCAL,PTETINAM,PTETISYS,PTETSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTETFLG,PTETFLAG
          RETURN
.
RKPTEDT3  MOVE      ZERO,OVRCD
          READKS    PATEDTA3;DPTETFLG,PTETPAYC,PTETADMN,PTETINVN:
                                  PTETBATN,PTETURNO,PTETPBAT,PTETNBAT:
                                  PTETINDT,PTETINTY,PTETEXCL,PTETCCST:
                                  PTETRCAL,PTETINAM,PTETISYS,PTETSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTETFLG,PTETFLAG
          RETURN
.
RPPTEDT3  MOVE      ZERO,OVRCD
          READKP    PATEDTA3;DPTETFLG,PTETPAYC,PTETADMN,PTETINVN:
                                  PTETBATN,PTETURNO,PTETPBAT,PTETNBAT:
                                  PTETINDT,PTETINTY,PTETEXCL,PTETCCST:
                                  PTETRCAL,PTETINAM,PTETISYS,PTETSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTETFLG,PTETFLAG
          RETURN
.
.         Index 4 Routines
.
RSPTEDT4  RESET     KEY24
          READ      PATEDTA4,KEY24;;
          RETURN
.
RAPTEDT4  RESET     KEY24
          MOVE      ZERO,OVRCD
          READ      PATEDTA4,KEY24;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTEDT4  RESET     KEY24
          MOVE      ZERO,OVRCD
          READ      PATEDTA4,KEY24;DPTETFLG,PTETPAYC,PTETADMN,PTETINVN:
                                  PTETBATN,PTETURNO,PTETPBAT,PTETNBAT:
                                  PTETINDT,PTETINTY,PTETEXCL,PTETCCST:
                                  PTETRCAL,PTETINAM,PTETISYS,PTETSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTETFLG,PTETFLAG
          RETURN
.
RKPTEDT4  MOVE      ZERO,OVRCD
          READKS    PATEDTA4;DPTETFLG,PTETPAYC,PTETADMN,PTETINVN:
                                  PTETBATN,PTETURNO,PTETPBAT,PTETNBAT:
                                  PTETINDT,PTETINTY,PTETEXCL,PTETCCST:
                                  PTETRCAL,PTETINAM,PTETISYS,PTETSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTETFLG,PTETFLAG
          RETURN
.
RPPTEDT4  MOVE      ZERO,OVRCD
          READKP    PATEDTA4;DPTETFLG,PTETPAYC,PTETADMN,PTETINVN:
                                  PTETBATN,PTETURNO,PTETPBAT,PTETNBAT:
                                  PTETINDT,PTETINTY,PTETEXCL,PTETCCST:
                                  PTETRCAL,PTETINAM,PTETISYS,PTETSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTETFLG,PTETFLAG
          RETURN
.
UPPTEDT4  MOVE      PTETFLAG,DPTETFLG
          UPDATE    PATEDTA4;DPTETFLG,PTETPAYC,PTETADMN,PTETINVN:
                                  PTETBATN,PTETURNO,PTETPBAT,PTETNBAT:
                                  PTETINDT,PTETINTY,PTETEXCL,PTETCCST:
                                  PTETRCAL,PTETINAM,PTETISYS,PTETSPAR
          RETURN
.
.         Index 5 Routines
.
RSPTEDT5  RESET     KEY32
          READ      PATEDTA5,KEY32;;
          RETURN
.
RAPTEDT5  RESET     KEY32
          MOVE      ZERO,OVRCD
          READ      PATEDTA5,KEY32;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTEDT5  RESET     KEY32
          MOVE      ZERO,OVRCD
          READ      PATEDTA5,KEY32;DPTETFLG,PTETPAYC,PTETADMN,PTETINVN:
                                  PTETBATN,PTETURNO,PTETPBAT,PTETNBAT:
                                  PTETINDT,PTETINTY,PTETEXCL,PTETCCST:
                                  PTETRCAL,PTETINAM,PTETISYS,PTETSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTETFLG,PTETFLAG
          RETURN
.
RKPTEDT5  MOVE      ZERO,OVRCD
          READKS    PATEDTA5;DPTETFLG,PTETPAYC,PTETADMN,PTETINVN:
                                  PTETBATN,PTETURNO,PTETPBAT,PTETNBAT:
                                  PTETINDT,PTETINTY,PTETEXCL,PTETCCST:
                                  PTETRCAL,PTETINAM,PTETISYS,PTETSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTETFLG,PTETFLAG
          RETURN
.
RPPTEDT5  MOVE      ZERO,OVRCD
          READKP    PATEDTA5;DPTETFLG,PTETPAYC,PTETADMN,PTETINVN:
                                  PTETBATN,PTETURNO,PTETPBAT,PTETNBAT:
                                  PTETINDT,PTETINTY,PTETEXCL,PTETCCST:
                                  PTETRCAL,PTETINAM,PTETISYS,PTETSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTETFLG,PTETFLAG
          RETURN
+
