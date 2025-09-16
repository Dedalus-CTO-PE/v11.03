.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIOPER                              *
. *                                                        *
. *  Function     :  I/O for patperss file                 *
. *                                                        *
. *  Keys         :  KEY12                                 *
. *                                                        *
. *  Modifications:  V5.00 01/06/89 K.Peak                 *
. *                        Change include heading          *
. *                                                        *
. **********************************************************
.
WRPERS1
         RESET     KEY12
         WRITE     PATPERS1,KEY12;KEY12,PEDESC
         RETURN
.
RDPERS1  
         MOVE      ZERO,OVRCD
         RESET     KEY12
         READ      PATPERS1,KEY12;PECODE,PETYPE,DPEPAGE,DPELINE,PEDESC
         GOTO      OVERCOND IF OVER
         MOVE      DPEPAGE,PEPAGE
         MOVE      DPELINE,PELINE
         RETURN
.
RDKPERS1
         MOVE      ZERO,OVRCD
         READKS    PATPERS1;PECODE,PETYPE,DPEPAGE,DPELINE,PEDESC
         GOTO      OVERCOND IF OVER
         MOVE      DPEPAGE,PEPAGE
         MOVE      DPELINE,PELINE
         RETURN
.
RDSPERS1
         MOVE      ZERO,OVRCD
         RESET     KEY12
         READ      PATPERS1,KEY12;;
         RETURN
.
DEPERS1  
        RESET      KEY12
        DELETE     PATPERS1,KEY12
        RETURN
.
UPPERS1 
        MOVE      PEPAGE,DPEPAGE
        MOVE      PELINE,DPELINE
        UPDATE     PATPERS1;PECODE,PETYPE,DPEPAGE,DPELINE,PEDESC
        RETURN
