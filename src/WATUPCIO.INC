.*****************************************************************************
.         INCLUDE NAME : WATUPCIO.INC
.
.         FILE  I/O REQUESTS FOR WAITING LISTS UNIT/DOCTOR CODES FILE
.
.OVRCD    FORM     1             0 = NOT OVER
.                                1 = OVER
.
.KEY21    DIM      21            KEY FOR WATUPCA1
.*****************************************************************************
RAWTUPC1  RESET     KEY21
          MOVE      ZERO,OVRCD
          READ      WATUPCA1,KEY21;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSWTUPC1  RESET     KEY21
          READ      WATUPCA1,KEY21;;
          RETURN  
.
RDWTUPC1  MOVE      ZERO,OVRCD
          RESET     KEY21
          READ      WATUPCA1,KEY21;WTUPDATE,WTUPUNIT,WTUPDOCT,WTUPOPTY:
                                   WTUPNPTY,WTUPNUMB,WTUPSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RKWTUPC1  MOVE      ZERO,OVRCD
          READKS    WATUPCA1;WTUPDATE,WTUPUNIT,WTUPDOCT,WTUPOPTY:
                             WTUPNPTY,WTUPNUMB,WTUPSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
WRWTUPC1  RESET     KEY21
          WRITE     WATUPCA1,KEY21;KEY21,WTUPNUMB,WTUPSPAR
          RETURN  
.
UPWTUPC1  UPDATE    WATUPCA1;WTUPDATE,WTUPUNIT,WTUPDOCT,WTUPOPTY:
                             WTUPNPTY,WTUPNUMB,WTUPSPAR
          RETURN  
.
DEWTUPC1  RESET     KEY21
          DELETE    WATUPCA1,KEY21
          RETURN  
.******************************************************************************
