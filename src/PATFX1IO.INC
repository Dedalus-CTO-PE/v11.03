.
.        PATFX1IO.INC
.
RSPTFX11  RESET     KEY6
          READ      PATFX1A1,KEY6;;
          RETURN
.
RAPTFX11  RESET     KEY6
          MOVE      ZERO,OVRCD
          READ      PATFX1A1,KEY6;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTFX11  RESET     KEY6
          MOVE      ZERO,OVRCD
          READ      PATFX1A1,KEY6;PTFXHFND,PTFXEXTR,PTFXTFLG,PTFXADDR:
                                  PTFXSUBJ,PTFXADD1,PTFXADD2,PTFXADD3:
                                  PTFXADD4,PTFXPOST,PTFXZINV,PTFXSCEM:
                                  PTFXSCPN,PTFXSCPP,PTFXECLP,PTFXCEFR:
                                  PTFXRHCD,PTFXRHFT,PTFXHDAT,PTFXMFEE:
                                  PTFXSMOR,PTFXGSTA,PTFXGSTC,PTFXOHDT:
                                  PTFXOHTM,PTFXOHUI,PTFXSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTFX11  MOVE      ZERO,OVRCD
          READKS    PATFX1A1;PTFXHFND,PTFXEXTR,PTFXTFLG,PTFXADDR:
                                  PTFXSUBJ,PTFXADD1,PTFXADD2,PTFXADD3:
                                  PTFXADD4,PTFXPOST,PTFXZINV,PTFXSCEM:
                                  PTFXSCPN,PTFXSCPP,PTFXECLP,PTFXCEFR:
                                  PTFXRHCD,PTFXRHFT,PTFXHDAT,PTFXMFEE:
                                  PTFXSMOR,PTFXGSTA,PTFXGSTC,PTFXOHDT:
                                  PTFXOHTM,PTFXOHUI,PTFXSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTFX11  MOVE      ZERO,OVRCD
          READKP    PATFX1A1;PTFXHFND,PTFXEXTR,PTFXTFLG,PTFXADDR:
                                  PTFXSUBJ,PTFXADD1,PTFXADD2,PTFXADD3:
                                  PTFXADD4,PTFXPOST,PTFXZINV,PTFXSCEM:
                                  PTFXSCPN,PTFXSCPP,PTFXECLP,PTFXCEFR:
                                  PTFXRHCD,PTFXRHFT,PTFXHDAT,PTFXMFEE:
                                  PTFXSMOR,PTFXGSTA,PTFXGSTC,PTFXOHDT:
                                  PTFXOHTM,PTFXOHUI,PTFXSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTFX11  UPDATE    PATFX1A1;PTFXHFND,PTFXEXTR,PTFXTFLG,PTFXADDR:
                                  PTFXSUBJ,PTFXADD1,PTFXADD2,PTFXADD3:
                                  PTFXADD4,PTFXPOST,PTFXZINV,PTFXSCEM:
                                  PTFXSCPN,PTFXSCPP,PTFXECLP,PTFXCEFR:
                                  PTFXRHCD,PTFXRHFT,PTFXHDAT,PTFXMFEE:
                                  PTFXSMOR,PTFXGSTA,PTFXGSTC,PTFXOHDT:
                                  PTFXOHTM,PTFXOHUI,PTFXSPAR
          RETURN
.
WRPTFX11  RESET     KEY6
          WRITE     PATFX1A1,KEY6;PTFXHFND,PTFXEXTR,PTFXTFLG,PTFXADDR:
                                  PTFXSUBJ,PTFXADD1,PTFXADD2,PTFXADD3:
                                  PTFXADD4,PTFXPOST,PTFXZINV,PTFXSCEM:
                                  PTFXSCPN,PTFXSCPP,PTFXECLP,PTFXCEFR:
                                  PTFXRHCD,PTFXRHFT,PTFXHDAT,PTFXMFEE:
                                  PTFXSMOR,PTFXGSTA,PTFXGSTC,PTFXOHDT:
                                  PTFXOHTM,PTFXOHUI,PTFXSPAR
          RETURN
.
DEPTFX11  RESET     KEY6
          DELETE    PATFX1A1,KEY6
          RETURN
+
