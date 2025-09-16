.
. WATSUSIO.INC
. ------------
. Filenames       : watsusaf
. Description     : Waiting Lists 'Procedure Suspension file'
.
. -----------------------------------------
. ------- I/O routines for WATSUSA1 -------
. -----------------------------------------
.
RSWTSUS1  RESET     KEY21
          READ      WATSUSA1,KEY21;;
          RETURN
.
RAWTSUS1  RESET     KEY21
          MOVE      ZERO,OVRCD
          READ      WATSUSA1,KEY21;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTSUS1  RESET     KEY21
          MOVE      ZERO,OVRCD
          READ      WATSUSA1,KEY21;WTSUURNO,WTSUCODE,DWTSUCNT,DWTSUSCN:
                                   WTSUFDAT,WTSUTDAT,WTSUREAS,WTSULSTS:
                                   WTSUUSER,WTSUAUTO,WTSUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWTSUCNT,WTSUCNT
          MOVE      DWTSUSCN,WTSUSCNT
          RETURN
.
RKWTSUS1  MOVE      ZERO,OVRCD
          READKS    WATSUSA1;WTSUURNO,WTSUCODE,DWTSUCNT,DWTSUSCN:
                             WTSUFDAT,WTSUTDAT,WTSUREAS,WTSULSTS:
                             WTSUUSER,WTSUAUTO,WTSUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWTSUCNT,WTSUCNT
          MOVE      DWTSUSCN,WTSUSCNT
          RETURN
.
RPWTSUS1  MOVE      ZERO,OVRCD
          READKP    WATSUSA1;WTSUURNO,WTSUCODE,DWTSUCNT,DWTSUSCN:
                             WTSUFDAT,WTSUTDAT,WTSUREAS,WTSULSTS:
                             WTSUUSER,WTSUAUTO,WTSUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWTSUCNT,WTSUCNT
          MOVE      DWTSUSCN,WTSUSCNT
          RETURN
.
UPWTSUS1  MOVE      WTSUCNT,DWTSUCNT
          MOVE      WTSUSCNT,DWTSUSCN
          UPDATE    WATSUSA1;WTSUURNO,WTSUCODE,DWTSUCNT,DWTSUSCN:
                             WTSUFDAT,WTSUTDAT,WTSUREAS,WTSULSTS:
                             WTSUUSER,WTSUAUTO,WTSUSPAR
          RETURN
.
WRWTSUS1  RESET     KEY21
          MOVE      WTSUCNT,DWTSUCNT
          MOVE      WTSUSCNT,DWTSUSCN
          WRITE     WATSUSA1,KEY21;WTSUURNO,WTSUCODE,DWTSUCNT,DWTSUSCN:
                                   WTSUFDAT,WTSUTDAT,WTSUREAS,WTSULSTS:
                                   WTSUUSER,WTSUAUTO,WTSUSPAR
          RETURN
.
DEWTSUS1  RESET     KEY21
          DELETE    WATSUSA1,KEY21
          RETURN
. -----------------------------------------
. ------- I/O routines for WATSUSA2 -------
. -----------------------------------------
.
RSWTSUS2  RESET     KEY29
          READ      WATSUSA2,KEY29;;
          RETURN
.
RAWTSUS2  RESET     KEY29
          MOVE      ZERO,OVRCD
          READ      WATSUSA2,KEY29;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTSUS2  RESET     KEY29
          MOVE      ZERO,OVRCD
          READ      WATSUSA2,KEY29;WTSUURNO,WTSUCODE,DWTSUCNT,DWTSUSCN:
                                   WTSUFDAT,WTSUTDAT,WTSUREAS,WTSULSTS:
                                   WTSUUSER,WTSUAUTO,WTSUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWTSUCNT,WTSUCNT
          MOVE      DWTSUSCN,WTSUSCNT
          RETURN
.
RKWTSUS2  MOVE      ZERO,OVRCD
          READKS    WATSUSA2;WTSUURNO,WTSUCODE,DWTSUCNT,DWTSUSCN:
                             WTSUFDAT,WTSUTDAT,WTSUREAS,WTSULSTS:
                             WTSUUSER,WTSUAUTO,WTSUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWTSUCNT,WTSUCNT
          MOVE      DWTSUSCN,WTSUSCNT
          RETURN
.
RPWTSUS2  MOVE      ZERO,OVRCD
          READKP    WATSUSA2;WTSUURNO,WTSUCODE,DWTSUCNT,DWTSUSCN:
                             WTSUFDAT,WTSUTDAT,WTSUREAS,WTSULSTS:
                             WTSUUSER,WTSUAUTO,WTSUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWTSUCNT,WTSUCNT
          MOVE      DWTSUSCN,WTSUSCNT
          RETURN
.
UPWTSUS2  MOVE      WTSUCNT,DWTSUCNT
          MOVE      WTSUSCNT,DWTSUSCN
          UPDATE    WATSUSA2;WTSUURNO,WTSUCODE,DWTSUCNT,DWTSUSCN:
                             WTSUFDAT,WTSUTDAT,WTSUREAS,WTSULSTS:
                             WTSUUSER,WTSUAUTO,WTSUSPAR
          RETURN
.
WRWTSUS2  RESET     KEY29
          MOVE      WTSUCNT,DWTSUCNT
          MOVE      WTSUSCNT,DWTSUSCN
          WRITE     WATSUSA2,KEY29;WTSUURNO,WTSUCODE,DWTSUCNT,DWTSUSCN:
                                   WTSUFDAT,WTSUTDAT,WTSUREAS,WTSULSTS:
                                   WTSUUSER,WTSUAUTO,WTSUSPAR
          RETURN
.
DEWTSUS2  RESET     KEY29
          DELETE    WATSUSA2,KEY29
          RETURN
..............................................................................
