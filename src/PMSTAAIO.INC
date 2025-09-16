.
. PMSTAAIO    
. --------
. Filename     : pmstaaaf.dat
.
RSPMTAA1  RESET     KEY3                                                        
          READ      PMSTAAA1,KEY3;;                                             
          RETURN
.
RAPMTAA1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      PMSTAAA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMTAA1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      PMSTAAA1,KEY3;PMTAFACL,PMTAADD1,PMTAADD2,PMTAADD3,PMTAADD4: 
                        PMTAPOST,PMTATELP,PMTATELB,PMTATELM,PMTAEMAI,PMTAMELW:  
                        PMTASPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMTAA1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSTAAA1;PMTAFACL,PMTAADD1,PMTAADD2,PMTAADD3,PMTAADD4:      
                        PMTAPOST,PMTATELP,PMTATELB,PMTATELM,PMTAEMAI,PMTAMELW:  
                        PMTASPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMTAA1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSTAAA1;PMTAFACL,PMTAADD1,PMTAADD2,PMTAADD3,PMTAADD4:      
                        PMTAPOST,PMTATELP,PMTATELB,PMTATELM,PMTAEMAI,PMTAMELW:  
                        PMTASPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMTAA1                                                                        
          UPDATE    PMSTAAA1;PMTAFACL,PMTAADD1,PMTAADD2,PMTAADD3,PMTAADD4:      
                        PMTAPOST,PMTATELP,PMTATELB,PMTATELM,PMTAEMAI,PMTAMELW:  
                        PMTASPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMTAA1  RESET     KEY3                                                        
          WRITE     PMSTAAA1,KEY3;PMTAFACL,PMTAADD1,PMTAADD2,PMTAADD3,PMTAADD4: 
                        PMTAPOST,PMTATELP,PMTATELB,PMTATELM,PMTAEMAI,PMTAMELW:  
                        PMTASPAR                                                
          RETURN
.
DEPMTAA1  RESET     KEY3                                                        
          DELETE    PMSTAAA1,KEY3                                               
          RETURN
.
RLPMTAA1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READL     PMSTAAA1,KEY3;PMTAFACL,PMTAADD1,PMTAADD2,PMTAADD3,PMTAADD4: 
                        PMTAPOST,PMTATELP,PMTATELB,PMTATELM,PMTAEMAI,PMTAMELW:  
                        PMTASPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMTAA1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSTAAA1;PMTAFACL,PMTAADD1,PMTAADD2,PMTAADD3,PMTAADD4:      
                        PMTAPOST,PMTATELP,PMTATELB,PMTATELM,PMTAEMAI,PMTAMELW:  
                        PMTASPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMTAA1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSTAAA1;PMTAFACL,PMTAADD1,PMTAADD2,PMTAADD3,PMTAADD4:      
                        PMTAPOST,PMTATELP,PMTATELB,PMTATELM,PMTAEMAI,PMTAMELW:  
                        PMTASPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMTAA1  RESET     KEY3                                                        
          UNLOCK    PMSTAAA1                                                    
          RETURN
.
