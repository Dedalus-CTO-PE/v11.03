.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIORFG                              *
. *                                                        *
. *  Function     :  I/O for patrfgaf file                 *
. *                                                        *
. *  Keys         :  KEY28                                 *
. *                                                        *
. *  Modifications:                                        *
. *                                                        *
. **********************************************************
.
RDSRFGA1
RSPTRFG1 RESET     KEY28
         READ      PATRFGA1,KEY28;;
         RETURN 
.
RDARFGA1
RAPTRFG1 MOVE      ZERO,OVRCD
         RESET     KEY28
         READ      PATRFGA1,KEY28;ANS
         GOTO      OVERCOND IF OVER
         RETURN 
.
RDRFGA1
RDPTRFG1 MOVE      ZERO,OVRCD
         RESET     KEY28
         READ      PATRFGA1,KEY28;DFINSYS,FINSITE,FINYEAR,FINTYPE,FINCODE:
                                 FINPER:
                                 FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                                 FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                                 FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                                 FINMTH13,FLSTYR,FINHOSP,FSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DFINSYS,FINSYS
         RETURN  
.
RDKRFGA1
RKPTRFG1 MOVE      ZERO,OVRCD
         READKS    PATRFGA1;DFINSYS,FINSITE,FINYEAR,FINTYPE,FINCODE,FINPER:
                            FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                            FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                            FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                            FINMTH13,FLSTYR,FINHOSP,FSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DFINSYS,FINSYS
         RETURN  
.
WRRFGA1
WRPTRFG1 
         MOVE      FINSYS,DFINSYS
         RESET     KEY28
         WRITE     PATRFGA1,KEY28;DFINSYS,FINSITE,FINYEAR,FINTYPE:
                                 FINCODE,FINPER:
                                 FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                                 FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                                 FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                                 FINMTH13,FLSTYR,FINHOSP,FSPARE
         RETURN  
.
UPRFGA1
UPPTRFG1 
         MOVE      FINSYS,DFINSYS
         UPDATE    PATRFGA1;DFINSYS,FINSITE,FINYEAR,FINTYPE,FINCODE,FINPER:
                            FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                            FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                            FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                            FINMTH13,FLSTYR,FINHOSP,FSPARE
         RETURN  
.
DERFGA1
DEPTRFG1 RESET     KEY28
         DELETE    PATRFGA1,KEY28
         RETURN
+
RDSRFGA2
RSPTRFG2 RESET     KEY28
         READ      PATRFGA2,KEY28;;
         RETURN
.
RDARFGA2
RAPTRFG2 MOVE      ZERO,OVRCD
         RESET     KEY28
         READ      PATRFGA2,KEY28;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RDRFGA2
RDPTRFG2 MOVE      ZERO,OVRCD
         RESET     KEY28
         READ      PATRFGA2,KEY28;DFINSYS,FINSITE,FINYEAR,FINTYPE,FINCODE:
                                 FINPER:
                                 FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                                 FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                                 FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                                 FINMTH13,FLSTYR,FINHOSP,FSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DFINSYS,FINSYS
         RETURN
.
RDKRFGA2
RKPTRFG2 MOVE      ZERO,OVRCD
         READKS    PATRFGA2;DFINSYS,FINSITE,FINYEAR,FINTYPE,FINCODE,FINPER:
                            FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                            FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                            FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                            FINMTH13,FLSTYR,FINHOSP,FSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DFINSYS,FINSYS
         RETURN
.
WRRFGA2
WRPTRFG2 MOVE      FINSYS,DFINSYS
         RESET     KEY28
         WRITE     PATRFGA2,KEY28;DFINSYS,FINSITE,FINYEAR,FINTYPE:
                                 FINCODE,FINPER:
                                 FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                                 FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                                 FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                                 FINMTH13,FLSTYR,FINHOSP,FSPARE
         RETURN
.
UPRFGA2
UPPTRFG2 MOVE      FINSYS,DFINSYS
         UPDATE    PATRFGA2;DFINSYS,FINSITE,FINYEAR,FINTYPE,FINCODE,FINPER:
                            FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                            FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                            FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                            FINMTH13,FLSTYR,FINHOSP,FSPARE
         RETURN
.
DERFGA2
DEPTRFG2 RESET     KEY28
         DELETE    PATRFGA2,KEY28
         RETURN
