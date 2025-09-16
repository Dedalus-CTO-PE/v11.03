.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIOHFR                              *
. *                                                        *
. *  Function     :  I/O for pathfrec file                 *
. *                                                        *
. *  Keys         :  KEY8                                  *
. *                                                        *
. *  Modifications:  V9.02 23.10.01 B.G.Ackland            *
. *                        Added Record IO Locking         *
. *                                                        *
. *                  V5.00 01/06/89 K.Peak                 *
. *                        Change include heading          *
. *                                                        *
. **********************************************************
.
RDSHFRE1 RESET     KEY8
         READ      PATHFRE1,KEY8;;
         RETURN  
.
RDHFRE1  MOVE      ZERO,OVRCD
         RESET     KEY8
         READ      PATHFRE1,KEY8;HFRINVR,HFRSTAT
         GOTO      OVERCOND IF OVER
         RETURN  
.
RLHFRE1  MOVE      ZERO,OVRCD
         RESET     KEY8
         READL     PATHFRE1,KEY8;HFRINVR,HFRSTAT
         GOTO      OVERCOND IF OVER
         GOTO      OVERLOCK IF LOCKED
.
UUHFRE1  RESET     KEY8
         UNLOCK    PATHFRE1
         RETURN
.
RDKHFRE1 MOVE      ZERO,OVRCD
         READKS    PATHFRE1;HFRINVR,HFRSTAT
         GOTO      OVERCOND IF OVER
         RETURN  
.
WRHFRE1  RESET     KEY8
         WRITE     PATHFRE1,KEY8;KEY8,HFRSTAT
         RETURN  
.
UPHFRE1  UPDATE    PATHFRE1;HFRINVR,HFRSTAT
         RETURN  
.
DEHFRE1  RESET     KEY8
         DELETE    PATHFRE1,KEY8
         RETURN
.
