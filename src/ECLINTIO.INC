.*****************************************************************************
.*        ECLINTIO.INC        Eclipse PMI Interface File I/O                 *
.*                                                                           *
.* Mods :  V5.08.01 21/09/2001  Steve Armstrong                              *
.*                  Added code to ensure uppercase surname and given name    *
.*                  in READKS                                                *
.*****************************************************************************
.
RSECINT1  RESET     KEY18
          READ      ECLINTA1,KEY18;;
          RETURN
.
RAECINT1  RESET     KEY18
          MOVE      ZERO,OVRCD
          READ      ECLINTA1,KEY18;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDECINT1  RESET     KEY18
          MOVE      ZERO,OVRCD
          READ      ECLINTA1,KEY18;ECINSTAT,ECINDTTM,ECINRTYP,PURNO:
                                  ECINTITL,ECINHOSP,ECINDAYS,ECINDEBT,ECINSNAM:
                                  ECINGNAM,ECINPREV,ECINADD1,ECINADD2,ECINADD3:
                                  ECINADD4,ECINPOST,ECINPTEL,ECINBTEL,ECINPSEX:
                                  ECINMSTA,ECINPDOB,ECINCONT,ECINPREG,ECINPTYP:
                                  ECINOCCP,ECINLDIS,ECINMEDI,ECINPNUM,ECINPEXP:
                                  ECINRNUM,ECINSMOK,ECINMICR,ECINCEAS,ECINCASE:
                                  ECINAUTO,ECINHIG1,ECINHIG2,ECINHIG3,ECINLDOC:
                                  ECINHFND,ECINFTBL,ECINFMEM,ECINUSR1,ECINUSR2:
                                  ECINUSR3,ECINUSR4,ECINUSR5,ECINUSR6,ECINUYN1:
                                  ECINUYN2,ECINUYN3,ECINYRES,ECINNNAM,ECINNAD1:
                                  ECINNAD2,ECINNAD3,ECINNAD4,ECINNPOS,ECINNPTL:
                                  ECINNBTL,ECINNREL,ECINYRSM,ECINFCHG,ECINDDAT:
                                  ECINDIET,ECININIT,ECINHKID,ECINEMPC,ECINNOKO:
                                  ECINNOKE,ECINDCNO,ECINRDAT,ECINMEAL,ECINLGAC:
                                  ECINLSTA,ECINLSDT,ECINFHMD,ECINMHU1,ECINMHU2:
                                  ECINMHU3,ECINECNM,ECINECA1,ECINECA2,ECINECA3:
                                  ECINECA4,ECINECPC,ECINECPP,ECINECBP,ECINECRE:
                                  ECINNRNM,ECINNRA1,ECINNRA2,ECINNRA3,ECINNRA4:
                                  ECINNRPC,ECINNRPP,ECINNRBP,ECINNRRE,ECIN3BEX:
                                  ECINCARD,ECINCEXP,ECINCXMP,ECINFMLY,ECINCHNM:
                                  ECINDOFR,ECINREGP,ECINGPPC,ECINSPID,ECINGPPT:
                                  ECINOSDT,ECINNMPI,KEEPOLAL,EFFDATGP,ECINOPER:
                                  ECINUKDO,ECINCELL,ECINPAD1,ECINPAD2,ECINPAD3:
                                  ECINPAD4,ECINPPOS,ECINETH1,ECINETH2,ECINETH3:
                                  ECINECID,ECINSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKECINT1  MOVE      ZERO,OVRCD
          READKS    ECLINTA1;ECINSTAT,ECINDTTM,ECINRTYP,PURNO:
                                  ECINTITL,ECINHOSP,ECINDAYS,ECINDEBT,ECINSNAM:
                                  ECINGNAM,ECINPREV,ECINADD1,ECINADD2,ECINADD3:
                                  ECINADD4,ECINPOST,ECINPTEL,ECINBTEL,ECINPSEX:
                                  ECINMSTA,ECINPDOB,ECINCONT,ECINPREG,ECINPTYP:
                                  ECINOCCP,ECINLDIS,ECINMEDI,ECINPNUM,ECINPEXP:
                                  ECINRNUM,ECINSMOK,ECINMICR,ECINCEAS,ECINCASE:
                                  ECINAUTO,ECINHIG1,ECINHIG2,ECINHIG3,ECINLDOC:
                                  ECINHFND,ECINFTBL,ECINFMEM,ECINUSR1,ECINUSR2:
                                  ECINUSR3,ECINUSR4,ECINUSR5,ECINUSR6,ECINUYN1:
                                  ECINUYN2,ECINUYN3,ECINYRES,ECINNNAM,ECINNAD1:
                                  ECINNAD2,ECINNAD3,ECINNAD4,ECINNPOS,ECINNPTL:
                                  ECINNBTL,ECINNREL,ECINYRSM,ECINFCHG,ECINDDAT:
                                  ECINDIET,ECININIT,ECINHKID,ECINEMPC,ECINNOKO:
                                  ECINNOKE,ECINDCNO,ECINRDAT,ECINMEAL,ECINLGAC:
                                  ECINLSTA,ECINLSDT,ECINFHMD,ECINMHU1,ECINMHU2:
                                  ECINMHU3,ECINECNM,ECINECA1,ECINECA2,ECINECA3:
                                  ECINECA4,ECINECPC,ECINECPP,ECINECBP,ECINECRE:
                                  ECINNRNM,ECINNRA1,ECINNRA2,ECINNRA3,ECINNRA4:
                                  ECINNRPC,ECINNRPP,ECINNRBP,ECINNRRE,ECIN3BEX:
                                  ECINCARD,ECINCEXP,ECINCXMP,ECINFMLY,ECINCHNM:
                                  ECINDOFR,ECINREGP,ECINGPPC,ECINSPID,ECINGPPT:
                                  ECINOSDT,ECINNMPI,KEEPOLAL,EFFDATGP,ECINOPER:
                                  ECINUKDO,ECINCELL,ECINPAD1,ECINPAD2,ECINPAD3:
                                  ECINPAD4,ECINPPOS,ECINETH1,ECINETH2,ECINETH3:
                                  ECINECID,ECINSPAR
          GOTO      OVERCOND IF OVER
          REP       UPPLOW,ECINSNAM
          REP       UPPLOW,ECINGNAM
          RETURN
