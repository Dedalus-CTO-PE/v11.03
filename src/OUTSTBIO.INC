.
.         INC       OUTSTBIO.INC
.
.         FILE  I/O REQUESTS FOR STATISTICS A&E BOOKING FILE
.
.OVRCD  FORM            1             0=NOT OVER
.                                     1= OVER
.KEY17   DIM           17             KEY FOR OUTSTBA1
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
RDASTBA1 RESET     KEY17
         MOVE      ZERO,OVRCD
         READ      OUTSTBA1,KEY17;ANS
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDSSTBA1 RESET     KEY17
         READ      OUTSTBA1,KEY17;;
         RETURN  
.
RDSTBA1  MOVE      ZERO,OVRCD
         RESET     KEY17
         READ      OUTSTBA1,KEY17;OSBSITE,OSBCATA,OSBCODE,OSBDATE:
                                  OSBNUMB,OSBSPAR
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDKSTBA1 MOVE      ZERO,OVRCD
         READKS    OUTSTBA1;OSBSITE,OSBCATA,OSBCODE,OSBDATE:
                            OSBNUMB,OSBSPAR
         GOTO      OVERCOND IF OVER
         RETURN  
.
WRSTBA1  RESET     KEY17
         WRITE     OUTSTBA1,KEY17;KEY17,OSBNUMB,OSBSPAR
         RETURN  
.
UPSTBA1  UPDATE    OUTSTBA1;OSBSITE,OSBCATA,OSBCODE,OSBDATE:
                            OSBNUMB,OSBSPAR
         RETURN  
.
DESTBA1  RESET     KEY17
         DELETE    OUTSTBA1,KEY17
         RETURN
