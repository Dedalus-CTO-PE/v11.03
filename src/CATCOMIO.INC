.
. CATCOMIO.INC
. ------------
. Filename     : catcomaf
. Description  : Dietary Completed Menus File
. Variables    : OVRCD    FORM     1         0 = NOT OVER
.                                            1 = OVER
.                KEY17    DIM     17         KEY FOR CATCOMA1
.                KEY20    DIM     20         KEY FOR CATCOMA2
.
.                KEY19    DIM     19         KEY FOR CATAUDCO
.
. ------  I/O routines for CATCOMA1  ------
.
RACTCOM1  MOVE      ZERO,OVRCD
          RESET     KEY17
          READ      CATCOMA1,KEY17;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSCTCOM1  RESET     KEY17
          READ      CATCOMA1,KEY17;;
          RETURN
.
RDCTCOM1  MOVE      ZERO,OVRCD
          RESET     KEY17
          READ      CATCOMA1,KEY17;DCTCOADM,CTCODATE,DCTCOMEA,CTCOMENU:
                                   CTCODIET,CTCOWARD,CTCOSIZE,CTCOSTAT:
                                   CTCOBELT,CTCOMTYP,CTCOPRNT,CTCOIT01:
                                   CTCOIT02:
                                   CTCOIT03,CTCOIT04,CTCOIT05,CTCOIT06:
                                   CTCOIT07,CTCOIT08,CTCOIT09,CTCOIT10:
                                   CTCOIT11,CTCOIT12,CTCOIT13,CTCOIT14:
                                   CTCOIT15,CTCOIT16,CTCOIT17,CTCOIT18:
                                   CTCOIT19,CTCOIT20,CTCODNAM,CTCOPAGN:
                                   CTCOOTHR,CTCODTYP,CTCOALVL,CTCOSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DCTCOADM,CTCOADMN
          MOVE      DCTCOMEA,CTCOMEAL
          RETURN
.
RKCTCOM1  MOVE      ZERO,OVRCD
          READKS    CATCOMA1;DCTCOADM,CTCODATE,DCTCOMEA,CTCOMENU:
                             CTCODIET,CTCOWARD,CTCOSIZE,CTCOSTAT:
                             CTCOBELT,CTCOMTYP,CTCOPRNT,CTCOIT01:
                             CTCOIT02:
                             CTCOIT03,CTCOIT04,CTCOIT05,CTCOIT06:
                             CTCOIT07,CTCOIT08,CTCOIT09,CTCOIT10:
                             CTCOIT11,CTCOIT12,CTCOIT13,CTCOIT14:
                             CTCOIT15,CTCOIT16,CTCOIT17,CTCOIT18:
                             CTCOIT19,CTCOIT20,CTCODNAM,CTCOPAGN:
                             CTCOOTHR,CTCODTYP,CTCOALVL,CTCOSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DCTCOADM,CTCOADMN
          MOVE      DCTCOMEA,CTCOMEAL
          RETURN
.
RPCTCOM1  MOVE      ZERO,OVRCD
          READKP    CATCOMA1;DCTCOADM,CTCODATE,DCTCOMEA,CTCOMENU:
                             CTCODIET,CTCOWARD,CTCOSIZE,CTCOSTAT:
                             CTCOBELT,CTCOMTYP,CTCOPRNT,CTCOIT01:
                             CTCOIT02:
                             CTCOIT03,CTCOIT04,CTCOIT05,CTCOIT06:
                             CTCOIT07,CTCOIT08,CTCOIT09,CTCOIT10:
                             CTCOIT11,CTCOIT12,CTCOIT13,CTCOIT14:
                             CTCOIT15,CTCOIT16,CTCOIT17,CTCOIT18:
                             CTCOIT19,CTCOIT20,CTCODNAM,CTCOPAGN:
                             CTCOOTHR,CTCODTYP,CTCOALVL,CTCOSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DCTCOADM,CTCOADMN
          MOVE      DCTCOMEA,CTCOMEAL
          RETURN
