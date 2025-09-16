.
. ALLRKIIO    
. --------
. Filename     : allrkiaf.dat
.
RSALRKI1  RESET     KEY27                                                       
          READ      ALLRKIA1,KEY27;;                                            
          RETURN
.
RAALRKI1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      ALLRKIA1,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALRKI1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      ALLRKIA1,KEY27;ALRKDEPT,ALRKPROC,ALRKKKWD,ALRKSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALRKI1  MOVE      ZERO,OVRCD                                                  
          READKS    ALLRKIA1;ALRKDEPT,ALRKPROC,ALRKKKWD,ALRKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALRKI1  MOVE      ZERO,OVRCD                                                  
          READKP    ALLRKIA1;ALRKDEPT,ALRKPROC,ALRKKKWD,ALRKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALRKI1  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLRKIA1;ALRKDEPT,ALRKPROC,ALRKKKWD,ALRKSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALRKI1  RESET     KEY27                                                       
          WRITE     ALLRKIA1,KEY27;ALRKDEPT,ALRKPROC,ALRKKKWD,ALRKSPAR          
          RETURN
.
DEALRKI1  RESET     KEY27                                                       
          DELETE    ALLRKIA1,KEY27                                              
          RETURN
.
RLALRKI1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READL     ALLRKIA1,KEY27;ALRKDEPT,ALRKPROC,ALRKKKWD,ALRKSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALRKI1  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLRKIA1;ALRKDEPT,ALRKPROC,ALRKKKWD,ALRKSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALRKI1  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLRKIA1;ALRKDEPT,ALRKPROC,ALRKKKWD,ALRKSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALRKI1  RESET     KEY27                                                       
          UNLOCK    ALLRKIA1                                                    
          RETURN
.
RSALRKI2  RESET     KEY27                                                       
          READ      ALLRKIA2,KEY27;;                                            
          RETURN
.
RAALRKI2  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      ALLRKIA2,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALRKI2  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      ALLRKIA2,KEY27;ALRKDEPT,ALRKPROC,ALRKKKWD,ALRKSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALRKI2  MOVE      ZERO,OVRCD                                                  
          READKS    ALLRKIA2;ALRKDEPT,ALRKPROC,ALRKKKWD,ALRKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALRKI2  MOVE      ZERO,OVRCD                                                  
          READKP    ALLRKIA2;ALRKDEPT,ALRKPROC,ALRKKKWD,ALRKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALRKI2  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLRKIA2;ALRKDEPT,ALRKPROC,ALRKKKWD,ALRKSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALRKI2  RESET     KEY27                                                       
          WRITE     ALLRKIA2,KEY27;ALRKDEPT,ALRKPROC,ALRKKKWD,ALRKSPAR          
          RETURN
.
DEALRKI2  RESET     KEY27                                                       
          DELETE    ALLRKIA2,KEY27                                              
          RETURN
.
RLALRKI2  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READL     ALLRKIA2,KEY27;ALRKDEPT,ALRKPROC,ALRKKKWD,ALRKSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALRKI2  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLRKIA2;ALRKDEPT,ALRKPROC,ALRKKKWD,ALRKSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALRKI2  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLRKIA2;ALRKDEPT,ALRKPROC,ALRKKKWD,ALRKSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALRKI2  RESET     KEY27                                                       
          UNLOCK    ALLRKIA2                                                    
          RETURN
.
