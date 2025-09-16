.
. WATIOPRO.INC
. ------------
. Filename       :  watproaf.dat
. Description    :  Waiting Lists Procedure File I/O Subroutines
. Variables      :  OVRCD     FORM      1
.                   KEY9      DIM       9
.                   KEY12     DIM       12
.                   KEY59     DIM       59
.                   KEY19     DIM       19
.                   KEY62     DIM       62
. Modifications  :  
.         V5.07.01  21/10/1999  J Habasque
.                   Added WTWPACTV
.
.                   V5.01.01  22.02.90  E.Phan
.                   Replaced WPTYPE with WPESTLS.
.
RDAPROA1  RESET     KEY9
          MOVE      ZERO,OVRCD
          READ      WATPROA1,KEY9;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSPROA1  RESET     KEY9
          READ      WATPROA1,KEY9;;
          RETURN
.
RDPROA1   MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      WATPROA1,KEY9;WPCODE,WPDESC,WPTIME,WPESTLS,WPGRP:
                                  WPRHAT,WPCHET,WTWPHDPE,WTWPDRGC,WTWPACTV:
                                  WPTMASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RDKPROA1  MOVE      ZERO,OVRCD
          READKS    WATPROA1;WPCODE,WPDESC,WPTIME,WPESTLS,WPGRP:
                             WPRHAT,WPCHET,WTWPHDPE,WTWPDRGC,WTWPACTV,WPTMASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPROA2  RESET     KEY12
          MOVE      ZERO,OVRCD
          READ      WATPROA2,KEY12;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSPROA2  RESET     KEY12
          READ      WATPROA2,KEY12;;
          RETURN
.
RDPROA2   MOVE      ZERO,OVRCD
          RESET     KEY12
          READ      WATPROA2,KEY12;WPCODE,WPDESC,WPTIME,WPESTLS,WPGRP:
                                   WPRHAT,WPCHET,WTWPHDPE,WTWPDRGC,WTWPACTV:
                                   WPTMASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RDKPROA2  MOVE      ZERO,OVRCD
          READKS    WATPROA2;WPCODE,WPDESC,WPTIME,WPESTLS,WPGRP:
                             WPRHAT,WPCHET,WTWPHDPE,WTWPDRGC,WTWPACTV,WPTMASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPPROA2  MOVE      ZERO,OVRCD
          READKP    WATPROA2;WPCODE,WPDESC,WPTIME,WPESTLS,WPGRP:
                             WPRHAT,WPCHET,WTWPHDPE,WTWPDRGC,WTWPACTV,WPTMASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
WRPROA2   RESET     KEY12
          WRITE     WATPROA2,KEY12;WPCODE,WPDESC,WPTIME,WPESTLS,WPGRP:
                                   WPRHAT,WPCHET,WTWPHDPE,WTWPDRGC,WTWPACTV:
                                   WPTMASPAR
          RETURN
.
WRPROA1   RESET     KEY9
          WRITE     WATPROA1,KEY9;WPCODE,WPDESC,WPTIME,WPESTLS,WPGRP:
                                  WPRHAT,WPCHET,WTWPHDPE,WTWPDRGC,WTWPACTV:
                                  WPTMASPAR
          RETURN
.
UPPROA1   UPDATE    WATPROA1;WPCODE,WPDESC,WPTIME,WPESTLS,WPGRP:
                             WPRHAT,WPCHET,WTWPHDPE,WTWPDRGC,WTWPACTV,WPTMASPAR
          RETURN
.
UPPROA2   UPDATE    WATPROA2;WPCODE,WPDESC,WPTIME,WPESTLS,WPGRP:
                             WPRHAT,WPCHET,WTWPHDPE,WTWPDRGC,WTWPACTV,WPTMASPAR
          RETURN
.
DEPROA1   RESET     KEY9
          MOVE      ZERO,OVRCD
          DELETE    WATPROA1,KEY9
          RETURN
.
DEPROA2   RESET     KEY12
          MOVE      ZERO,OVRCD
          DELETE    WATPROA2,KEY12
          RETURN
