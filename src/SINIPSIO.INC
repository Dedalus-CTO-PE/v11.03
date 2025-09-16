.
. SINIPSIO    
. --------
. Filename     : sinipsaf.dat
.
RSSIIP1   RESET     KEY83                                                       
          READ      SINIPSA1,KEY83;;                                            
          RETURN
.
RASIIP1   RESET     KEY83                                                       
          MOVE      ZERO,OVRCD
          READ      SINIPSA1,KEY83;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIIP1   RESET     KEY83                                                       
          MOVE      ZERO,OVRCD
          READ      SINIPSA1,KEY83;SIIPWAR,SIIPCST,SIIPDEL,SIIPRAC,SIIPCAT:     
                        SIIPTYP,SIIPREQ,SIIPRQT,SIIPAQT,SIIPBQT,SIIPPFL:        
                        SIIPIMP,SIIPRESI,SIIPSPA                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIIP1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINIPSA1;SIIPWAR,SIIPCST,SIIPDEL,SIIPRAC,SIIPCAT:           
                        SIIPTYP,SIIPREQ,SIIPRQT,SIIPAQT,SIIPBQT,SIIPPFL:        
                        SIIPIMP,SIIPRESI,SIIPSPA                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIIP1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINIPSA1;SIIPWAR,SIIPCST,SIIPDEL,SIIPRAC,SIIPCAT:           
                        SIIPTYP,SIIPREQ,SIIPRQT,SIIPAQT,SIIPBQT,SIIPPFL:        
                        SIIPIMP,SIIPRESI,SIIPSPA                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIIP1                                                                         
          UPDATE    SINIPSA1;SIIPWAR,SIIPCST,SIIPDEL,SIIPRAC,SIIPCAT:           
                        SIIPTYP,SIIPREQ,SIIPRQT,SIIPAQT,SIIPBQT,SIIPPFL:        
                        SIIPIMP,SIIPRESI,SIIPSPA                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIIP1   RESET     KEY83                                                       
          WRITE     SINIPSA1,KEY83;SIIPWAR,SIIPCST,SIIPDEL,SIIPRAC,SIIPCAT:     
                        SIIPTYP,SIIPREQ,SIIPRQT,SIIPAQT,SIIPBQT,SIIPPFL:        
                        SIIPIMP,SIIPRESI,SIIPSPA                                
          RETURN
.
DESIIP1   RESET     KEY83                                                       
          DELETE    SINIPSA1,KEY83                                              
          RETURN
.
RLSIIP1   RESET     KEY83                                                       
          MOVE      ZERO,OVRCD
          READL     SINIPSA1,KEY83;SIIPWAR,SIIPCST,SIIPDEL,SIIPRAC,SIIPCAT:     
                        SIIPTYP,SIIPREQ,SIIPRQT,SIIPAQT,SIIPBQT,SIIPPFL:        
                        SIIPIMP,SIIPRESI,SIIPSPA                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIIP1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINIPSA1;SIIPWAR,SIIPCST,SIIPDEL,SIIPRAC,SIIPCAT:           
                        SIIPTYP,SIIPREQ,SIIPRQT,SIIPAQT,SIIPBQT,SIIPPFL:        
                        SIIPIMP,SIIPRESI,SIIPSPA                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIIP1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINIPSA1;SIIPWAR,SIIPCST,SIIPDEL,SIIPRAC,SIIPCAT:           
                        SIIPTYP,SIIPREQ,SIIPRQT,SIIPAQT,SIIPBQT,SIIPPFL:        
                        SIIPIMP,SIIPRESI,SIIPSPA                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIIP1   RESET     KEY83                                                       
          UNLOCK    SINIPSA1                                                    
          RETURN
.
RSSIIP2   RESET     KEY87                                                       
          READ      SINIPSA2,KEY87;;                                            
          RETURN
.
RASIIP2   RESET     KEY87                                                       
          MOVE      ZERO,OVRCD
          READ      SINIPSA2,KEY87;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIIP2   RESET     KEY87                                                       
          MOVE      ZERO,OVRCD
          READ      SINIPSA2,KEY87;SIIPWAR,SIIPCST,SIIPDEL,SIIPRAC,SIIPCAT:     
                        SIIPTYP,SIIPREQ,SIIPRQT,SIIPAQT,SIIPBQT,SIIPPFL:        
                        SIIPIMP,SIIPRESI,SIIPSPA                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIIP2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINIPSA2;SIIPWAR,SIIPCST,SIIPDEL,SIIPRAC,SIIPCAT:           
                        SIIPTYP,SIIPREQ,SIIPRQT,SIIPAQT,SIIPBQT,SIIPPFL:        
                        SIIPIMP,SIIPRESI,SIIPSPA                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIIP2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINIPSA2;SIIPWAR,SIIPCST,SIIPDEL,SIIPRAC,SIIPCAT:           
                        SIIPTYP,SIIPREQ,SIIPRQT,SIIPAQT,SIIPBQT,SIIPPFL:        
                        SIIPIMP,SIIPRESI,SIIPSPA                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIIP2                                                                         
          UPDATE    SINIPSA2;SIIPWAR,SIIPCST,SIIPDEL,SIIPRAC,SIIPCAT:           
                        SIIPTYP,SIIPREQ,SIIPRQT,SIIPAQT,SIIPBQT,SIIPPFL:        
                        SIIPIMP,SIIPRESI,SIIPSPA                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIIP2   RESET     KEY87                                                       
          WRITE     SINIPSA2,KEY87;SIIPWAR,SIIPCST,SIIPDEL,SIIPRAC,SIIPCAT:     
                        SIIPTYP,SIIPREQ,SIIPRQT,SIIPAQT,SIIPBQT,SIIPPFL:        
                        SIIPIMP,SIIPRESI,SIIPSPA                                
          RETURN
.
DESIIP2   RESET     KEY87                                                       
          DELETE    SINIPSA2,KEY87                                              
          RETURN
.
RLSIIP2   RESET     KEY87                                                       
          MOVE      ZERO,OVRCD
          READL     SINIPSA2,KEY87;SIIPWAR,SIIPCST,SIIPDEL,SIIPRAC,SIIPCAT:     
                        SIIPTYP,SIIPREQ,SIIPRQT,SIIPAQT,SIIPBQT,SIIPPFL:        
                        SIIPIMP,SIIPRESI,SIIPSPA                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIIP2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINIPSA2;SIIPWAR,SIIPCST,SIIPDEL,SIIPRAC,SIIPCAT:           
                        SIIPTYP,SIIPREQ,SIIPRQT,SIIPAQT,SIIPBQT,SIIPPFL:        
                        SIIPIMP,SIIPRESI,SIIPSPA                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIIP2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINIPSA2;SIIPWAR,SIIPCST,SIIPDEL,SIIPRAC,SIIPCAT:           
                        SIIPTYP,SIIPREQ,SIIPRQT,SIIPAQT,SIIPBQT,SIIPPFL:        
                        SIIPIMP,SIIPRESI,SIIPSPA                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIIP2   RESET     KEY87                                                       
          UNLOCK    SINIPSA2                                                    
          RETURN
.
