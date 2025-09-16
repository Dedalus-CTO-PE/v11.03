.
.         INC       OUTOCCIO.INC
.
.         FILE  I/O REQUESTS FOR OCCASIONS OF SERVICES STATISTICS
.
.OVRCD  FORM            1             0=NOT OVER
.                                     1= OVER
.KEY21   DIM             21            KEY FOR OUTOCCA1
.
.         NOTE:-
.                  RDAAAX  IS OUT READ CALL ON FILE OUTAAAX
.                  RDKAAAX  IS OUT READKS CALL
.                  WRAAAX  IS OUT WRITE CALL
.                  UPAAAX  IS OUT UPDATE CALL
.                  DEAAAX  IS OUT DELETE CALL
. 
.         NOTE  OVRCD=1   RECORD DOSENT EXIST
.                     2   RECORD IS LOCKED
.
RDAOCCA1 RESET     KEY21
         MOVE      ZERO,OVRCD
         READ      OUTOCCA1,KEY21;ANS
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDSOCCA1 RESET     KEY21
         READ      OUTOCCA1,KEY21;;
         RETURN  
.
RDOCCA1  MOVE      ZERO,OVRCD
         RESET     KEY21
         READ      OUTOCCA1,KEY21;OCCSITE,OCCGRUP,OCCTYPE,OCCDATE:
                                  OCCNUMB,OCCSPAR
.
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDKOCCA1 MOVE      ZERO,OVRCD
         READKS    OUTOCCA1;OCCSITE,OCCGRUP,OCCTYPE,OCCDATE:
                            OCCNUMB,OCCSPAR
.
         GOTO      OVERCOND IF OVER
         RETURN  
.
WROCCA1  RESET     KEY21
         WRITE     OUTOCCA1,KEY21;KEY21:
                                  OCCNUMB,OCCSPAR
         RETURN  
.
UPOCCA1  UPDATE    OUTOCCA1;OCCSITE,OCCGRUP,OCCTYPE,OCCDATE:
                            OCCNUMB,OCCSPAR
         RETURN  
.
DEOCCA1  RESET     KEY21
         DELETE    OUTOCCA1,KEY21
         RETURN
