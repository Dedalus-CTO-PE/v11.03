.
. OUTRF1IO
. --------
. Filename     : outrf1af.dat
.
. Mods: Made RKOTRFL3 use READKS and not READ
.       06/01/2004  Sylvek Litewka  CAR 46257
.                   Modified write routines to load IDDD into OTRLSITE
.                   only if OTRLSITE contains spaces.
.       10/12/2003  Ebon Clements CAR 45549
.                   Added update/created date, time and user id
.       28/05/2002  Mike Laming  SRF 1599
.                   Remove IDDD code from Update routines UPOTRFL1 - 6
.       09/01/1998  Steve Armstrong
.                   Add load of SOTRLOTN
.       13/06/1996  Steve Armstrong
.                   Mods to load IDDD into OTLRSITE for old file as well.
.
RSOTRFL1  RESET     KEY8
          READ      OUTRF1A1,KEY8;;
          RETURN
.
RAOTRFL1  RESET     KEY8
          MOVE      ZERO,OVRCD
          READ      OUTRF1A1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTRFL1  RESET     KEY8
          MOVE      ZERO,OVRCD
          READ      OUTRF1A1,KEY8;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                                  OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                                  OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                                  OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                                  OTRLBSLT:
                                  OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                                  OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                                  OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                                  OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                                  OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                                  OTRLTREF,OTRLRANK:
                                  OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                                  OTRLCTIM,OTRLCUID,OTRLCLAM:
                                  OTRLTRGS,OTRLSPRE
          GOTO      OVERCOND IF OVER
          MOVE      OTRLOUTN,SOTRLOTN
          RETURN
.
RKOTRFL1  MOVE      ZERO,OVRCD
          READKS    OUTRF1A1;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                             OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                             OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                             OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                             OTRLBSLT:
                             OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                             OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                             OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                             OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                             OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                             OTRLTREF,OTRLRANK:
                             OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                             OTRLCTIM,OTRLCUID,OTRLCLAM:
                             OTRLTRGS,OTRLSPRE
          GOTO      OVERCOND IF OVER
          MOVE      OTRLOUTN,SOTRLOTN
          RETURN
.
RPOTRFL1  MOVE      ZERO,OVRCD
          READKP    OUTRF1A1;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                             OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                             OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                             OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                             OTRLBSLT:
                             OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                             OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                             OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                             OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                             OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                             OTRLTREF,OTRLRANK:
                             OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                             OTRLCTIM,OTRLCUID,OTRLCLAM:
                             OTRLTRGS,OTRLSPRE
          GOTO      OVERCOND IF OVER
          MOVE      OTRLOUTN,SOTRLOTN
          RETURN
.
...UPOTRFL1  MOVE      IDDD,OTRLSITE                                   D-15999
UPOTRFL1  MOVE      ZERO,OVRCD                                        *I-15999
          UPDATE    OUTRF1A1;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                             OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                             OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                             OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                             OTRLBSLT:
                             OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                             OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                             OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                             OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                             OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                             OTRLTREF,OTRLRANK:
                             OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                             OTRLCTIM,OTRLCUID,OTRLCLAM:
                             OTRLTRGS,OTRLSPRE
          RETURN
.
WROTRFL1  MATCH     SP70,OTRLSITE
          IF        @EQUAL
            MOVE      IDDD,OTRLSITE
          ENDIF
          RESET     KEY8
          MOVE      PASSCODE,OTRLOPER
          WRITE     OUTRF1A1,KEY8;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                                  OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                                  OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                                  OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                                  OTRLBSLT:
                                  OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                                  OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                                  OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                                  OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                                  OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                                  OTRLTREF,OTRLRANK:
                                  OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                                  OTRLCTIM,OTRLCUID,OTRLCLAM:
                                  OTRLTRGS,OTRLSPRE
          RETURN
.
DEOTRFL1  RESET     KEY8
          DELETE    OUTRF1A1,KEY8
          RETURN
.
RSOTRFL2  RESET     KEY24
          READ      OUTRF1A2,KEY24;;
          RETURN
.
RAOTRFL2  RESET     KEY24
          MOVE      ZERO,OVRCD
          READ      OUTRF1A2,KEY24;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTRFL2  RESET     KEY24
          MOVE      ZERO,OVRCD
          READ      OUTRF1A2,KEY24;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                                  OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                                  OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                                  OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                                  OTRLBSLT:
                                  OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                                  OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                                  OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                                  OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                                  OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                                  OTRLTREF,OTRLRANK:
                                  OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                                  OTRLCTIM,OTRLCUID,OTRLCLAM:
                                  OTRLTRGS,OTRLSPRE
          GOTO      OVERCOND IF OVER
          MOVE      OTRLOUTN,SOTRLOTN
          RETURN
