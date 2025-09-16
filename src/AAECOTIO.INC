.
. AAECOTIO.INC
. ------------
. Filenames       : aaecotio
. Description     : A&E Consultant on Take details file
.
. ******* INDEX ONE *******
.
RSAECOT1  RESET     KEY13
          READ      AAECOTA1,KEY13;;
          RETURN
.
RAAECOT1  RESET     KEY13
          MOVE      ZERO,OVRCD
          READ      AAECOTA1,KEY13;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAECOT1  RESET     KEY13
          MOVE      ZERO,OVRCD
          READ      AAECOTA1,KEY13;AECTDATE,AECTTIME,AECTCONS,AECTSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAECOT1  MOVE      ZERO,OVRCD
          READKS    AAECOTA1;AECTDATE,AECTTIME,AECTCONS,AECTSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAECOT1  MOVE      ZERO,OVRCD
          READKP    AAECOTA1;AECTDATE,AECTTIME,AECTCONS,AECTSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAECOT1  UPDATE    AAECOTA1;AECTDATE,AECTTIME,AECTCONS,AECTSPAR
          RETURN
.
WRAECOT1  RESET     KEY13
          WRITE     AAECOTA1,KEY13;AECTDATE,AECTTIME,AECTCONS,AECTSPAR
          RETURN
.
DEAECOT1  RESET     KEY13
          DELETE    AAECOTA1,KEY13
          RETURN
............................................................................
