.
. SINDISIO    
. --------
. Filename     : sindisaf.dat
.
RSSIDS1   RESET     KEY20                                                       
          READ      SINDISA1,KEY20;;                                            
          RETURN
.
RASIDS1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      SINDISA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIDS1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      SINDISA1,KEY20;SIDSWAR,SIDSCAT,SIDSDAT,SIDSDIS,SIDSVAL:     
                        SIDSSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIDS1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINDISA1;SIDSWAR,SIDSCAT,SIDSDAT,SIDSDIS,SIDSVAL:           
                        SIDSSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIDS1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINDISA1;SIDSWAR,SIDSCAT,SIDSDAT,SIDSDIS,SIDSVAL:           
                        SIDSSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIDS1                                                                         
          UPDATE    SINDISA1;SIDSWAR,SIDSCAT,SIDSDAT,SIDSDIS,SIDSVAL:           
                        SIDSSPA                                                 
          RETURN
.
WRSIDS1   RESET     KEY20                                                       
          WRITE     SINDISA1,KEY20;SIDSWAR,SIDSCAT,SIDSDAT,SIDSDIS,SIDSVAL:     
                        SIDSSPA                                                 
          RETURN
.
DESIDS1   RESET     KEY20                                                       
          DELETE    SINDISA1,KEY20                                              
          RETURN
.
