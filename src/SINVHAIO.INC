. 03/08/94  RKS  srf 131260 Changed SIVH3 KEY46 to KEY46
. 02/06/94  RKS  Added SIVHTYPE - Which Supplier being used          
.----------------------------------------------------------------------------
RSSIVH1   RESET     KEY12
          READ      SINVHAA1,KEY12;;
          RETURN
.
RASIVH1   RESET     KEY12
          MOVE      ZERO,OVRCD
          READ      SINVHAA1,KEY12;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIVH1   RESET     KEY12
          MOVE      ZERO,OVRCD
          READ      SINVHAA1,KEY12;SIVHDAT,SIVHFNO,SIVHORD,SIVHLIN:
                                  SIVHQTY,SIVHSUN,SIVHCOS,SIVHPAT,SIVHSTA:
                                  SIVHCOR,SIVHCAT,SIVHTYP,SIVHVEN,SIVHTYPE:
                                  SIVHSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIVH1   MOVE      ZERO,OVRCD
          READKS    SINVHAA1;SIVHDAT,SIVHFNO,SIVHORD,SIVHLIN:
                                  SIVHQTY,SIVHSUN,SIVHCOS,SIVHPAT,SIVHSTA:
                                  SIVHCOR,SIVHCAT,SIVHTYP,SIVHVEN,SIVHTYPE:
                                  SIVHSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIVH1   MOVE      ZERO,OVRCD
          READKP    SINVHAA1;SIVHDAT,SIVHFNO,SIVHORD,SIVHLIN:
                                  SIVHQTY,SIVHSUN,SIVHCOS,SIVHPAT,SIVHSTA:
                                  SIVHCOR,SIVHCAT,SIVHTYP,SIVHVEN,SIVHTYPE:
                                  SIVHSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIVH1   UPDATE    SINVHAA1;SIVHDAT,SIVHFNO,SIVHORD,SIVHLIN:
                                  SIVHQTY,SIVHSUN,SIVHCOS,SIVHPAT,SIVHSTA:
                                  SIVHCOR,SIVHCAT,SIVHTYP,SIVHVEN,SIVHTYPE:
                                  SIVHSPA
          RETURN
.
WRSIVH1   RESET     KEY12
          WRITE     SINVHAA1,KEY12;SIVHDAT,SIVHFNO,SIVHORD,SIVHLIN:
                                  SIVHQTY,SIVHSUN,SIVHCOS,SIVHPAT,SIVHSTA:
                                  SIVHCOR,SIVHCAT,SIVHTYP,SIVHVEN,SIVHTYPE:
                                  SIVHSPA
          RETURN
.
DESIVH1   RESET     KEY12
          DELETE    SINVHAA1,KEY12
          RETURN
.
RSSIVH2   RESET     KEY33
          READ      SINVHAA2,KEY33;;
          RETURN
.
RASIVH2   RESET     KEY33
          MOVE      ZERO,OVRCD
          READ      SINVHAA2,KEY33;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIVH2   RESET     KEY33
          MOVE      ZERO,OVRCD
          READ      SINVHAA2,KEY33;SIVHDAT,SIVHFNO,SIVHORD,SIVHLIN:
                                  SIVHQTY,SIVHSUN,SIVHCOS,SIVHPAT,SIVHSTA:
                                  SIVHCOR,SIVHCAT,SIVHTYP,SIVHVEN,SIVHTYPE:
                                  SIVHSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIVH2   MOVE      ZERO,OVRCD
          READKS    SINVHAA2;SIVHDAT,SIVHFNO,SIVHORD,SIVHLIN:
                                  SIVHQTY,SIVHSUN,SIVHCOS,SIVHPAT,SIVHSTA:
                                  SIVHCOR,SIVHCAT,SIVHTYP,SIVHVEN,SIVHTYPE:
                                  SIVHSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIVH2   MOVE      ZERO,OVRCD
          READKP    SINVHAA2;SIVHDAT,SIVHFNO,SIVHORD,SIVHLIN:
                                  SIVHQTY,SIVHSUN,SIVHCOS,SIVHPAT,SIVHSTA:
                                  SIVHCOR,SIVHCAT,SIVHTYP,SIVHVEN,SIVHTYPE:
                                  SIVHSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIVH2   UPDATE    SINVHAA2;SIVHDAT,SIVHFNO,SIVHORD,SIVHLIN:
                                  SIVHQTY,SIVHSUN,SIVHCOS,SIVHPAT,SIVHSTA:
                                  SIVHCOR,SIVHCAT,SIVHTYP,SIVHVEN,SIVHTYPE:
                                  SIVHSPA
          RETURN
.
WRSIVH2   RESET     KEY33
          WRITE     SINVHAA2,KEY33;SIVHDAT,SIVHFNO,SIVHORD,SIVHLIN:
                                  SIVHQTY,SIVHSUN,SIVHCOS,SIVHPAT,SIVHSTA:
                                  SIVHCOR,SIVHCAT,SIVHTYP,SIVHVEN,SIVHTYPE:
                                  SIVHSPA
          RETURN
.
DESIVH2   RESET     KEY33
          DELETE    SINVHAA2,KEY33
          RETURN
.
RSSIVH3   RESET     KEY46
          READ      SINVHAA3,KEY46;;
          RETURN
.
RASIVH3   RESET     KEY46
          MOVE      ZERO,OVRCD
          READ      SINVHAA3,KEY46;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIVH3   RESET     KEY46
          MOVE      ZERO,OVRCD
          READ      SINVHAA3,KEY46;SIVHDAT,SIVHFNO,SIVHORD,SIVHLIN:
                                  SIVHQTY,SIVHSUN,SIVHCOS,SIVHPAT,SIVHSTA:
                                  SIVHCOR,SIVHCAT,SIVHTYP,SIVHVEN,SIVHTYPE:
                                  SIVHSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIVH3   MOVE      ZERO,OVRCD
          READKS    SINVHAA3;SIVHDAT,SIVHFNO,SIVHORD,SIVHLIN:
                                  SIVHQTY,SIVHSUN,SIVHCOS,SIVHPAT,SIVHSTA:
                                  SIVHCOR,SIVHCAT,SIVHTYP,SIVHVEN,SIVHTYPE:
                                  SIVHSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIVH3   MOVE      ZERO,OVRCD
          READKP    SINVHAA3;SIVHDAT,SIVHFNO,SIVHORD,SIVHLIN:
                                  SIVHQTY,SIVHSUN,SIVHCOS,SIVHPAT,SIVHSTA:
                                  SIVHCOR,SIVHCAT,SIVHTYP,SIVHVEN,SIVHTYPE:
                                  SIVHSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIVH3   UPDATE    SINVHAA3;SIVHDAT,SIVHFNO,SIVHORD,SIVHLIN:
                                  SIVHQTY,SIVHSUN,SIVHCOS,SIVHPAT,SIVHSTA:
                                  SIVHCOR,SIVHCAT,SIVHTYP,SIVHVEN,SIVHTYPE:
                                  SIVHSPA
          RETURN
.
WRSIVH3   RESET     KEY46
          WRITE     SINVHAA3,KEY46;SIVHDAT,SIVHFNO,SIVHORD,SIVHLIN:
                                  SIVHQTY,SIVHSUN,SIVHCOS,SIVHPAT,SIVHSTA:
                                  SIVHCOR,SIVHCAT,SIVHTYP,SIVHVEN,SIVHTYPE:
                                  SIVHSPA
          RETURN
.
DESIVH3   RESET     KEY46
          DELETE    SINVHAA3,KEY46
          RETURN
.