.
RKOTRFL2  MOVE      ZERO,OVRCD
          READKS    OUTRF1A2;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                             OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                             OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                             OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                             OTRLBSLT:
                             OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                             OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                             OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                             OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                             OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                             OTRLTREF,OTRLRANK:
                             OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                             OTRLCTIM,OTRLCUID,OTRLCLAM:
                             OTRLTRGS,OTRLSPRE
          GOTO      OVERCOND IF OVER
          MOVE      OTRLOUTN,SOTRLOTN
          RETURN
.
RPOTRFL2  MOVE      ZERO,OVRCD
          READKP    OUTRF1A2;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                             OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                             OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                             OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                             OTRLBSLT:
                             OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                             OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                             OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                             OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                             OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                             OTRLTREF,OTRLRANK:
                             OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                             OTRLCTIM,OTRLCUID,OTRLCLAM:
                             OTRLTRGS,OTRLSPRE
          GOTO      OVERCOND IF OVER
          MOVE      OTRLOUTN,SOTRLOTN
          RETURN
.
...UPOTRFL2  MOVE      IDDD,OTRLSITE                                   D-15999
UPOTRFL2  MOVE      ZERO,OVRCD                                        *I-15999
          UPDATE    OUTRF1A2;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                             OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                             OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                             OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                             OTRLBSLT:
                             OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                             OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                             OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                             OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                             OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                             OTRLTREF,OTRLRANK:
                             OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                             OTRLCTIM,OTRLCUID,OTRLCLAM:
                             OTRLTRGS,OTRLSPRE 
          RETURN
.
WROTRFL2  MATCH     SP70,OTRLSITE
          IF        @EQUAL
            MOVE      IDDD,OTRLSITE
          ENDIF
          RESET     KEY24
          MOVE      PASSCODE,OTRLOPER
          WRITE     OUTRF1A2,KEY24;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                                  OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                                  OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                                  OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                                  OTRLBSLT:
                                  OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                                  OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                                  OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                                  OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                                  OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                                  OTRLTREF,OTRLRANK:
                                  OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                                  OTRLCTIM,OTRLCUID,OTRLCLAM:
                                  OTRLTRGS,OTRLSPRE
          RETURN
.
DEOTRFL2  RESET     KEY24
          DELETE    OUTRF1A2,KEY24
          RETURN
.
RSOTRFL3  RESET     KEY19
          READ      OUTRF1A3,KEY19;;
          RETURN
.
RAOTRFL3  RESET     KEY19
          MOVE      ZERO,OVRCD
          READ      OUTRF1A3,KEY19;ANS 
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTRFL3  RESET     KEY19
          MOVE      ZERO,OVRCD
          READ      OUTRF1A3,KEY19;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                                  OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                                  OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                                  OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                                  OTRLBSLT:  
                                  OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                                  OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                                  OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                                  OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                                  OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                                  OTRLTREF,OTRLRANK:
                                  OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                                  OTRLCTIM,OTRLCUID,OTRLCLAM:
                                  OTRLTRGS,OTRLSPRE
          GOTO      OVERCOND IF OVER
          MOVE      OTRLOUTN,SOTRLOTN
          RETURN
.
RKOTRFL3  MOVE      ZERO,OVRCD
          READKS    OUTRF1A3;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                                   OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                                   OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                                   OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                                   OTRLBSLT:  
                                   OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                                   OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                                   OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                                   OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                                   OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                                   OTRLTREF,OTRLRANK:
                                   OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                                   OTRLCTIM,OTRLCUID,OTRLCLAM:
                                   OTRLTRGS,OTRLSPRE
          GOTO      OVERCOND IF OVER
          MOVE      OTRLOUTN,SOTRLOTN
          RETURN
.
RPOTRFL3  MOVE      ZERO,OVRCD
          READKP    OUTRF1A3;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                             OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                             OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                             OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                             OTRLBSLT:  
                             OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                             OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                             OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                             OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                             OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                             OTRLTREF,OTRLRANK:
                             OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                             OTRLCTIM,OTRLCUID,OTRLCLAM:
                             OTRLTRGS,OTRLSPRE
          GOTO      OVERCOND IF OVER
          MOVE      OTRLOUTN,SOTRLOTN
          RETURN
