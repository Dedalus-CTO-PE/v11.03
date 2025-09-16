. *****************************************************************************
. *                                                                           *
. * Include Name  : PATPA1IO                                                  *
. *                                                                           *
. * Function      : I/O for patpa1af file                                     *
. *                                                                           *
. * Keys          : KEY24                                                     *
. *                                                                           *
. *****************************************************************************
.
RDAPADD1  MOVE      ZERO,OVRCD
          RESET     KEY24
          READ      PATPA1A1,KEY24;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPADD1   MOVE      ZERO,OVRCD
          RESET     KEY24
          READ      PATPA1A1,KEY24;PAURNO,PADATE,PATIME,PAADD1,PAADD2:
                                   PASUBR,PAADD4,PAPOST,PATELEP,PATELEB:
                                   PTPADOR,PTPAMOBL,PTPAEMAL,PTPACDTE,PTPACTIM:
                                   PTPAWEBC,PTPALUPD,PTPALUPT,PTPAWEBU,PTPAOSMS:
                                   PTPASPAR
          GOTO      OVERCOND IF OVER
          MOVE      PAURNO,SPAURNO
          RETURN
.
RDKPADD1  MOVE      ZERO,OVRCD
          READKS    PATPA1A1;PAURNO,PADATE,PATIME,PAADD1,PAADD2:
                             PASUBR,PAADD4,PAPOST,PATELEP,PATELEB:
                             PTPADOR,PTPAMOBL,PTPAEMAL,PTPACDTE,PTPACTIM:
                             PTPAWEBC,PTPALUPD,PTPALUPT,PTPAWEBU,PTPAOSMS:
                             PTPASPAR
          GOTO      OVERCOND IF OVER
          MOVE      PAURNO,SPAURNO
          RETURN
.
RDPPADD1  MOVE      ZERO,OVRCD
          READKP    PATPA1A1;PAURNO,PADATE,PATIME,PAADD1,PAADD2:
                             PASUBR,PAADD4,PAPOST,PATELEP,PATELEB:
                             PTPADOR,PTPAMOBL,PTPAEMAL,PTPACDTE,PTPACTIM:
                             PTPAWEBC,PTPALUPD,PTPALUPT,PTPAWEBU,PTPAOSMS:
                             PTPASPAR
          GOTO      OVERCOND IF OVER
          MOVE      PAURNO,SPAURNO
          RETURN
.
WRPADD1   RESET     KEY24
          WRITE     PATPA1A1,KEY24;PAURNO,PADATE,PATIME,PAADD1,PAADD2:
                                   PASUBR,PAADD4,PAPOST,PATELEP,PATELEB:
                                   PTPADOR,PTPAMOBL,PTPAEMAL,PTPACDTE,PTPACTIM:
                                   PTPAWEBC,PTPALUPD,PTPALUPT,PTPAWEBU,PTPAOSMS:
                                   PTPASPAR
          RETURN
.
UPPADD1   UPDATE    PATPA1A1;PAURNO,PADATE,PATIME,PAADD1,PAADD2:
                             PASUBR,PAADD4,PAPOST,PATELEP,PATELEB:
                             PTPADOR,PTPAMOBL,PTPAEMAL,PTPACDTE,PTPACTIM:
                             PTPAWEBC,PTPALUPD,PTPALUPT,PTPAWEBU,PTPAOSMS:
                             PTPASPAR
          RETURN
.
DEPADD1   RESET     KEY24
          DELETE    PATPA1A1,KEY24
          RETURN
.
RDSPADD1  RESET     KEY24
          READ      PATPA1A1,KEY24;;
          RETURN
.
. ******* SECOND INDEX - only for new file - patpa1af *******
.
RAPTPAD2  MOVE      ZERO,OVRCD
          RESET     KEY24
          READ      PATPA1A2,KEY24;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPTPAD2  RESET     KEY24
          READ      PATPA1A2,KEY24;;
          RETURN
.
RDPTPAD2  MOVE      ZERO,OVRCD
          RESET     KEY24
          READ      PATPA1A2,KEY24;PAURNO,PADATE,PATIME,PAADD1,PAADD2:
                                   PASUBR,PAADD4,PAPOST,PATELEP,PATELEB:
                                   PTPADOR,PTPAMOBL,PTPAEMAL,PTPACDTE,PTPACTIM:
                                   PTPAWEBC,PTPALUPD,PTPALUPT,PTPAWEBU,PTPAOSMS:
                                   PTPASPAR
          GOTO      OVERCOND IF OVER
          MOVE      PAURNO,SPAURNO
          RETURN
.
RKPTPAD2  MOVE      ZERO,OVRCD
          READKS    PATPA1A2;PAURNO,PADATE,PATIME,PAADD1,PAADD2:
                             PASUBR,PAADD4,PAPOST,PATELEP,PATELEB:
                             PTPADOR,PTPAMOBL,PTPAEMAL,PTPACDTE,PTPACTIM:
                             PTPAWEBC,PTPALUPD,PTPALUPT,PTPAWEBU,PTPAOSMS:
                             PTPASPAR
          GOTO      OVERCOND IF OVER
          MOVE      PAURNO,SPAURNO
          RETURN
.
RPPTPAD2  MOVE      ZERO,OVRCD
          READKP    PATPA1A2;PAURNO,PADATE,PATIME,PAADD1,PAADD2:
                             PASUBR,PAADD4,PAPOST,PATELEP,PATELEB:
                             PTPADOR,PTPAMOBL,PTPAEMAL,PTPACDTE,PTPACTIM:
                             PTPAWEBC,PTPALUPD,PTPALUPT,PTPAWEBU,PTPAOSMS:
                             PTPASPAR
          GOTO      OVERCOND IF OVER
          MOVE      PAURNO,SPAURNO
          RETURN
.
WRPTPAD2  RESET     KEY24
          WRITE     PATPA1A2,KEY24;PAURNO,PADATE,PATIME,PAADD1,PAADD2:
                                   PASUBR,PAADD4,PAPOST,PATELEP,PATELEB:
                                   PTPADOR,PTPAMOBL,PTPAEMAL,PTPACDTE,PTPACTIM:
                                   PTPAWEBC,PTPALUPD,PTPALUPT,PTPAWEBU,PTPAOSMS:
                                   PTPASPAR
          RETURN
.
UPPTPAD2  UPDATE    PATPA1A2;PAURNO,PADATE,PATIME,PAADD1,PAADD2:
                             PASUBR,PAADD4,PAPOST,PATELEP,PATELEB:
                             PTPADOR,PTPAMOBL,PTPAEMAL,PTPACDTE,PTPACTIM:
                             PTPAWEBC,PTPALUPD,PTPALUPT,PTPAWEBU,PTPAOSMS:
                             PTPASPAR
          RETURN
.
DEPTPAD2  RESET     KEY24
          DELETE    PATPA1A2,KEY24
          RETURN
.
.............................................................................
