.
. ACCLODIO
. --------
. Filename     : acclodaf.dat
.
. ------- positional read -------
.
RSACLOD1  RESET     KEY20
          READ      ACCLODA1,KEY20;;
          RETURN
.
RAACLOD1  RESET     KEY20
          MOVE      ZERO,OVRCD
          READ      ACCLODA1,KEY20;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
. ------- direct read -------
.
RDACLOD1  RESET     KEY20
          MOVE      ZERO,OVRCD
          READ      ACCLODA1,KEY20;ACLOACCN,ACLOSTAT,ACLOSDAT,ACLOURNO:
                                   ACLOUDAT,ACLOUTIM,ACLOWUID,ACLOSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
. ------- next read -------
.
RKACLOD1  MOVE      ZERO,OVRCD
          READKS    ACCLODA1;ACLOACCN,ACLOSTAT,ACLOSDAT,ACLOURNO:
                                   ACLOUDAT,ACLOUTIM,ACLOWUID,ACLOSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
. ------- previous read -------
.
RPACLOD1  MOVE      ZERO,OVRCD
          READKP    ACCLODA1;ACLOACCN,ACLOSTAT,ACLOSDAT,ACLOURNO:
                                   ACLOUDAT,ACLOUTIM,ACLOWUID,ACLOSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
. ------- update routine -------
.
UPACLOD1  UPDATE    ACCLODA1;ACLOACCN,ACLOSTAT,ACLOSDAT,ACLOURNO:
                                   ACLOUDAT,ACLOUTIM,ACLOWUID,ACLOSPAR 
          RETURN
.
. ------- write routine -------
.
WRACLOD1  RESET     KEY20     
          WRITE     ACCLODA1,KEY20;ACLOACCN,ACLOSTAT,ACLOSDAT,ACLOURNO:
                                   ACLOUDAT,ACLOUTIM,ACLOWUID,ACLOSPAR 
          RETURN    
.
. ------- delete routine -------
.
DEACLOD1  RESET     KEY20
          DELETE    ACCLODA1,KEY20
          RETURN    
..
. ------- positional read -------
.
RSACLOD2  RESET     KEY28
          READ      ACCLODA2,KEY28;;
          RETURN
.
RAACLOD2  RESET     KEY28
          MOVE      ZERO,OVRCD
          READ      ACCLODA2,KEY28;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
. ------- direct read -------
.
RDACLOD2  RESET     KEY28
          MOVE      ZERO,OVRCD
          READ      ACCLODA2,KEY28;ACLOACCN,ACLOSTAT,ACLOSDAT,ACLOURNO:
                                   ACLOUDAT,ACLOUTIM,ACLOWUID,ACLOSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
. ------- next read -------
.
RKACLOD2  MOVE      ZERO,OVRCD
          READKS    ACCLODA2;ACLOACCN,ACLOSTAT,ACLOSDAT,ACLOURNO:
                                   ACLOUDAT,ACLOUTIM,ACLOWUID,ACLOSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
. ------- previous read -------
.
RPACLOD2  MOVE      ZERO,OVRCD
          READKP    ACCLODA2;ACLOACCN,ACLOSTAT,ACLOSDAT,ACLOURNO:
                                   ACLOUDAT,ACLOUTIM,ACLOWUID,ACLOSPAR
          GOTO      OVERCOND IF OVER
          RETURN
