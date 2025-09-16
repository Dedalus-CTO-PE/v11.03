.
. APSSUBIO    
. --------
. Filename     : apssubaf.dat
.
RSAPSB1   RESET     KEY11                                                       
          READ      APSSUBA1,KEY11;;                                            
          RETURN
.
RAAPSB1   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      APSSUBA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPSB1   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      APSSUBA1,KEY11;APSBSUP,APSBDAT,APSBPAM,APSBPBD,APSBRAM:     
                        APSBRBD,APSBIAM,APSBIBD,APSBSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPSB1                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSSUBA1;APSBSUP,APSBDAT,APSBPAM,APSBPBD,APSBRAM:           
                        APSBRBD,APSBIAM,APSBIBD,APSBSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPSB1                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSSUBA1;APSBSUP,APSBDAT,APSBPAM,APSBPBD,APSBRAM:           
                        APSBRBD,APSBIAM,APSBIBD,APSBSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPSB1                                                                         
          UPDATE    APSSUBA1;APSBSUP,APSBDAT,APSBPAM,APSBPBD,APSBRAM:           
                        APSBRBD,APSBIAM,APSBIBD,APSBSPA                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRAPSB1   RESET     KEY11                                                       
          WRITE     APSSUBA1,KEY11;APSBSUP,APSBDAT,APSBPAM,APSBPBD,APSBRAM:     
                        APSBRBD,APSBIAM,APSBIBD,APSBSPA                         
          RETURN
.
DEAPSB1   RESET     KEY11                                                       
          DELETE    APSSUBA1,KEY11                                              
          RETURN
.
RLAPSB1   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READL     APSSUBA1,KEY11;APSBSUP,APSBDAT,APSBPAM,APSBPBD,APSBRAM:     
                        APSBRBD,APSBIAM,APSBIBD,APSBSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLAPSB1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   APSSUBA1;APSBSUP,APSBDAT,APSBPAM,APSBPBD,APSBRAM:           
                        APSBRBD,APSBIAM,APSBIBD,APSBSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLAPSB1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   APSSUBA1;APSBSUP,APSBDAT,APSBPAM,APSBPBD,APSBRAM:           
                        APSBRBD,APSBIAM,APSBIBD,APSBSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUAPSB1   RESET     KEY11                                                       
          UNLOCK    APSSUBA1                                                    
          RETURN
.
