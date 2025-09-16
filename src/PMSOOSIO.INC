.
. PMSOOSIO    
. --------
. Filename     : pmsoosaf.dat
.
RSPMOOS1  RESET     KEY8                                                        
          READ      PMSOOSA1,KEY8;;                                             
          RETURN
.
RAPMOOS1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSOOSA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMOOS1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSOOSA1,KEY8;PMOOURNO,PMOOCUSR,PMOOCDTE,PMOOCTME,PMOOSPAR  
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMOOS1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSOOSA1;PMOOURNO,PMOOCUSR,PMOOCDTE,PMOOCTME,PMOOSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMOOS1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSOOSA1;PMOOURNO,PMOOCUSR,PMOOCDTE,PMOOCTME,PMOOSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMOOS1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSOOSA1;PMOOURNO,PMOOCUSR,PMOOCDTE,PMOOCTME,PMOOSPAR       
          RETURN
.
WRPMOOS1  RESET     KEY8                                                        
          WRITE     PMSOOSA1,KEY8;PMOOURNO,PMOOCUSR,PMOOCDTE,PMOOCTME,PMOOSPAR  
          RETURN
.
DEPMOOS1  RESET     KEY8                                                        
          DELETE    PMSOOSA1,KEY8                                               
          RETURN
.
