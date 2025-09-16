.
. OUTXSCIO.INC
. ------------
. Filenames       : outxscaf, outaudxs (audits)
. Description     : Outpatients 'Extra Screen Details File'
. Variables       : OVRCD   FORM   1        0 = NOT OVER
.                                           1 = OVER
.                   KEY8    DIM    8        KEY FOR OUTXSCA1
.
. -----------------------------------------
. ------- I/O routines for OUTXSCA1 -------
. -----------------------------------------
.
RSOTXSC1  RESET     KEY8
          READ      OUTXSCA1,KEY8;;
          RETURN
.
RAOTXSC1  RESET     KEY8
          MOVE      ZERO,OVRCD
          READ      OUTXSCA1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTXSC1  RESET     KEY8
          MOVE      ZERO,OVRCD
          READ      OUTXSCA1,KEY8;DOTXSOUT,OTXSDTE1,OTXSDTE2,OTXSDTE3:
                                  OTXSDTE4,OTXSDTE5,OTXSDTE6,OTXSCO01,OTXSCO02:
                                  OTXSCO03,OTXSCO04,OTXSCO05,OTXSCO06,OTXSCO07:
                                  OTXSCO08,OTXSCO09,OTXSCO10,OTXSCO11,OTXSCO12:
                                  OTXSCO13,OTXSCO14,OTXSCO15,OTXSCO16,OTXSCO17:
                                  OTXSCO18,OTXSCO19,OTXSCO20,OTXSDOC1,OTXSDOC2:
                                  OTXSDOC3,OTXSAMT1,OTXSAMT2,OTXSDSC1,OTXSDSC2:
                                  OTXSDSC3,OTXSDSC4,OTXSDSC5,OTXSDSC6,OTXSTIM1:
                                  OTXSTIM2,OTXSTIM3,OTXSTIM4,OTXSTIM5,OTXSTIM6:
                                  OTXSSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTXSOUT,OTXSOUTN
          RETURN
.
RKOTXSC1  MOVE      ZERO,OVRCD
          READKS    OUTXSCA1;DOTXSOUT,OTXSDTE1,OTXSDTE2,OTXSDTE3:
                             OTXSDTE4,OTXSDTE5,OTXSDTE6,OTXSCO01,OTXSCO02:
                             OTXSCO03,OTXSCO04,OTXSCO05,OTXSCO06,OTXSCO07:
                             OTXSCO08,OTXSCO09,OTXSCO10,OTXSCO11,OTXSCO12:
                             OTXSCO13,OTXSCO14,OTXSCO15,OTXSCO16,OTXSCO17:
                             OTXSCO18,OTXSCO19,OTXSCO20,OTXSDOC1,OTXSDOC2:
                             OTXSDOC3,OTXSAMT1,OTXSAMT2,OTXSDSC1,OTXSDSC2:
                             OTXSDSC3,OTXSDSC4,OTXSDSC5,OTXSDSC6,OTXSTIM1:
                             OTXSTIM2,OTXSTIM3,OTXSTIM4,OTXSTIM5,OTXSTIM6:
                             OTXSSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTXSOUT,OTXSOUTN
          RETURN
.
RPOTXSC1  MOVE      ZERO,OVRCD
          READKP    OUTXSCA1;DOTXSOUT,OTXSDTE1,OTXSDTE2,OTXSDTE3:
                             OTXSDTE4,OTXSDTE5,OTXSDTE6,OTXSCO01,OTXSCO02:
                             OTXSCO03,OTXSCO04,OTXSCO05,OTXSCO06,OTXSCO07:
                             OTXSCO08,OTXSCO09,OTXSCO10,OTXSCO11,OTXSCO12:
                             OTXSCO13,OTXSCO14,OTXSCO15,OTXSCO16,OTXSCO17:
                             OTXSCO18,OTXSCO19,OTXSCO20,OTXSDOC1,OTXSDOC2:
                             OTXSDOC3,OTXSAMT1,OTXSAMT2,OTXSDSC1,OTXSDSC2:
                             OTXSDSC3,OTXSDSC4,OTXSDSC5,OTXSDSC6,OTXSTIM1:
                             OTXSTIM2,OTXSTIM3,OTXSTIM4,OTXSTIM5,OTXSTIM6:
                             OTXSSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTXSOUT,OTXSOUTN
          RETURN
.
UPOTXSC1  MOVE      OTXSOUTN,DOTXSOUT
          UPDATE    OUTXSCA1;DOTXSOUT,OTXSDTE1,OTXSDTE2,OTXSDTE3:
                             OTXSDTE4,OTXSDTE5,OTXSDTE6,OTXSCO01,OTXSCO02:
                             OTXSCO03,OTXSCO04,OTXSCO05,OTXSCO06,OTXSCO07:
                             OTXSCO08,OTXSCO09,OTXSCO10,OTXSCO11,OTXSCO12:
                             OTXSCO13,OTXSCO14,OTXSCO15,OTXSCO16,OTXSCO17:
                             OTXSCO18,OTXSCO19,OTXSCO20,OTXSDOC1,OTXSDOC2:
                             OTXSDOC3,OTXSAMT1,OTXSAMT2,OTXSDSC1,OTXSDSC2:
                             OTXSDSC3,OTXSDSC4,OTXSDSC5,OTXSDSC6,OTXSTIM1:
                             OTXSTIM2,OTXSTIM3,OTXSTIM4,OTXSTIM5,OTXSTIM6:
                             OTXSSPAR
          RETURN
