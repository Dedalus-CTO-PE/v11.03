.
. FMSNRAIO    
. --------
. Filename     : fmsnraaf.dat
.
RSFMNA1   RESET     KEY3                                                        
          READ      FMSNRAA1,KEY3;;                                             
          RETURN
.
RAFMNA1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      FMSNRAA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMNA1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      FMSNRAA1,KEY3;FMNACODE,FMNALEDG,FMNADESC,FMNASPAR           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMNA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSNRAA1;FMNACODE,FMNALEDG,FMNADESC,FMNASPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMNA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSNRAA1;FMNACODE,FMNALEDG,FMNADESC,FMNASPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMNA1                                                                         
          UPDATE    FMSNRAA1;FMNACODE,FMNALEDG,FMNADESC,FMNASPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRFMNA1   RESET     KEY3                                                        
          WRITE     FMSNRAA1,KEY3;FMNACODE,FMNALEDG,FMNADESC,FMNASPAR           
          RETURN
.
DEFMNA1   RESET     KEY3                                                        
          DELETE    FMSNRAA1,KEY3                                               
          RETURN
.
RLFMNA1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READL     FMSNRAA1,KEY3;FMNACODE,FMNALEDG,FMNADESC,FMNASPAR           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLFMNA1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   FMSNRAA1;FMNACODE,FMNALEDG,FMNADESC,FMNASPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLFMNA1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   FMSNRAA1;FMNACODE,FMNALEDG,FMNADESC,FMNASPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUFMNA1   RESET     KEY3                                                        
          UNLOCK    FMSNRAA1                                                    
          RETURN
.
