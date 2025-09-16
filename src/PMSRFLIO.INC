.
. PMSRFLIO    
. --------
. Filename     : pmsrflaf.dat
.
RSPMRFL1  RESET     KEY26                                                       
          READ      PMSRFLA1,KEY26;;                                            
          RETURN
.
RAPMRFL1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PMSRFLA1,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMRFL1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PMSRFLA1,KEY26;PMRFURNO,PMRFCONS,PMRFEXPD,PMRFRFGP,PMRFCDAT:
                        PMRFCTIM,PMRFCUID,PMRFUDAT,PMRFUTIM,PMRFUUID,PMRFSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMRFL1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSRFLA1;PMRFURNO,PMRFCONS,PMRFEXPD,PMRFRFGP,PMRFCDAT:      
                        PMRFCTIM,PMRFCUID,PMRFUDAT,PMRFUTIM,PMRFUUID,PMRFSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMRFL1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSRFLA1;PMRFURNO,PMRFCONS,PMRFEXPD,PMRFRFGP,PMRFCDAT:      
                        PMRFCTIM,PMRFCUID,PMRFUDAT,PMRFUTIM,PMRFUUID,PMRFSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMRFL1                                                                        
          UPDATE    PMSRFLA1;PMRFURNO,PMRFCONS,PMRFEXPD,PMRFRFGP,PMRFCDAT:      
                        PMRFCTIM,PMRFCUID,PMRFUDAT,PMRFUTIM,PMRFUUID,PMRFSPAR   
          RETURN
.
WRPMRFL1  RESET     KEY26                                                       
          WRITE     PMSRFLA1,KEY26;PMRFURNO,PMRFCONS,PMRFEXPD,PMRFRFGP,PMRFCDAT:
                        PMRFCTIM,PMRFCUID,PMRFUDAT,PMRFUTIM,PMRFUUID,PMRFSPAR   
          RETURN
.
DEPMRFL1  RESET     KEY26                                                       
          DELETE    PMSRFLA1,KEY26                                              
          RETURN
.
