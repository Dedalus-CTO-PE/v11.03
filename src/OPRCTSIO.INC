.
. OPRCTSIO.INC
. ------------
. Filename       :  oprctsaf.dat
. Description    :  Clinic Code Summary file
. Variables      :  OVRCD     FORM      1
.                   KEY18     DIM       18
.
RAOPCTS1  MOVE      ZERO,OVRCD
          RESET     KEY18
          READ      OPRCTSA1,KEY18;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSOPCTS1  MOVE      ZERO,OVRCD
          RESET     KEY18
          READ      OPRCTSA1,KEY18;;
          RETURN  
.
RDOPCTS1  MOVE      ZERO,OVRCD
          RESET     KEY18
          READ      OPRCTSA1,KEY18;OPCTDATE,OPCTCLIN,OPCTPERD,OPCTUSER,OPCTNCAS:
                                   OPCTNOPR,OPCTTIME,OPCTDOFW,OPCTSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RKOPCTS1  MOVE      ZERO,OVRCD
          READKS    OPRCTSA1;OPCTDATE,OPCTCLIN,OPCTPERD,OPCTUSER,OPCTNCAS:
                             OPCTNOPR,OPCTTIME,OPCTDOFW,OPCTSPAR 
          GOTO      OVERCOND IF OVER
          RETURN  
.
RPOPCTS1  MOVE      ZERO,OVRCD
          READKP    OPRCTSA1;OPCTDATE,OPCTCLIN,OPCTPERD,OPCTUSER,OPCTNCAS:
                             OPCTNOPR,OPCTTIME,OPCTDOFW,OPCTSPAR 
                             
          GOTO      OVERCOND IF OVER
          RETURN  
.
UPOPCTS1  UPDATE    OPRCTSA1;OPCTDATE,OPCTCLIN,OPCTPERD,OPCTUSER,OPCTNCAS:
                             OPCTNOPR,OPCTTIME,OPCTDOFW,OPCTSPAR
          RETURN
.
WROPCTS1  RESET     KEY18
          WRITE     OPRCTSA1,KEY18;OPCTDATE,OPCTCLIN,OPCTPERD,OPCTUSER,OPCTNCAS:
                                   OPCTNOPR,OPCTTIME,OPCTDOFW,OPCTSPAR
          RETURN  
.
DEOPCTS1  RESET     KEY18
          DELETE    OPRCTSA1,KEY18
          RETURN
..............................................................................
