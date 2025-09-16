.
. PMSAODIO    
. --------
. Filename     : pmsaodaf.dat
.
RSPMAOD1  RESET     KEY9                                                        
          READ      PMSAODA1,KEY9;;                                             
          RETURN
.
RAPMAOD1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      PMSAODA1,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMAOD1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      PMSAODA1,KEY9;PMAOCODE,PMAOLCNT,PMAOLINE,PMAOSPAR           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMAOD1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSAODA1;PMAOCODE,PMAOLCNT,PMAOLINE,PMAOSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMAOD1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSAODA1;PMAOCODE,PMAOLCNT,PMAOLINE,PMAOSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMAOD1                                                                        
          UPDATE    PMSAODA1;PMAOCODE,PMAOLCNT,PMAOLINE,PMAOSPAR                
          RETURN
.
WRPMAOD1  RESET     KEY9                                                        
          WRITE     PMSAODA1,KEY9;PMAOCODE,PMAOLCNT,PMAOLINE,PMAOSPAR           
          RETURN
.
DEPMAOD1  RESET     KEY9                                                        
          DELETE    PMSAODA1,KEY9                                               
          RETURN
.
