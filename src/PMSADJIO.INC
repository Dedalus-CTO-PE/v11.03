.
. PMSADJIO    
. --------
. Filename     : pmsadjaf.dat
.
RSPMADJ1  RESET     KEY9                                                        
          READ      PMSADJA1,KEY9;;                                             
          RETURN
.
RAPMADJ1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      PMSADJA1,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMADJ1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      PMSADJA1,KEY9;PMAJCNTR,PMAJADJT,PMAJADJV,PMAJCUID,PMAJCDAT: 
                                  PMAJCTIM,PMAJUUID,PMAJUDAT,PMAJUTIM,PMAJSPAR  
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMADJ1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSADJA1;PMAJCNTR,PMAJADJT,PMAJADJV,PMAJCUID,PMAJCDAT:      
                             PMAJCTIM,PMAJUUID,PMAJUDAT,PMAJUTIM,PMAJSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMADJ1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSADJA1;PMAJCNTR,PMAJADJT,PMAJADJV,PMAJCUID,PMAJCDAT:      
                             PMAJCTIM,PMAJUUID,PMAJUDAT,PMAJUTIM,PMAJSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMADJ1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSADJA1;PMAJCNTR,PMAJADJT,PMAJADJV,PMAJCUID,PMAJCDAT:      
                             PMAJCTIM,PMAJUUID,PMAJUDAT,PMAJUTIM,PMAJSPAR       
          RETURN
.
WRPMADJ1  RESET     KEY9                                                        
          WRITE     PMSADJA1,KEY9;PMAJCNTR,PMAJADJT,PMAJADJV,PMAJCUID,PMAJCDAT: 
                                  PMAJCTIM,PMAJUUID,PMAJUDAT,PMAJUTIM,PMAJSPAR  
          RETURN
.
DEPMADJ1  RESET     KEY9                                                        
          DELETE    PMSADJA1,KEY9                                               
          RETURN
.
