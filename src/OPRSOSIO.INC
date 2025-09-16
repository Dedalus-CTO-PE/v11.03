. V9.03.01 29/07/2004 Peter Vela     CAR 51685
.          Added 2nd Index for IBAOPR77 
.
. OPRSOSIO.INC
. ------------
. Filename       :  oprsosaf.dat
. Description    :  Operation type summary file i/o
. Variables      :  OVRCD     FORM      1
.                   KEY21     DIM       21
.
RAOPSOS1  MOVE      ZERO,OVRCD
          RESET     KEY21
          READ      OPRSOSA1,KEY21;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSOPSOS1  MOVE      ZERO,OVRCD
          RESET     KEY21
          READ      OPRSOSA1,KEY21;;
          RETURN  
.
RDOPSOS1  MOVE      ZERO,OVRCD
          RESET     KEY21
          READ      OPRSOSA1,KEY21;OPSPDATE,OPSPDOCT,OPSPOPER,OPSPTTIM:
                                   OPSPLTIM,OPSPHTIM,OPSPNCAS,OPSPNOPR,OPSPSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RKOPSOS1  MOVE      ZERO,OVRCD
          READKS    OPRSOSA1;OPSPDATE,OPSPDOCT,OPSPOPER,OPSPTTIM,OPSPLTIM:
                             OPSPHTIM,OPSPNCAS,OPSPNOPR,OPSPSPAR 
          GOTO      OVERCOND IF OVER
          RETURN  
.
RPOPSOS1  MOVE      ZERO,OVRCD
          READKP    OPRSOSA1;OPSPDATE,OPSPDOCT,OPSPOPER,OPSPTTIM,OPSPLTIM:
                             OPSPHTIM,OPSPNCAS,OPSPNOPR,OPSPSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
UPOPSOS1  UPDATE    OPRSOSA1;OPSPDATE,OPSPDOCT,OPSPOPER,OPSPTTIM,OPSPLTIM:
                             OPSPHTIM,OPSPNCAS,OPSPNOPR,OPSPSPAR
          RETURN
.
WROPSOS1  RESET     KEY21
          WRITE     OPRSOSA1,KEY21;KEY21,OPSPTTIM,OPSPLTIM,OPSPHTIM:
                                   OPSPNCAS,OPSPNOPR,OPSPSPAR
          RETURN  
.
DEOPSOS1  RESET     KEY21
          DELETE    OPRSOSA1,KEY21
          RETURN
.
RAOPSOS2  MOVE      ZERO,OVRCD
          RESET     KEY21
          READ      OPRSOSA2,KEY21;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSOPSOS2  MOVE      ZERO,OVRCD
          RESET     KEY21
          READ      OPRSOSA2,KEY21;;
          RETURN
.
RDOPSOS2  MOVE      ZERO,OVRCD
          RESET     KEY21
          READ      OPRSOSA2,KEY21;OPSPDATE,OPSPDOCT,OPSPOPER,OPSPTTIM:
                                   OPSPLTIM,OPSPHTIM,OPSPNCAS,OPSPNOPR,OPSPSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPSOS2  MOVE      ZERO,OVRCD
          READKS    OPRSOSA2;OPSPDATE,OPSPDOCT,OPSPOPER,OPSPTTIM,OPSPLTIM:
                             OPSPHTIM,OPSPNCAS,OPSPNOPR,OPSPSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPSOS2  MOVE      ZERO,OVRCD
          READKP    OPRSOSA2;OPSPDATE,OPSPDOCT,OPSPOPER,OPSPTTIM,OPSPLTIM:
                             OPSPHTIM,OPSPNCAS,OPSPNOPR,OPSPSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPSOS2  UPDATE    OPRSOSA2;OPSPDATE,OPSPDOCT,OPSPOPER,OPSPTTIM,OPSPLTIM:
                             OPSPHTIM,OPSPNCAS,OPSPNOPR,OPSPSPAR
          RETURN
.
WROPSOS2  RESET     KEY21
          WRITE     OPRSOSA2,KEY21;KEY21,OPSPTTIM,OPSPLTIM,OPSPHTIM:
                                   OPSPNCAS,OPSPNOPR,OPSPSPAR
          RETURN
.
DEOPSOS2  RESET     KEY21
          DELETE    OPRSOSA2,KEY21
          RETURN
.************************************************************************
.************************************************************************