.
RPECINT1  MOVE      ZERO,OVRCD
          READKP    ECLINTA1;ECINSTAT,ECINDTTM,ECINRTYP,PURNO:
                                  ECINTITL,ECINHOSP,ECINDAYS,ECINDEBT,ECINSNAM:
                                  ECINGNAM,ECINPREV,ECINADD1,ECINADD2,ECINADD3:
                                  ECINADD4,ECINPOST,ECINPTEL,ECINBTEL,ECINPSEX:
                                  ECINMSTA,ECINPDOB,ECINCONT,ECINPREG,ECINPTYP:
                                  ECINOCCP,ECINLDIS,ECINMEDI,ECINPNUM,ECINPEXP:
                                  ECINRNUM,ECINSMOK,ECINMICR,ECINCEAS,ECINCASE:
                                  ECINAUTO,ECINHIG1,ECINHIG2,ECINHIG3,ECINLDOC:
                                  ECINHFND,ECINFTBL,ECINFMEM,ECINUSR1,ECINUSR2:
                                  ECINUSR3,ECINUSR4,ECINUSR5,ECINUSR6,ECINUYN1:
                                  ECINUYN2,ECINUYN3,ECINYRES,ECINNNAM,ECINNAD1:
                                  ECINNAD2,ECINNAD3,ECINNAD4,ECINNPOS,ECINNPTL:
                                  ECINNBTL,ECINNREL,ECINYRSM,ECINFCHG,ECINDDAT:
                                  ECINDIET,ECININIT,ECINHKID,ECINEMPC,ECINNOKO:
                                  ECINNOKE,ECINDCNO,ECINRDAT,ECINMEAL,ECINLGAC:
                                  ECINLSTA,ECINLSDT,ECINFHMD,ECINMHU1,ECINMHU2:
                                  ECINMHU3,ECINECNM,ECINECA1,ECINECA2,ECINECA3:
                                  ECINECA4,ECINECPC,ECINECPP,ECINECBP,ECINECRE:
                                  ECINNRNM,ECINNRA1,ECINNRA2,ECINNRA3,ECINNRA4:
                                  ECINNRPC,ECINNRPP,ECINNRBP,ECINNRRE,ECIN3BEX:
                                  ECINCARD,ECINCEXP,ECINCXMP,ECINFMLY,ECINCHNM:
                                  ECINDOFR,ECINREGP,ECINGPPC,ECINSPID,ECINGPPT:
                                  ECINOSDT,ECINNMPI,KEEPOLAL,EFFDATGP,ECINOPER:
                                  ECINUKDO,ECINCELL,ECINPAD1,ECINPAD2,ECINPAD3:
                                  ECINPAD4,ECINPPOS,ECINETH1,ECINETH2,ECINETH3:
                                  ECINECID,ECINSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPECINT1  UPDATE    ECLINTA1;ECINSTAT,ECINDTTM,ECINRTYP,PURNO:
                                  ECINTITL,ECINHOSP,ECINDAYS,ECINDEBT,ECINSNAM:
                                  ECINGNAM,ECINPREV,ECINADD1,ECINADD2,ECINADD3:
                                  ECINADD4,ECINPOST,ECINPTEL,ECINBTEL,ECINPSEX:
                                  ECINMSTA,ECINPDOB,ECINCONT,ECINPREG,ECINPTYP:
                                  ECINOCCP,ECINLDIS,ECINMEDI,ECINPNUM,ECINPEXP:
                                  ECINRNUM,ECINSMOK,ECINMICR,ECINCEAS,ECINCASE:
                                  ECINAUTO,ECINHIG1,ECINHIG2,ECINHIG3,ECINLDOC:
                                  ECINHFND,ECINFTBL,ECINFMEM,ECINUSR1,ECINUSR2:
                                  ECINUSR3,ECINUSR4,ECINUSR5,ECINUSR6,ECINUYN1:
                                  ECINUYN2,ECINUYN3,ECINYRES,ECINNNAM,ECINNAD1:
                                  ECINNAD2,ECINNAD3,ECINNAD4,ECINNPOS,ECINNPTL:
                                  ECINNBTL,ECINNREL,ECINYRSM,ECINFCHG,ECINDDAT:
                                  ECINDIET,ECININIT,ECINHKID,ECINEMPC,ECINNOKO:
                                  ECINNOKE,ECINDCNO,ECINRDAT,ECINMEAL,ECINLGAC:
                                  ECINLSTA,ECINLSDT,ECINFHMD,ECINMHU1,ECINMHU2:
                                  ECINMHU3,ECINECNM,ECINECA1,ECINECA2,ECINECA3:
                                  ECINECA4,ECINECPC,ECINECPP,ECINECBP,ECINECRE:
                                  ECINNRNM,ECINNRA1,ECINNRA2,ECINNRA3,ECINNRA4:
                                  ECINNRPC,ECINNRPP,ECINNRBP,ECINNRRE,ECIN3BEX:
                                  ECINCARD,ECINCEXP,ECINCXMP,ECINFMLY,ECINCHNM:
                                  ECINDOFR,ECINREGP,ECINGPPC,ECINSPID,ECINGPPT:
                                  ECINOSDT,ECINNMPI,KEEPOLAL,EFFDATGP,ECINOPER:
                                  ECINUKDO,ECINCELL,ECINPAD1,ECINPAD2,ECINPAD3:
                                  ECINPAD4,ECINPPOS,ECINETH1,ECINETH2,ECINETH3:
                                  ECINECID,ECINSPAR
          RETURN
