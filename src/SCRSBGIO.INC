.
. SCRSBGIO    
. --------
. Filename     : scrsbgaf.dat
.
RSSCSB1   RESET     KEY12                                                       
          READ      SCRSBGA1,KEY12;;                                            
          RETURN
.
RASCSB1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      SCRSBGA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSCSB1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      SCRSBGA1,KEY12;SCSBPID,SCSBSID,SCSBLIN,SCSBDAT,SCSBATT:     
                        SCSBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSCSB1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SCRSBGA1;SCSBPID,SCSBSID,SCSBLIN,SCSBDAT,SCSBATT:           
                        SCSBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSCSB1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SCRSBGA1;SCSBPID,SCSBSID,SCSBLIN,SCSBDAT,SCSBATT:           
                        SCSBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSCSB1                                                                         
          UPDATE    SCRSBGA1;SCSBPID,SCSBSID,SCSBLIN,SCSBDAT,SCSBATT:           
                        SCSBSPA                                                 
          RETURN
.
WRSCSB1   RESET     KEY12                                                       
          WRITE     SCRSBGA1,KEY12;SCSBPID,SCSBSID,SCSBLIN,SCSBDAT,SCSBATT:     
                        SCSBSPA                                                 
          RETURN
.
DESCSB1   RESET     KEY12                                                       
          DELETE    SCRSBGA1,KEY12                                              
          RETURN
+
