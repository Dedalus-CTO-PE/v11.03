.  **************************************************************************
.  *  Include Name      : PRILETIO.INC                                      *
.  *                                                                        *
.  *  Modifications     :                                                   *
.  *       V9.03.01        Tracey Nguyen CAR 44125                          *
.  *                       Renamed Spare variable from PRLESPAR to PRLETSPA *
.  *                       to fix duplication error with PRIFLTFD/IO        *
.  **************************************************************************
.
RSPRLE1   RESET     KEY6
          READ      PRILETR1,KEY6;;
          RETURN
.
RAPRLE1   RESET     KEY6
          MOVE      ZERO,OVRCD
          READ      PRILETR1,KEY6;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRLE1   RESET     KEY6
          MOVE      ZERO,OVRCD
          READ      PRILETR1,KEY6;DPRLENUM,DPRLELIN,PRLETEXT,PRLEVARB:
                                  PRLEMBOT,PRLEMTOP,PRLEPLEN,PRLELEFT,PRLETSPA
          GOTO      OVERCOND IF OVER
          MOVE      DPRLENUM,PRLENUMB
          MOVE      DPRLELIN,PRLELINE
          RETURN
.
RKPRLE1   MOVE      ZERO,OVRCD
          READKS    PRILETR1;DPRLENUM,DPRLELIN,PRLETEXT,PRLEVARB:
                             PRLEMBOT,PRLEMTOP,PRLEPLEN,PRLELEFT,PRLETSPA
          GOTO      OVERCOND IF OVER
          MOVE      DPRLENUM,PRLENUMB
          MOVE      DPRLELIN,PRLELINE
          RETURN
.
RPPRLE1   MOVE      ZERO,OVRCD
          READKP    PRILETR1;DPRLENUM,DPRLELIN,PRLETEXT,PRLEVARB:
                             PRLEMBOT,PRLEMTOP,PRLEPLEN,PRLELEFT,PRLETSPA
          GOTO      OVERCOND IF OVER
          MOVE      DPRLENUM,PRLENUMB
          MOVE      DPRLELIN,PRLELINE
          RETURN
.
UPPRLE1   MOVE      PRLENUMB,DPRLENUM
          MOVE      PRLELINE,DPRLELIN
          UPDATE    PRILETR1;DPRLENUM,DPRLELIN,PRLETEXT,PRLEVARB:
                             PRLEMBOT,PRLEMTOP,PRLEPLEN,PRLELEFT,PRLETSPA
          RETURN
.
WRPRLE1   RESET     KEY6
          MOVE      PRLENUMB,DPRLENUM
          MOVE      PRLELINE,DPRLELIN
          WRITE     PRILETR1,KEY6;KEY6,PRLETEXT,PRLEVARB:
                                  PRLEMBOT,PRLEMTOP,PRLEPLEN,PRLELEFT,PRLETSPA
          RETURN
.
DEPRLE1   RESET     KEY6
          DELETE    PRILETR1,KEY6
          RETURN
.
RSPRLE2   RESET     KEY6
          READ      PRILETR2,KEY6;;
          RETURN
.
RAPRLE2   RESET     KEY6
          MOVE      ZERO,OVRCD
          READ      PRILETR2,KEY6;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRLE2   RESET     KEY6
          MOVE      ZERO,OVRCD
          READ      PRILETR2,KEY6;DPRLENUM,DPRLELIN,PRLETEXT,PRLEVARB:
                                  PRLEMBOT,PRLEMTOP,PRLEPLEN,PRLELEFT,PRLETSPA
          GOTO      OVERCOND IF OVER
          MOVE      DPRLENUM,PRLENUMB
          MOVE      DPRLELIN,PRLELINE
          RETURN
.
RKPRLE2   MOVE      ZERO,OVRCD
          READKS    PRILETR2;DPRLENUM,DPRLELIN,PRLETEXT,PRLEVARB:
                             PRLEMBOT,PRLEMTOP,PRLEPLEN,PRLELEFT,PRLETSPA
          GOTO      OVERCOND IF OVER
          MOVE      DPRLENUM,PRLENUMB
          MOVE      DPRLELIN,PRLELINE
          RETURN
.
RPPRLE2   MOVE      ZERO,OVRCD
          READKP    PRILETR2;DPRLENUM,DPRLELIN,PRLETEXT,PRLEVARB:
                             PRLEMBOT,PRLEMTOP,PRLEPLEN,PRLELEFT,PRLETSPA
          GOTO      OVERCOND IF OVER
          MOVE      DPRLENUM,PRLENUMB
          MOVE      DPRLELIN,PRLELINE
          RETURN
