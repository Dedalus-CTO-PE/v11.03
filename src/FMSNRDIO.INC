.
. FMSNRDIO    
. --------
. Filename     : fmsnrdaf.dat
.
RSFMND1   RESET     KEY3                                                        
          READ      FMSNRDA1,KEY3;;                                             
          RETURN
.
RAFMND1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      FMSNRDA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMND1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      FMSNRDA1,KEY3;FMNDCODE,FMNDLEDG,FMNDDESC,FMNDSPAR           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMND1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSNRDA1;FMNDCODE,FMNDLEDG,FMNDDESC,FMNDSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMND1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSNRDA1;FMNDCODE,FMNDLEDG,FMNDDESC,FMNDSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMND1                                                                         
          UPDATE    FMSNRDA1;FMNDCODE,FMNDLEDG,FMNDDESC,FMNDSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRFMND1   RESET     KEY3                                                        
          WRITE     FMSNRDA1,KEY3;FMNDCODE,FMNDLEDG,FMNDDESC,FMNDSPAR           
          RETURN
.
DEFMND1   RESET     KEY3                                                        
          DELETE    FMSNRDA1,KEY3                                               
          RETURN
.
RLFMND1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READL     FMSNRDA1,KEY3;FMNDCODE,FMNDLEDG,FMNDDESC,FMNDSPAR           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLFMND1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   FMSNRDA1;FMNDCODE,FMNDLEDG,FMNDDESC,FMNDSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLFMND1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   FMSNRDA1;FMNDCODE,FMNDLEDG,FMNDDESC,FMNDSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUFMND1   RESET     KEY3                                                        
          UNLOCK    FMSNRDA1                                                    
          RETURN
.
