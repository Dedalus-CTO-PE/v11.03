.
. PMSOSDIO    
. --------
. Filename     : pmsosdaf.dat
.
RSPMOSD1  RESET     KEY8                                                        
          READ      PMSOSDA1,KEY8;;                                             
          RETURN
.
RAPMOSD1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSOSDA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMOSD1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSOSDA1,KEY8;PMODURNO,PMODWEBU,PMODSPAR                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMOSD1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSOSDA1;PMODURNO,PMODWEBU,PMODSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMOSD1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSOSDA1;PMODURNO,PMODWEBU,PMODSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMOSD1                                                                        
          UPDATE    PMSOSDA1;PMODURNO,PMODWEBU,PMODSPAR                         
          RETURN
.
WRPMOSD1  RESET     KEY8                                                        
          WRITE     PMSOSDA1,KEY8;PMODURNO,PMODWEBU,PMODSPAR                    
          RETURN
.
DEPMOSD1  RESET     KEY8                                                        
          DELETE    PMSOSDA1,KEY8                                               
          RETURN
.
