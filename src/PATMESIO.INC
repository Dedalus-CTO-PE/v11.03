.
. ****************************************************************************
. *                                                                          *
. *  Include Name :  PATIOMES                                                *
. *                                                                          *
. *  Function     :  I/O for patmesgf file                                   *
. *                                                                          *
. *  Keys         :  KEY3                                                    *
. *                                                                          *
. *  Modifications:                                                          *
. *                  V5.00 01/06/1989  K.Peak                                *
. *                        Change include heading                            *
. *                  V5.02 10/04/1994  I.Rutt                                *
. *                        Modified to enable rec. locking                   *
. *                  V9.02 18.09.2001  Glenn Saunders                        *
. *                        Modified to include a read previous               *
. *                                                                          *
. ****************************************************************************
.
RDAMESG1 MOVE      ZERO,OVRCD
         RESET     KEY3
         READ      PATMESG1,KEY3;ANS
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDSMESG1
         MOVE      ZERO,OVRCD
         RESET     KEY3
         READ      PATMESG1,KEY3;;
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDMESG1  MOVE      ZERO,OVRCD
         RESET     KEY3
         READ      PATMESG1,KEY3;PMCODE,PMLINE1,PMLINE2,PMSPARE
         GOTO      OVERCOND IF OVER
         RETURN  
.
RLMESG1  MOVE      ZERO,OVRCD
         RESET     KEY3
         READL     PATMESG1,KEY3;PMCODE,PMLINE1,PMLINE2,PMSPARE
         GOTO      OVERCOND IF OVER
         GOTO      OVERLOCK IF LOCKED
         RETURN  
.
RDKMESG1
         MOVE      ZERO,OVRCD
         READKS    PATMESG1;PMCODE,PMLINE1,PMLINE2,PMSPARE
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDPMESG1
         MOVE      ZERO,OVRCD
         READKP    PATMESG1;PMCODE,PMLINE1,PMLINE2,PMSPARE
         GOTO      OVERCOND IF OVER
         RETURN  
.
WRMESG1  MOVE      ZERO,OVRCD
         RESET     KEY3
         TRAP      OVERLOCK IF IO
         WRITE     PATMESG1,KEY3;KEY3,PMLINE1,PMLINE2,PMSPARE
         TRAPCLR   IO
         RETURN  
.
UPMESG1
         UPDATE    PATMESG1;PMCODE,PMLINE1,PMLINE2,PMSPARE
         RETURN  
.
ULMESG1  UNLOCK    PATMESG1
         RETURN
.
DEMESG1
         RESET     KEY3
         DELETE    PATMESG1,KEY3
         RETURN
