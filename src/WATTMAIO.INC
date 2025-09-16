.
.         INCLUDE NAME : WATTMAIO.INC
.
.         FILE  I/O REQUESTS FOR WAITING LISTS UNIT/DOCTOR SUMMARY FILE
.
.OVRCD  FORM            1             0 = NOT OVER
.                                     1 = OVER
.
.KEY15    DIM          15             KEY FOR WATTMAA1
.
.         NOTE  OVRCD = 1   RECORD DOES NOT EXIST
.                       2   RECORD IS LOCKED
.
RDATMAA1 RESET     KEY15
         MOVE      ZERO,OVRCD
         READ      WATTMAA1,KEY15;ANS
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDSTMAA1 RESET     KEY15
         READ      WATTMAA1,KEY15;;
         RETURN  
.
RDTMAA1  MOVE      ZERO,OVRCD
         RESET     KEY15
         READ      WATTMAA1,KEY15;WTTMDATE,WTTMPROC,WTTMRNG1,WTTMRNG2:
                                  WTTMRNG3,WTTMRNG4,WTTMRNG5,WTTMRNG6:
                                  WTTMRNG7,WTTMMEAN,WTTMMEDN,WTTMMAX:
                                  WTTMSPAR
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDKTMAA1 MOVE      ZERO,OVRCD
         READKS    WATTMAA1;WTTMDATE,WTTMPROC,WTTMRNG1,WTTMRNG2:
                                  WTTMRNG3,WTTMRNG4,WTTMRNG5,WTTMRNG6:
                                  WTTMRNG7,WTTMMEAN,WTTMMEDN,WTTMMAX:
                                  WTTMSPAR
         GOTO      OVERCOND IF OVER
         RETURN  
.
WRTMAA1  RESET     KEY15
         WRITE     WATTMAA1,KEY15;KEY15,WTTMRNG1,WTTMRNG2:
                                  WTTMRNG3,WTTMRNG4,WTTMRNG5,WTTMRNG6:
                                  WTTMRNG7,WTTMMEAN,WTTMMEDN,WTTMMAX:
                                  WTTMSPAR
         RETURN  
.
UPTMAA1  UPDATE    WATTMAA1;WTTMDATE,WTTMPROC,WTTMRNG1,WTTMRNG2:
                                  WTTMRNG3,WTTMRNG4,WTTMRNG5,WTTMRNG6:
                                  WTTMRNG7,WTTMMEAN,WTTMMEDN,WTTMMAX:
                                  WTTMSPAR
         RETURN  
.
DETMAA1  RESET     KEY15
         DELETE    WATTMAA1,KEY15
         RETURN  
