.
. EMRRESIO    
. --------
. Filename     : emrresaf.dat
.
RSEMRES1  RESET     KEY11                                                       
          READ      EMRRESA1,KEY11;;                                            
          RETURN
.
RAEMRES1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      EMRRESA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMRES1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      EMRRESA1,KEY11;EMRERESP,EMRESDAT,EMREEDAT,EMRESTAT,EMREGDAT:
                        EMREGTIM,EMRECUID,EMRECDAT,EMRECTIM,EMREUUID,EMREUDAT:  
                        EMREUTIM,EMRESPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMRES1  MOVE      ZERO,OVRCD                                                  
          READKS    EMRRESA1;EMRERESP,EMRESDAT,EMREEDAT,EMRESTAT,EMREGDAT:      
                        EMREGTIM,EMRECUID,EMRECDAT,EMRECTIM,EMREUUID,EMREUDAT:  
                        EMREUTIM,EMRESPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMRES1  MOVE      ZERO,OVRCD                                                  
          READKP    EMRRESA1;EMRERESP,EMRESDAT,EMREEDAT,EMRESTAT,EMREGDAT:      
                        EMREGTIM,EMRECUID,EMRECDAT,EMRECTIM,EMREUUID,EMREUDAT:  
                        EMREUTIM,EMRESPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMRES1  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRRESA1;EMRERESP,EMRESDAT,EMREEDAT,EMRESTAT,EMREGDAT:      
                        EMREGTIM,EMRECUID,EMRECDAT,EMRECTIM,EMREUUID,EMREUDAT:  
                        EMREUTIM,EMRESPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMRES1  RESET     KEY11                                                       
          WRITE     EMRRESA1,KEY11;EMRERESP,EMRESDAT,EMREEDAT,EMRESTAT,EMREGDAT:
                        EMREGTIM,EMRECUID,EMRECDAT,EMRECTIM,EMREUUID,EMREUDAT:  
                        EMREUTIM,EMRESPAR                                       
          RETURN
.
DEEMRES1  RESET     KEY11                                                       
          DELETE    EMRRESA1,KEY11                                              
          RETURN
.
RLEMRES1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READL     EMRRESA1,KEY11;EMRERESP,EMRESDAT,EMREEDAT,EMRESTAT,EMREGDAT:
                        EMREGTIM,EMRECUID,EMRECDAT,EMRECTIM,EMREUUID,EMREUDAT:  
                        EMREUTIM,EMRESPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMRES1  MOVE      ZERO,OVRCD                                                  
          READLKS   EMRRESA1;EMRERESP,EMRESDAT,EMREEDAT,EMRESTAT,EMREGDAT:      
                        EMREGTIM,EMRECUID,EMRECDAT,EMRECTIM,EMREUUID,EMREUDAT:  
                        EMREUTIM,EMRESPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMRES1  MOVE      ZERO,OVRCD                                                  
          READLKP   EMRRESA1;EMRERESP,EMRESDAT,EMREEDAT,EMRESTAT,EMREGDAT:      
                        EMREGTIM,EMRECUID,EMRECDAT,EMRECTIM,EMREUUID,EMREUDAT:  
                        EMREUTIM,EMRESPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMRES1  RESET     KEY11                                                       
          UNLOCK    EMRRESA1                                                    
          RETURN
.
