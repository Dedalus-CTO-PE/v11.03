.
. EMRPWDIO    
. --------
. Filename     : emrpwdaf.dat
.
RSEMPWD1  RESET     KEY12                                                       
          READ      EMRPWDA1,KEY12;;                                            
          RETURN
.
RAEMPWD1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      EMRPWDA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMPWD1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      EMRPWDA1,KEY12;EMPWCNTR,EMPWURGV,EMPWURGD,EMPWPWEI,EMPWCDAT:
                                   EMPWCTIM,EMPWCUID,EMPWUDAT,EMPWUTIM,EMPWUUID:
                                   EMPWSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMPWD1  MOVE      ZERO,OVRCD                                                  
          READKS    EMRPWDA1;EMPWCNTR,EMPWURGV,EMPWURGD,EMPWPWEI,EMPWCDAT:      
                             EMPWCTIM,EMPWCUID,EMPWUDAT,EMPWUTIM,EMPWUUID:      
                             EMPWSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMPWD1  MOVE      ZERO,OVRCD                                                  
          READKP    EMRPWDA1;EMPWCNTR,EMPWURGV,EMPWURGD,EMPWPWEI,EMPWCDAT:      
                             EMPWCTIM,EMPWCUID,EMPWUDAT,EMPWUTIM,EMPWUUID:      
                             EMPWSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMPWD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRPWDA1;EMPWCNTR,EMPWURGV,EMPWURGD,EMPWPWEI,EMPWCDAT:      
                             EMPWCTIM,EMPWCUID,EMPWUDAT,EMPWUTIM,EMPWUUID:      
                             EMPWSPAR                                           
          RETURN
.
WREMPWD1  RESET     KEY12                                                       
          WRITE     EMRPWDA1,KEY12;EMPWCNTR,EMPWURGV,EMPWURGD,EMPWPWEI,EMPWCDAT:
                                   EMPWCTIM,EMPWCUID,EMPWUDAT,EMPWUTIM,EMPWUUID:
                                   EMPWSPAR                                     
          RETURN
.
DEEMPWD1  RESET     KEY12                                                       
          DELETE    EMRPWDA1,KEY12                                              
          RETURN
.
RSEMPWD2  RESET     KEY12                                                       
          READ      EMRPWDA2,KEY12;;                                            
          RETURN
.
RAEMPWD2  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      EMRPWDA2,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMPWD2  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      EMRPWDA2,KEY12;EMPWCNTR,EMPWURGV,EMPWURGD,EMPWPWEI,EMPWCDAT:
                                   EMPWCTIM,EMPWCUID,EMPWUDAT,EMPWUTIM,EMPWUUID:
                                   EMPWSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMPWD2  MOVE      ZERO,OVRCD                                                  
          READKS    EMRPWDA2;EMPWCNTR,EMPWURGV,EMPWURGD,EMPWPWEI,EMPWCDAT:      
                             EMPWCTIM,EMPWCUID,EMPWUDAT,EMPWUTIM,EMPWUUID:      
                             EMPWSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMPWD2  MOVE      ZERO,OVRCD                                                  
          READKP    EMRPWDA2;EMPWCNTR,EMPWURGV,EMPWURGD,EMPWPWEI,EMPWCDAT:      
                             EMPWCTIM,EMPWCUID,EMPWUDAT,EMPWUTIM,EMPWUUID:      
                             EMPWSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMPWD2  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRPWDA2;EMPWCNTR,EMPWURGV,EMPWURGD,EMPWPWEI,EMPWCDAT:      
                             EMPWCTIM,EMPWCUID,EMPWUDAT,EMPWUTIM,EMPWUUID:      
                             EMPWSPAR                                           
          RETURN
.
WREMPWD2  RESET     KEY12                                                       
          WRITE     EMRPWDA2,KEY12;EMPWCNTR,EMPWURGV,EMPWURGD,EMPWPWEI,EMPWCDAT:
                                   EMPWCTIM,EMPWCUID,EMPWUDAT,EMPWUTIM,EMPWUUID:
                                   EMPWSPAR                                     
          RETURN
.
DEEMPWD2  RESET     KEY12                                                       
          DELETE    EMRPWDA2,KEY12                                              
          RETURN
.