.
WROTXSC1  RESET     KEY8
          MOVE      OTXSOUTN,DOTXSOUT
          WRITE     OUTXSCA1,KEY8;DOTXSOUT,OTXSDTE1,OTXSDTE2,OTXSDTE3:
                                  OTXSDTE4,OTXSDTE5,OTXSDTE6,OTXSCO01,OTXSCO02:
                                  OTXSCO03,OTXSCO04,OTXSCO05,OTXSCO06,OTXSCO07:
                                  OTXSCO08,OTXSCO09,OTXSCO10,OTXSCO11,OTXSCO12:
                                  OTXSCO13,OTXSCO14,OTXSCO15,OTXSCO16,OTXSCO17:
                                  OTXSCO18,OTXSCO19,OTXSCO20,OTXSDOC1,OTXSDOC2:
                                  OTXSDOC3,OTXSAMT1,OTXSAMT2,OTXSDSC1,OTXSDSC2:
                                  OTXSDSC3,OTXSDSC4,OTXSDSC5,OTXSDSC6,OTXSTIM1:
                                  OTXSTIM2,OTXSTIM3,OTXSTIM4,OTXSTIM5,OTXSTIM6:
                                  OTXSSPAR
          RETURN
.
DEOTXSC1  RESET     KEY8
          DELETE    OUTXSCA1,KEY8
          RETURN
.
. -------------------------------------------
. ------- Audit routines for OUTXSCA1 -------
. -------------------------------------------
.
ASOTXSC   RESET     KEY19
          READ      OUTAUDXS,KEY19;;
          RETURN
.
AKOTXSC   MOVE      ZERO,OVRCD
          READKS    OUTAUDXS;OTXSAUDD,OTXSAUDT,OTXSAUDP,OTXSAUDR:
                             OTXSAUDS,OTXSAUDO,DOTXSOUT,OTXSDTE1,OTXSDTE2:
                             OTXSDTE3,OTXSDTE4,OTXSDTE5,OTXSDTE6,OTXSCO01:
                             OTXSCO02,OTXSCO03,OTXSCO04,OTXSCO05,OTXSCO06:
                             OTXSCO07,OTXSCO08,OTXSCO09,OTXSCO10,OTXSCO11:
                             OTXSCO12,OTXSCO13,OTXSCO14,OTXSCO15,OTXSCO16:
                             OTXSCO17,OTXSCO18,OTXSCO19,OTXSCO20,OTXSDOC1:
                             OTXSDOC2,OTXSDOC3,OTXSAMT1,OTXSAMT2,OTXSDSC1:
                             OTXSDSC2,OTXSDSC3,OTXSDSC4,OTXSDSC5,OTXSDSC6:
                             OTXSTIM1,OTXSTIM2,OTXSTIM3,OTXSTIM4,OTXSTIM5:
                             OTXSTIM6,OTXSSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTXSOUT,OTXSOUTN
          RETURN
.
AUOTXSC   MOVE      OTXSOUTN,DOTXSOUT
          UPDATE    OUTAUDXS;OTXSAUDD,OTXSAUDT,OTXSAUDP,OTXSAUDR:
                             OTXSAUDS,OTXSAUDO,DOTXSOUT,OTXSDTE1,OTXSDTE2:
                             OTXSDTE3,OTXSDTE4,OTXSDTE5,OTXSDTE6,OTXSCO01:
                             OTXSCO02,OTXSCO03,OTXSCO04,OTXSCO05,OTXSCO06:
                             OTXSCO07,OTXSCO08,OTXSCO09,OTXSCO10,OTXSCO11:
                             OTXSCO12,OTXSCO13,OTXSCO14,OTXSCO15,OTXSCO16:
                             OTXSCO17,OTXSCO18,OTXSCO19,OTXSCO20,OTXSDOC1:
                             OTXSDOC2,OTXSDOC3,OTXSAMT1,OTXSAMT2,OTXSDSC1:
                             OTXSDSC2,OTXSDSC3,OTXSDSC4,OTXSDSC5,OTXSDSC6:
                             OTXSTIM1,OTXSTIM2,OTXSTIM3,OTXSTIM4,OTXSTIM5:
                             OTXSTIM6,OTXSSPAR
          RETURN
.
AWOTXSC   RESET     KEY19
          MOVE      OTXSOUTN,DOTXSOUT
          WRITE     OUTAUDXS,KEY19;OTXSAUDD,OTXSAUDT,OTXSAUDP,OTXSAUDR:
                                   OTXSAUDS,OTXSAUDO,DOTXSOUT,OTXSDTE1,OTXSDTE2:
                                   OTXSDTE3,OTXSDTE4,OTXSDTE5,OTXSDTE6,OTXSCO01:
                                   OTXSCO02,OTXSCO03,OTXSCO04,OTXSCO05,OTXSCO06:
                                   OTXSCO07,OTXSCO08,OTXSCO09,OTXSCO10,OTXSCO11:
                                   OTXSCO12,OTXSCO13,OTXSCO14,OTXSCO15,OTXSCO16:
                                   OTXSCO17,OTXSCO18,OTXSCO19,OTXSCO20,OTXSDOC1:
                                   OTXSDOC2,OTXSDOC3,OTXSAMT1,OTXSAMT2,OTXSDSC1:
                                   OTXSDSC2,OTXSDSC3,OTXSDSC4,OTXSDSC5,OTXSDSC6:
                                   OTXSTIM1,OTXSTIM2,OTXSTIM3,OTXSTIM4,OTXSTIM5:
                                   OTXSTIM6,OTXSSPAR
          RETURN
.
ADOTXSC   RESET     KEY19
          DELETE    OUTAUDXS,KEY19
          RETURN
...............................................................................
