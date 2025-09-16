.
. OUTPWOIO    
. --------
. Filename     : outpwoaf.dat
.
RSOTPWO1  RESET     KEY9                                                        
          READ      OUTPWOA1,KEY9;;                                             
          RETURN
.
RAOTPWO1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      OUTPWOA1,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTPWO1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      OUTPWOA1,KEY9;OTPWCNTR,OTPWTIER,OTPWPWEI,OTPWCDAT,OTPWCTIM: 
                                  OTPWCUID,OTPWUDAT,OTPWUTIM,OTPWUUID,OTPWSPAR  
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTPWO1  MOVE      ZERO,OVRCD                                                  
          READKS    OUTPWOA1;OTPWCNTR,OTPWTIER,OTPWPWEI,OTPWCDAT,OTPWCTIM:      
                             OTPWCUID,OTPWUDAT,OTPWUTIM,OTPWUUID,OTPWSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTPWO1  MOVE      ZERO,OVRCD                                                  
          READKP    OUTPWOA1;OTPWCNTR,OTPWTIER,OTPWPWEI,OTPWCDAT,OTPWCTIM:      
                             OTPWCUID,OTPWUDAT,OTPWUTIM,OTPWUUID,OTPWSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTPWO1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTPWOA1;OTPWCNTR,OTPWTIER,OTPWPWEI,OTPWCDAT,OTPWCTIM:      
                             OTPWCUID,OTPWUDAT,OTPWUTIM,OTPWUUID,OTPWSPAR       
          RETURN
.
WROTPWO1  RESET     KEY9                                                        
          WRITE     OUTPWOA1,KEY9;OTPWCNTR,OTPWTIER,OTPWPWEI,OTPWCDAT,OTPWCTIM: 
                                  OTPWCUID,OTPWUDAT,OTPWUTIM,OTPWUUID,OTPWSPAR  
          RETURN
.
DEOTPWO1  RESET     KEY9                                                        
          DELETE    OUTPWOA1,KEY9                                               
          RETURN
.
RSOTPWO2  RESET     KEY9                                                        
          READ      OUTPWOA2,KEY9;;                                             
          RETURN
.
RAOTPWO2  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      OUTPWOA2,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTPWO2  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      OUTPWOA2,KEY9;OTPWCNTR,OTPWTIER,OTPWPWEI,OTPWCDAT,OTPWCTIM: 
                                  OTPWCUID,OTPWUDAT,OTPWUTIM,OTPWUUID,OTPWSPAR  
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTPWO2  MOVE      ZERO,OVRCD                                                  
          READKS    OUTPWOA2;OTPWCNTR,OTPWTIER,OTPWPWEI,OTPWCDAT,OTPWCTIM:      
                             OTPWCUID,OTPWUDAT,OTPWUTIM,OTPWUUID,OTPWSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTPWO2  MOVE      ZERO,OVRCD                                                  
          READKP    OUTPWOA2;OTPWCNTR,OTPWTIER,OTPWPWEI,OTPWCDAT,OTPWCTIM:      
                             OTPWCUID,OTPWUDAT,OTPWUTIM,OTPWUUID,OTPWSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTPWO2  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTPWOA2;OTPWCNTR,OTPWTIER,OTPWPWEI,OTPWCDAT,OTPWCTIM:      
                             OTPWCUID,OTPWUDAT,OTPWUTIM,OTPWUUID,OTPWSPAR       
          RETURN
.
WROTPWO2  RESET     KEY9                                                        
          WRITE     OUTPWOA2,KEY9;OTPWCNTR,OTPWTIER,OTPWPWEI,OTPWCDAT,OTPWCTIM: 
                                  OTPWCUID,OTPWUDAT,OTPWUTIM,OTPWUUID,OTPWSPAR  
          RETURN
.
DEOTPWO2  RESET     KEY9                                                        
          DELETE    OUTPWOA2,KEY9                                               
          RETURN
.
