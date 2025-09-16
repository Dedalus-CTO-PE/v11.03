.
.         INCLUDE NAME : IBAIOPRN.PBL
.
.         FILE  I/O REQUESTS FOR PRINTER TABLE FILE
.
.OVRCD  FORM            1             0=NOT OVER
.                                     1= OVER
.KEY6   DIM             6             KEY FOR IBAPRN
.
.         NOTE:-
.                  RDAAAX  IS THE READ CALL ON FILE IBAAAAX
.                  RDKAAAX IS THE READKS CALL
.                  WRAAAX  IS THE WRITE CALL
.                  UPAAAX  IS THE UPDATE CALL
.                  DEAAAX  IS THE DELETE CALL
.
WRPRTA1  MOVE      ZERO,OVRCD
         RESET     KEY6
         TRAP      OVERLOCK IF IO
         MOVE      PRTCODE,QPRTCODE
         WRITE     IBAPRTA1,KEY6;QPRTCODE,PRTDESC,PRTAVAL,PRTTYPE:
                                 PRTPAPER,IBPTHOSP,IBPTQUEN,IBPTLOCN:
                                 IBPTSCRP,PRTSPARE
         TRAPCLR   IO
         RETURN
.
RDAPRTA1 MOVE      ZERO,OVRCD
         RESET     KEY6
         READ      IBAPRTA1,KEY6;ANS;
         GOTO      OVERCOND IF OVER
         RETURN
.
RDPRTA1  MOVE      ZERO,OVRCD
         RESET     KEY6
         READ      IBAPRTA1,KEY6;QPRTCODE,PRTDESC,PRTAVAL,PRTTYPE:
                                 PRTPAPER,IBPTHOSP,IBPTQUEN,IBPTLOCN:
                                 IBPTSCRP,PRTSPARE
         GOTO      OVERCOND IF OVER
         MOVE      QPRTCODE,PRTCODE
         RETURN
.
RLPRTA1  MOVE      ZERO,OVRCD
         RESET     KEY6
         READL     IBAPRTA1,KEY6;QPRTCODE,PRTDESC,PRTAVAL,PRTTYPE:
                                 PRTPAPER,IBPTHOSP,IBPTQUEN,IBPTLOCN:
                                 IBPTSCRP,PRTSPARE
         GOTO      OVERLOCK IF LOCKED
         GOTO      OVERCOND IF OVER
         MOVE      QPRTCODE,PRTCODE
         RETURN
.
RDKPRTA1 MOVE      ZERO,OVRCD
         READKS    IBAPRTA1;QPRTCODE,PRTDESC,PRTAVAL,PRTTYPE:
                                 PRTPAPER,IBPTHOSP,IBPTQUEN,IBPTLOCN:
                                 IBPTSCRP,PRTSPARE
         GOTO      OVERCOND IF OVER
         MOVE      QPRTCODE,PRTCODE
         RETURN
.
RDPPRTA1 MOVE      ZERO,OVRCD
         READKP    IBAPRTA1;QPRTCODE,PRTDESC,PRTAVAL,PRTTYPE:
                                 PRTPAPER,IBPTHOSP,IBPTQUEN,IBPTLOCN:
                                 IBPTSCRP,PRTSPARE
         GOTO      OVERCOND IF OVER
         MOVE      QPRTCODE,PRTCODE
         RETURN
.
RDSPRTA1 MOVE      ZERO,OVRCD
         RESET     KEY6
         READ      IBAPRTA1,KEY6;;
         GOTO      OVERCOND IF OVER
         RETURN
.
DEPRTA1 RESET      KEY6
        DELETE     IBAPRTA1,KEY6
        RETURN
.
UPPRTA1 MOVE       PRTCODE,QPRTCODE
        UPDATE     IBAPRTA1;QPRTCODE,PRTDESC,PRTAVAL,PRTTYPE:
                                 PRTPAPER,IBPTHOSP,IBPTQUEN,IBPTLOCN:
                                 IBPTSCRP,PRTSPARE
        RETURN
.
ULPRTA1 UNLOCK     IBAPRTA1
        RETURN
.
WRPRTA2  MOVE      ZERO,OVRCD
         RESET     KEY9
         TRAP      OVERLOCK IF IO
         MOVE      PRTCODE,QPRTCODE
         WRITE     IBAPRTA1,KEY9;QPRTCODE,PRTDESC,PRTAVAL,PRTTYPE:
                                 PRTPAPER,IBPTHOSP,IBPTQUEN,IBPTLOCN:
                                 IBPTSCRP,PRTSPARE
         TRAPCLR   IO
         RETURN
.
RDAPRTA2 MOVE      ZERO,OVRCD
         RESET     KEY9
         READ      IBAPRTA1,KEY9;ANS;
         GOTO      OVERCOND IF OVER
         RETURN
.
RDPRTA2  MOVE      ZERO,OVRCD
         RESET     KEY9
         READ      IBAPRTA2,KEY9;QPRTCODE,PRTDESC,PRTAVAL,PRTTYPE:
                                 PRTPAPER,IBPTHOSP,IBPTQUEN,IBPTLOCN:
                                 IBPTSCRP,PRTSPARE
         GOTO      OVERCOND IF OVER
         MOVE      QPRTCODE,PRTCODE
         RETURN
.
RLPRTA2  MOVE      ZERO,OVRCD
         RESET     KEY9
         READL     IBAPRTA1,KEY9;QPRTCODE,PRTDESC,PRTAVAL,PRTTYPE:
                                 PRTPAPER,IBPTHOSP,IBPTQUEN,IBPTLOCN:
                                 IBPTSCRP,PRTSPARE
         GOTO      OVERLOCK IF LOCKED
         GOTO      OVERCOND IF OVER
         MOVE      QPRTCODE,PRTCODE
         RETURN
.
RDKPRTA2 MOVE      ZERO,OVRCD
         READKS    IBAPRTA2;QPRTCODE,PRTDESC,PRTAVAL,PRTTYPE:
                                 PRTPAPER,IBPTHOSP,IBPTQUEN,IBPTLOCN:
                                 IBPTSCRP,PRTSPARE
         GOTO      OVERCOND IF OVER
         MOVE      QPRTCODE,PRTCODE
         RETURN
.
RDPPRTA2 MOVE      ZERO,OVRCD
         READKP    IBAPRTA2;QPRTCODE,PRTDESC,PRTAVAL,PRTTYPE:
                                 PRTPAPER,IBPTHOSP,IBPTQUEN,IBPTLOCN:
                                 IBPTSCRP,PRTSPARE
         GOTO      OVERCOND IF OVER
         MOVE      QPRTCODE,PRTCODE
         RETURN
.
RDSPRTA2 MOVE      ZERO,OVRCD
         RESET     KEY9
         READ      IBAPRTA2,KEY9;;
         GOTO      OVERCOND IF OVER
         RETURN
.
DEPRTA2 RESET      KEY9
        DELETE     IBAPRTA2,KEY9
        RETURN
.
UPPRTA2 MOVE       PRTCODE,QPRTCODE
        UPDATE     IBAPRTA2;QPRTCODE,PRTDESC,PRTAVAL,PRTTYPE:
                                 PRTPAPER,IBPTHOSP,IBPTQUEN,IBPTLOCN:
                                 IBPTSCRP,PRTSPARE
        RETURN
.
ULPRTA2 UNLOCK     IBAPRTA2
        RETURN
.

