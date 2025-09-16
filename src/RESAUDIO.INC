.
. RESAUDIO    
. --------
. Filename     : resaudaf.dat
.
RSREAU1   RESET     KEY40                                                       
          READ      RESAUDA1,KEY40;;                                            
          RETURN
.
RAREAU1   RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      RESAUDA1,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDREAU1   RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      RESAUDA1,KEY40;REAURDT,REAURTM,REAURUN,REAUSDT,REAUSTM:     
                        REAUUID,REAUMRK,REAURST,REAUACD,REAUACM,REAUSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKREAU1                                                                         
          MOVE      ZERO,OVRCD
          READKS    RESAUDA1;REAURDT,REAURTM,REAURUN,REAUSDT,REAUSTM:           
                        REAUUID,REAUMRK,REAURST,REAUACD,REAUACM,REAUSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPREAU1                                                                         
          MOVE      ZERO,OVRCD
          READKP    RESAUDA1;REAURDT,REAURTM,REAURUN,REAUSDT,REAUSTM:           
                        REAUUID,REAUMRK,REAURST,REAUACD,REAUACM,REAUSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPREAU1                                                                         
          UPDATE    RESAUDA1;REAURDT,REAURTM,REAURUN,REAUSDT,REAUSTM:           
                        REAUUID,REAUMRK,REAURST,REAUACD,REAUACM,REAUSPA                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRREAU1   RESET     KEY40                                                       
          WRITE     RESAUDA1,KEY40;REAURDT,REAURTM,REAURUN,REAUSDT,REAUSTM:     
                        REAUUID,REAUMRK,REAURST,REAUACD,REAUACM,REAUSPA                         
          RETURN
.
DEREAU1   RESET     KEY40                                                       
          DELETE    RESAUDA1,KEY40                                              
          RETURN
.
RLREAU1   RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READL     RESAUDA1,KEY40;REAURDT,REAURTM,REAURUN,REAUSDT,REAUSTM:     
                        REAUUID,REAUMRK,REAURST,REAUACD,REAUACM,REAUSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLREAU1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   RESAUDA1;REAURDT,REAURTM,REAURUN,REAUSDT,REAUSTM:           
                        REAUUID,REAUMRK,REAURST,REAUACD,REAUACM,REAUSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLREAU1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   RESAUDA1;REAURDT,REAURTM,REAURUN,REAUSDT,REAUSTM:           
                        REAUUID,REAUMRK,REAURST,REAUACD,REAUACM,REAUSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUREAU1   RESET     KEY40                                                       
          UNLOCK    RESAUDA1                                                    
          RETURN
.
