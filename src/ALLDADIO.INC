.
. ALLDADIO    
. --------
. Filename     : alldadaf.dat
.
RSALDAD1  RESET     KEY8                                                        
          READ      ALLDADA1,KEY8;;                                             
          RETURN
.
RAALDAD1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      ALLDADA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALDAD1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      ALLDADA1,KEY8;ALDAVISN,ALDAFHOS,ALDATHOS,ALDASPAR           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALDAD1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLDADA1;ALDAVISN,ALDAFHOS,ALDATHOS,ALDASPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALDAD1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLDADA1;ALDAVISN,ALDAFHOS,ALDATHOS,ALDASPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALDAD1                                                                        
          UPDATE    ALLDADA1;ALDAVISN,ALDAFHOS,ALDATHOS,ALDASPAR                
          RETURN
.
WRALDAD1  RESET     KEY8                                                        
          WRITE     ALLDADA1,KEY8;ALDAVISN,ALDAFHOS,ALDATHOS,ALDASPAR           
          RETURN
.
DEALDAD1  RESET     KEY8                                                        
          DELETE    ALLDADA1,KEY8                                               
          RETURN
.
