.*****************************************************************************
.*                        HICERRIO.INC                                       *
.*****************************************************************************
.
RSHCERR1  RESET     KEY8
          READ      HICERRA1,KEY8;;
          RETURN
.
RAHCERR1  RESET     KEY8
          MOVE      ZERO,OVRCD
          READ      HICERRA1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCERR1  RESET     KEY8
          MOVE      ZERO,OVRCD
          READ      HICERRA1,KEY8;HCERBTCH,HCERLCNT,HCERPMCI,HCERPYEE:
                                  HCERPSRV,HCERCLMN,HCERVPOS,HCERMEDI,HCERFNAM:
                                  HCERITMN,HCERIDAT,HCERBASS,HCERBPAD,HCERECOD:
                                  HCERSURN,HCERDESC,HCERSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCERR1  MOVE      ZERO,OVRCD
          READKS    HICERRA1;HCERBTCH,HCERLCNT,HCERPMCI,HCERPYEE:
                                  HCERPSRV,HCERCLMN,HCERVPOS,HCERMEDI,HCERFNAM:
                                  HCERITMN,HCERIDAT,HCERBASS,HCERBPAD,HCERECOD:
                                  HCERSURN,HCERDESC,HCERSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCERR1  MOVE      ZERO,OVRCD
          READKP    HICERRA1;HCERBTCH,HCERLCNT,HCERPMCI,HCERPYEE:
                                  HCERPSRV,HCERCLMN,HCERVPOS,HCERMEDI,HCERFNAM:
                                  HCERITMN,HCERIDAT,HCERBASS,HCERBPAD,HCERECOD:
                                  HCERSURN,HCERDESC,HCERSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCERR1  UPDATE    HICERRA1;HCERBTCH,HCERLCNT,HCERPMCI,HCERPYEE:
                                  HCERPSRV,HCERCLMN,HCERVPOS,HCERMEDI,HCERFNAM:
                                  HCERITMN,HCERIDAT,HCERBASS,HCERBPAD,HCERECOD:
                                  HCERSURN,HCERDESC,HCERSPAR
          RETURN
.
WRHCERR1  RESET     KEY8
          WRITE     HICERRA1,KEY8;HCERBTCH,HCERLCNT,HCERPMCI,HCERPYEE:
                                  HCERPSRV,HCERCLMN,HCERVPOS,HCERMEDI,HCERFNAM:
                                  HCERITMN,HCERIDAT,HCERBASS,HCERBPAD,HCERECOD:
                                  HCERSURN,HCERDESC,HCERSPAR
          RETURN
.
DEHCERR1  RESET     KEY8
          DELETE    HICERRA1,KEY8
          RETURN
.
