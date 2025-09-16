.
. PMSIHUIO    
. --------
. Filename     : pmsihuaf.dat
.
RSPMIHU1  RESET     KEY26                                                       
          READ      PMSIHUA1,KEY26;;                                            
          RETURN
.
RAPMIHU1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIHUA1,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIHU1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIHUA1,KEY26;PMIUHOSP,PMIUUNIT,PMIUHPIO,PMIUACTV,PMIUCDAT:
                        PMIUCTIM,PMIUCUID,PMIUUDAT,PMIUUTIM,PMIUUUID,PMIUSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMIHU1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSIHUA1;PMIUHOSP,PMIUUNIT,PMIUHPIO,PMIUACTV,PMIUCDAT:      
                        PMIUCTIM,PMIUCUID,PMIUUDAT,PMIUUTIM,PMIUUUID,PMIUSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMIHU1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSIHUA1;PMIUHOSP,PMIUUNIT,PMIUHPIO,PMIUACTV,PMIUCDAT:      
                        PMIUCTIM,PMIUCUID,PMIUUDAT,PMIUUTIM,PMIUUUID,PMIUSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMIHU1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSIHUA1;PMIUHOSP,PMIUUNIT,PMIUHPIO,PMIUACTV,PMIUCDAT:      
                        PMIUCTIM,PMIUCUID,PMIUUDAT,PMIUUTIM,PMIUUUID,PMIUSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMIHU1  RESET     KEY26                                                       
          WRITE     PMSIHUA1,KEY26;PMIUHOSP,PMIUUNIT,PMIUHPIO,PMIUACTV,PMIUCDAT:
                        PMIUCTIM,PMIUCUID,PMIUUDAT,PMIUUTIM,PMIUUUID,PMIUSPAR   
          RETURN
.
DEPMIHU1  RESET     KEY26                                                       
          DELETE    PMSIHUA1,KEY26                                              
          RETURN
.
RLPMIHU1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READL     PMSIHUA1,KEY26;PMIUHOSP,PMIUUNIT,PMIUHPIO,PMIUACTV,PMIUCDAT:
                        PMIUCTIM,PMIUCUID,PMIUUDAT,PMIUUTIM,PMIUUUID,PMIUSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMIHU1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSIHUA1;PMIUHOSP,PMIUUNIT,PMIUHPIO,PMIUACTV,PMIUCDAT:      
                        PMIUCTIM,PMIUCUID,PMIUUDAT,PMIUUTIM,PMIUUUID,PMIUSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMIHU1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSIHUA1;PMIUHOSP,PMIUUNIT,PMIUHPIO,PMIUACTV,PMIUCDAT:      
                        PMIUCTIM,PMIUCUID,PMIUUDAT,PMIUUTIM,PMIUUUID,PMIUSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMIHU1  RESET     KEY26                                                       
          UNLOCK    PMSIHUA1                                                    
          RETURN
.
