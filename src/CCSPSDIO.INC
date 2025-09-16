.
. CCSPSDIO    
. --------
. Filename     : ccspsdaf.dat
.
RSCCPS1   RESET     KEY24                                                       
          READ      CCSPSDA1,KEY24;;                                            
          RETURN
.
RACCPS1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPSDA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCPS1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPSDA1,KEY24;CCPSHCD,CCPSDPT,CCPSYEAR,CCPSPER,CCPSPCD:    
                        CCPSQTY,CCPSBQT,CCPSCST,CCPSBCT,CCPSFBU,CCPSSCT:        
                        CCPSCHG,CCPSSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCPS1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSPSDA1;CCPSHCD,CCPSDPT,CCPSYEAR,CCPSPER,CCPSPCD:          
                        CCPSQTY,CCPSBQT,CCPSCST,CCPSBCT,CCPSFBU,CCPSSCT:        
                        CCPSCHG,CCPSSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCPS1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSPSDA1;CCPSHCD,CCPSDPT,CCPSYEAR,CCPSPER,CCPSPCD:          
                        CCPSQTY,CCPSBQT,CCPSCST,CCPSBCT,CCPSFBU,CCPSSCT:        
                        CCPSCHG,CCPSSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCPS1                                                                         
          UPDATE    CCSPSDA1;CCPSHCD,CCPSDPT,CCPSYEAR,CCPSPER,CCPSPCD:          
                        CCPSQTY,CCPSBQT,CCPSCST,CCPSBCT,CCPSFBU,CCPSSCT:        
                        CCPSCHG,CCPSSPA                                         
          RETURN
.
WRCCPS1   RESET     KEY24                                                       
          WRITE     CCSPSDA1,KEY24;CCPSHCD,CCPSDPT,CCPSYEAR,CCPSPER,CCPSPCD:    
                        CCPSQTY,CCPSBQT,CCPSCST,CCPSBCT,CCPSFBU,CCPSSCT:        
                        CCPSCHG,CCPSSPA                                         
          RETURN
.
DECCPS1   RESET     KEY24                                                       
          DELETE    CCSPSDA1,KEY24                                              
          RETURN
.
RSCCPS2   RESET     KEY24                                                       
          READ      CCSPSDA2,KEY24;;                                            
          RETURN
.
RACCPS2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPSDA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCPS2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPSDA2,KEY24;CCPSHCD,CCPSDPT,CCPSYEAR,CCPSPER,CCPSPCD:    
                        CCPSQTY,CCPSBQT,CCPSCST,CCPSBCT,CCPSFBU,CCPSSCT:        
                        CCPSCHG,CCPSSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCPS2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSPSDA2;CCPSHCD,CCPSDPT,CCPSYEAR,CCPSPER,CCPSPCD:          
                        CCPSQTY,CCPSBQT,CCPSCST,CCPSBCT,CCPSFBU,CCPSSCT:        
                        CCPSCHG,CCPSSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCPS2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSPSDA2;CCPSHCD,CCPSDPT,CCPSYEAR,CCPSPER,CCPSPCD:          
                        CCPSQTY,CCPSBQT,CCPSCST,CCPSBCT,CCPSFBU,CCPSSCT:        
                        CCPSCHG,CCPSSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCPS2                                                                         
          UPDATE    CCSPSDA2;CCPSHCD,CCPSDPT,CCPSYEAR,CCPSPER,CCPSPCD:          
                        CCPSQTY,CCPSBQT,CCPSCST,CCPSBCT,CCPSFBU,CCPSSCT:        
                        CCPSCHG,CCPSSPA                                         
          RETURN
.
WRCCPS2   RESET     KEY24                                                       
          WRITE     CCSPSDA2,KEY24;CCPSHCD,CCPSDPT,CCPSYEAR,CCPSPER,CCPSPCD:    
                        CCPSQTY,CCPSBQT,CCPSCST,CCPSBCT,CCPSFBU,CCPSSCT:        
                        CCPSCHG,CCPSSPA                                         
          RETURN
.
DECCPS2   RESET     KEY24                                                       
          DELETE    CCSPSDA2,KEY24                                              
          RETURN
.
RSCCPS3   RESET     KEY24                                                       
          READ      CCSPSDA3,KEY24;;                                            
          RETURN
.
RACCPS3   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPSDA3,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCPS3   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPSDA3,KEY24;CCPSHCD,CCPSDPT,CCPSYEAR,CCPSPER,CCPSPCD:    
                        CCPSQTY,CCPSBQT,CCPSCST,CCPSBCT,CCPSFBU,CCPSSCT:        
                        CCPSCHG,CCPSSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCPS3                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSPSDA3;CCPSHCD,CCPSDPT,CCPSYEAR,CCPSPER,CCPSPCD:          
                        CCPSQTY,CCPSBQT,CCPSCST,CCPSBCT,CCPSFBU,CCPSSCT:        
                        CCPSCHG,CCPSSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCPS3                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSPSDA3;CCPSHCD,CCPSDPT,CCPSYEAR,CCPSPER,CCPSPCD:          
                        CCPSQTY,CCPSBQT,CCPSCST,CCPSBCT,CCPSFBU,CCPSSCT:        
                        CCPSCHG,CCPSSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCPS3                                                                         
          UPDATE    CCSPSDA3;CCPSHCD,CCPSDPT,CCPSYEAR,CCPSPER,CCPSPCD:          
                        CCPSQTY,CCPSBQT,CCPSCST,CCPSBCT,CCPSFBU,CCPSSCT:        
                        CCPSCHG,CCPSSPA                                         
          RETURN
.
WRCCPS3   RESET     KEY24                                                       
          WRITE     CCSPSDA3,KEY24;CCPSHCD,CCPSDPT,CCPSYEAR,CCPSPER,CCPSPCD:    
                        CCPSQTY,CCPSBQT,CCPSCST,CCPSBCT,CCPSFBU,CCPSSCT:        
                        CCPSCHG,CCPSSPA                                         
          RETURN
.
DECCPS3   RESET     KEY24                                                       
          DELETE    CCSPSDA3,KEY24                                              
          RETURN
.