.
WRECINT1  RESET     KEY18
          WRITE     ECLINTA1,KEY18;ECINSTAT,ECINDTTM,ECINRTYP,PURNO:
                                  ECINTITL,ECINHOSP,ECINDAYS,ECINDEBT,ECINSNAM:
                                  ECINGNAM,ECINPREV,ECINADD1,ECINADD2,ECINADD3:
                                  ECINADD4,ECINPOST,ECINPTEL,ECINBTEL,ECINPSEX:
                                  ECINMSTA,ECINPDOB,ECINCONT,ECINPREG,ECINPTYP:
                                  ECINOCCP,ECINLDIS,ECINMEDI,ECINPNUM,ECINPEXP:
                                  ECINRNUM,ECINSMOK,ECINMICR,ECINCEAS,ECINCASE:
                                  ECINAUTO,ECINHIG1,ECINHIG2,ECINHIG3,ECINLDOC:
                                  ECINHFND,ECINFTBL,ECINFMEM,ECINUSR1,ECINUSR2:
                                  ECINUSR3,ECINUSR4,ECINUSR5,ECINUSR6,ECINUYN1:
                                  ECINUYN2,ECINUYN3,ECINYRES,ECINNNAM,ECINNAD1:
                                  ECINNAD2,ECINNAD3,ECINNAD4,ECINNPOS,ECINNPTL:
                                  ECINNBTL,ECINNREL,ECINYRSM,ECINFCHG,ECINDDAT:
                                  ECINDIET,ECININIT,ECINHKID,ECINEMPC,ECINNOKO:
                                  ECINNOKE,ECINDCNO,ECINRDAT,ECINMEAL,ECINLGAC:
                                  ECINLSTA,ECINLSDT,ECINFHMD,ECINMHU1,ECINMHU2:
                                  ECINMHU3,ECINECNM,ECINECA1,ECINECA2,ECINECA3:
                                  ECINECA4,ECINECPC,ECINECPP,ECINECBP,ECINECRE:
                                  ECINNRNM,ECINNRA1,ECINNRA2,ECINNRA3,ECINNRA4:
                                  ECINNRPC,ECINNRPP,ECINNRBP,ECINNRRE,ECIN3BEX:
                                  ECINCARD,ECINCEXP,ECINCXMP,ECINFMLY,ECINCHNM:
                                  ECINDOFR,ECINREGP,ECINGPPC,ECINSPID,ECINGPPT:
                                  ECINOSDT,ECINNMPI,KEEPOLAL,EFFDATGP,ECINOPER:
                                  ECINUKDO,ECINCELL,ECINPAD1,ECINPAD2,ECINPAD3:
                                  ECINPAD4,ECINPPOS,ECINETH1,ECINETH2,ECINETH3:
                                  ECINECID,ECINSPAR
          RETURN
.
DEECINT1  RESET     KEY18
          DELETE    ECLINTA1,KEY18
          RETURN
