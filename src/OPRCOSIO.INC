. OPRCOSIO.INC
. ------------
. Filename       :  oprcosaf.dat
. Description    :  clinic operation Summary file
. Variables      :  OVRCD     FORM      1
.                   KEY21     DIM       21
.
RAOPCOS1  MOVE      ZERO,OVRCD
          RESET     KEY21
          READ      OPRCOSA1,KEY21;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSOPCOS1  MOVE      ZERO,OVRCD
          RESET     KEY21
          READ      OPRCOSA1,KEY21;;
          RETURN  
.
RDOPCOS1  MOVE      ZERO,OVRCD
          RESET     KEY21
          READ      OPRCOSA1,KEY21;OPCPDATE,OPCPDOCT,OPCPOPER,OPCPTTIM,OPCPLTIM:
                                   OPCPHTIM,OPCPNCAS,OPCPNOPR,OPCPSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RKOPCOS1  MOVE      ZERO,OVRCD
          READKS    OPRCOSA1;OPCPDATE,OPCPDOCT,OPCPOPER,OPCPTTIM,OPCPLTIM:
                             OPCPHTIM,OPCPNCAS,OPCPNOPR,OPCPSPAR 
                             
          GOTO      OVERCOND IF OVER
          RETURN  
.
RPOPCOS1  MOVE      ZERO,OVRCD
          READKP    OPRCOSA1;OPCPDATE,OPCPDOCT,OPCPOPER,OPCPTTIM,OPCPLTIM:
                             OPCPHTIM,OPCPNCAS,OPCPNOPR,OPCPSPAR
                             
          GOTO      OVERCOND IF OVER
          RETURN  
.
UPOPCOS1  UPDATE    OPRCOSA1;OPCPDATE,OPCPDOCT,OPCPOPER,OPCPTTIM,OPCPLTIM:
                             OPCPHTIM,OPCPNCAS,OPCPNOPR,OPCPSPAR
          RETURN
.
WROPCOS1  RESET     KEY21
          WRITE     OPRCOSA1,KEY21;KEY21,OPCPTTIM,OPCPLTIM,OPCPHTIM,OPCPNCAS:
                                   OPCPNOPR,OPCPSPAR
          RETURN  
.
DEOPCOS1  RESET     KEY21
          DELETE    OPRCOSA1,KEY21
          RETURN
.************************************************************************
.************************************************************************