.
...UPOTRFL3  MOVE      IDDD,OTRLSITE                                   D-15999
UPOTRFL3  MOVE      ZERO,OVRCD                                        *I-15999
          UPDATE    OUTRF1A3;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                             OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                             OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                             OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                             OTRLBSLT:  
                             OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                             OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                             OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                             OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                             OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                             OTRLTREF,OTRLRANK:
                             OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                             OTRLCTIM,OTRLCUID,OTRLCLAM:
                             OTRLTRGS,OTRLSPRE
          RETURN
.
WROTRFL3  MATCH     SP70,OTRLSITE
          IF        @EQUAL
            MOVE      IDDD,OTRLSITE
          ENDIF
          RESET     KEY19
          MOVE      PASSCODE,OTRLOPER
          WRITE     OUTRF1A3,KEY19;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                                  OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                                  OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                                  OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                                  OTRLBSLT:  
                                  OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                                  OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                                  OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                                  OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                                  OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                                  OTRLTREF,OTRLRANK:
                                  OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                                  OTRLCTIM,OTRLCUID,OTRLCLAM:
                                  OTRLTRGS,OTRLSPRE
          RETURN
.
DEOTRFL3  RESET     KEY19
          DELETE    OUTRF1A3,KEY19
          RETURN
.
RSOTRFL4  RESET     KEY22
          READ      OUTRF1A4,KEY22;;
          RETURN
.
RAOTRFL4  RESET     KEY22
          MOVE      ZERO,OVRCD
          READ      OUTRF1A4,KEY22;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTRFL4  RESET     KEY22
          MOVE      ZERO,OVRCD
          READ      OUTRF1A4,KEY22;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                                  OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                                  OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                                  OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                                  OTRLBSLT:  
                                  OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                                  OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                                  OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                                  OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                                  OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                                  OTRLTREF,OTRLRANK:
                                  OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                                  OTRLCTIM,OTRLCUID,OTRLCLAM:
                                  OTRLTRGS,OTRLSPRE
          GOTO      OVERCOND IF OVER
          MOVE      OTRLOUTN,SOTRLOTN
          RETURN
.
RKOTRFL4  MOVE      ZERO,OVRCD
          READKS    OUTRF1A4;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                             OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                             OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                             OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                             OTRLBSLT:  
                             OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                             OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                             OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                             OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                             OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                             OTRLTREF,OTRLRANK:
                             OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                             OTRLCTIM,OTRLCUID,OTRLCLAM:
                             OTRLTRGS,OTRLSPRE
          GOTO      OVERCOND IF OVER
          MOVE      OTRLOUTN,SOTRLOTN
          RETURN
.
RPOTRFL4  MOVE      ZERO,OVRCD
          READKP    OUTRF1A4;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                             OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                             OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                             OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                             OTRLBSLT:  
                             OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                             OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                             OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                             OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                             OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                             OTRLTREF,OTRLRANK:
                             OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                             OTRLCTIM,OTRLCUID,OTRLCLAM:
                             OTRLTRGS,OTRLSPRE
          GOTO      OVERCOND IF OVER
          MOVE      OTRLOUTN,SOTRLOTN
          RETURN
.
...UPOTRFL4  MOVE      IDDD,OTRLSITE                                   D-15999
UPOTRFL4  MOVE      ZERO,OVRCD                                        *I-15999
          UPDATE    OUTRF1A4;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                             OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                             OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                             OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                             OTRLBSLT:  
                             OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                             OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                             OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                             OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                             OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                             OTRLTREF,OTRLRANK:
                             OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                             OTRLCTIM,OTRLCUID,OTRLCLAM:
                             OTRLTRGS,OTRLSPRE
          RETURN
.
WROTRFL4  MATCH     SP70,OTRLSITE
          IF        @EQUAL
            MOVE      IDDD,OTRLSITE
          ENDIF
          RESET     KEY22
          MOVE      PASSCODE,OTRLOPER
          WRITE     OUTRF1A4,KEY22;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                                   OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                                   OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                                   OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                                   OTRLBSLT:  
                                   OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                                   OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                                   OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN:
                                   OTRLGPFH,OTRLGPPT,OTRLOPER,OTRLCTYP:
                                   OTRLSITE:
                                   OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                                   OTRLTREF,OTRLRANK:
                                   OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                                   OTRLCTIM,OTRLCUID,OTRLCLAM:
                                   OTRLTRGS,OTRLSPRE
          RETURN
.
DEOTRFL4  RESET     KEY22
          DELETE    OUTRF1A4,KEY22
          RETURN
