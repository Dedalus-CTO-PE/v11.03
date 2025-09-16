.
. ALLRHLIO    
. --------
. Filename     : allrhlaf.dat
.
RSALRHL1  RESET     KEY13                                                       
          READ      ALLRHLA1,KEY13;;                                            
          RETURN
.
RAALRHL1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      ALLRHLA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALRHL1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      ALLRHLA1,KEY13;ALRHVISN,ALRHTYPE,ALRHUNIQ,ALRHCODE,ALRHDATE:
                        ALRHCDAT,ALRHCTIM,ALRHCUID,ALRHCOD2,ALRHSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALRHL1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLRHLA1;ALRHVISN,ALRHTYPE,ALRHUNIQ,ALRHCODE,ALRHDATE:      
                        ALRHCDAT,ALRHCTIM,ALRHCUID,ALRHCOD2,ALRHSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALRHL1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLRHLA1;ALRHVISN,ALRHTYPE,ALRHUNIQ,ALRHCODE,ALRHDATE:      
                        ALRHCDAT,ALRHCTIM,ALRHCUID,ALRHCOD2,ALRHSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALRHL1                                                                        
          UPDATE    ALLRHLA1;ALRHVISN,ALRHTYPE,ALRHUNIQ,ALRHCODE,ALRHDATE:      
                        ALRHCDAT,ALRHCTIM,ALRHCUID,ALRHCOD2,ALRHSPAR            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALRHL1  RESET     KEY13                                                       
          WRITE     ALLRHLA1,KEY13;ALRHVISN,ALRHTYPE,ALRHUNIQ,ALRHCODE,ALRHDATE:
                        ALRHCDAT,ALRHCTIM,ALRHCUID,ALRHCOD2,ALRHSPAR            
          RETURN
.
DEALRHL1  RESET     KEY13                                                       
          DELETE    ALLRHLA1,KEY13                                              
          RETURN
.
RLALRHL1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READL     ALLRHLA1,KEY13;ALRHVISN,ALRHTYPE,ALRHUNIQ,ALRHCODE,ALRHDATE:
                        ALRHCDAT,ALRHCTIM,ALRHCUID,ALRHCOD2,ALRHSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALRHL1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLRHLA1;ALRHVISN,ALRHTYPE,ALRHUNIQ,ALRHCODE,ALRHDATE:      
                        ALRHCDAT,ALRHCTIM,ALRHCUID,ALRHCOD2,ALRHSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALRHL1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLRHLA1;ALRHVISN,ALRHTYPE,ALRHUNIQ,ALRHCODE,ALRHDATE:      
                        ALRHCDAT,ALRHCTIM,ALRHCUID,ALRHCOD2,ALRHSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALRHL1  RESET     KEY13                                                       
          UNLOCK    ALLRHLA1                                                    
          RETURN
.
RSALRHL2  RESET     KEY22                                                       
          READ      ALLRHLA2,KEY22;;                                            
          RETURN
.
RAALRHL2  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      ALLRHLA2,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALRHL2  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      ALLRHLA2,KEY22;ALRHVISN,ALRHTYPE,ALRHUNIQ,ALRHCODE,ALRHDATE:
                        ALRHCDAT,ALRHCTIM,ALRHCUID,ALRHCOD2,ALRHSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALRHL2                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLRHLA2;ALRHVISN,ALRHTYPE,ALRHUNIQ,ALRHCODE,ALRHDATE:      
                        ALRHCDAT,ALRHCTIM,ALRHCUID,ALRHCOD2,ALRHSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALRHL2                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLRHLA2;ALRHVISN,ALRHTYPE,ALRHUNIQ,ALRHCODE,ALRHDATE:      
                        ALRHCDAT,ALRHCTIM,ALRHCUID,ALRHCOD2,ALRHSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALRHL2                                                                        
          UPDATE    ALLRHLA2;ALRHVISN,ALRHTYPE,ALRHUNIQ,ALRHCODE,ALRHDATE:      
                        ALRHCDAT,ALRHCTIM,ALRHCUID,ALRHCOD2,ALRHSPAR            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALRHL2  RESET     KEY22                                                       
          WRITE     ALLRHLA2,KEY22;ALRHVISN,ALRHTYPE,ALRHUNIQ,ALRHCODE,ALRHDATE:
                        ALRHCDAT,ALRHCTIM,ALRHCUID,ALRHCOD2,ALRHSPAR            
          RETURN
.
DEALRHL2  RESET     KEY22                                                       
          DELETE    ALLRHLA2,KEY22                                              
          RETURN
.
RLALRHL2  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READL     ALLRHLA2,KEY22;ALRHVISN,ALRHTYPE,ALRHUNIQ,ALRHCODE,ALRHDATE:
                        ALRHCDAT,ALRHCTIM,ALRHCUID,ALRHCOD2,ALRHSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALRHL2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLRHLA2;ALRHVISN,ALRHTYPE,ALRHUNIQ,ALRHCODE,ALRHDATE:      
                        ALRHCDAT,ALRHCTIM,ALRHCUID,ALRHCOD2,ALRHSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALRHL2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLRHLA2;ALRHVISN,ALRHTYPE,ALRHUNIQ,ALRHCODE,ALRHDATE:      
                        ALRHCDAT,ALRHCTIM,ALRHCUID,ALRHCOD2,ALRHSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALRHL2  RESET     KEY22                                                       
          UNLOCK    ALLRHLA2                                                    
          RETURN
.
