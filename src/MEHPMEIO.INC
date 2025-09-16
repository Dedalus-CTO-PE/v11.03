.
. MEHPMEIO    
. --------
. Filename     : mehpmeaf.dat
.
RSMHPME1  RESET     KEY9                                                        
          READ      MEHPMEA1,KEY9;;                                             
          RETURN
.
RAMHPME1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      MEHPMEA1,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHPME1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      MEHPMEA1,KEY9;MHPEERCD,MHPETYPE,MHPEREFR,MHPEEMSG,MHPESPAR  
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMHPME1                                                                        
          MOVE      ZERO,OVRCD
          READKS    MEHPMEA1;MHPEERCD,MHPETYPE,MHPEREFR,MHPEEMSG,MHPESPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMHPME1                                                                        
          MOVE      ZERO,OVRCD
          READKP    MEHPMEA1;MHPEERCD,MHPETYPE,MHPEREFR,MHPEEMSG,MHPESPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMHPME1                                                                        
          UPDATE    MEHPMEA1;MHPEERCD,MHPETYPE,MHPEREFR,MHPEEMSG,MHPESPAR       
          RETURN
.
WRMHPME1  RESET     KEY9                                                        
          WRITE     MEHPMEA1,KEY9;MHPEERCD,MHPETYPE,MHPEREFR,MHPEEMSG,MHPESPAR  
          RETURN
.
DEMHPME1  RESET     KEY9                                                        
          DELETE    MEHPMEA1,KEY9                                               
          RETURN
.