.
WRCTCOM1  RESET     KEY17
          MOVE      CTCOADMN,DCTCOADM
          MOVE      CTCOMEAL,DCTCOMEA
          WRITE     CATCOMA1,KEY17;KEY17,CTCOMENU,CTCODIET,CTCOWARD,CTCOSIZE:
                                   CTCOSTAT,CTCOBELT,CTCOMTYP,CTCOPRNT:
                                   CTCOIT01:
                                   CTCOIT02,CTCOIT03,CTCOIT04,CTCOIT05:
                                   CTCOIT06,CTCOIT07,CTCOIT08,CTCOIT09:
                                   CTCOIT10,CTCOIT11,CTCOIT12,CTCOIT13:
                                   CTCOIT14,CTCOIT15,CTCOIT16,CTCOIT17:
                                   CTCOIT18,CTCOIT19,CTCOIT20,CTCODNAM:
                                   CTCOPAGN,CTCOOTHR,CTCODTYP,CTCOALVL:
                                   CTCOSPAR
          RETURN
.
UPCTCOM1  MOVE      CTCOADMN,DCTCOADM
          MOVE      CTCOMEAL,DCTCOMEA
          UPDATE    CATCOMA1;DCTCOADM,CTCODATE,DCTCOMEA,CTCOMENU:
                             CTCODIET,CTCOWARD,CTCOSIZE,CTCOSTAT:
                             CTCOBELT,CTCOMTYP,CTCOPRNT,CTCOIT01:
                             CTCOIT02:
                             CTCOIT03,CTCOIT04,CTCOIT05,CTCOIT06:
                             CTCOIT07,CTCOIT08,CTCOIT09,CTCOIT10:
                             CTCOIT11,CTCOIT12,CTCOIT13,CTCOIT14:
                             CTCOIT15,CTCOIT16,CTCOIT17,CTCOIT18:
                             CTCOIT19,CTCOIT20,CTCODNAM,CTCOPAGN:
                             CTCOOTHR,CTCODTYP,CTCOALVL,CTCOSPAR
          RETURN
.
DECTCOM1  RESET     KEY17
          DELETE    CATCOMA1,KEY17
          RETURN
.
.
. ------  I/O routines for CATCOMA2  ------
.
RACTCOM2  MOVE      ZERO,OVRCD
          RESET     KEY20
          READ      CATCOMA2,KEY20;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSCTCOM2  RESET     KEY20
          READ      CATCOMA2,KEY20;;
          RETURN
.
RDCTCOM2  MOVE      ZERO,OVRCD
          RESET     KEY20
          READ      CATCOMA2,KEY20;DCTCOADM,CTCODATE,DCTCOMEA,CTCOMENU:
                                   CTCODIET,CTCOWARD,CTCOSIZE,CTCOSTAT:
                                   CTCOBELT,CTCOMTYP,CTCOPRNT,CTCOIT01:
                                   CTCOIT02:
                                   CTCOIT03,CTCOIT04,CTCOIT05,CTCOIT06:
                                   CTCOIT07,CTCOIT08,CTCOIT09,CTCOIT10:
                                   CTCOIT11,CTCOIT12,CTCOIT13,CTCOIT14:
                                   CTCOIT15,CTCOIT16,CTCOIT17,CTCOIT18:
                                   CTCOIT19,CTCOIT20,CTCODNAM,CTCOPAGN:
                                   CTCOOTHR,CTCODTYP,CTCOALVL,CTCOSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DCTCOADM,CTCOADMN
          MOVE      DCTCOMEA,CTCOMEAL
          RETURN
.
RKCTCOM2  MOVE      ZERO,OVRCD
          READKS    CATCOMA2;DCTCOADM,CTCODATE,DCTCOMEA,CTCOMENU:
                             CTCODIET,CTCOWARD,CTCOSIZE,CTCOSTAT:
                             CTCOBELT,CTCOMTYP,CTCOPRNT,CTCOIT01:
                             CTCOIT02:
                             CTCOIT03,CTCOIT04,CTCOIT05,CTCOIT06:
                             CTCOIT07,CTCOIT08,CTCOIT09,CTCOIT10:
                             CTCOIT11,CTCOIT12,CTCOIT13,CTCOIT14:
                             CTCOIT15,CTCOIT16,CTCOIT17,CTCOIT18:
                             CTCOIT19,CTCOIT20,CTCODNAM,CTCOPAGN:
                             CTCOOTHR,CTCODTYP,CTCOALVL,CTCOSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DCTCOADM,CTCOADMN
          MOVE      DCTCOMEA,CTCOMEAL
          RETURN
