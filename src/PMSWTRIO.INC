.
. PMSWTRIO    
. --------
. Filename     : pmswtraf.dat
.
RSPMWTR1  RESET     KEY19                                                       
          READ      PMSWTRA1,KEY19;;                                            
          RETURN
.
RAPMWTR1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSWTRA1,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMWTR1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSWTRA1,KEY19;PMWTHOSP,PMWTVISN,PMWTSDAT,PMWTMDAT,PMWTCDAT:
                        PMWTCTIM,PMWTWEBC,PMWTSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMWTR1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSWTRA1;PMWTHOSP,PMWTVISN,PMWTSDAT,PMWTMDAT,PMWTCDAT:      
                        PMWTCTIM,PMWTWEBC,PMWTSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMWTR1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSWTRA1;PMWTHOSP,PMWTVISN,PMWTSDAT,PMWTMDAT,PMWTCDAT:      
                        PMWTCTIM,PMWTWEBC,PMWTSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMWTR1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSWTRA1;PMWTHOSP,PMWTVISN,PMWTSDAT,PMWTMDAT,PMWTCDAT:      
                        PMWTCTIM,PMWTWEBC,PMWTSPAR                              
          RETURN
.
WRPMWTR1  RESET     KEY19                                                       
          WRITE     PMSWTRA1,KEY19;PMWTHOSP,PMWTVISN,PMWTSDAT,PMWTMDAT,PMWTCDAT:
                        PMWTCTIM,PMWTWEBC,PMWTSPAR                              
          RETURN
.
DEPMWTR1  RESET     KEY19                                                       
          DELETE    PMSWTRA1,KEY19                                              
          RETURN
.
RSPMWTR2  RESET     KEY19                                                       
          READ      PMSWTRA2,KEY19;;                                            
          RETURN
.
RAPMWTR2  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSWTRA2,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMWTR2  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSWTRA2,KEY19;PMWTHOSP,PMWTVISN,PMWTSDAT,PMWTMDAT,PMWTCDAT:
                        PMWTCTIM,PMWTWEBC,PMWTSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMWTR2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSWTRA2;PMWTHOSP,PMWTVISN,PMWTSDAT,PMWTMDAT,PMWTCDAT:      
                        PMWTCTIM,PMWTWEBC,PMWTSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMWTR2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSWTRA2;PMWTHOSP,PMWTVISN,PMWTSDAT,PMWTMDAT,PMWTCDAT:      
                        PMWTCTIM,PMWTWEBC,PMWTSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMWTR2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSWTRA2;PMWTHOSP,PMWTVISN,PMWTSDAT,PMWTMDAT,PMWTCDAT:      
                        PMWTCTIM,PMWTWEBC,PMWTSPAR                              
          RETURN
.
WRPMWTR2  RESET     KEY19                                                       
          WRITE     PMSWTRA2,KEY19;PMWTHOSP,PMWTVISN,PMWTSDAT,PMWTMDAT,PMWTCDAT:
                        PMWTCTIM,PMWTWEBC,PMWTSPAR                              
          RETURN
.
DEPMWTR2  RESET     KEY19                                                       
          DELETE    PMSWTRA2,KEY19                                              
          RETURN
.
