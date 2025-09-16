. OPRDEPIO.INC
. ------------
. Filename       :  oprdepaf.dat
. Description    :  Operating room department statistics file
. Variables      :  OVRCD     FORM      1
.                   KEY9      DIM       9 
.
RAOPDEP1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      OPRDEPA1,KEY9;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSOPDEP1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      OPRDEPA1,KEY9;;
          RETURN  
.
RDOPDEP1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      OPRDEPA1,KEY9;OPDEDATE,OPDEDEPT,OPDENCAS,OPDENOPR,OPDESPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RKOPDEP1  MOVE      ZERO,OVRCD
          READKS    OPRDEPA1;OPDEDATE,OPDEDEPT,OPDENCAS,OPDENOPR,OPDESPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RPOPDEP1  MOVE      ZERO,OVRCD
          READKP    OPRDEPA1;OPDEDATE,OPDEDEPT,OPDENCAS,OPDENOPR,OPDESPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
UPOPDEP1  UPDATE    OPRDEPA1;OPDEDATE,OPDEDEPT,OPDENCAS,OPDENOPR,OPDESPAR
          RETURN
.
WROPDEP1  RESET     KEY9
          WRITE     OPRDEPA1,KEY9;KEY9,OPDENCAS,OPDENOPR,OPDESPAR
          RETURN  
.
DEOPDEP1  RESET     KEY9
          DELETE    OPRDEPA1,KEY9
          RETURN
.************************************************************************
.************************************************************************
