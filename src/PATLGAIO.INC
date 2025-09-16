.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIOLGA                              *
. *                                                        *
. *  Function     :  I/O for patlgaaf file                 *
. *                                                        *
. *  Keys         :  KEY4                                  *
. *                                                        *
. *  Modifications:  V5.00 01/06/89 K.Peak                 *
. *                        Change include heading          *
. *                                                        *
. **********************************************************
.
RDLGAA1  MOVE      ZERO,OVRCD
         RESET     KEY4
         READ      PATLGAA1,KEY4;LGACODE,LGADESC,LGASPAR
         GOTO      OVERCOND IF OVER
         RETURN  
.
RLLGAA1  MOVE      ZERO,OVRCD
         RESET     KEY4
         READL     PATLGAA1,KEY4;LGACODE,LGADESC,LGASPAR
         GOTO      OVERLOCK IF LOCKED
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDKLGAA1 MOVE      ZERO,OVRCD
         READKS    PATLGAA1;LGACODE,LGADESC,LGASPAR
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDPLGAA1 MOVE      ZERO,OVRCD
         READKP    PATLGAA1;LGACODE,LGADESC,LGASPAR
         GOTO      OVERCOND IF OVER
         RETURN  
.
WRLGAA1  MOVE      ZERO,OVRCD
         RESET     KEY4
         MOVE      KEY4,LGACODE
         TRAP      OVERLOCK IF IO
         WRITE     PATLGAA1,KEY4;LGACODE,LGADESC,LGASPAR
         TRAPCLR   IO
         RETURN  
.
UPLGAA1  UPDATE    PATLGAA1;LGACODE,LGADESC,LGASPAR
         RETURN  
.
ULLGAA1  UNLOCK    PATLGAA1
         RETURN  
.
DELGAA1  RESET     KEY4
         DELETE    PATLGAA1,KEY4
         RETURN
.
RDSLGAA1 RESET     KEY4
         READ      PATLGAA1,KEY4;;
         RETURN  
