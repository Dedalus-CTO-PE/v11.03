.
. SINBPSIO    
. --------
. Filename     : sinbpsaf.dat
.
RSSIBP1   RESET     KEY83                                                       
          READ      SINBPSA1,KEY83;;                                            
          RETURN
.
RASIBP1   RESET     KEY83                                                       
          MOVE      ZERO,OVRCD
          READ      SINBPSA1,KEY83;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIBP1   RESET     KEY83                                                       
          MOVE      ZERO,OVRCD
          READ      SINBPSA1,KEY83;SIBPWAR,SIBPCST,SIBPDEL,SIBPRAC,SIBPCAT:     
                        SIBPTYP,SIBPREQ,SIBPRQT,SIBPAQT,SIBPBQT,SIBPPFL:        
                        SIBPRESI,SIBPSPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIBP1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINBPSA1;SIBPWAR,SIBPCST,SIBPDEL,SIBPRAC,SIBPCAT:           
                        SIBPTYP,SIBPREQ,SIBPRQT,SIBPAQT,SIBPBQT,SIBPPFL:        
                        SIBPRESI,SIBPSPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIBP1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINBPSA1;SIBPWAR,SIBPCST,SIBPDEL,SIBPRAC,SIBPCAT:           
                        SIBPTYP,SIBPREQ,SIBPRQT,SIBPAQT,SIBPBQT,SIBPPFL:        
                        SIBPRESI,SIBPSPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIBP1                                                                         
          UPDATE    SINBPSA1;SIBPWAR,SIBPCST,SIBPDEL,SIBPRAC,SIBPCAT:           
                        SIBPTYP,SIBPREQ,SIBPRQT,SIBPAQT,SIBPBQT,SIBPPFL:        
                        SIBPRESI,SIBPSPA                                        
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIBP1   RESET     KEY83                                                       
          WRITE     SINBPSA1,KEY83;SIBPWAR,SIBPCST,SIBPDEL,SIBPRAC,SIBPCAT:     
                        SIBPTYP,SIBPREQ,SIBPRQT,SIBPAQT,SIBPBQT,SIBPPFL:        
                        SIBPRESI,SIBPSPA                                        
          RETURN
.
DESIBP1   RESET     KEY83                                                       
          DELETE    SINBPSA1,KEY83                                              
          RETURN
.
RLSIBP1   RESET     KEY83                                                       
          MOVE      ZERO,OVRCD
          READL     SINBPSA1,KEY83;SIBPWAR,SIBPCST,SIBPDEL,SIBPRAC,SIBPCAT:     
                        SIBPTYP,SIBPREQ,SIBPRQT,SIBPAQT,SIBPBQT,SIBPPFL:        
                        SIBPRESI,SIBPSPA                                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIBP1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINBPSA1;SIBPWAR,SIBPCST,SIBPDEL,SIBPRAC,SIBPCAT:           
                        SIBPTYP,SIBPREQ,SIBPRQT,SIBPAQT,SIBPBQT,SIBPPFL:        
                        SIBPRESI,SIBPSPA                                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIBP1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINBPSA1;SIBPWAR,SIBPCST,SIBPDEL,SIBPRAC,SIBPCAT:           
                        SIBPTYP,SIBPREQ,SIBPRQT,SIBPAQT,SIBPBQT,SIBPPFL:        
                        SIBPRESI,SIBPSPA                                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIBP1   RESET     KEY83                                                       
          UNLOCK    SINBPSA1                                                    
          RETURN
.
