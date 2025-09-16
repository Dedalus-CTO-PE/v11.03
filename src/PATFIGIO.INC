.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIOFIG                              *
. *                                                        *
. *  Function     :  I/O for patfigaf file                 *
. *                                                        *
. *  Keys         :  KEY28                                 *
. *                                                        *
. *  Modifications:                                        *
. *        V9.04.01  04/08/2005  J.Tan        CAR 62750    *
. *                  Mods not to use the redefined amount  *
. *        V9.04.01  17/08/2004 Lina Vo CAR 52746          *
. *                  Added Hospital ID and 2nd index with  *
. *                  Hospital ID first. Changed 1st index  *
. *                  to include Hospital ID.               *
. *                                                        *
. **********************************************************
.
RDSFIGA1
RSPTFIA1 RESET     KEY28
         READ      PATFIGA1,KEY28;;
         RETURN 
.
RDAFIGA1
RAPTFIA1 MOVE      ZERO,OVRCD
         RESET     KEY28
         READ      PATFIGA1,KEY28;ANS
         GOTO      OVERCOND IF OVER
         RETURN 
.
RDFIGA1
RDPTFIA1 MOVE      ZERO,OVRCD
         RESET     KEY28
         READ      PATFIGA1,KEY28;DFINSYS,FINSITE,FINYEAR,FINTYPE,FINCODE:
                                 FINPER:
                                 FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                                 FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                                 FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                                 FINMTH13,FLSTYR,FINHOSP,FSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DFINSYS,FINSYS
         RETURN  
.
RDKFIGA1
RKPTFIA1 MOVE      ZERO,OVRCD
         READKS    PATFIGA1;DFINSYS,FINSITE,FINYEAR,FINTYPE,FINCODE,FINPER:
                            FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                            FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                            FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                            FINMTH13,FLSTYR,FINHOSP,FSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DFINSYS,FINSYS
         RETURN  
.
WRFIGA1
WRPTFIA1 
         MOVE      FINSYS,DFINSYS
         RESET     KEY28
         WRITE     PATFIGA1,KEY28;DFINSYS,FINSITE,FINYEAR,FINTYPE:
                                 FINCODE,FINPER:
                                 FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                                 FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                                 FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                                 FINMTH13,FLSTYR,FINHOSP,FSPARE
         RETURN  
.
UPFIGA1
UPPTFIA1 
         MOVE      FINSYS,DFINSYS
         UPDATE    PATFIGA1;DFINSYS,FINSITE,FINYEAR,FINTYPE,FINCODE,FINPER:
                            FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                            FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                            FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                            FINMTH13,FLSTYR,FINHOSP,FSPARE
         RETURN  
.
DEFIGA1
DEPTFIA1 RESET     KEY28
         DELETE    PATFIGA1,KEY28
         RETURN
+
RDSFIGA2
RSPTFIA2 RESET     KEY28
         READ      PATFIGA2,KEY28;;
         RETURN
.
RDAFIGA2
RAPTFIA2 MOVE      ZERO,OVRCD
         RESET     KEY28
         READ      PATFIGA2,KEY28;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RDFIGA2
RDPTFIA2 MOVE      ZERO,OVRCD
         RESET     KEY28
         READ      PATFIGA2,KEY28;DFINSYS,FINSITE,FINYEAR,FINTYPE,FINCODE:
                                 FINPER:
                                 FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                                 FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                                 FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                                 FINMTH13,FLSTYR,FINHOSP,FSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DFINSYS,FINSYS
         RETURN
.
RDKFIGA2
RKPTFIA2 MOVE      ZERO,OVRCD
         READKS    PATFIGA2;DFINSYS,FINSITE,FINYEAR,FINTYPE,FINCODE,FINPER:
                            FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                            FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                            FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                            FINMTH13,FLSTYR,FINHOSP,FSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DFINSYS,FINSYS
         RETURN
.
WRFIGA2
WRPTFIA2 MOVE      FINSYS,DFINSYS
         RESET     KEY28
         WRITE     PATFIGA2,KEY28;DFINSYS,FINSITE,FINYEAR,FINTYPE:
                                 FINCODE,FINPER:
                                 FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                                 FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                                 FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                                 FINMTH13,FLSTYR,FINHOSP,FSPARE
         RETURN
.
UPFIGA2
UPPTFIA2 MOVE      FINSYS,DFINSYS
         UPDATE    PATFIGA2;DFINSYS,FINSITE,FINYEAR,FINTYPE,FINCODE,FINPER:
                            FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                            FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                            FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                            FINMTH13,FLSTYR,FINHOSP,FSPARE
         RETURN
.
DEFIGA2
DEPTFIA2 RESET     KEY28
         DELETE    PATFIGA2,KEY28
         RETURN
