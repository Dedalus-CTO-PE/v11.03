.
.         INC       OUTCTYIO.INC
.
.         FILE  I/O REQUESTS FOR CLINIC TYPE FILE
.
.OVRCD  FORM            1             0=NOT OVER
.                                     1= OVER
.KEY12    DIM           12            KEY FOR OUTCTYA1
.KEY42    DIM           42            KEY FOR OUTCTYA2
.KEY15    DIM           15            KEY FOR OUTCTYA3
.KEY45    DIM           45            KEY FOR OUTCTYA4
.
.         NOTE:-
.                  RDAAAX  IS THE READ CALL ON FILE PATAAAX
.                  RDKAAAX  IS THE READKS CALL
.                  WRAAAX  IS THE WRITE CALL
.                  UPAAAX  IS THE UPDATE CALL
.                  DEAAAX  IS THE DELETE CALL
.
.
RDCTYA1  MOVE      ZERO,OVRCD
         RESET     KEY12
         READ      OUTCTYA1,KEY12;OCTSITE,OCTCTYP,OCTGRP,OCTDESC,OCTXBOK:
                                  OCTXATT,OCTBKT,OCTATT,OCTACT,OCTVACS:
                                  OCTWUNIT,OCTUSDF1,OCTUSDF2,OCTDEFCV,OCTSPARE
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDPCTYA1 MOVE      ZERO,OVRCD
         READKP    OUTCTYA1;OCTSITE,OCTCTYP,OCTGRP,OCTDESC,OCTXBOK:
                            OCTXATT,OCTBKT,OCTATT,OCTACT,OCTVACS:
                            OCTWUNIT,OCTUSDF1,OCTUSDF2,OCTDEFCV,OCTSPARE
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDKCTYA1 MOVE      ZERO,OVRCD
         READKS    OUTCTYA1;OCTSITE,OCTCTYP,OCTGRP,OCTDESC,OCTXBOK:
                            OCTXATT,OCTBKT,OCTATT,OCTACT,OCTVACS:
                            OCTWUNIT,OCTUSDF1,OCTUSDF2,OCTDEFCV,OCTSPARE
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDSCTYA1 RESET     KEY12
         READ      OUTCTYA1,KEY12;;
         RETURN  
.
WRCTYA1  RESET     KEY12
         WRITE     OUTCTYA1,KEY12;KEY12,OCTGRP,OCTDESC,OCTXBOK:
                                  OCTXATT,OCTBKT,OCTATT,OCTACT,OCTVACS:
                                  OCTWUNIT,OCTUSDF1,OCTUSDF2,OCTDEFCV,OCTSPARE
         RETURN
.
UPCTYA1  UPDATE    OUTCTYA1;OCTSITE,OCTCTYP,OCTGRP,OCTDESC,OCTXBOK:
                            OCTXATT,OCTBKT,OCTATT,OCTACT,OCTVACS:
                            OCTWUNIT,OCTUSDF1,OCTUSDF2,OCTDEFCV,OCTSPARE
         RETURN  
.
DECTYA1  RESET     KEY12
         DELETE    OUTCTYA1,KEY12
         RETURN  
.
.        SECOND KEY I/O  - only reads; no writes/updates/deletes allowed
.
RDCTYA2  MOVE      ZERO,OVRCD
         RESET     KEY42
         READ      OUTCTYA2,KEY42;OCTSITE,OCTCTYP,OCTGRP,OCTDESC,OCTXBOK:
                                  OCTXATT,OCTBKT,OCTATT,OCTACT,OCTVACS:
                                  OCTWUNIT,OCTUSDF1,OCTUSDF2,OCTDEFCV,OCTSPARE
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDKCTYA2 MOVE      ZERO,OVRCD
         READKS    OUTCTYA2;OCTSITE,OCTCTYP,OCTGRP,OCTDESC,OCTXBOK:
                            OCTXATT,OCTBKT,OCTATT,OCTACT,OCTVACS:
                            OCTWUNIT,OCTUSDF1,OCTUSDF2,OCTDEFCV,OCTSPARE
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDSCTYA2 RESET     KEY42
         READ      OUTCTYA2,KEY42;;
         RETURN
.
.        THIRD KEY I/O - only reads; no writes/updates/deletes allowed 
.
RDCTYA3  MOVE      ZERO,OVRCD
         RESET     KEY15
         READ      OUTCTYA3,KEY15;OCTSITE,OCTCTYP,OCTGRP,OCTDESC,OCTXBOK:
                                  OCTXATT,OCTBKT,OCTATT,OCTACT,OCTVACS:
                                  OCTWUNIT,OCTUSDF1,OCTUSDF2,OCTDEFCV,OCTSPARE
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDKCTYA3 MOVE      ZERO,OVRCD
         READKS    OUTCTYA3;OCTSITE,OCTCTYP,OCTGRP,OCTDESC,OCTXBOK:
                            OCTXATT,OCTBKT,OCTATT,OCTACT,OCTVACS:
                            OCTWUNIT,OCTUSDF1,OCTUSDF2,OCTDEFCV,OCTSPARE
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDSCTYA3 RESET     KEY15
         READ      OUTCTYA3,KEY15;;
         RETURN
.
.
.        FOURTH KEY I/O - only reads; no writes/updates/deletes allowed
.
RDCTYA4  MOVE      ZERO,OVRCD
         RESET     KEY45
         READ      OUTCTYA4,KEY45;OCTSITE,OCTCTYP,OCTGRP,OCTDESC,OCTXBOK:
                                  OCTXATT,OCTBKT,OCTATT,OCTACT,OCTVACS:
                                  OCTWUNIT,OCTUSDF1,OCTUSDF2,OCTDEFCV,OCTSPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
RDKCTYA4 MOVE      ZERO,OVRCD
         READKS    OUTCTYA4;OCTSITE,OCTCTYP,OCTGRP,OCTDESC,OCTXBOK:
                            OCTXATT,OCTBKT,OCTATT,OCTACT,OCTVACS:
                            OCTWUNIT,OCTUSDF1,OCTUSDF2,OCTDEFCV,OCTSPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
RDSCTYA4 RESET     KEY45
         READ      OUTCTYA4,KEY45;;
         RETURN
..............................................................................
