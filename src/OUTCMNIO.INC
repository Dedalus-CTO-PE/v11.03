.*****************************************************************
.**          INC       OUTCMNIO.INC                            ***
.*****************************************************************
.
.         FILE  I/O REQUESTS FOR OUTPATIENT SYSTEM COMMENTS 
.
.         NOTE:-
.                  RDAAAX  IS OUT READ CALL ON FILE OUTAAAX
.                  RDKAAAX IS OUT READKS CALL
.                  WRAAAX  IS OUT WRITE CALL
.                  UPAAAX  IS OUT UPDATE CALL
.                  DEAAAX  IS OUT DELETE CALL
. 
.         NOTE  OVRCD=1   RECORD DOSENT EXIST
.                     2   RECORD IS LOCKED
.
.
RSPCMNA1  RESET     KEY19 
          READ      OUTCMNA1,KEY19;;
          RETURN  
.
RDPCMNA1  MOVE      ZERO,OVRCD
          READ      OUTCMNA1,KEY19;OTCMTDAT,OTCMFDAT,OTCMCONO:
                                   OTCMCOM1,OTCMCOM2,OTCMCOM3:
                                   OTCMCOM4,OTCMSITE,OTCMCLIN:
                                   OTCMCDAT,OTCMCTIM,OTCMCUID:
                                   OTCMSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RPPCMNA1  READKP    OUTCMNA1;OTCMTDAT,OTCMFDAT,OTCMCONO:
                             OTCMCOM1,OTCMCOM2,OTCMCOM3:
                             OTCMCOM4,OTCMSITE,OTCMCLIN:
                             OTCMCDAT,OTCMCTIM,OTCMCUID:
                             OTCMSPAR
          RETURN
.
RKPCMNA1  READKS    OUTCMNA1;OTCMTDAT,OTCMFDAT,OTCMCONO:
                             OTCMCOM1,OTCMCOM2,OTCMCOM3:
                             OTCMCOM4,OTCMSITE,OTCMCLIN:
                             OTCMCDAT,OTCMCTIM,OTCMCUID:
                             OTCMSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
WRPCMNA1  WRITE     OUTCMNA1,KEY19;OTCMTDAT,OTCMFDAT,OTCMCONO:
                                   OTCMCOM1,OTCMCOM2,OTCMCOM3:
                                   OTCMCOM4,OTCMSITE,OTCMCLIN:
                                   OTCMCDAT,OTCMCTIM,OTCMCUID:
                                   OTCMSPAR         
          RETURN
.
UPPCMNA1  RESET     KEY19
          UPDATE    OUTCMNA1;OTCMTDAT,OTCMFDAT,OTCMCONO:
                             OTCMCOM1,OTCMCOM2,OTCMCOM3:
                             OTCMCOM4,OTCMSITE,OTCMCLIN:
                             OTCMCDAT,OTCMCTIM,OTCMCUID:
                             OTCMSPAR
          RETURN
.           
DEPCMNA1  RESET     KEY19
          DELETE    OUTCMNA1,KEY19
          RETURN    
.
