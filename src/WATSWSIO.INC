.
. WATSWSIO.INC
. ------------
. Related FD   : WATSWSFD.INC
. Filenames    : watswsaf
. Description  : Waiting List Status Waiting Summary File
. Variables    : OVRCD   FORM    1          0 = NOT OVER
.                                           1 = OVER
.                KEY19   DIM     19         KEY FOR WATSWSA1
.
. -----------------------------------------
. ------- I/O routines for WATSWSA1 -------
. -----------------------------------------
.
RSWTSWS1  RESET     KEY19
          READ      WATSWSA1,KEY19;;
          RETURN
.
RAWTSWS1  RESET     KEY19
          MOVE      ZERO,OVRCD
          READ      WATSWSA1,KEY19;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTSWS1  RESET     KEY19
          MOVE      ZERO,OVRCD
          READ      WATSWSA1,KEY19;WTSWDATE,WTSWUNIT,WTSWPRTY,WTSWATYP:
                                  WTSWCLSS,DWTSWSTA,WTSWRNG1,WTSWRNG2,WTSWRNG3:
                                  WTSWRNG4,WTSWRNG5,WTSWRNG6,WTSWSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWTSWSTA,WTSWSTAT
          RETURN
.
RKWTSWS1  MOVE      ZERO,OVRCD
          READKS    WATSWSA1;WTSWDATE,WTSWUNIT,WTSWPRTY,WTSWATYP:
                                  WTSWCLSS,DWTSWSTA,WTSWRNG1,WTSWRNG2,WTSWRNG3:
                                  WTSWRNG4,WTSWRNG5,WTSWRNG6,WTSWSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWTSWSTA,WTSWSTAT
          RETURN
.
RPWTSWS1  MOVE      ZERO,OVRCD
          READKP    WATSWSA1;WTSWDATE,WTSWUNIT,WTSWPRTY,WTSWATYP:
                                  WTSWCLSS,DWTSWSTA,WTSWRNG1,WTSWRNG2,WTSWRNG3:
                                  WTSWRNG4,WTSWRNG5,WTSWRNG6,WTSWSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWTSWSTA,WTSWSTAT
          RETURN
.
UPWTSWS1  MOVE      WTSWSTAT,DWTSWSTA
          UPDATE    WATSWSA1;WTSWDATE,WTSWUNIT,WTSWPRTY,WTSWATYP:
                                  WTSWCLSS,DWTSWSTA,WTSWRNG1,WTSWRNG2,WTSWRNG3:
                                  WTSWRNG4,WTSWRNG5,WTSWRNG6,WTSWSPAR
          RETURN
.
WRWTSWS1  RESET     KEY19
          MOVE      WTSWSTAT,DWTSWSTA
          WRITE     WATSWSA1,KEY19;WTSWDATE,WTSWUNIT,WTSWPRTY,WTSWATYP:
                                  WTSWCLSS,DWTSWSTA,WTSWRNG1,WTSWRNG2,WTSWRNG3:
                                  WTSWRNG4,WTSWRNG5,WTSWRNG6,WTSWSPAR
          RETURN
.
DEWTSWS1  RESET     KEY19
          DELETE    WATSWSA1,KEY19
          RETURN
................................................................................
