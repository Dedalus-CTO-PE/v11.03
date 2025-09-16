.
. **********************************************************
. *                                                        *
. *  Include Name :  PATNZRIO                              *
. *                                                        *
. *  Function     :  I/O for patnzraf file                 *
. *                                                        *
. *  Keys         :  KEY9                                  *
. *                                                        *
. *  Modifications:  V5.00 01/06/89 K.Peak                 *
. *                        Change include heading          *
. *                                                        *
. **********************************************************
.
RDANZRA1 MOVE      ZERO,OVRCD
         RESET     KEY9
         READ      PATNZRA1,KEY9;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RDSNZRA1 RESET     KEY9
         READ      PATNZRA1,KEY9;;
         RETURN
.
RDNZRA1  MOVE      ZERO,OVRCD
         RESET     KEY9
         READ      PATNZRA1,KEY9;NZRRESI,NZRCOMP,NZRTYPE:
                            NZRCPRDY,NZRCPDES,NZRCERDY,NZRCEDES,NZRCSPAR
         GOTO      OVERCOND IF OVER
         MOVE      NZRCERDY,NZRCEDAY
         MOVE      NZRCPRDY,NZRCPDAY
.
         RETURN
.
RDKNZRA1 MOVE      ZERO,OVRCD
         READKS    PATNZRA1;NZRRESI,NZRCOMP,NZRTYPE:
                            NZRCPRDY,NZRCPDES,NZRCERDY,NZRCEDES,NZRCSPAR
         GOTO      OVERCOND IF OVER
         MOVE      NZRCERDY,NZRCEDAY
         MOVE      NZRCPRDY,NZRCPDAY
         RETURN
.
WRNZRA1  RESET     KEY9
         MOVE      NZRCEDAY,NZRCERDY
         MOVE      NZRCPDAY,NZRCPRDY
         WRITE     PATNZRA1,KEY9;KEY9:
                            NZRCPRDY,NZRCPDES,NZRCERDY,NZRCEDES,NZRCSPAR
         RETURN
.
UPNZRA1  MOVE      NZRCEDAY,NZRCERDY
         MOVE      NZRCPDAY,NZRCPRDY
         UPDATE    PATNZRA1;NZRRESI,NZRCOMP,NZRTYPE:
                            NZRCPRDY,NZRCPDES,NZRCERDY,NZRCEDES,NZRCSPAR
         RETURN
.
DENZRA1  RESET     KEY9
         DELETE    PATNZRA1,KEY9
         RETURN
