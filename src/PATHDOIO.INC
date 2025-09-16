.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIOHDO                              *
. *                                                        *
. *  Function     :  I/O for pathdoct file                 *
. *                                                        *
. *  Keys         :  KEY3                                  *
. *                                                        *
. *  Modifications:  V5.00 01/06/89 K.Peak                 *
. *                        Change include heading          *
. *                                                        *
. **********************************************************
.
RDSHDOC1
         RESET     KEY3
         READ      PATHDOC1,KEY3;;
         RETURN  
.
RDAHDOC1
         MOVE      ZERO,OVRCD
         RESET     KEY3
         READ      PATHDOC1,KEY3;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RDHDOC1
         MOVE      ZERO,OVRCD
         RESET     KEY3
         READ      PATHDOC1,KEY3;DHDCODE,HDNAME,HDSERV
         GOTO      OVERCOND IF OVER
         MOVE      DHDCODE,HDCODE
         RETURN  
.
RDKHDOC1
         MOVE      ZERO,OVRCD
         READKS    PATHDOC1;DHDCODE,HDNAME,HDSERV 
         GOTO      OVERCOND IF OVER
         MOVE      DHDCODE,HDCODE
         RETURN  
.
WRHDOC1
         RESET     KEY3
         WRITE     PATHDOC1,KEY3;KEY3,HDNAME,HDSERV
         RETURN  
.
UPHDOC1
         MOVE      HDCODE,DHDCODE
         UPDATE    PATHDOC1;DHDCODE,HDNAME,HDSERV
         RETURN  
.
DEHDOC1
         RESET     KEY3
         DELETE    PATHDOC1,KEY3
         RETURN
