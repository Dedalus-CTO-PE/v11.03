.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIOIRN                              *
. *                                                        *
. *  Function     :  I/O for patirnge file                 *
. *                                                        *
. *  Keys         :  KEY3                                  *
. *                                                        *
. *  Modifications:  V5.00 01/06/89 K.Peak                 *
. *                        Change include heading          *
. *                  V5.01.01 11/03/94 I.Rutt              *
. *                        Modified to enable rec. locking *  
. *                                                        *
. **********************************************************
.
RDSIRNG1 RESET     KEY3
         READ      PATIRNG1,KEY3;;
         RETURN
.
RDIRNG1  MOVE      ZERO,OVRCD
         RESET     KEY3
         READ      PATIRNG1,KEY3;IRANGE,IRDESC,IRNEXT,IRMAXI,IRSPAR
         GOTO      OVERCOND IF OVER
         RETURN
.
RLIRNG1  MOVE      ZERO,OVRCD
         RESET     KEY3
         READL     PATIRNG1,KEY3;IRANGE,IRDESC,IRNEXT,IRMAXI,IRSPAR
         GOTO      OVERCOND IF OVER
         GOTO      OVERLOCK IF LOCKED 
         RETURN
.
RDKIRNG1 MOVE      ZERO,OVRCD
         READKS    PATIRNG1;IRANGE,IRDESC,IRNEXT,IRMAXI,IRSPAR
         GOTO      OVERCOND IF OVER
         RETURN
.
WRIRNG1  RESET     KEY3
         MOVE      ZERO,OVRCD
         TRAP      OVERLOCK IF IO
         WRITE     PATIRNG1,KEY3;KEY3,IRDESC,IRNEXT,IRMAXI,IRSPAR
         TRAPCLR   IO
         RETURN
.
UPIRNG1  UPDATE    PATIRNG1;IRANGE,IRDESC,IRNEXT,IRMAXI,IRSPAR
         RETURN
.
ULIRNG1  UNLOCK    PATIRNG1
         RETURN 
.
DEIRNG1  RESET     KEY3
         DELETE    PATIRNG1,KEY3
         RETURN
.
TRIRNG1  RESET     KEY3
         READL     PATIRNG1,KEY3;IRANGE,IRDESC,IRNEXT,IRMAXI,IRSPAR
         GOTO      OVERCOND IF OVER
         IF        @LOCKED
           DISPLAY   *W,"Waiting on Invoice Range.."
           GOTO      TRIRNG1
         ENDIF
.
         COMPARE   IRMAXI,IRNEXT
         GOTO      OVERLOCK IF NOT LESS
.
         ADD       ONE,IRNEXT
         UPDATE    PATIRNG1;IRANGE,IRDESC,IRNEXT,IRMAXI,IRSPAR
         UNLOCK    PATIRNG1
.
         SUB       ONE,IRNEXT
         MOVE      ZERO,OVRCD
         RETURN
