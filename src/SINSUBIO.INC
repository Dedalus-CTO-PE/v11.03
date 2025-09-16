.
. SINSUBIO    
. --------
. Filename     : sinsubaf.dat
.
RSSISB1   RESET     KEY11                                                       
          READ      SINSUBA1,KEY11;;                                            
          RETURN
.
RASISB1   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      SINSUBA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSISB1   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      SINSUBA1,KEY11;SISBSUB,SISBDAT,SISBUAM,SISBUBD,SISBPAM:     
                        SISBPBD,SISBRAM,SISBRBD,SISBSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSISB1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINSUBA1;SISBSUB,SISBDAT,SISBUAM,SISBUBD,SISBPAM:           
                        SISBPBD,SISBRAM,SISBRBD,SISBSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSISB1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINSUBA1;SISBSUB,SISBDAT,SISBUAM,SISBUBD,SISBPAM:           
                        SISBPBD,SISBRAM,SISBRBD,SISBSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSISB1                                                                         
          UPDATE    SINSUBA1;SISBSUB,SISBDAT,SISBUAM,SISBUBD,SISBPAM:           
                        SISBPBD,SISBRAM,SISBRBD,SISBSPA                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSISB1   RESET     KEY11                                                       
          WRITE     SINSUBA1,KEY11;SISBSUB,SISBDAT,SISBUAM,SISBUBD,SISBPAM:     
                        SISBPBD,SISBRAM,SISBRBD,SISBSPA                         
          RETURN
.
DESISB1   RESET     KEY11                                                       
          DELETE    SINSUBA1,KEY11                                              
          RETURN
.
RLSISB1   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READL     SINSUBA1,KEY11;SISBSUB,SISBDAT,SISBUAM,SISBUBD,SISBPAM:     
                        SISBPBD,SISBRAM,SISBRBD,SISBSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSISB1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINSUBA1;SISBSUB,SISBDAT,SISBUAM,SISBUBD,SISBPAM:           
                        SISBPBD,SISBRAM,SISBRBD,SISBSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSISB1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINSUBA1;SISBSUB,SISBDAT,SISBUAM,SISBUBD,SISBPAM:           
                        SISBPBD,SISBRAM,SISBRBD,SISBSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSISB1   RESET     KEY11                                                       
          UNLOCK    SINSUBA1                                                    
          RETURN
.
