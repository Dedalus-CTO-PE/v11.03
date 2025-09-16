
. OPRSOUIO.INC
. ------------
. Filename       :  oprsouaf.dat
. Description    :  Surgeon operation usage file
. Variables      :  OVRCD     FORM      1
.                   KEY19     DIM       19
.
RAOPSOU1  MOVE      ZERO,OVRCD
          RESET     KEY19
          READ      OPRSOUA1,KEY19;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSOPSOU1  MOVE      ZERO,OVRCD
          RESET     KEY19
          READ      OPRSOUA1,KEY19;;
          RETURN  
.
RDOPSOU1  MOVE      ZERO,OVRCD
          RESET     KEY19
          READ      OPRSOUA1,KEY19;OPSODATE,OPSODOCT,OPSOTYPE,OPSOOTYP: 
                                   DOPSOATY,DOPSOOWN,DOPSOTRN,OPSONCAS:
                                   OPSONOPR,OPSOTIME,OPSOSPAR
                                   
          GOTO      OVERCOND IF OVER
          MOVE      DOPSOATY,OPSOATYP
          MOVE      DOPSOOWN,OPSOOWN
          MOVE      DOPSOTRN,OPSOTRNE
          RETURN  
.
RKOPSOU1  MOVE      ZERO,OVRCD
          READKS    OPRSOUA1;OPSODATE,OPSODOCT,OPSOTYPE,OPSOOTYP:
                             DOPSOATY,DOPSOOWN,DOPSOTRN,OPSONCAS:
                             OPSONOPR,OPSOTIME,OPSOSPAR 
          GOTO      OVERCOND IF OVER
          MOVE      DOPSOATY,OPSOATYP
          MOVE      DOPSOTRN,OPSOTRNE
          MOVE      DOPSOOWN,OPSOOWN
          RETURN  
.
RPOPSOU1  MOVE      ZERO,OVRCD
          READKP    OPRSOUA1;OPSODATE,OPSODOCT,OPSOTYPE,OPSOOTYP:
                             DOPSOATY,DOPSOOWN,DOPSOTRN,OPSONCAS:
                             OPSONOPR,OPSOTIME,OPSOSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPSOATY,OPSOATYP
          MOVE      DOPSOOWN,OPSOOWN
          MOVE      DOPSOTRN,OPSOTRNE
          RETURN  
.
UPOPSOU1  MOVE      OPSOATYP,DOPSOATY
          MOVE      OPSOTRNE,DOPSOTRN
          MOVE      OPSOOWN,DOPSOOWN
          UPDATE    OPRSOUA1;OPSODATE,OPSODOCT,OPSOTYPE,OPSOOTYP:
                             DOPSOATY,DOPSOOWN,DOPSOTRN,OPSONCAS:
                             OPSONOPR,OPSOTIME,OPSOSPAR
                             
          RETURN
.
WROPSOU1  MOVE      OPSOATYP,DOPSOATY
          MOVE      OPSOOWN,DOPSOOWN
          MOVE      OPSOTRNE,DOPSOTRN
          RESET     KEY19
          WRITE     OPRSOUA1,KEY19;KEY19,OPSONCAS,OPSONOPR,OPSOTIME:
                                   OPSOSPAR
          RETURN  
.
DEOPSOU1  RESET     KEY19
          DELETE    OPRSOUA1,KEY19
          RETURN
.************************************************************************
.************************************************************************
