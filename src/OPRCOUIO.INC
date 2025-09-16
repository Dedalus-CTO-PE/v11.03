
. OPRCOUIO.INC
. ------------
. Filename       :  oprcouaf.dat
. Description    :  clinic operation usage file
. Variables      :  OVRCD     FORM      1
.                   KEY21     DIM       21
.
RAOPCOU1  MOVE      ZERO,OVRCD
          RESET     KEY21
          READ      OPRCOUA1,KEY21;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSOPCOU1  MOVE      ZERO,OVRCD
          RESET     KEY21
          READ      OPRCOUA1,KEY21;;
          RETURN  
.
RDOPCOU1  MOVE      ZERO,OVRCD
          RESET     KEY21
          READ      OPRCOUA1,KEY21;OPCODATE,OPCODOCT,OPCOTYPE,OPCOOTYP,OPCOTPER:
                                   DOPCOATY,DOPCOOWN,OPCONCAS,OPCONOPR,OPCOTIME:
                                   OPCOSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPCOATY,OPCOATYP
          MOVE      DOPCOOWN,OPCOOWN
          RETURN  
.
RKOPCOU1  MOVE      ZERO,OVRCD
          READKS    OPRCOUA1;OPCODATE,OPCODOCT,OPCOTYPE,OPCOOTYP,OPCOTPER:
                             DOPCOATY,DOPCOOWN,OPCONCAS,OPCONOPR,OPCOTIME:
                             OPCOSPAR 
          GOTO      OVERCOND IF OVER
          MOVE      DOPCOATY,OPCOATYP
          MOVE      DOPCOOWN,OPCOOWN
          RETURN  
.
RPOPCOU1  MOVE      ZERO,OVRCD
          READKP    OPRCOUA1;OPCODATE,OPCODOCT,OPCOTYPE,OPCOOTYP,OPCOTPER:
                             DOPCOATY,DOPCOOWN,OPCONCAS,OPCONOPR,OPCOTIME:
                             OPCOSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPCOATY,OPCOATYP
          MOVE      DOPCOOWN,OPCOOWN
          RETURN  
.
UPOPCOU1  MOVE      OPCOATYP,DOPCOATY
          MOVE      OPCOOWN,DOPCOOWN
          UPDATE    OPRCOUA1;OPCODATE,OPCODOCT,OPCOTYPE,OPCOOTYP,OPCOTPER:
                             DOPCOATY,DOPCOOWN,OPCONCAS,OPCONOPR,OPCOTIME:
                             OPCOSPAR
          RETURN
.
WROPCOU1  MOVE      OPCOATYP,DOPCOATY
          MOVE      OPCOOWN,DOPCOOWN
          RESET     KEY21
          WRITE     OPRCOUA1,KEY21;KEY21,OPCONCAS,OPCONOPR,OPCOTIME:
                                   OPCOSPAR
                                   
          RETURN  
.
DEOPCOU1  RESET     KEY21
          DELETE    OPRCOUA1,KEY21
          RETURN
.************************************************************************
.************************************************************************
