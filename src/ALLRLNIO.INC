.
. ALLRLNIO    
. --------
. Filename     : allrlnaf.dat
.
RSALRLN1  RESET     KEY16                                                       
          READ      ALLRLNA1,KEY16;;                                            
          RETURN
.
RAALRLN1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ALLRLNA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALRLN1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ALLRLNA1,KEY16;ALRLVISN,ALRLLNKV,ALRLCDAT,ALRLCTIM,ALRLCUID:
                        ALRLSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALRLN1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLRLNA1;ALRLVISN,ALRLLNKV,ALRLCDAT,ALRLCTIM,ALRLCUID:      
                        ALRLSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALRLN1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLRLNA1;ALRLVISN,ALRLLNKV,ALRLCDAT,ALRLCTIM,ALRLCUID:      
                        ALRLSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALRLN1                                                                        
          UPDATE    ALLRLNA1;ALRLVISN,ALRLLNKV,ALRLCDAT,ALRLCTIM,ALRLCUID:      
                        ALRLSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALRLN1  RESET     KEY16                                                       
          WRITE     ALLRLNA1,KEY16;ALRLVISN,ALRLLNKV,ALRLCDAT,ALRLCTIM,ALRLCUID:
                        ALRLSPAR                                                
          RETURN
.
DEALRLN1  RESET     KEY16                                                       
          DELETE    ALLRLNA1,KEY16                                              
          RETURN
.
RLALRLN1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     ALLRLNA1,KEY16;ALRLVISN,ALRLLNKV,ALRLCDAT,ALRLCTIM,ALRLCUID:
                        ALRLSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALRLN1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLRLNA1;ALRLVISN,ALRLLNKV,ALRLCDAT,ALRLCTIM,ALRLCUID:      
                        ALRLSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALRLN1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLRLNA1;ALRLVISN,ALRLLNKV,ALRLCDAT,ALRLCTIM,ALRLCUID:      
                        ALRLSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALRLN1  RESET     KEY16                                                       
          UNLOCK    ALLRLNA1                                                    
          RETURN
.
RSALRLN2  RESET     KEY16                                                       
          READ      ALLRLNA2,KEY16;;                                            
          RETURN
.
RAALRLN2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ALLRLNA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALRLN2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ALLRLNA2,KEY16;ALRLVISN,ALRLLNKV,ALRLCDAT,ALRLCTIM,ALRLCUID:
                        ALRLSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALRLN2                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLRLNA2;ALRLVISN,ALRLLNKV,ALRLCDAT,ALRLCTIM,ALRLCUID:      
                        ALRLSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALRLN2                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLRLNA2;ALRLVISN,ALRLLNKV,ALRLCDAT,ALRLCTIM,ALRLCUID:      
                        ALRLSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALRLN2                                                                        
          UPDATE    ALLRLNA2;ALRLVISN,ALRLLNKV,ALRLCDAT,ALRLCTIM,ALRLCUID:      
                        ALRLSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALRLN2  RESET     KEY16                                                       
          WRITE     ALLRLNA2,KEY16;ALRLVISN,ALRLLNKV,ALRLCDAT,ALRLCTIM,ALRLCUID:
                        ALRLSPAR                                                
          RETURN
.
DEALRLN2  RESET     KEY16                                                       
          DELETE    ALLRLNA2,KEY16                                              
          RETURN
.
RLALRLN2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     ALLRLNA2,KEY16;ALRLVISN,ALRLLNKV,ALRLCDAT,ALRLCTIM,ALRLCUID:
                        ALRLSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALRLN2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLRLNA2;ALRLVISN,ALRLLNKV,ALRLCDAT,ALRLCTIM,ALRLCUID:      
                        ALRLSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALRLN2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLRLNA2;ALRLVISN,ALRLLNKV,ALRLCDAT,ALRLCTIM,ALRLCUID:      
                        ALRLSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALRLN2  RESET     KEY16                                                       
          UNLOCK    ALLRLNA2                                                    
          RETURN
.
