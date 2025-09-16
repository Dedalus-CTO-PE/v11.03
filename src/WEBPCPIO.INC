.
. WEBPCPIO    
. --------
. Filename     : webpcpaf.dat
.
RSWBPCP1  RESET     KEY9                                                        
          READ      WEBPCPA1,KEY9;;                                             
          RETURN
.
RAWBPCP1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      WEBPCPA1,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPCP1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      WEBPCPA1,KEY9;WBPCCODE,WBPCCPID,WBPCSCID,WBPCCVID,WBPCCNAM: 
                                  WBPCCROL,WBPCSPAR                             
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBPCP1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBPCPA1;WBPCCODE,WBPCCPID,WBPCSCID,WBPCCVID,WBPCCNAM:      
                             WBPCCROL,WBPCSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBPCP1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBPCPA1;WBPCCODE,WBPCCPID,WBPCSCID,WBPCCVID,WBPCCNAM:      
                             WBPCCROL,WBPCSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBPCP1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBPCPA1;WBPCCODE,WBPCCPID,WBPCSCID,WBPCCVID,WBPCCNAM:      
                             WBPCCROL,WBPCSPAR                                  
          RETURN
.
WRWBPCP1  RESET     KEY9                                                        
          WRITE     WEBPCPA1,KEY9;WBPCCODE,WBPCCPID,WBPCSCID,WBPCCVID,WBPCCNAM: 
                                  WBPCCROL,WBPCSPAR                             
          RETURN
.
DEWBPCP1  RESET     KEY9                                                        
          DELETE    WEBPCPA1,KEY9                                               
          RETURN
.
RSWBPCP2  RESET     KEY9                                                        
          READ      WEBPCPA2,KEY9;;                                             
          RETURN
.
RAWBPCP2  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      WEBPCPA2,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPCP2  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      WEBPCPA2,KEY9;WBPCCODE,WBPCCPID,WBPCSCID,WBPCCVID,WBPCCNAM: 
                                  WBPCCROL,WBPCSPAR                             
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBPCP2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBPCPA2;WBPCCODE,WBPCCPID,WBPCSCID,WBPCCVID,WBPCCNAM:      
                             WBPCCROL,WBPCSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBPCP2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBPCPA2;WBPCCODE,WBPCCPID,WBPCSCID,WBPCCVID,WBPCCNAM:      
                             WBPCCROL,WBPCSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBPCP2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBPCPA2;WBPCCODE,WBPCCPID,WBPCSCID,WBPCCVID,WBPCCNAM:      
                             WBPCCROL,WBPCSPAR                                  
          RETURN
.
WRWBPCP2  RESET     KEY9                                                        
          WRITE     WEBPCPA2,KEY9;WBPCCODE,WBPCCPID,WBPCSCID,WBPCCVID,WBPCCNAM: 
                                  WBPCCROL,WBPCSPAR                             
          RETURN
.
DEWBPCP2  RESET     KEY9                                                        
          DELETE    WEBPCPA2,KEY9                                               
          RETURN
.
