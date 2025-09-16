.*****************************************************************************
.*        ALLHBTIO.INC                                                       *
.*****************************************************************************
.
.         Index 1
.
RSALHBT1  RESET     KEY40
          READ      ALLHBTA1,KEY40;;
          RETURN
.
RAALHBT1  RESET     KEY40
          MOVE      ZERO,OVRCD
          READ      ALLHBTA1,KEY40;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALHBT1  RESET     KEY40
          MOVE      ZERO,OVRCD
          READ      ALLHBTA1,KEY40;ALHBFNAM,ALHBBNUM,ALHBSTAT,ALHBURNO:
                                  ALHBNBTN,ALHBPBTN,ALHBSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALHBT1  MOVE      ZERO,OVRCD
          READKS    ALLHBTA1;ALHBFNAM,ALHBBNUM,ALHBSTAT,ALHBURNO:
                                  ALHBNBTN,ALHBPBTN,ALHBSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALHBT1  MOVE      ZERO,OVRCD
          READKP    ALLHBTA1;ALHBFNAM,ALHBBNUM,ALHBSTAT,ALHBURNO:
                                  ALHBNBTN,ALHBPBTN,ALHBSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALHBT1  UPDATE    ALLHBTA1;ALHBFNAM,ALHBBNUM,ALHBSTAT,ALHBURNO:
                                  ALHBNBTN,ALHBPBTN,ALHBSPAR
          RETURN
.
WRALHBT1  RESET     KEY40
          WRITE     ALLHBTA1,KEY40;ALHBFNAM,ALHBBNUM,ALHBSTAT,ALHBURNO:
                                  ALHBNBTN,ALHBPBTN,ALHBSPAR
          RETURN
.
DEALHBT1  RESET     KEY40
          DELETE    ALLHBTA1,KEY40
          RETURN
.
.         Index 2
.
RSALHBT2  RESET     KEY40
          READ      ALLHBTA2,KEY40;;
          RETURN
.
RAALHBT2  RESET     KEY40
          MOVE      ZERO,OVRCD
          READ      ALLHBTA2,KEY40;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALHBT2  RESET     KEY40
          MOVE      ZERO,OVRCD
          READ      ALLHBTA2,KEY40;ALHBFNAM,ALHBBNUM,ALHBSTAT,ALHBURNO:
                                  ALHBNBTN,ALHBPBTN,ALHBSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALHBT2  MOVE      ZERO,OVRCD
          READKS    ALLHBTA2;ALHBFNAM,ALHBBNUM,ALHBSTAT,ALHBURNO:
                                  ALHBNBTN,ALHBPBTN,ALHBSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALHBT2  MOVE      ZERO,OVRCD
          READKP    ALLHBTA2;ALHBFNAM,ALHBBNUM,ALHBSTAT,ALHBURNO:
                                  ALHBNBTN,ALHBPBTN,ALHBSPAR
          GOTO      OVERCOND IF OVER
          RETURN
+
