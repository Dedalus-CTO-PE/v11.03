. OPRWARIO.INC
. ------------
. Filename       :  oprwaraf.dat
. Description    :  Operating room ward statistics file
. Variables      :  OVRCD     FORM      1
.                   KEY9      DIM       9 
.
RAOPWAR1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      OPRWARA1,KEY9;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSOPWAR1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      OPRWARA1,KEY9;;
          RETURN  
.
RDOPWAR1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      OPRWARA1,KEY9;OPWADATE,OPWAWARD,OPWANCAS,OPWANOPR,OPWASPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RKOPWAR1  MOVE      ZERO,OVRCD
          READKS    OPRWARA1;OPWADATE,OPWAWARD,OPWANCAS,OPWANOPR,OPWASPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RPOPWAR1  MOVE      ZERO,OVRCD
          READKP    OPRWARA1;OPWADATE,OPWAWARD,OPWANCAS,OPWANOPR,OPWASPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
UPOPWAR1  UPDATE    OPRWARA1;OPWADATE,OPWAWARD,OPWANCAS,OPWANOPR,OPWASPAR
          RETURN
.
WROPWAR1  RESET     KEY9
          WRITE     OPRWARA1,KEY9;KEY9,OPWANCAS,OPWANOPR,OPWASPAR
          RETURN  
.
DEOPWAR1  RESET     KEY9
          DELETE    OPRWARA1,KEY9
          RETURN
.************************************************************************
.************************************************************************
