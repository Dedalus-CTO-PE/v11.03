.
.         Include Name : OUTBOCIO.INC
.
.         I/O routines for Outpatients Booking Extension file
.
.OVRCD    FORM      1
.KEY8     DIM       8
.
.         1st index - OBAOUTNO
.
RAOTBOC1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      OUTBOKC1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSOTBOC1  RESET     KEY8
          READ      OUTBOKC1,KEY8;;
          RETURN
.
RDOTBOC1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      OUTBOKC1,KEY8;DOBAOUTN,OTBCRDAT,OTBCSPAR               
          GOTO      OVERCOND IF OVER
          MOVE      DOBAOUTN,OBAOUTNO
          RETURN
.
RKOTBOC1  MOVE      ZERO,OVRCD
          READKS    OUTBOKC1;DOBAOUTN,OTBCRDAT,OTBCSPAR               
          GOTO      OVERCOND IF OVER
          MOVE      DOBAOUTN,OBAOUTNO
          RETURN
.
WROTBOC1  RESET     KEY8
          MOVE      OBAOUTNO,DOBAOUTN
          WRITE     OUTBOKC1,KEY8;KEY8,OTBCRDAT,OTBCSPAR                
          RETURN
.
UPOTBOC1  MOVE      OBAOUTNO,DOBAOUTN
          UPDATE    OUTBOKC1;DOBAOUTN,OTBCRDAT,OTBCSPAR                
          RETURN
.
DEOTBOC1  RESET     KEY8
          DELETE    OUTBOKC1,KEY8
          RETURN
.
.
.         2nd index - OTBCRDAT/OBAOUTNO
.
RAOTBOC2  MOVE      ZERO,OVRCD
          RESET     KEY16
          READ      OUTBOKC2,KEY16;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSOTBOC2  RESET     KEY16
          READ      OUTBOKC2,KEY16;;
          RETURN
.
RDOTBOC2  MOVE      ZERO,OVRCD
          RESET     KEY16
          READ      OUTBOKC2,KEY16;DOBAOUTN,OTBCRDAT,OTBCSPAR               
          GOTO      OVERCOND IF OVER
          MOVE      DOBAOUTN,OBAOUTNO
          RETURN
.
RKOTBOC2  MOVE      ZERO,OVRCD
          READKS    OUTBOKC2;DOBAOUTN,OTBCRDAT,OTBCSPAR               
          GOTO      OVERCOND IF OVER
          MOVE      DOBAOUTN,OBAOUTNO
          RETURN
.
WROTBOC2  RESET     KEY16
          MOVE      OBAOUTNO,DOBAOUTN
          WRITE     OUTBOKC2,KEY16;KEY16,OTBCSPAR                
          RETURN
.
UPOTBOC2  MOVE      OBAOUTNO,DOBAOUTN
          UPDATE    OUTBOKC2;DOBAOUTN,OTBCRDAT,OTBCSPAR                
          RETURN
.
DEOTBOC2  RESET     KEY16
          DELETE    OUTBOKC2,KEY16
          RETURN
