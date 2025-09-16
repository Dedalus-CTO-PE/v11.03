. OPROTSIO.INC
. ------------
. Filename       :  oprotsaf.dat
. Description    :  Operation Type Summary file
. Variables      :  OVRCD     FORM      1
.                   KEY15     DIM       15
.
RAOPOTS1  MOVE      ZERO,OVRCD
          RESET     KEY15
          READ      OPROTSA1,KEY15;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSOPOTS1  MOVE      ZERO,OVRCD
          RESET     KEY15
          READ      OPROTSA1,KEY15;;
          RETURN  
.
RDOPOTS1  MOVE      ZERO,OVRCD
          RESET     KEY15
          READ      OPROTSA1,KEY15;OPOTDATE,OPOTTYPE,OPOTPERD,OPOTUSER,OPOTNCAS:
                                   OPOTNOPR,OPOTTIME,OPOTDOFW,OPOTSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RKOPOTS1  MOVE      ZERO,OVRCD
          READKS    OPROTSA1;OPOTDATE,OPOTTYPE,OPOTPERD,OPOTUSER,OPOTNCAS:
                             OPOTNOPR,OPOTTIME,OPOTDOFW,OPOTSPAR 
          GOTO      OVERCOND IF OVER
          RETURN  
.
RPOPOTS1  MOVE      ZERO,OVRCD
          READKP    OPROTSA1;OPOTDATE,OPOTTYPE,OPOTPERD,OPOTUSER,OPOTNCAS:
                             OPOTNOPR,OPOTTIME,OPOTDOFW,OPOTSPAR 
                             
          GOTO      OVERCOND IF OVER
          RETURN  
.
UPOPOTS1  UPDATE    OPROTSA1;OPOTDATE,OPOTTYPE,OPOTPERD,OPOTUSER,OPOTNCAS:
                             OPOTNOPR,OPOTTIME,OPOTDOFW,OPOTSPAR
          RETURN
.
WROPOTS1  RESET     KEY15
          WRITE     OPROTSA1,KEY15;KEY15,OPOTNCAS,OPOTNOPR,OPOTTIME:
                                   OPOTDOFW,OPOTSPAR
                                   
          RETURN  
.
DEOPOTS1  RESET     KEY15
          DELETE    OPROTSA1,KEY15
          RETURN
...............................................................................
