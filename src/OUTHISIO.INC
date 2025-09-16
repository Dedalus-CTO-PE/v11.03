.
. OUTHISIO    
. --------
. Filename     : outhiSaf.dat
.
RSOTHIS1  RESET     KEY28                                                       
          READ      OUTHISA1,KEY28;;                                            
          RETURN
.
RAOTHIS1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      OUTHISA1,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTHIS1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      OUTHISA1,KEY28;OTHIURNO,OTHIEVNT,OTHIEDAT,DOTHIUCN:
                        OTHIPRIO,OTHIRANK,OTHISPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DOTHIUCN,OTHIUCNT                                           
          RETURN
.
RKOTHIS1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OUTHISA1;OTHIURNO,OTHIEVNT,OTHIEDAT,DOTHIUCN:      
                        OTHIPRIO,OTHIRANK,OTHISPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DOTHIUCN,OTHIUCNT                                           
          RETURN
.
RPOTHIS1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OUTHISA1;OTHIURNO,OTHIEVNT,OTHIEDAT,DOTHIUCN:      
                        OTHIPRIO,OTHIRANK,OTHISPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DOTHIUCN,OTHIUCNT                                           
          RETURN
.
UPOTHIS1                                                                        
          MOVE      OTHIUCNT,DOTHIUCN                                           
          UPDATE    OUTHISA1;OTHIURNO,OTHIEVNT,OTHIEDAT,DOTHIUCN:      
                        OTHIPRIO,OTHIRANK,OTHISPAR   
          RETURN
.
WROTHIS1  RESET     KEY28                                                       
          MOVE      OTHIUCNT,DOTHIUCN                                           
          WRITE     OUTHISA1,KEY28;OTHIURNO,OTHIEVNT,OTHIEDAT,DOTHIUCN:
                        OTHIPRIO,OTHIRANK,OTHISPAR   
          RETURN
.
DEOTHIS1  RESET     KEY28                                                       
          DELETE    OUTHISA1,KEY28                                              
          RETURN
.
