.
. SINNPOIO    
. --------
. Filename     : sinnpoaf.dat
.
RSSINP1   RESET     KEY17                                                       
          READ      SINNPOA1,KEY17;;                                            
          RETURN
.
RASINP1   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      SINNPOA1,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSINP1   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      SINNPOA1,KEY17;SINPCST,SINPSUP,SINPCAT,SINPQTY,SINPSUT:     
                        SINPSUB,SINPPD,SINPPN,SINPCON,SINPCDT,SINPEDT:          
                        SINPECT,SINPGSTA,SINPGST,SINPSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSINP1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINNPOA1;SINPCST,SINPSUP,SINPCAT,SINPQTY,SINPSUT:           
                        SINPSUB,SINPPD,SINPPN,SINPCON,SINPCDT,SINPEDT:          
                        SINPECT,SINPGSTA,SINPGST,SINPSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSINP1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINNPOA1;SINPCST,SINPSUP,SINPCAT,SINPQTY,SINPSUT:           
                        SINPSUB,SINPPD,SINPPN,SINPCON,SINPCDT,SINPEDT:          
                        SINPECT,SINPGSTA,SINPGST,SINPSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSINP1                                                                         
          UPDATE    SINNPOA1;SINPCST,SINPSUP,SINPCAT,SINPQTY,SINPSUT:           
                        SINPSUB,SINPPD,SINPPN,SINPCON,SINPCDT,SINPEDT:          
                        SINPECT,SINPGSTA,SINPGST,SINPSPA                        
          RETURN
.
WRSINP1   RESET     KEY17                                                       
          WRITE     SINNPOA1,KEY17;SINPCST,SINPSUP,SINPCAT,SINPQTY,SINPSUT:     
                        SINPSUB,SINPPD,SINPPN,SINPCON,SINPCDT,SINPEDT:          
                        SINPECT,SINPGSTA,SINPGST,SINPSPA                        
          RETURN
.
DESINP1   RESET     KEY17                                                       
          DELETE    SINNPOA1,KEY17                                              
          RETURN
.
