.
. EMRISMIO    
. --------
. Filename     : emrismaf.dat
.
RSEMISM1  RESET     KEY11                                                       
          READ      EMRISMA1,KEY11;;                                            
          RETURN
.
RAEMISM1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      EMRISMA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMISM1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      EMRISMA1,KEY11;EMISTYPE,EMISCODE,EMISNOIN,EMISSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMISM1                                                                        
          MOVE      ZERO,OVRCD
          READKS    EMRISMA1;EMISTYPE,EMISCODE,EMISNOIN,EMISSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMISM1                                                                        
          MOVE      ZERO,OVRCD
          READKP    EMRISMA1;EMISTYPE,EMISCODE,EMISNOIN,EMISSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMISM1                                                                        
          UPDATE    EMRISMA1;EMISTYPE,EMISCODE,EMISNOIN,EMISSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMISM1  RESET     KEY11                                                       
          WRITE     EMRISMA1,KEY11;EMISTYPE,EMISCODE,EMISNOIN,EMISSPAR          
          RETURN
.
DEEMISM1  RESET     KEY11                                                       
          DELETE    EMRISMA1,KEY11                                              
          RETURN
.
RLEMISM1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READL     EMRISMA1,KEY11;EMISTYPE,EMISCODE,EMISNOIN,EMISSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMISM1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   EMRISMA1;EMISTYPE,EMISCODE,EMISNOIN,EMISSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMISM1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   EMRISMA1;EMISTYPE,EMISCODE,EMISNOIN,EMISSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMISM1  RESET     KEY11                                                       
          UNLOCK    EMRISMA1                                                    
          RETURN
.