.
RPCTCOM2  MOVE      ZERO,OVRCD
          READKP    CATCOMA2;DCTCOADM,CTCODATE,DCTCOMEA,CTCOMENU:
                             CTCODIET,CTCOWARD,CTCOSIZE,CTCOSTAT:
                             CTCOBELT,CTCOMTYP,CTCOPRNT,CTCOIT01:
                             CTCOIT02:
                             CTCOIT03,CTCOIT04,CTCOIT05,CTCOIT06:
                             CTCOIT07,CTCOIT08,CTCOIT09,CTCOIT10:
                             CTCOIT11,CTCOIT12,CTCOIT13,CTCOIT14:
                             CTCOIT15,CTCOIT16,CTCOIT17,CTCOIT18:
                             CTCOIT19,CTCOIT20,CTCODNAM,CTCOPAGN:
                             CTCOOTHR,CTCODTYP,CTCOALVL,CTCOSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DCTCOADM,CTCOADMN
          MOVE      DCTCOMEA,CTCOMEAL
          RETURN
.
. Audits
.
.
ASCTCOM   RESET     KEY19
          READ      CATAUDCO,KEY19;;
          RETURN
.
AKCTCOM   MOVE      ZERO,OVRCD
          READKS    CATAUDCO;CTCOAUDD,CTCOAUDT,CTCOAUDP,CTCOAUDR:
                             CTCOAUDS,CTCOAUDO:
                             DCTCOADM,CTCODATE,DCTCOMEA,CTCOMENU:
                             CTCODIET,CTCOWARD,CTCOSIZE,CTCOSTAT:
                             CTCOBELT,CTCOMTYP,CTCOPRNT,CTCOIT01:
                             CTCOIT02:
                             CTCOIT03,CTCOIT04,CTCOIT05,CTCOIT06:
                             CTCOIT07,CTCOIT08,CTCOIT09,CTCOIT10:
                             CTCOIT11,CTCOIT12,CTCOIT13,CTCOIT14:
                             CTCOIT15,CTCOIT16,CTCOIT17,CTCOIT18:
                             CTCOIT19,CTCOIT20,CTCODNAM,CTCOPAGN:
                             CTCOOTHR,CTCODTYP,CTCOALVL,CTCOSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DCTCOADM,CTCOADMN
          MOVE      DCTCOMEA,CTCOMEAL
          RETURN
.
AWCTCOM   RESET     KEY19
          MOVE      CTCOADMN,DCTCOADM
          MOVE      CTCOMEAL,DCTCOMEA
          WRITE     CATAUDCO,KEY19;KEY19,CTCOAUDS,CTCOAUDO,DCTCOADM,CTCODATE:
                                   DCTCOMEA,CTCOMENU,CTCODIET,CTCOWARD,CTCOSIZE:
                                   CTCOSTAT,CTCOBELT,CTCOMTYP,CTCOPRNT:
                                   CTCOIT01:
                                   CTCOIT02,CTCOIT03,CTCOIT04,CTCOIT05:
                                   CTCOIT06,CTCOIT07,CTCOIT08,CTCOIT09:
                                   CTCOIT10,CTCOIT11,CTCOIT12,CTCOIT13:
                                   CTCOIT14,CTCOIT15,CTCOIT16,CTCOIT17:
                                   CTCOIT18,CTCOIT19,CTCOIT20,CTCODNAM:
                                   CTCOPAGN,CTCOOTHR,CTCODTYP,CTCOALVL:
                                   CTCOSPAR
          RETURN
.
ADCTCOM   RESET     KEY19
          DELETE    CATAUDCO,KEY19
          RETURN
 
