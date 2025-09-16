.
. PMSDTCIO    
. --------
. Filename     : pmsdtcaf.dat
.
RSPMDTC1  RESET     KEY24                                                       
          READ      PMSDTCA1,KEY24;;                                            
          RETURN
.
RAPMDTC1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PMSDTCA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMDTC1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PMSDTCA1,KEY24;PMDTVISN,PMDTDOCT,PMDTUNIT,PMDTSDAT,PMDTSTIM:
                        PMDTEDAT,PMDTETIM,PMDTCDAT,PMDTCTIM,PMDTCUID,PMDTUDAT:  
                        PMDTUTIM,PMDTUUID,PMDTTEAM,PMDTSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMDTC1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSDTCA1;PMDTVISN,PMDTDOCT,PMDTUNIT,PMDTSDAT,PMDTSTIM:      
                        PMDTEDAT,PMDTETIM,PMDTCDAT,PMDTCTIM,PMDTCUID,PMDTUDAT:  
                        PMDTUTIM,PMDTUUID,PMDTTEAM,PMDTSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMDTC1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSDTCA1;PMDTVISN,PMDTDOCT,PMDTUNIT,PMDTSDAT,PMDTSTIM:      
                        PMDTEDAT,PMDTETIM,PMDTCDAT,PMDTCTIM,PMDTCUID,PMDTUDAT:  
                        PMDTUTIM,PMDTUUID,PMDTTEAM,PMDTSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMDTC1                                                                        
          UPDATE    PMSDTCA1;PMDTVISN,PMDTDOCT,PMDTUNIT,PMDTSDAT,PMDTSTIM:      
                        PMDTEDAT,PMDTETIM,PMDTCDAT,PMDTCTIM,PMDTCUID,PMDTUDAT:  
                        PMDTUTIM,PMDTUUID,PMDTTEAM,PMDTSPAR                     
          RETURN
.
WRPMDTC1  RESET     KEY24                                                       
          WRITE     PMSDTCA1,KEY24;PMDTVISN,PMDTDOCT,PMDTUNIT,PMDTSDAT,PMDTSTIM:
                        PMDTEDAT,PMDTETIM,PMDTCDAT,PMDTCTIM,PMDTCUID,PMDTUDAT:  
                        PMDTUTIM,PMDTUUID,PMDTTEAM,PMDTSPAR                     
          RETURN
.
DEPMDTC1  RESET     KEY24                                                       
          DELETE    PMSDTCA1,KEY24                                              
          RETURN
.
