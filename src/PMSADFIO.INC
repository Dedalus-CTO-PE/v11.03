.
. PMSADFIO    
. --------
. Filename     : pmsadfaf.dat
.
RSPMADF1  RESET     KEY9                                                        
          READ      PMSADFA1,KEY9;;                                             
          RETURN
.
RAPMADF1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      PMSADFA1,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMADF1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      PMSADFA1,KEY9;PMAFCODE,PMAFLINE,PMAFDATA,PMAFSPAR           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMADF1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSADFA1;PMAFCODE,PMAFLINE,PMAFDATA,PMAFSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMADF1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSADFA1;PMAFCODE,PMAFLINE,PMAFDATA,PMAFSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMADF1                                                                        
          UPDATE    PMSADFA1;PMAFCODE,PMAFLINE,PMAFDATA,PMAFSPAR                
          RETURN
.
WRPMADF1  RESET     KEY9                                                        
          WRITE     PMSADFA1,KEY9;PMAFCODE,PMAFLINE,PMAFDATA,PMAFSPAR           
          RETURN
.
DEPMADF1  RESET     KEY9                                                        
          DELETE    PMSADFA1,KEY9                                               
          RETURN
.
