.
.         positional read
.
RSPRSP1   RESET     KEY34
          READ      PRISPTA1,KEY34;;
          RETURN
.
.         read to see if record exists
.
RAPRSP1   MOVE      ZERO,OVRCD
          RESET     KEY34
          READ      PRISPTA1,KEY34;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDPRSP1   MOVE      ZERO,OVRCD
          RESET     KEY34
          READ      PRISPTA1,KEY34;DPRSPFLG,PRSPITM1,PRSPSUB1,PRSPEDAT,PRSPITM2:
                                  PRSPSUB2,PRSPITMN,PRSPSUBN,PRSPSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPRSPFLG,PRSPFLAG
          RETURN
.
.         next read
.
RKPRSP1   MOVE      ZERO,OVRCD
          READKS    PRISPTA1;DPRSPFLG,PRSPITM1,PRSPSUB1,PRSPEDAT,PRSPITM2:
                                  PRSPSUB2,PRSPITMN,PRSPSUBN,PRSPSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPRSPFLG,PRSPFLAG
          RETURN
.
.         previous read
.
RPPRSP1   MOVE      ZERO,OVRCD
          READKP    PRISPTA1;DPRSPFLG,PRSPITM1,PRSPSUB1,PRSPEDAT,PRSPITM2:
                                  PRSPSUB2,PRSPITMN,PRSPSUBN,PRSPSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPRSPFLG,PRSPFLAG
          RETURN
.
.         update
.
UPPRSP1   MOVE      PRSPFLAG,DPRSPFLG
          UPDATE    PRISPTA1;DPRSPFLG,PRSPITM1,PRSPSUB1,PRSPEDAT,PRSPITM2:
                                  PRSPSUB2,PRSPITMN,PRSPSUBN,PRSPSPAR
          RETURN
.
.         write
.
WRPRSP1   RESET     KEY34
          MOVE      PRSPFLAG,DPRSPFLG
          WRITE     PRISPTA1,KEY34;DPRSPFLG,PRSPITM1,PRSPSUB1,PRSPEDAT,PRSPITM2:
                                  PRSPSUB2,PRSPITMN,PRSPSUBN,PRSPSPAR
          RETURN
.
.         delete a record
.
DEPRSP1   RESET     KEY34
          DELETE    PRISPTA1,KEY34
          RETURN
.
.         Audit I/O routines
.
ASPRSP    RESET     KEY19
          READ      PRIAUDSP,KEY19;;
          RETURN
.
AKPRSP    MOVE      ZERO,OVRCD
          READKS    PRIAUDSP;PRSPAUDD,PRSPAUDT,PRSPAUDP,PRSPAUDR:
                                  PRSPAUDS,PRSPAUDO:
                                  DPRSPFLG,PRSPITM1,PRSPSUB1,PRSPEDAT,PRSPITM2:
                                  PRSPSUB2,PRSPITMN,PRSPSUBN,PRSPSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPRSPFLG,PRSPFLAG
          RETURN
.
AUPRSP    MOVE      PRSPFLAG,DPRSPFLG
          UPDATE    PRIAUDSP;PRSPAUDD,PRSPAUDT,PRSPAUDP,PRSPAUDR:
                                  PRSPAUDS,PRSPAUDO:
                                  DPRSPFLG,PRSPITM1,PRSPSUB1,PRSPEDAT,PRSPITM2:
                                  PRSPSUB2,PRSPITMN,PRSPSUBN,PRSPSPAR
          RETURN
.
AWPRSP    RESET     KEY19
          MOVE      PRSPFLAG,DPRSPFLG
          WRITE     PRIAUDSP,KEY19;KEY19:
                                  PRSPAUDS,PRSPAUDO:
                                  DPRSPFLG,PRSPITM1,PRSPSUB1,PRSPEDAT,PRSPITM2:
                                  PRSPSUB2,PRSPITMN,PRSPSUBN,PRSPSPAR
          RETURN
.
ADPRSP    RESET     KEY19
          DELETE    PRIAUDSP,KEY19
          RETURN
.
