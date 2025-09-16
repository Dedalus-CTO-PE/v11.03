.
. PMSEERIO    
. --------
. Filename     : pmseeraf.dat
.
RSPMEER1  RESET     KEY20                                                       
          READ      PMSEERA1,KEY20;;                                            
          RETURN
.
RAPMEER1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEERA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMEER1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEERA1,KEY20;PMERUNIQ,PMERDATE,PMERTIME,PMERMESS,PMERSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMEER1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSEERA1;PMERUNIQ,PMERDATE,PMERTIME,PMERMESS,PMERSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMEER1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSEERA1;PMERUNIQ,PMERDATE,PMERTIME,PMERMESS,PMERSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMEER1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSEERA1;PMERUNIQ,PMERDATE,PMERTIME,PMERMESS,PMERSPAR       
          RETURN
.
WRPMEER1  RESET     KEY20                                                       
          WRITE     PMSEERA1,KEY20;PMERUNIQ,PMERDATE,PMERTIME,PMERMESS,PMERSPAR 
          RETURN
.
DEPMEER1  RESET     KEY20                                                       
          DELETE    PMSEERA1,KEY20                                              
          RETURN
.
