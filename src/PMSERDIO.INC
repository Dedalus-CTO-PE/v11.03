.*****************************************************************************
.*        PMSERDIO.INC                                                       *
.*****************************************************************************
.
.         Index 1
.
RSPMERD1  RESET     KEY82
          READ      PMSERDA1,KEY82;;
          RETURN
.
RAPMERD1  RESET     KEY82
          MOVE      ZERO,OVRCD
          READ      PMSERDA1,KEY82;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMERD1  RESET     KEY82
          MOVE      ZERO,OVRCD
          READ      PMSERDA1,KEY82;PMEDFTID,PMEDRADV,PMEDPNUM,PMEDTRID:
                                  PMEDARID,PMEDBAMT,PMEDCCOD,PMEDLDAT,PMEDPARI:
                                  PMEDPTID,PMEDSTAT,PMEDLTYP,PMEDSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMERD1  MOVE      ZERO,OVRCD
          READKS    PMSERDA1;PMEDFTID,PMEDRADV,PMEDPNUM,PMEDTRID:
                                  PMEDARID,PMEDBAMT,PMEDCCOD,PMEDLDAT,PMEDPARI:
                                  PMEDPTID,PMEDSTAT,PMEDLTYP,PMEDSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMERD1  MOVE      ZERO,OVRCD
          READKP    PMSERDA1;PMEDFTID,PMEDRADV,PMEDPNUM,PMEDTRID:
                                  PMEDARID,PMEDBAMT,PMEDCCOD,PMEDLDAT,PMEDPARI:
                                  PMEDPTID,PMEDSTAT,PMEDLTYP,PMEDSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMERD1  UPDATE    PMSERDA1;PMEDFTID,PMEDRADV,PMEDPNUM,PMEDTRID:
                                  PMEDARID,PMEDBAMT,PMEDCCOD,PMEDLDAT,PMEDPARI:
                                  PMEDPTID,PMEDSTAT,PMEDLTYP,PMEDSPAR
          RETURN
.
WRPMERD1  RESET     KEY82
          WRITE     PMSERDA1,KEY82;PMEDFTID,PMEDRADV,PMEDPNUM,PMEDTRID:
                                  PMEDARID,PMEDBAMT,PMEDCCOD,PMEDLDAT,PMEDPARI:
                                  PMEDPTID,PMEDSTAT,PMEDLTYP,PMEDSPAR
          RETURN
.
DEPMERD1  RESET     KEY82
          DELETE    PMSERDA1,KEY82
          RETURN
.
.         Index 2
.
RSPMERD2  RESET     KEY82
          READ      PMSERDA2,KEY82;;
          RETURN
.
RAPMERD2  RESET     KEY82
          MOVE      ZERO,OVRCD
          READ      PMSERDA2,KEY82;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMERD2  RESET     KEY82
          MOVE      ZERO,OVRCD
          READ      PMSERDA2,KEY82;PMEDFTID,PMEDRADV,PMEDPNUM,PMEDTRID:
                                  PMEDARID,PMEDBAMT,PMEDCCOD,PMEDLDAT,PMEDPARI:
                                  PMEDPTID,PMEDSTAT,PMEDLTYP,PMEDSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMERD2  MOVE      ZERO,OVRCD
          READKS    PMSERDA2;PMEDFTID,PMEDRADV,PMEDPNUM,PMEDTRID:
                                  PMEDARID,PMEDBAMT,PMEDCCOD,PMEDLDAT,PMEDPARI:
                                  PMEDPTID,PMEDSTAT,PMEDLTYP,PMEDSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMERD2  MOVE      ZERO,OVRCD
          READKP    PMSERDA2;PMEDFTID,PMEDRADV,PMEDPNUM,PMEDTRID:
                                  PMEDARID,PMEDBAMT,PMEDCCOD,PMEDLDAT,PMEDPARI:
                                  PMEDPTID,PMEDSTAT,PMEDLTYP,PMEDSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMERD2  UPDATE    PMSERDA2;PMEDFTID,PMEDRADV,PMEDPNUM,PMEDTRID:
                                  PMEDARID,PMEDBAMT,PMEDCCOD,PMEDLDAT,PMEDPARI:
                                  PMEDPTID,PMEDSTAT,PMEDLTYP,PMEDSPAR
          RETURN
.
WRPMERD2  RESET     KEY82
          WRITE     PMSERDA2,KEY82;PMEDFTID,PMEDRADV,PMEDPNUM,PMEDTRID:
                                  PMEDARID,PMEDBAMT,PMEDCCOD,PMEDLDAT,PMEDPARI:
                                  PMEDPTID,PMEDSTAT,PMEDLTYP,PMEDSPAR
          RETURN
.
DEPMERD2  RESET     KEY82
          DELETE    PMSERDA2,KEY82
          RETURN
.
