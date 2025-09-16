.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIOBRN                              *
. *                                                        *
. *  Function     :  I/O for patbrnsf file                 *
. *                                                        *
. *  Keys         :  KEY6                                  *
. *                                                        *
. *  Modifications:  V5.00 01/06/89 K.Peak                 *
. *                        Change include heading          *
. *                                                        *
. **********************************************************
.
RDBRNS1  MOVE      ZERO,OVRCD
         RESET     KEY6
         READ      PATBRNS1,KEY6;BRDATE,BRADMN,BRSPARE
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDKBRNS1 MOVE      ZERO,OVRCD
         READKS    PATBRNS1;BRDATE,BRADMN,BRSPARE
         GOTO      OVERCOND IF OVER
         RETURN  
.
WRBRNS1  RESET     KEY6
         WRITE     PATBRNS1,KEY6;KEY6,BRADMN,BRSPARE
         RETURN  
.
UPBRNS1  UPDATE    PATBRNS1;BRDATE,BRADMN,BRSPARE
         RETURN  
.
DEBRNS1  RESET     KEY6
         DELETE    PATBRNS1,KEY6
         RETURN
.
RDSBRNS1 RESET     KEY6
         READ      PATBRNS1,KEY6;;
         RETURN  
.                                                                                                                       
