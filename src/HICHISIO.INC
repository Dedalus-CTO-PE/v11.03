.
. HICHISIO    
. --------
. Filename     : hichisaf.dat
.
RSHCHIS1  RESET     KEY49                                                       
          READ      HICHISA1,KEY49;;                                            
          RETURN
.
RAHCHIS1  RESET     KEY49                                                       
          MOVE      ZERO,OVRCD
          READ      HICHISA1,KEY49;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCHIS1  RESET     KEY49                                                       
          MOVE      ZERO,OVRCD
          READ      HICHISA1,KEY49;HCHSBTCH,HCHSPMCI,HCHSPYEE,HCHSPSRV,HCHSTDAT:
                        HCHSTTIM,HCHSTUID,HCHSSTAT,HCHSSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCHIS1                                                                        
          MOVE      ZERO,OVRCD
          READKS    HICHISA1;HCHSBTCH,HCHSPMCI,HCHSPYEE,HCHSPSRV,HCHSTDAT:      
                        HCHSTTIM,HCHSTUID,HCHSSTAT,HCHSSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCHIS1                                                                        
          MOVE      ZERO,OVRCD
          READKP    HICHISA1;HCHSBTCH,HCHSPMCI,HCHSPYEE,HCHSPSRV,HCHSTDAT:      
                        HCHSTTIM,HCHSTUID,HCHSSTAT,HCHSSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCHIS1                                                                        
          UPDATE    HICHISA1;HCHSBTCH,HCHSPMCI,HCHSPYEE,HCHSPSRV,HCHSTDAT:      
                        HCHSTTIM,HCHSTUID,HCHSSTAT,HCHSSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRHCHIS1  RESET     KEY49                                                       
          WRITE     HICHISA1,KEY49;HCHSBTCH,HCHSPMCI,HCHSPYEE,HCHSPSRV,HCHSTDAT:
                        HCHSTTIM,HCHSTUID,HCHSSTAT,HCHSSPAR                     
          RETURN
.
DEHCHIS1  RESET     KEY49                                                       
          DELETE    HICHISA1,KEY49                                              
          RETURN
.
RLHCHIS1  RESET     KEY49                                                       
          MOVE      ZERO,OVRCD
          READL     HICHISA1,KEY49;HCHSBTCH,HCHSPMCI,HCHSPYEE,HCHSPSRV,HCHSTDAT:
                        HCHSTTIM,HCHSTUID,HCHSSTAT,HCHSSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLHCHIS1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   HICHISA1;HCHSBTCH,HCHSPMCI,HCHSPYEE,HCHSPSRV,HCHSTDAT:      
                        HCHSTTIM,HCHSTUID,HCHSSTAT,HCHSSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLHCHIS1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   HICHISA1;HCHSBTCH,HCHSPMCI,HCHSPYEE,HCHSPSRV,HCHSTDAT:      
                        HCHSTTIM,HCHSTUID,HCHSSTAT,HCHSSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUHCHIS1  RESET     KEY49                                                       
          UNLOCK    HICHISA1                                                    
          RETURN
.
