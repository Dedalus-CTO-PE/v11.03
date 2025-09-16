.
. OPRCSUIO.INC
. ------------
. Filename       :  oprcsuaf.dat
. Description    :  clinic session usage file
. Variables      :  OVRCD     FORM      1
.                   KEY16     DIM       16
.
RAOPCSU1  MOVE      ZERO,OVRCD
          RESET     KEY16
          READ      OPRCSUA1,KEY16;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSOPCSU1  MOVE      ZERO,OVRCD
          RESET     KEY16
          READ      OPRCSUA1,KEY16;;
          RETURN  
.
RDOPCSU1  MOVE      ZERO,OVRCD
          RESET     KEY16
          READ      OPRCSUA1,KEY16;OPCSDATE,OPCSDOCT,OPCSTYPE,OPCSTIME,OPCSBSES:
                                   OPCSBTIM,OPCSUSES,OPCSUTIM,OPCSBRKS:
                                   OPCSSTIM,OPCSSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RKOPCSU1  MOVE      ZERO,OVRCD
          READKS    OPRCSUA1;OPCSDATE,OPCSDOCT,OPCSTYPE,OPCSTIME,OPCSBSES:
                             OPCSBTIM,OPCSUSES,OPCSUTIM,OPCSBRKS:
                                   OPCSSTIM,OPCSSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RPOPCSU1  MOVE      ZERO,OVRCD
          READKP    OPRCSUA1;OPCSDATE,OPCSDOCT,OPCSTYPE,OPCSTIME,OPCSBSES:
                             OPCSBTIM,OPCSUSES,OPCSUTIM,OPCSBRKS:
                                   OPCSSTIM,OPCSSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
UPOPCSU1  UPDATE    OPRCSUA1;OPCSDATE,OPCSDOCT,OPCSTYPE,OPCSTIME,OPCSBSES:
                             OPCSBTIM,OPCSUSES,OPCSUTIM,OPCSBRKS:
                                   OPCSSTIM,OPCSSPAR
          RETURN
.
WROPCSU1  RESET     KEY16
          WRITE     OPRCSUA1,KEY16;KEY16,OPCSBSES,OPCSBTIM,OPCSUSES,OPCSUTIM:
                                   OPCSBRKS,OPCSSTIM,OPCSSPAR
          RETURN  
.
DEOPCSU1  RESET     KEY16
          DELETE    OPRCSUA1,KEY16
          RETURN
...............................................................................
