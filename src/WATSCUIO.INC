.
. WATSCUIO.INC
. ------------
. Filenames       : watscuaf
. Description     : Waiting Lists 'Clinic/Unit suspension file'
.
RSWTSCU1  RESET     KEY18
          READ      WATSCUA1,KEY18;;
          RETURN
.
RAWTSCU1  RESET     KEY18
          MOVE      ZERO,OVRCD
          READ      WATSCUA1,KEY18;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTSCU1  RESET     KEY18
          MOVE      ZERO,OVRCD
          READ      WATSCUA1,KEY18;WTSCDATE,WTSCUNIT,WTSCDOCT,WTSCPRTY:
                                  WTSCSBEU,WTSCSBES,WTSCSSEU,WTSCSUES,WTSCLPUN:
                                  WTSCLPSU,WTSCDELT,WTSCSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTSCU1  MOVE      ZERO,OVRCD
          READKS    WATSCUA1;WTSCDATE,WTSCUNIT,WTSCDOCT,WTSCPRTY:
                                  WTSCSBEU,WTSCSBES,WTSCSSEU,WTSCSUES,WTSCLPUN:
                                  WTSCLPSU,WTSCDELT,WTSCSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTSCU1  MOVE      ZERO,OVRCD
          READKP    WATSCUA1;WTSCDATE,WTSCUNIT,WTSCDOCT,WTSCPRTY:
                                  WTSCSBEU,WTSCSBES,WTSCSSEU,WTSCSUES,WTSCLPUN:
                                  WTSCLPSU,WTSCDELT,WTSCSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTSCU1  UPDATE    WATSCUA1;WTSCDATE,WTSCUNIT,WTSCDOCT,WTSCPRTY:
                                  WTSCSBEU,WTSCSBES,WTSCSSEU,WTSCSUES,WTSCLPUN:
                                  WTSCLPSU,WTSCDELT,WTSCSPAR
          RETURN
.
WRWTSCU1  RESET     KEY18
          WRITE     WATSCUA1,KEY18;WTSCDATE,WTSCUNIT,WTSCDOCT,WTSCPRTY:
                                  WTSCSBEU,WTSCSBES,WTSCSSEU,WTSCSUES,WTSCLPUN:
                                  WTSCLPSU,WTSCDELT,WTSCSPAR
          RETURN
.
DEWTSCU1  RESET     KEY18
          DELETE    WATSCUA1,KEY18
          RETURN
.
