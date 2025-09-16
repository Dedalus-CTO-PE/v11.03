.
. SCRPSTIO    
. --------
. Filename     : scrpstaf.dat
.
RSSCPS1   RESET     KEY15                                                       
          READ      SCRPSTA1,KEY15;;                                            
          RETURN
.
RASCPS1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      SCRPSTA1,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSCPS1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      SCRPSTA1,KEY15;SCPSPID,SCPSSID,SCPSROW,SCPSCOL,SCPSITM:     
                        SCPSLEN,SCPSMAN,SCPSATT,SCPSNOR,SCPSMTY,SCPSFMT:        
                        SCPSSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSCPS1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SCRPSTA1;SCPSPID,SCPSSID,SCPSROW,SCPSCOL,SCPSITM:           
                        SCPSLEN,SCPSMAN,SCPSATT,SCPSNOR,SCPSMTY,SCPSFMT:        
                        SCPSSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSCPS1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SCRPSTA1;SCPSPID,SCPSSID,SCPSROW,SCPSCOL,SCPSITM:           
                        SCPSLEN,SCPSMAN,SCPSATT,SCPSNOR,SCPSMTY,SCPSFMT:        
                        SCPSSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSCPS1                                                                         
          UPDATE    SCRPSTA1;SCPSPID,SCPSSID,SCPSROW,SCPSCOL,SCPSITM:           
                        SCPSLEN,SCPSMAN,SCPSATT,SCPSNOR,SCPSMTY,SCPSFMT:        
                        SCPSSPA                                                 
          RETURN
.
WRSCPS1   RESET     KEY15                                                       
          WRITE     SCRPSTA1,KEY15;SCPSPID,SCPSSID,SCPSROW,SCPSCOL,SCPSITM:     
                        SCPSLEN,SCPSMAN,SCPSATT,SCPSNOR,SCPSMTY,SCPSFMT:        
                        SCPSSPA                                                 
          RETURN
.
DESCPS1   RESET     KEY15                                                       
          DELETE    SCRPSTA1,KEY15                                              
          RETURN
.
RSSCPS2   RESET     KEY20                                                       
          READ      SCRPSTA2,KEY20;;                                            
          RETURN
.
RASCPS2   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      SCRPSTA2,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSCPS2   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      SCRPSTA2,KEY20;SCPSPID,SCPSSID,SCPSROW,SCPSCOL,SCPSITM:     
                        SCPSLEN,SCPSMAN,SCPSATT,SCPSNOR,SCPSMTY,SCPSFMT:        
                        SCPSSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSCPS2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SCRPSTA2;SCPSPID,SCPSSID,SCPSROW,SCPSCOL,SCPSITM:           
                        SCPSLEN,SCPSMAN,SCPSATT,SCPSNOR,SCPSMTY,SCPSFMT:        
                        SCPSSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSCPS2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SCRPSTA2;SCPSPID,SCPSSID,SCPSROW,SCPSCOL,SCPSITM:           
                        SCPSLEN,SCPSMAN,SCPSATT,SCPSNOR,SCPSMTY,SCPSFMT:        
                        SCPSSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSCPS2                                                                         
          UPDATE    SCRPSTA2;SCPSPID,SCPSSID,SCPSROW,SCPSCOL,SCPSITM:           
                        SCPSLEN,SCPSMAN,SCPSATT,SCPSNOR,SCPSMTY,SCPSFMT:        
                        SCPSSPA                                                 
          RETURN
.
WRSCPS2   RESET     KEY20                                                       
          WRITE     SCRPSTA2,KEY20;SCPSPID,SCPSSID,SCPSROW,SCPSCOL,SCPSITM:     
                        SCPSLEN,SCPSMAN,SCPSATT,SCPSNOR,SCPSMTY,SCPSFMT:        
                        SCPSSPA                                                 
          RETURN
.
DESCPS2   RESET     KEY20                                                       
          DELETE    SCRPSTA2,KEY20                                              
          RETURN
.
