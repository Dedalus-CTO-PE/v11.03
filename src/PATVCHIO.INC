.
. PATVCHIO    
. --------
. Filename     : patvchaf.dat
.
RSPTVCH1  RESET     KEY48                                                       
          READ      PATVCHA1,KEY48;;                                            
          RETURN
.
RAPTVCH1  RESET     KEY48                                                       
          MOVE      ZERO,OVRCD
          READ      PATVCHA1,KEY48;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTVCH1  RESET     KEY48                                                       
          MOVE      ZERO,OVRCD
          READ      PATVCHA1,KEY48;PTVCCARD,PTVCURNO,PTVCDATE,PTVCTIME:
                        PTVCPORT,PTVCHOSP:
                        PTVCOPER,PTVCDCHG,PTVCVCHG,PTVCSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTVCH1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATVCHA1;PTVCCARD,PTVCURNO,PTVCDATE,PTVCTIME:
                        PTVCPORT,PTVCHOSP:      
                        PTVCOPER,PTVCDCHG,PTVCVCHG,PTVCSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTVCH1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATVCHA1;PTVCCARD,PTVCURNO,PTVCDATE,PTVCTIME:
                        PTVCPORT,PTVCHOSP:      
                        PTVCOPER,PTVCDCHG,PTVCVCHG,PTVCSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTVCH1                                                                        
          UPDATE    PATVCHA1;PTVCCARD,PTVCURNO,PTVCDATE,PTVCTIME:
                        PTVCPORT,PTVCHOSP:      
                        PTVCOPER,PTVCDCHG,PTVCVCHG,PTVCSPAR                     
          RETURN
.
WRPTVCH1  RESET     KEY48                                                       
          WRITE     PATVCHA1,KEY48;PTVCCARD,PTVCURNO,PTVCDATE,PTVCTIME:
                        PTVCPORT,PTVCHOSP:
                        PTVCOPER,PTVCDCHG,PTVCVCHG,PTVCSPAR                     
          RETURN
.
DEPTVCH1  RESET     KEY48                                                       
          DELETE    PATVCHA1,KEY48                                              
          RETURN
.
