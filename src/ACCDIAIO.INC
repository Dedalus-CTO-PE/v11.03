.
. ACCDIAIO    
. --------
. Filename       :  accdiaaf
. Description    :  ACC Diagnosis Details IO
. Keys           :  KEY23
. Modifications  :
.
RSACDIA1  RESET     KEY23
          READ      ACCDIAA1,KEY23;;
          RETURN
.
RAACDIA1  RESET     KEY23
          MOVE      ZERO,OVRCD
          READ      ACCDIAA1,KEY23;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDACDIA1  RESET     KEY23
          MOVE      ZERO,OVRCD
          READ      ACCDIAA1,KEY23;ACDIACCN,DACDICNT,ACDICSYC,ACDIDIAG:
                                  ACDISIDE,ACDISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DACDICNT,ACDICONT
          RETURN
.
RKACDIA1  MOVE      ZERO,OVRCD
          READKS    ACCDIAA1;ACDIACCN,DACDICNT,ACDICSYC,ACDIDIAG:
                                  ACDISIDE,ACDISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DACDICNT,ACDICONT
          RETURN
.
RPACDIA1  MOVE      ZERO,OVRCD
          READKP    ACCDIAA1;ACDIACCN,DACDICNT,ACDICSYC,ACDIDIAG:
                                  ACDISIDE,ACDISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DACDICNT,ACDICONT
          RETURN
.
UPACDIA1  MOVE      ACDICONT,DACDICNT
          UPDATE    ACCDIAA1;ACDIACCN,DACDICNT,ACDICSYC,ACDIDIAG:
                                  ACDISIDE,ACDISPAR
          RETURN
.
WRACDIA1  RESET     KEY23
          MOVE      ACDICONT,DACDICNT
          WRITE     ACCDIAA1,KEY23;ACDIACCN,DACDICNT,ACDICSYC,ACDIDIAG:
                                  ACDISIDE,ACDISPAR
          RETURN
.
DEACDIA1  RESET     KEY23
          DELETE    ACCDIAA1,KEY23
          RETURN
+
