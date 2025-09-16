.
. **********************************************************
. *                                                        *
. *  Include Name :  PATRATIO                              *
. *                                                        *
. *  Function     :  I/O for patratef file                 *
. *                                                        *
. *  Keys         :  KEY12                                 *
. *                                                        *
. *  Modifications:  V5.00 01/06/89 K.Peak                 *
. *                        Change include heading          *
. *                                                        *
. **********************************************************
.
RDRATE1  MOVE      ZERO,OVRCD
         RESET     KEY12
         READ      PATRATE1,KEY12;RCOMPN,RCLASS,RTYPE,RCSTAT:
                            RTCPDAY,RCPDES,RTCEDAY,RCEDES,RHB21,RCSPARE
         GOTO      OVERCOND IF OVER
.
         MOVE      RCOMPN,SRCOMPN
         MOVE      RCLASS,SRCLASS
         MOVE      RTYPE,SRTYPE
         MOVE      RCSTAT,SRCSTAT
         MOVE      RTCPDAY,SRCPDAY
         MOVE      RCPDES,SRCPDES
         MOVE      RTCEDAY,SRCEDAY
         MOVE      RCEDES,SRCEDES
         MOVE      RTCPDAY,RCPDAY
         MOVE      RTCEDAY,RCEDAY
.
         RETURN
.
RDKRATE1 MOVE      ZERO,OVRCD
         READKS    PATRATE1;RCOMPN,RCLASS,RTYPE,RCSTAT:
                            RTCPDAY,RCPDES,RTCEDAY,RCEDES,RHB21,RCSPARE
         GOTO      OVERCOND IF OVER
         MOVE      RTCPDAY,RCPDAY
         MOVE      RTCEDAY,RCEDAY
         RETURN
.
WRRATE1  RESET     KEY12
         MOVE      RCPDAY,RTCPDAY
         MOVE      RCEDAY,RTCEDAY
         WRITE     PATRATE1,KEY12;KEY12:
                            RTCPDAY,RCPDES,RTCEDAY,RCEDES,RHB21,RCSPARE
         RETURN
.
UPRATE1  MOVE      RCPDAY,RTCPDAY
         MOVE      RCEDAY,RTCEDAY
         UPDATE    PATRATE1;RCOMPN,RCLASS,RTYPE,RCSTAT:
                            RTCPDAY,RCPDES,RTCEDAY,RCEDES,RHB21,RCSPARE
         RETURN
.
DERATE1  RESET     KEY12
         DELETE    PATRATE1,KEY12
         RETURN
.
RDSRATE1 RESET     KEY12
         READ      PATRATE1,KEY12;;
         RETURN