.
.******************************************************************************
.    IO for 3rd index
.******************************************************************************
RDAPROA3  RESET     KEY59
          MOVE      ZERO,OVRCD
          READ      WATPROA3,KEY59;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSPROA3  RESET     KEY59
          READ      WATPROA3,KEY59;;
          RETURN
.
RDPROA3   MOVE      ZERO,OVRCD
          RESET     KEY59
          READ      WATPROA3,KEY59;WPCODE,WPDESC,WPTIME,WPESTLS,WPGRP:
                                   WPRHAT,WPCHET,WTWPHDPE,WTWPDRGC,WTWPACTV:
                                   WPTMASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RDKPROA3  MOVE      ZERO,OVRCD
          READKS    WATPROA3;WPCODE,WPDESC,WPTIME,WPESTLS,WPGRP:
                             WPRHAT,WPCHET,WTWPHDPE,WTWPDRGC,WTWPACTV,WPTMASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPPROA3  MOVE      ZERO,OVRCD
          READKP    WATPROA3;WPCODE,WPDESC,WPTIME,WPESTLS,WPGRP:
                             WPRHAT,WPCHET,WTWPHDPE,WTWPDRGC,WTWPACTV,WPTMASPAR
          GOTO      OVERCOND IF OVER
          RETURN

.******************************************************************************
.    IO for 4rd index
.******************************************************************************
RDAPROA4  RESET     KEY62
          MOVE      ZERO,OVRCD
          READ      WATPROA4,KEY62;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSPROA4  RESET     KEY62
          READ      WATPROA4,KEY62;;
          RETURN
.
RDPROA4   MOVE      ZERO,OVRCD
          RESET     KEY62
          READ      WATPROA4,KEY62;WPCODE,WPDESC,WPTIME,WPESTLS,WPGRP:
                                   WPRHAT,WPCHET,WTWPHDPE,WTWPDRGC,WTWPACTV:
                                   WPTMASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RDKPROA4  MOVE      ZERO,OVRCD
          READKS    WATPROA4;WPCODE,WPDESC,WPTIME,WPESTLS,WPGRP:
                             WPRHAT,WPCHET,WTWPHDPE,WTWPDRGC,WTWPACTV,WPTMASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPPROA4  MOVE      ZERO,OVRCD
          READKP    WATPROA4;WPCODE,WPDESC,WPTIME,WPESTLS,WPGRP:
                             WPRHAT,WPCHET,WTWPHDPE,WTWPDRGC,WTWPACTV,WPTMASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.******************************************************************************
.
AWPROA1   REP       " 0",WTWPAUDD
          PACK      KEY19,WTWPAUDD,WTWPAUDT,WTWPAUDP,WTWPAUDR
          RESET     KEY19
          WRITE     WATAUDWP,KEY19;WTWPAUDD,WTWPAUDT,WTWPAUDP,WTWPAUDR:
                                   WTWPAUDS,WTWPAUDO:
                                   WPCODE,WPDESC,WPTIME,WPESTLS,WPGRP:
                                   WPRHAT,WPCHET,WTWPHDPE,WTWPDRGC,WTWPACTV:
                                   WPTMASPAR
          RETURN
.
ASPROA1   RESET     KEY19
          READ      WATAUDWP,KEY19;;
          RETURN
.
AKPROA1   READKS    WATAUDWP;WTWPAUDD,WTWPAUDT,WTWPAUDP,WTWPAUDR:
                             WTWPAUDS,WTWPAUDO:
                             WPCODE,WPDESC,WPTIME,WPESTLS,WPGRP:
                             WPRHAT,WPCHET,WTWPHDPE,WTWPDRGC,WTWPACTV,WPTMASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
ADPROA1   PACK      KEY19,WTWPAUDD,WTWPAUDT,WTWPAUDP,WTWPAUDR
          RESET     KEY19
          MOVE      ZERO,OVRCD
          DELETE    WATAUDWP,KEY19
          RETURN
