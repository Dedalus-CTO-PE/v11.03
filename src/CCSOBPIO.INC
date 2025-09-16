.
. CCSOBPIO    
. --------
. Filename     : ccsobpaf.dat
.
RSCCOB1   RESET     KEY9                                                        
          READ      CCSOBPA1,KEY9;;                                             
          RETURN
.
RACCOB1   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      CCSOBPA1,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCOB1   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      CCSOBPA1,KEY9;CCOBCID,CCOBREF,CCOBPRI,CCOBSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCOB1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSOBPA1;CCOBCID,CCOBREF,CCOBPRI,CCOBSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCOB1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSOBPA1;CCOBCID,CCOBREF,CCOBPRI,CCOBSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCOB1                                                                         
          UPDATE    CCSOBPA1;CCOBCID,CCOBREF,CCOBPRI,CCOBSPA                    
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCCOB1   RESET     KEY9                                                        
          WRITE     CCSOBPA1,KEY9;CCOBCID,CCOBREF,CCOBPRI,CCOBSPA               
          RETURN
.
DECCOB1   RESET     KEY9                                                        
          DELETE    CCSOBPA1,KEY9                                               
          RETURN
.
RLCCOB1   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READL     CCSOBPA1,KEY9;CCOBCID,CCOBREF,CCOBPRI,CCOBSPA               
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCCOB1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CCSOBPA1;CCOBCID,CCOBREF,CCOBPRI,CCOBSPA                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCCOB1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CCSOBPA1;CCOBCID,CCOBREF,CCOBPRI,CCOBSPA                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCCOB1   RESET     KEY9                                                        
          UNLOCK    CCSOBPA1                                                    
          RETURN
.