.
RSOTRFL5  RESET     KEY22
          READ      OUTRF1A5,KEY22;;
          RETURN
.
RAOTRFL5  RESET     KEY22
          MOVE      ZERO,OVRCD
          READ      OUTRF1A5,KEY22;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTRFL5  RESET     KEY22
          MOVE      ZERO,OVRCD
          READ      OUTRF1A5,KEY22;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                                  OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                                  OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                                  OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                                  OTRLBSLT:  
                                  OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                                  OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                                  OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                                  OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                                  OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                                  OTRLTREF,OTRLRANK:
                                  OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                                  OTRLCTIM,OTRLCUID,OTRLCLAM:
                                  OTRLTRGS,OTRLSPRE
          GOTO      OVERCOND IF OVER
          MOVE      OTRLOUTN,SOTRLOTN
          RETURN
.
RKOTRFL5  MOVE      ZERO,OVRCD
          READKS    OUTRF1A5;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                             OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                             OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                             OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                             OTRLBSLT:  
                             OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                             OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                             OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                             OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                             OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                             OTRLTREF,OTRLRANK:
                             OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                             OTRLCTIM,OTRLCUID,OTRLCLAM:
                             OTRLTRGS,OTRLSPRE
          GOTO      OVERCOND IF OVER
          MOVE      OTRLOUTN,SOTRLOTN
          RETURN
.
RPOTRFL5  MOVE      ZERO,OVRCD
          READKP    OUTRF1A5;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                             OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                             OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                             OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                             OTRLBSLT:  
                             OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                             OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                             OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                             OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                             OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                             OTRLTREF,OTRLRANK:
                             OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                             OTRLCTIM,OTRLCUID,OTRLCLAM:
                             OTRLTRGS,OTRLSPRE
          GOTO      OVERCOND IF OVER
          MOVE      OTRLOUTN,SOTRLOTN
          RETURN
.
...UPOTRFL5  MOVE      IDDD,OTRLSITE                                   D-15999
UPOTRFL5  MOVE      ZERO,OVRCD                                        *I-15999
          UPDATE    OUTRF1A5;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                             OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                             OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                             OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                             OTRLBSLT:  
                             OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                             OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                             OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                             OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                             OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                             OTRLTREF,OTRLRANK:
                             OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                             OTRLCTIM,OTRLCUID,OTRLCLAM:
                             OTRLTRGS,OTRLSPRE
          RETURN
.
WROTRFL5  MATCH     SP70,OTRLSITE
          IF        @EQUAL
            MOVE      IDDD,OTRLSITE
          ENDIF
          RESET     KEY22
          MOVE      PASSCODE,OTRLOPER
          WRITE     OUTRF1A5,KEY22;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                                  OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                                  OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                                  OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                                  OTRLBSLT:  
                                  OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                                  OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                                  OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                                  OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                                  OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                                  OTRLTREF,OTRLRANK:
                                  OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                                  OTRLCTIM,OTRLCUID,OTRLCLAM:
                                  OTRLTRGS,OTRLSPRE
          RETURN
.
DEOTRFL5  RESET     KEY22
          DELETE    OUTRF1A5,KEY22
          RETURN
.
RSOTRFL6  RESET     KEY16
          READ      OUTRF1A6,KEY16;;
          RETURN
.
RAOTRFL6  RESET     KEY16
          MOVE      ZERO,OVRCD
          READ      OUTRF1A6,KEY16;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTRFL6  RESET     KEY16
          MOVE      ZERO,OVRCD
          READ      OUTRF1A6,KEY16;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                                  OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                                  OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                                  OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                                  OTRLBSLT:
                                  OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                                  OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                                  OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                                  OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                                  OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                                  OTRLTREF,OTRLRANK:
                                  OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                                  OTRLCTIM,OTRLCUID,OTRLCLAM:
                                  OTRLTRGS,OTRLSPRE
          GOTO      OVERCOND IF OVER
          MOVE      OTRLOUTN,SOTRLOTN
          RETURN
.
RKOTRFL6  MOVE      ZERO,OVRCD
          READKS    OUTRF1A6;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                             OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                             OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                             OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                             OTRLBSLT:
                             OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                             OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                             OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                             OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                             OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                             OTRLTREF,OTRLRANK:
                             OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                             OTRLCTIM,OTRLCUID,OTRLCLAM:
                             OTRLTRGS,OTRLSPRE
          GOTO      OVERCOND IF OVER
          MOVE      OTRLOUTN,SOTRLOTN
          RETURN
