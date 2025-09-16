
. OPRANEIO.INC
. ------------
. Filename       :  opranaef.dat
. Description    :  Anaestetist Usage file
. Variables      :  OVRCD     FORM      1
.                   KEY15     DIM       15
.
RAOPANE1  MOVE      ZERO,OVRCD
          RESET     KEY15
          READ      OPRANAE1,KEY15;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSOPANE1  MOVE      ZERO,OVRCD
          RESET     KEY15
          READ      OPRANAE1,KEY15;;
          RETURN  
.
RDOPANE1  MOVE      ZERO,OVRCD
          RESET     KEY15
          READ      OPRANAE1,KEY15;OPANDATE,OPANDOCT,OPANTYPE,OPANNUMB,OPANSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RKOPANE1  MOVE      ZERO,OVRCD
          READKS    OPRANAE1;OPANDATE,OPANDOCT,OPANTYPE,OPANNUMB,OPANSPAR 
          GOTO      OVERCOND IF OVER
          RETURN  
.
RPOPANE1  MOVE      ZERO,OVRCD
          READKP    OPRANAE1;OPANDATE,OPANDOCT,OPANTYPE,OPANNUMB,OPANSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
UPOPANE1  UPDATE    OPRANAE1;OPANDATE,OPANDOCT,OPANTYPE,OPANNUMB,OPANSPAR
          RETURN
.
WROPANE1  RESET     KEY15
          WRITE     OPRANAE1,KEY15;KEY15,OPANNUMB,OPANSPAR
          RETURN  
.
DEOPANE1  RESET     KEY15
          DELETE    OPRANAE1,KEY15
          RETURN
.************************************************************************
.************************************************************************
