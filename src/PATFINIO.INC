.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIOFIN                              *
. *                                                        *
. *  Function     :  I/O for patfinsf file                 *
. *                                                        *
. *  Keys         :  KEY28                                 *
. *                                                        *
. *  Modifications:                                        *
. *        V9.04.02  03/08/05 J.Tan    CAR 62750           *
. *                  Removed redefined amount variables    *
. *        V9.04.01  17/08/2004 Lina Vo CAR 52746          *
. *                  Added Hospital ID and 2nd index with  *
. *                  Hospital ID first. Changed 1st index  *
. *                  to include Hospital ID.               *
. *                                                        *
. *                  V5.00 01/06/89 K.Peak                 *
. *                        Change include header           *
. *                                                        *
. **********************************************************
.
RDSFINS1
         RESET     KEY28
         READ      PATFINS1,KEY28;;
         RETURN 
.
RDAFINS1
         MOVE      ZERO,OVRCD
         RESET     KEY28
         READ      PATFINS1,KEY28;ANS
         GOTO      OVERCOND IF OVER
         RETURN 
.
RDFINS1
         MOVE      ZERO,OVRCD
         RESET     KEY28
         READ      PATFINS1,KEY28;DFINSYS,FINSITE,FINYEAR,FINTYPE,FINCODE:
                                 FINPER:
                                 FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                                 FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                                 FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                                 FINMTH13,FLSTYR,FINHOSP,FSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DFINSYS,FINSYS
         RETURN  
.
RDKFINS1
         MOVE      ZERO,OVRCD
         READKS    PATFINS1;DFINSYS,FINSITE,FINYEAR,FINTYPE,FINCODE,FINPER:
                            FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                            FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                            FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                            FINMTH13,FLSTYR,FINHOSP,FSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DFINSYS,FINSYS
         RETURN  
.
WRFINS1  MOVE      FINSYS,DFINSYS
         RESET     KEY28
         WRITE     PATFINS1,KEY28;DFINSYS,FINSITE,FINYEAR,FINTYPE:
                                 FINCODE,FINPER:
                                 FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                                 FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                                 FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                                 FINMTH13,FLSTYR,FINHOSP,FSPARE
         RETURN  
.
UPFINS1  MOVE      FINSYS,DFINSYS
         UPDATE    PATFINS1;DFINSYS,FINSITE,FINYEAR,FINTYPE,FINCODE,FINPER:
                            FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                            FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                            FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                            FINMTH13,FLSTYR,FINHOSP,FSPARE
         RETURN  
.
DEFINS1
         RESET     KEY28
         DELETE    PATFINS1,KEY28
         RETURN
+
RDSFINS2
         RESET     KEY28
         READ      PATFINS2,KEY28;;
         RETURN
.
RDAFINS2
         MOVE      ZERO,OVRCD
         RESET     KEY28
         READ      PATFINS2,KEY28;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RDFINS2
         MOVE      ZERO,OVRCD
         RESET     KEY28
         READ      PATFINS2,KEY28;DFINSYS,FINSITE,FINYEAR,FINTYPE,FINCODE:
                                 FINPER:
                                 FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                                 FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                                 FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                                 FINMTH13,FLSTYR,FINHOSP,FSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DFINSYS,FINSYS
         RETURN
.
RDKFINS2
         MOVE      ZERO,OVRCD
         READKS    PATFINS2;DFINSYS,FINSITE,FINYEAR,FINTYPE,FINCODE,FINPER:
                            FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                            FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                            FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                            FINMTH13,FLSTYR,FINHOSP,FSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DFINSYS,FINSYS
         RETURN
.
WRFINS2  RESET     KEY28
         WRITE     PATFINS2,KEY28;DFINSYS,FINSITE,FINYEAR,FINTYPE:
                                 FINCODE,FINPER:
                                 FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                                 FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                                 FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                                 FINMTH13,FLSTYR,FINHOSP,FSPARE
         RETURN
.
UPFINS2  MOVE      FINSYS,DFINSYS
         UPDATE    PATFINS2;DFINSYS,FINSITE,FINYEAR,FINTYPE,FINCODE,FINPER:
                            FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                            FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                            FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                            FINMTH13,FLSTYR,FINHOSP,FSPARE
         RETURN
.
DEFINS2
         RESET     KEY28
         DELETE    PATFINS2,KEY28
         RETURN
