.
. DEBFSDIO    
. --------
. Filename     : debfsdaf.dat
.
RSDBSD1   RESET     KEY23                                                       
          READ      DEBFSDA1,KEY23;;                                            
          RETURN
.
RADBSD1   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFSDA1,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBSD1   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFSDA1,KEY23;DBSDSTAT,DBSDDEBC,DBSDLINE,DBSDTYPE,DBSDDESC:
                        DBSDAMNT,DBSDGST,DBSDTOTA,DBSDSPAR                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBSD1                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBFSDA1;DBSDSTAT,DBSDDEBC,DBSDLINE,DBSDTYPE,DBSDDESC:      
                        DBSDAMNT,DBSDGST,DBSDTOTA,DBSDSPAR                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBSD1                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBFSDA1;DBSDSTAT,DBSDDEBC,DBSDLINE,DBSDTYPE,DBSDDESC:      
                        DBSDAMNT,DBSDGST,DBSDTOTA,DBSDSPAR                      
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBSD1                                                                         
          UPDATE    DEBFSDA1;DBSDSTAT,DBSDDEBC,DBSDLINE,DBSDTYPE,DBSDDESC:      
                        DBSDAMNT,DBSDGST,DBSDTOTA,DBSDSPAR                      
          RETURN
.
WRDBSD1   RESET     KEY23                                                       
          WRITE     DEBFSDA1,KEY23;DBSDSTAT,DBSDDEBC,DBSDLINE,DBSDTYPE,DBSDDESC:
                        DBSDAMNT,DBSDGST,DBSDTOTA,DBSDSPAR                      
          RETURN
.
DEDBSD1   RESET     KEY23                                                       
          DELETE    DEBFSDA1,KEY23                                              
          RETURN
.
