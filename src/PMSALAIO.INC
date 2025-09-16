.
. PMSALAIO    
. --------
. Filename     : pmsalnaf.dat
.
RSPMALA1  RESET     KEY19                                                       
          READ      PMSALAA1,KEY19;;                                            
          RETURN
.
RAPMALA1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSALAA1,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMALA1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSALAA1,KEY19;PMANURNO,PMANACAT,PMANACOD,PMANCNTR:
                                   PMANLNNO,PMANCOMM:
                        PMANSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMALA1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSALAA1;PMANURNO,PMANACAT,PMANACOD,PMANCNTR:
                             PMANLNNO,PMANCOMM:      
                        PMANSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMALA1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSALAA1;PMANURNO,PMANACAT,PMANACOD,PMANCNTR:
                             PMANLNNO,PMANCOMM:      
                        PMANSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMALA1                                                                        
          UPDATE    PMSALAA1;PMANURNO,PMANACAT,PMANACOD,PMANCNTR:
                             PMANLNNO,PMANCOMM:      
                        PMANSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMALA1  RESET     KEY19                                                       
          WRITE     PMSALAA1,KEY19;PMANURNO,PMANACAT,PMANACOD,PMANCNTR:
                             PMANLNNO,PMANCOMM:
                        PMANSPAR                                                
          RETURN
.
DEPMALA1  RESET     KEY19                                                       
          DELETE    PMSALAA1,KEY19                                              
          RETURN
.
RLPMALA1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READL     PMSALAA1,KEY19;PMANURNO,PMANACAT,PMANACOD,PMANCNTR:
                             PMANLNNO,PMANCOMM:
                        PMANSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMALA1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSALAA1;PMANURNO,PMANACAT,PMANACOD,PMANCNTR:
                             PMANLNNO,PMANCOMM:      
                        PMANSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMALA1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSALAA1;PMANURNO,PMANACAT,PMANACOD,PMANCNTR:
                             PMANLNNO,PMANCOMM:      
                        PMANSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMALA1  RESET     KEY19                                                       
          UNLOCK    PMSALAA1                                                    
          RETURN
.
