.
. SINSVAIO    
. --------
. Filename     : sinsvaaf.dat
.
RSSIVA1   RESET     KEY4                                                        
          READ      SINSVAA1,KEY4;;                                             
          RETURN
.
RASIVA1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      SINSVAA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIVA1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      SINSVAA1,KEY4;SIVACOD,SIVADES,SIVACST,SIVAPRD,SIVAPN:       
                        SIVASUT,SIVALED,SIVAQTY,SIVAAMT,SIVAGSTA,SIVAGST:       
                        SIVAUR1,SIVAUR2,SIVAUD1,SIVAUD2,SIVAUY1,SIVAUY2:        
                        SIVASPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIVA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINSVAA1;SIVACOD,SIVADES,SIVACST,SIVAPRD,SIVAPN:            
                        SIVASUT,SIVALED,SIVAQTY,SIVAAMT,SIVAGSTA,SIVAGST:       
                        SIVAUR1,SIVAUR2,SIVAUD1,SIVAUD2,SIVAUY1,SIVAUY2:        
                        SIVASPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIVA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINSVAA1;SIVACOD,SIVADES,SIVACST,SIVAPRD,SIVAPN:            
                        SIVASUT,SIVALED,SIVAQTY,SIVAAMT,SIVAGSTA,SIVAGST:       
                        SIVAUR1,SIVAUR2,SIVAUD1,SIVAUD2,SIVAUY1,SIVAUY2:        
                        SIVASPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIVA1                                                                         
          UPDATE    SINSVAA1;SIVACOD,SIVADES,SIVACST,SIVAPRD,SIVAPN:            
                        SIVASUT,SIVALED,SIVAQTY,SIVAAMT,SIVAGSTA,SIVAGST:       
                        SIVAUR1,SIVAUR2,SIVAUD1,SIVAUD2,SIVAUY1,SIVAUY2:        
                        SIVASPA                                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIVA1   RESET     KEY4                                                        
          WRITE     SINSVAA1,KEY4;SIVACOD,SIVADES,SIVACST,SIVAPRD,SIVAPN:       
                        SIVASUT,SIVALED,SIVAQTY,SIVAAMT,SIVAGSTA,SIVAGST:       
                        SIVAUR1,SIVAUR2,SIVAUD1,SIVAUD2,SIVAUY1,SIVAUY2:        
                        SIVASPA                                                 
          RETURN
.
DESIVA1   RESET     KEY4                                                        
          DELETE    SINSVAA1,KEY4                                               
          RETURN
.
RLSIVA1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READL     SINSVAA1,KEY4;SIVACOD,SIVADES,SIVACST,SIVAPRD,SIVAPN:       
                        SIVASUT,SIVALED,SIVAQTY,SIVAAMT,SIVAGSTA,SIVAGST:       
                        SIVAUR1,SIVAUR2,SIVAUD1,SIVAUD2,SIVAUY1,SIVAUY2:        
                        SIVASPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIVA1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINSVAA1;SIVACOD,SIVADES,SIVACST,SIVAPRD,SIVAPN:            
                        SIVASUT,SIVALED,SIVAQTY,SIVAAMT,SIVAGSTA,SIVAGST:       
                        SIVAUR1,SIVAUR2,SIVAUD1,SIVAUD2,SIVAUY1,SIVAUY2:        
                        SIVASPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIVA1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINSVAA1;SIVACOD,SIVADES,SIVACST,SIVAPRD,SIVAPN:            
                        SIVASUT,SIVALED,SIVAQTY,SIVAAMT,SIVAGSTA,SIVAGST:       
                        SIVAUR1,SIVAUR2,SIVAUD1,SIVAUD2,SIVAUY1,SIVAUY2:        
                        SIVASPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIVA1   RESET     KEY4                                                        
          UNLOCK    SINSVAA1                                                    
          RETURN
.
