.
. AAEMRDIO.INC
. ------------
. Filenames       : aaemrdaf
. Description     : A&E Patient Diagnosis codes file
.
. ******* INDEX ONE *******
.
RSAEMRD1  RESET     KEY11
          READ      AAEMRDA1,KEY11;;
          RETURN
.
RAAEMRD1  RESET     KEY11
          MOVE      ZERO,OVRCD
          READ      AAEMRDA1,KEY11;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAEMRD1  RESET     KEY11
          MOVE      ZERO,OVRCD
          READ      AAEMRDA1,KEY11;DAEMREVN,AEMRTYPE,DAEMRUNI,AEMRCODE:
                                   AEMRDTCC,AEMROPCC,AEMRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DAEMREVN,AEMREVNT
          MOVE      DAEMRUNI,AEMRUNIQ
          RETURN
.
RKAEMRD1  MOVE      ZERO,OVRCD
          READKS    AAEMRDA1;DAEMREVN,AEMRTYPE,DAEMRUNI,AEMRCODE:
                             AEMRDTCC,AEMROPCC,AEMRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DAEMREVN,AEMREVNT
          MOVE      DAEMRUNI,AEMRUNIQ
          RETURN
.
RPAEMRD1  MOVE      ZERO,OVRCD
          READKP    AAEMRDA1;DAEMREVN,AEMRTYPE,DAEMRUNI,AEMRCODE:
                             AEMRDTCC,AEMROPCC,AEMRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DAEMREVN,AEMREVNT
          MOVE      DAEMRUNI,AEMRUNIQ
          RETURN
.
UPAEMRD1  MOVE      AEMREVNT,DAEMREVN
          MOVE      AEMRUNIQ,DAEMRUNI
          UPDATE    AAEMRDA1;DAEMREVN,AEMRTYPE,DAEMRUNI,AEMRCODE:
                             AEMRDTCC,AEMROPCC,AEMRSPAR
          RETURN
.
WRAEMRD1  RESET     KEY11
          MOVE      AEMREVNT,DAEMREVN
          MOVE      AEMRUNIQ,DAEMRUNI
          WRITE     AAEMRDA1,KEY11;DAEMREVN,AEMRTYPE,DAEMRUNI,AEMRCODE:
                                   AEMRDTCC,AEMROPCC,AEMRSPAR
          RETURN
.
DEAEMRD1  RESET     KEY11
          DELETE    AAEMRDA1,KEY11
          RETURN
..............................................................................
