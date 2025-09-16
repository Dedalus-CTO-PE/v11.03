.
. PMSCDMIO    
. --------
. Filename     : pmscdmaf.dat
.
RSPMCDM1  RESET     KEY8                                                        
          READ      PMSCDMA1,KEY8;;                                             
          RETURN
.
RAPMCDM1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSCDMA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCDM1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSCDMA1,KEY8;PMDMURNO,PMDMSTAT,PMDMPW01,PMDMPW02,PMDMPW03: 
                        PMDMPW04,PMDMPW05,PMDMPW06,PMDMPW07,PMDMPW08,PMDMPW09:  
                        PMDMPW10,PMDMSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMCDM1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSCDMA1;PMDMURNO,PMDMSTAT,PMDMPW01,PMDMPW02,PMDMPW03:      
                        PMDMPW04,PMDMPW05,PMDMPW06,PMDMPW07,PMDMPW08,PMDMPW09:  
                        PMDMPW10,PMDMSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMCDM1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSCDMA1;PMDMURNO,PMDMSTAT,PMDMPW01,PMDMPW02,PMDMPW03:      
                        PMDMPW04,PMDMPW05,PMDMPW06,PMDMPW07,PMDMPW08,PMDMPW09:  
                        PMDMPW10,PMDMSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMCDM1                                                                        
          UPDATE    PMSCDMA1;PMDMURNO,PMDMSTAT,PMDMPW01,PMDMPW02,PMDMPW03:      
                        PMDMPW04,PMDMPW05,PMDMPW06,PMDMPW07,PMDMPW08,PMDMPW09:  
                        PMDMPW10,PMDMSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMCDM1  RESET     KEY8                                                        
          WRITE     PMSCDMA1,KEY8;PMDMURNO,PMDMSTAT,PMDMPW01,PMDMPW02,PMDMPW03: 
                        PMDMPW04,PMDMPW05,PMDMPW06,PMDMPW07,PMDMPW08,PMDMPW09:  
                        PMDMPW10,PMDMSPAR                                       
          RETURN
.
DEPMCDM1  RESET     KEY8                                                        
          DELETE    PMSCDMA1,KEY8                                               
          RETURN
.
RLPMCDM1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     PMSCDMA1,KEY8;PMDMURNO,PMDMSTAT,PMDMPW01,PMDMPW02,PMDMPW03: 
                        PMDMPW04,PMDMPW05,PMDMPW06,PMDMPW07,PMDMPW08,PMDMPW09:  
                        PMDMPW10,PMDMSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMCDM1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSCDMA1;PMDMURNO,PMDMSTAT,PMDMPW01,PMDMPW02,PMDMPW03:      
                        PMDMPW04,PMDMPW05,PMDMPW06,PMDMPW07,PMDMPW08,PMDMPW09:  
                        PMDMPW10,PMDMSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMCDM1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSCDMA1;PMDMURNO,PMDMSTAT,PMDMPW01,PMDMPW02,PMDMPW03:      
                        PMDMPW04,PMDMPW05,PMDMPW06,PMDMPW07,PMDMPW08,PMDMPW09:  
                        PMDMPW10,PMDMSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMCDM1  RESET     KEY8                                                        
          UNLOCK    PMSCDMA1                                                    
          RETURN
.
