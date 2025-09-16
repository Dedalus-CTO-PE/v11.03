.
. **********************************************************
. *                                                        *
. *  Include Name :  PATRFNIO                              *
. *                                                        *
. *  Function     :  I/O for patrfnaf file                 *
. *                                                        *
. *  Keys         :  KEY28                                 *
. *                                                        *
. *  Modifications:                                        *
. *        V9.04.02  04/08/2005  J.Tan        CAR 62750    *
. *                  Mods not to use the redefined amount  *
. *        V9.04.01  17/08/2004 Lina Vo CAR 52746          *
. *                  Added Hospital ID and 2nd index with  *
. *                  Hospital ID first. Changed 1st index  *
. *                  to include Hospital ID.               *
. *                                                        *
. *                                                        *
. **********************************************************
.
RSPTRFN1 RESET     KEY28
         READ      PATRFNA1,KEY28;;
         RETURN 
.
RAPTRFN1 MOVE      ZERO,OVRCD
         RESET     KEY28
         READ      PATRFNA1,KEY28;ANS
         GOTO      OVERCOND IF OVER
         RETURN 
.
RDPTRFN1 MOVE      ZERO,OVRCD
         RESET     KEY28
         READ      PATRFNA1,KEY28;DFINSYS,FINSITE,FINYEAR,FINTYPE,FINCODE:
                                 FINPER:
                                 FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                                 FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                                 FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                                 FINMTH13,FLSTYR,FINHOSP,FSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DFINSYS,FINSYS
         RETURN  
.
RKPTRFN1 MOVE      ZERO,OVRCD
         READKS    PATRFNA1;DFINSYS,FINSITE,FINYEAR,FINTYPE,FINCODE,FINPER:
                            FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                            FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                            FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                            FINMTH13,FLSTYR,FINHOSP,FSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DFINSYS,FINSYS
         RETURN  
.
WRPTRFN1 MOVE      FINSYS,DFINSYS
         RESET     KEY28
         WRITE     PATRFNA1,KEY28;DFINSYS,FINSITE,FINYEAR,FINTYPE:
                                 FINCODE,FINPER:
                                 FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                                 FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                                 FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                                 FINMTH13,FLSTYR,FINHOSP,FSPARE
         RETURN  
.
UPPTRFN1 MOVE      FINSYS,DFINSYS
         UPDATE    PATRFNA1;DFINSYS,FINSITE,FINYEAR,FINTYPE,FINCODE,FINPER:
                            FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                            FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                            FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                            FINMTH13,FLSTYR,FINHOSP,FSPARE
         RETURN  
.
DEPTRFN1 RESET     KEY28
         DELETE    PATRFNA1,KEY28
         RETURN
+
RSPTRFN2 RESET     KEY28
         READ      PATRFNA2,KEY28;;
         RETURN
.
RAPTRFN2 MOVE      ZERO,OVRCD
         RESET     KEY28
         READ      PATRFNA2,KEY28;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RDPTRFN2 MOVE      ZERO,OVRCD
         RESET     KEY28
         READ      PATRFNA2,KEY28;DFINSYS,FINSITE,FINYEAR,FINTYPE,FINCODE:
                                 FINPER:
                                 FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                                 FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                                 FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                                 FINMTH13,FLSTYR,FINHOSP,FSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DFINSYS,FINSYS
         RETURN
.
RKPTRFN2 MOVE      ZERO,OVRCD
         READKS    PATRFNA2;DFINSYS,FINSITE,FINYEAR,FINTYPE,FINCODE,FINPER:
                            FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                            FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                            FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                            FINMTH13,FLSTYR,FINHOSP,FSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DFINSYS,FINSYS
         RETURN
.
WRPTRFN2 MOVE      FINSYS,DFINSYS
         RESET     KEY28
         WRITE     PATRFNA2,KEY28;DFINSYS,FINSITE,FINYEAR,FINTYPE:
                                 FINCODE,FINPER:
                                 FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                                 FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                                 FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                                 FINMTH13,FLSTYR,FINHOSP,FSPARE
         RETURN
.
UPPTRFN2 MOVE      FINSYS,DFINSYS
         UPDATE    PATRFNA2;DFINSYS,FINSITE,FINYEAR,FINTYPE,FINCODE,FINPER:
                            FINMTH1,FINMTH2,FINMTH3,FINMTH4:
                            FINMTH5,FINMTH6,FINMTH7,FINMTH8:
                            FINMTH9,FINMTH10,FINMTH11,FINMTH12:
                            FINMTH13,FLSTYR,FINHOSP,FSPARE
         RETURN
.
DEPTRFN2 RESET     KEY28
         DELETE    PATRFNA2,KEY28
         RETURN
