.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIOYER                              *
. *                                                        *
. *  Function     :  I/O for patyears file                 *
. *                                                        *
. *  Keys         :  KEY4                                  *
. *                                                        *
. *  Modifications:  V5.00 01/06/89 K.Peak                 *
. *                        Change include heading          *
. *                  V5.01 21/08/90 J.Tan   SRF 106155     *
. *                        Change record length            *
. *                  V5.02 08/04/94 I.Rutt                 *
. *                        Added record locking capability * 
. *                                                        *
. **********************************************************
.
RDSYEAR1 RESET     KEY4 
         READ      PATYEAR1,KEY4;;
         RETURN  
.
RDKYEAR1 MOVE      ZERO,OVRCD
         READKS    PATYEAR1;DFSTYEAR,FSTDAY,FSTSPAR                      
         GOTO      OVERCOND IF OVER
         MOVE      DFSTYEAR,FSTYEAR
         RETURN  
.
RDPYEAR1 MOVE      ZERO,OVRCD
         READKP    PATYEAR1;DFSTYEAR,FSTDAY,FSTSPAR                      
         GOTO      OVERCOND IF OVER
         MOVE      DFSTYEAR,FSTYEAR
         RETURN  
.
RDYEAR1  MOVE      ZERO,OVRCD
         RESET     KEY4
         READ      PATYEAR1,KEY4;DFSTYEAR,FSTDAY,FSTSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DFSTYEAR,FSTYEAR
         RETURN  
.
RLYEAR1  MOVE      ZERO,OVRCD
         RESET     KEY4
         READL     PATYEAR1,KEY4;DFSTYEAR,FSTDAY,FSTSPAR
         GOTO      OVERCOND IF OVER
         GOTO      OVERLOCK IF LOCKED
         MOVE      DFSTYEAR,FSTYEAR
         RETURN  
.
WRYEAR1  MOVE      ZERO,OVRCD
         RESET     KEY4
         TRAP      OVERLOCK IF IO
         WRITE     PATYEAR1,KEY4;KEY4,FSTDAY,FSTSPAR                      
         TRAPCLR   IO
         RETURN  
.
UPYEAR1  MOVE      FSTYEAR,DFSTYEAR
         MOVE      ZERO,OVRCD
         UPDATE    PATYEAR1;DFSTYEAR,FSTDAY,FSTSPAR                      
         RETURN  
.
ULYEAR1  UNLOCK    PATYEAR1
         RETURN
.
DEYEAR1  RESET     KEY4
         DELETE    PATYEAR1,KEY4
         RETURN
.
