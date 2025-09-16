.
. CCSRBDIO    
. --------
. Filename     : ccsrbdaf.dat
.
RSCCRB1   RESET     KEY21                                                       
          READ      CCSRBDA1,KEY21;;                                            
          RETURN
.
RACCRB1   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      CCSRBDA1,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCRB1   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      CCSRBDA1,KEY21;CCRBHCD,CCRBEPS,CCRBMID,CCRBFDR,CCRBFID:     
                        CCRBVDR,CCRBVID,CCRBSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCRB1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSRBDA1;CCRBHCD,CCRBEPS,CCRBMID,CCRBFDR,CCRBFID:           
                        CCRBVDR,CCRBVID,CCRBSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCRB1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSRBDA1;CCRBHCD,CCRBEPS,CCRBMID,CCRBFDR,CCRBFID:           
                        CCRBVDR,CCRBVID,CCRBSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCRB1                                                                         
          UPDATE    CCSRBDA1;CCRBHCD,CCRBEPS,CCRBMID,CCRBFDR,CCRBFID:           
                        CCRBVDR,CCRBVID,CCRBSPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCCRB1   RESET     KEY21                                                       
          WRITE     CCSRBDA1,KEY21;CCRBHCD,CCRBEPS,CCRBMID,CCRBFDR,CCRBFID:     
                        CCRBVDR,CCRBVID,CCRBSPA                                 
          RETURN
.
DECCRB1   RESET     KEY21                                                       
          DELETE    CCSRBDA1,KEY21                                              
          RETURN
.
RLCCRB1   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READL     CCSRBDA1,KEY21;CCRBHCD,CCRBEPS,CCRBMID,CCRBFDR,CCRBFID:     
                        CCRBVDR,CCRBVID,CCRBSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCCRB1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CCSRBDA1;CCRBHCD,CCRBEPS,CCRBMID,CCRBFDR,CCRBFID:           
                        CCRBVDR,CCRBVID,CCRBSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCCRB1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CCSRBDA1;CCRBHCD,CCRBEPS,CCRBMID,CCRBFDR,CCRBFID:           
                        CCRBVDR,CCRBVID,CCRBSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCCRB1   RESET     KEY21                                                       
          UNLOCK    CCSRBDA1                                                    
          RETURN
.