.
RPOTRFL6  MOVE      ZERO,OVRCD
          READKP    OUTRF1A6;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                             OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                             OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                             OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                             OTRLBSLT:
                             OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                             OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                             OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                             OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                             OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                             OTRLTREF,OTRLRANK:
                             OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                             OTRLCTIM,OTRLCUID,OTRLCLAM:
                             OTRLTRGS,OTRLSPRE
          GOTO      OVERCOND IF OVER
          MOVE      OTRLOUTN,SOTRLOTN
          RETURN
.
...UPOTRFL6  MOVE      IDDD,OTRLSITE                                   D-15999
UPOTRFL6  MOVE      ZERO,OVRCD                                        *I-15999
          UPDATE    OUTRF1A6;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                             OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                             OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                             OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                             OTRLBSLT:
                             OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                             OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                             OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                             OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                             OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                             OTRLTREF,OTRLRANK:
                             OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                             OTRLCTIM,OTRLCUID,OTRLCLAM:
                             OTRLTRGS,OTRLSPRE
          RETURN
.
WROTRFL6  MATCH     SP70,OTRLSITE
          IF        @EQUAL
            MOVE      IDDD,OTRLSITE
          ENDIF
          RESET     KEY16
          MOVE      PASSCODE,OTRLOPER
          WRITE     OUTRF1A6,KEY16;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                                  OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                                  OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                                  OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                                  OTRLBSLT:
                                  OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                                  OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                                  OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                                  OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                                  OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                                  OTRLTREF,OTRLRANK:
                                  OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                                  OTRLCTIM,OTRLCUID,OTRLCLAM:
                                  OTRLTRGS,OTRLSPRE
          RETURN
.
DEOTRFL6  RESET     KEY16
          DELETE    OUTRF1A6,KEY16
          RETURN
.
RSOTRFL7  RESET     KEY22
          READ      OUTRF1A7,KEY22;;
          RETURN
.
RAOTRFL7  RESET     KEY22
          MOVE      ZERO,OVRCD
          READ      OUTRF1A7,KEY22;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTRFL7  RESET     KEY22
          MOVE      ZERO,OVRCD
          READ      OUTRF1A7,KEY22;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                                  OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                                  OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                                  OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                                  OTRLBSLT:  
                                  OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                                  OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                                  OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                                  OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                                  OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                                  OTRLTREF,OTRLRANK:
                                  OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                                  OTRLCTIM,OTRLCUID,OTRLCLAM:
                                  OTRLTRGS,OTRLSPRE
          GOTO      OVERCOND IF OVER
          MOVE      OTRLOUTN,SOTRLOTN
          RETURN
.
RKOTRFL7  MOVE      ZERO,OVRCD
          READKS    OUTRF1A7;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                             OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                             OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                             OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                             OTRLBSLT:  
                             OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                             OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                             OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                             OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                             OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                             OTRLTREF,OTRLRANK:
                             OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                             OTRLCTIM,OTRLCUID,OTRLCLAM:
                             OTRLTRGS,OTRLSPRE
          GOTO      OVERCOND IF OVER
          MOVE      OTRLOUTN,SOTRLOTN
          RETURN
.
RPOTRFL7  MOVE      ZERO,OVRCD
          READKP    OUTRF1A7;OTRLOUTN,OTRLURNO,OTRLDATE,OTRLRDOC:
                             OTRLCONS,OTRLDEPT,OTRLPRIO,OTRLDIAG:
                             OTRLUSD1,OTRLUSD2,OTRLUSD3,OTRLUSD4:
                             OTRLBSIT,OTRLBCLI,OTRLBDTE,OTRLBSTR:
                             OTRLBSLT:  
                             OTRLRFGP,OTRLGPPC,OTRLRQST,OTRLCDTE:
                             OTRLREAS,OTRLSPFC,OTRLCAD1,OTRLCAD2:
                             OTRLCAD3,OTRLCAD4,OTRLCPC,OTRLECRN,OTRLGPFH:
                             OTRLGPPT,OTRLOPER,OTRLCTYP,OTRLSITE:
                             OTRLSRCE,OTRLRHCP,OTRLDREC,OTRLDPRI,OTRLPURC:
                             OTRLTREF,OTRLRANK:
                             OTRLUDAT,OTRLUTIM,OTRLUUID,OTRLCDAT:
                             OTRLCTIM,OTRLCUID,OTRLCLAM:
                             OTRLTRGS,OTRLSPRE
          GOTO      OVERCOND IF OVER
          MOVE      OTRLOUTN,SOTRLOTN
          RETURN
+
.

