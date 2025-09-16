.
. PMSWAEIO    
. --------
. Filename     : pmswaeaf.dat
.
RSPMWAE1  RESET     KEY27                                                       
          READ      PMSWAEA1,KEY27;;                                            
          RETURN
.
RAPMWAE1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PMSWAEA1,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMWAE1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PMSWAEA1,KEY27;PMWAHOSP,PMWAPROG,PMWASDAT,PMWAEDAT,PMWACDAT:
                        PMWACTIM,PMWAWEBC,PMWASPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMWAE1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSWAEA1;PMWAHOSP,PMWAPROG,PMWASDAT,PMWAEDAT,PMWACDAT:      
                        PMWACTIM,PMWAWEBC,PMWASPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMWAE1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSWAEA1;PMWAHOSP,PMWAPROG,PMWASDAT,PMWAEDAT,PMWACDAT:      
                        PMWACTIM,PMWAWEBC,PMWASPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMWAE1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSWAEA1;PMWAHOSP,PMWAPROG,PMWASDAT,PMWAEDAT,PMWACDAT:      
                        PMWACTIM,PMWAWEBC,PMWASPAR                              
          RETURN
.
WRPMWAE1  RESET     KEY27                                                       
          WRITE     PMSWAEA1,KEY27;PMWAHOSP,PMWAPROG,PMWASDAT,PMWAEDAT,PMWACDAT:
                        PMWACTIM,PMWAWEBC,PMWASPAR                              
          RETURN
.
DEPMWAE1  RESET     KEY27                                                       
          DELETE    PMSWAEA1,KEY27                                              
          RETURN
.
