.
. WEBLABIO    
. --------
. Filename     : weblabaf.dat
.
RSWBLAB1  RESET     KEY4                                                        
          READ      WEBLABA1,KEY4;;                                             
          RETURN
.
RAWBLAB1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      WEBLABA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBLAB1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      WEBLABA1,KEY4;WBLBSYST,WBLBNUML,WBLBDEFT,WBLBSPAR           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBLAB1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WEBLABA1;WBLBSYST,WBLBNUML,WBLBDEFT,WBLBSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBLAB1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WEBLABA1;WBLBSYST,WBLBNUML,WBLBDEFT,WBLBSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBLAB1                                                                        
          UPDATE    WEBLABA1;WBLBSYST,WBLBNUML,WBLBDEFT,WBLBSPAR                
          RETURN
.
WRWBLAB1  RESET     KEY4                                                        
          WRITE     WEBLABA1,KEY4;WBLBSYST,WBLBNUML,WBLBDEFT,WBLBSPAR           
          RETURN
.
DEWBLAB1  RESET     KEY4                                                        
          DELETE    WEBLABA1,KEY4                                               
          RETURN
.
