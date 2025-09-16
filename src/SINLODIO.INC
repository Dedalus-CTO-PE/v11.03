.
. SINLODIO    
. --------
. Filename     : sinlodaf.dat
.
RSSILD1   RESET     KEY6                                                        
          READ      SINLODA1,KEY6;;                                             
          RETURN
.
RASILD1   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      SINLODA1,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSILD1   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      SINLODA1,KEY6;SILDDATE,SILDIRP,SILDILP,SILDBOLP,SILDSLO:    
                        SILDNSLO,SILDSLR,SILDNSLR,SILDIRI,SILDSLRT,SILDINV:     
                        SILDRQL,SILDZIS,SILDGEN,SILDTPO,SILDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSILD1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINLODA1;SILDDATE,SILDIRP,SILDILP,SILDBOLP,SILDSLO:         
                        SILDNSLO,SILDSLR,SILDNSLR,SILDIRI,SILDSLRT,SILDINV:     
                        SILDRQL,SILDZIS,SILDGEN,SILDTPO,SILDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSILD1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINLODA1;SILDDATE,SILDIRP,SILDILP,SILDBOLP,SILDSLO:         
                        SILDNSLO,SILDSLR,SILDNSLR,SILDIRI,SILDSLRT,SILDINV:     
                        SILDRQL,SILDZIS,SILDGEN,SILDTPO,SILDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSILD1                                                                         
          UPDATE    SINLODA1;SILDDATE,SILDIRP,SILDILP,SILDBOLP,SILDSLO:         
                        SILDNSLO,SILDSLR,SILDNSLR,SILDIRI,SILDSLRT,SILDINV:     
                        SILDRQL,SILDZIS,SILDGEN,SILDTPO,SILDSPA                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSILD1   RESET     KEY6                                                        
          WRITE     SINLODA1,KEY6;SILDDATE,SILDIRP,SILDILP,SILDBOLP,SILDSLO:    
                        SILDNSLO,SILDSLR,SILDNSLR,SILDIRI,SILDSLRT,SILDINV:     
                        SILDRQL,SILDZIS,SILDGEN,SILDTPO,SILDSPA                 
          RETURN
.
DESILD1   RESET     KEY6                                                        
          DELETE    SINLODA1,KEY6                                               
          RETURN
.
RLSILD1   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READL     SINLODA1,KEY6;SILDDATE,SILDIRP,SILDILP,SILDBOLP,SILDSLO:    
                        SILDNSLO,SILDSLR,SILDNSLR,SILDIRI,SILDSLRT,SILDINV:     
                        SILDRQL,SILDZIS,SILDGEN,SILDTPO,SILDSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSILD1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINLODA1;SILDDATE,SILDIRP,SILDILP,SILDBOLP,SILDSLO:         
                        SILDNSLO,SILDSLR,SILDNSLR,SILDIRI,SILDSLRT,SILDINV:     
                        SILDRQL,SILDZIS,SILDGEN,SILDTPO,SILDSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSILD1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINLODA1;SILDDATE,SILDIRP,SILDILP,SILDBOLP,SILDSLO:         
                        SILDNSLO,SILDSLR,SILDNSLR,SILDIRI,SILDSLRT,SILDINV:     
                        SILDRQL,SILDZIS,SILDGEN,SILDTPO,SILDSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSILD1   RESET     KEY6                                                        
          UNLOCK    SINLODA1                                                    
          RETURN
.
