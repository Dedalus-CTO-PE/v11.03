.*****************************************************************************
.*        OUTRQUIO.INC                                                       *
.*                                                                           *
.*****************************************************************************
.
RSOTRQU1  RESET     KEY20
          READ      OUTRQUA1,KEY20;;
          RETURN
.
RAOTRQU1  RESET     KEY20
          MOVE      ZERO,OVRCD
          READ      OUTRQUA1,KEY20;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTRQU1  RESET     KEY20
          MOVE      ZERO,OVRCD
          READ      OUTRQUA1,KEY20;DOTRQMES,OTRLOUTN,OTRLURNO,OTRLDATE:
                                   OTRLRDOC,OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                                   OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4,OTRLBSIT:
                                   OTRLBCLI,OTRLBDTE,OTRLBSTR,OTRLBSLT,OTRLRFGP:
                                   OTRLGPPC,OTRLRQST,OTRLCDTE,OTRLREAS,OTRLSPFC:
                                   OTRLCAD1,OTRLCAD2,OTRLCAD3,OTRLCAD4,OTRLCPC:
                                   OTRLECRN,OTRLGPFH,OTRLGPPT,OTRLOPER,OTRLCTYP:
                                   OTRLSITE,OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI:
                                   OTRLPURC,OTRLTREF,OTRLRANK,OTRLUDAT,OTRLUTIM:
                                   OTRLUUID,OTRLCDAT,OTRLCTIM,OTRLCUID,OTRLCLAM:
                                   OTRQSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTRQMES,OTRQMESG
          RETURN
.
RKOTRQU1  MOVE      ZERO,OVRCD
          READKS    OUTRQUA1;DOTRQMES,OTRLOUTN,OTRLURNO,OTRLDATE:
                             OTRLRDOC,OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                             OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4,OTRLBSIT:
                             OTRLBCLI,OTRLBDTE,OTRLBSTR,OTRLBSLT,OTRLRFGP:
                             OTRLGPPC,OTRLRQST,OTRLCDTE,OTRLREAS,OTRLSPFC:
                             OTRLCAD1,OTRLCAD2,OTRLCAD3,OTRLCAD4,OTRLCPC:
                             OTRLECRN,OTRLGPFH,OTRLGPPT,OTRLOPER,OTRLCTYP:
                             OTRLSITE,OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI:
                             OTRLPURC,OTRLTREF,OTRLRANK,OTRLUDAT,OTRLUTIM:
                             OTRLUUID,OTRLCDAT,OTRLCTIM,OTRLCUID,OTRLCLAM:
                             OTRQSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTRQMES,OTRQMESG
          RETURN
.
RPOTRQU1  MOVE      ZERO,OVRCD
          READKP    OUTRQUA1;DOTRQMES,OTRLOUTN,OTRLURNO,OTRLDATE:
                             OTRLRDOC,OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                             OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4,OTRLBSIT:
                             OTRLBCLI,OTRLBDTE,OTRLBSTR,OTRLBSLT,OTRLRFGP:
                             OTRLGPPC,OTRLRQST,OTRLCDTE,OTRLREAS,OTRLSPFC:
                             OTRLCAD1,OTRLCAD2,OTRLCAD3,OTRLCAD4,OTRLCPC:
                             OTRLECRN,OTRLGPFH,OTRLGPPT,OTRLOPER,OTRLCTYP:
                             OTRLSITE,OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI:
                             OTRLPURC,OTRLTREF,OTRLRANK,OTRLUDAT,OTRLUTIM:
                             OTRLUUID,OTRLCDAT,OTRLCTIM,OTRLCUID,OTRLCLAM:
                             OTRQSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTRQMES,OTRQMESG
          RETURN
.
UPOTRQU1  MOVE      OTRQMESG,DOTRQMES
          UPDATE    OUTRQUA1;DOTRQMES,OTRLOUTN,OTRLURNO,OTRLDATE:
                             OTRLRDOC,OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                             OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4,OTRLBSIT:
                             OTRLBCLI,OTRLBDTE,OTRLBSTR,OTRLBSLT,OTRLRFGP:
                             OTRLGPPC,OTRLRQST,OTRLCDTE,OTRLREAS,OTRLSPFC:
                             OTRLCAD1,OTRLCAD2,OTRLCAD3,OTRLCAD4,OTRLCPC:
                             OTRLECRN,OTRLGPFH,OTRLGPPT,OTRLOPER,OTRLCTYP:
                             OTRLSITE,OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI:
                             OTRLPURC,OTRLTREF,OTRLRANK,OTRLUDAT,OTRLUTIM:
                             OTRLUUID,OTRLCDAT,OTRLCTIM,OTRLCUID,OTRLCLAM:
                             OTRQSPAR
          RETURN
.
WROTRQU1  RESET     KEY20
          MOVE      OTRQMESG,DOTRQMES
          WRITE     OUTRQUA1,KEY20;DOTRQMES,OTRLOUTN,OTRLURNO,OTRLDATE:
                                   OTRLRDOC,OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                                   OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4,OTRLBSIT:
                                   OTRLBCLI,OTRLBDTE,OTRLBSTR,OTRLBSLT,OTRLRFGP:
                                   OTRLGPPC,OTRLRQST,OTRLCDTE,OTRLREAS,OTRLSPFC:
                                   OTRLCAD1,OTRLCAD2,OTRLCAD3,OTRLCAD4,OTRLCPC:
                                   OTRLECRN,OTRLGPFH,OTRLGPPT,OTRLOPER,OTRLCTYP:
                                   OTRLSITE,OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI:
                                   OTRLPURC,OTRLTREF,OTRLRANK,OTRLUDAT,OTRLUTIM:
                                   OTRLUUID,OTRLCDAT,OTRLCTIM,OTRLCUID,OTRLCLAM:
                                   OTRQSPAR
          RETURN
.
DEOTRQU1  RESET     KEY20
          DELETE    OUTRQUA1,KEY20
          RETURN
+
