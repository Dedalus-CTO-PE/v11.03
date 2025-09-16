.
. PRIREMIO    
. --------
. Filename     : priremaf.dat
.
RSPRREM1  RESET     KEY4                                                        
          READ      PRIREMA1,KEY4;;                                             
          RETURN
.
RAPRREM1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      PRIREMA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRREM1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      PRIREMA1,KEY4;PRRMSEID,PRRMSEDC,PRRMDBFR,PRRMDBTO,PRRMMPFR: 
                        PRRMMPTO,PRRMINFR,PRRMINTO,PRRMIDFR,PRRMIDTO,PRRMCCFR:  
                        PRRMCCTO,PRRMMBAL,PRRMMSCD,PRRMSCAN,PRRMSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPRREM1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PRIREMA1;PRRMSEID,PRRMSEDC,PRRMDBFR,PRRMDBTO,PRRMMPFR:      
                        PRRMMPTO,PRRMINFR,PRRMINTO,PRRMIDFR,PRRMIDTO,PRRMCCFR:  
                        PRRMCCTO,PRRMMBAL,PRRMMSCD,PRRMSCAN,PRRMSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPRREM1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PRIREMA1;PRRMSEID,PRRMSEDC,PRRMDBFR,PRRMDBTO,PRRMMPFR:      
                        PRRMMPTO,PRRMINFR,PRRMINTO,PRRMIDFR,PRRMIDTO,PRRMCCFR:  
                        PRRMCCTO,PRRMMBAL,PRRMMSCD,PRRMSCAN,PRRMSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPRREM1                                                                        
          UPDATE    PRIREMA1;PRRMSEID,PRRMSEDC,PRRMDBFR,PRRMDBTO,PRRMMPFR:      
                        PRRMMPTO,PRRMINFR,PRRMINTO,PRRMIDFR,PRRMIDTO,PRRMCCFR:  
                        PRRMCCTO,PRRMMBAL,PRRMMSCD,PRRMSCAN,PRRMSPAR            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPRREM1  RESET     KEY4                                                        
          WRITE     PRIREMA1,KEY4;PRRMSEID,PRRMSEDC,PRRMDBFR,PRRMDBTO,PRRMMPFR: 
                        PRRMMPTO,PRRMINFR,PRRMINTO,PRRMIDFR,PRRMIDTO,PRRMCCFR:  
                        PRRMCCTO,PRRMMBAL,PRRMMSCD,PRRMSCAN,PRRMSPAR            
          RETURN
.
DEPRREM1  RESET     KEY4                                                        
          DELETE    PRIREMA1,KEY4                                               
          RETURN
.
RLPRREM1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READL     PRIREMA1,KEY4;PRRMSEID,PRRMSEDC,PRRMDBFR,PRRMDBTO,PRRMMPFR: 
                        PRRMMPTO,PRRMINFR,PRRMINTO,PRRMIDFR,PRRMIDTO,PRRMCCFR:  
                        PRRMCCTO,PRRMMBAL,PRRMMSCD,PRRMSCAN,PRRMSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPRREM1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PRIREMA1;PRRMSEID,PRRMSEDC,PRRMDBFR,PRRMDBTO,PRRMMPFR:      
                        PRRMMPTO,PRRMINFR,PRRMINTO,PRRMIDFR,PRRMIDTO,PRRMCCFR:  
                        PRRMCCTO,PRRMMBAL,PRRMMSCD,PRRMSCAN,PRRMSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPRREM1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PRIREMA1;PRRMSEID,PRRMSEDC,PRRMDBFR,PRRMDBTO,PRRMMPFR:      
                        PRRMMPTO,PRRMINFR,PRRMINTO,PRRMIDFR,PRRMIDTO,PRRMCCFR:  
                        PRRMCCTO,PRRMMBAL,PRRMMSCD,PRRMSCAN,PRRMSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPRREM1  RESET     KEY4                                                        
          UNLOCK    PRIREMA1                                                    
          RETURN
.
