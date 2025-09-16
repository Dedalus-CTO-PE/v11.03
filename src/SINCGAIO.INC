.
. SINCGAIO    
. --------
. Filename     : sincgaaf.dat
.
RSSIGA1   RESET     KEY6                                                        
          READ      SINCGAA1,KEY6;;                                             
          RETURN
.
RASIGA1   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      SINCGAA1,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIGA1   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      SINCGAA1,KEY6;SIGACOD,SIGADES,SIGAGLI,SIGAUDD1,SIGAUDD2:    
                        SIGAUDY1,SIGAUDY2,SIGAUDR1,SIGAUDR2,SIGASPA             
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIGA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCGAA1;SIGACOD,SIGADES,SIGAGLI,SIGAUDD1,SIGAUDD2:         
                        SIGAUDY1,SIGAUDY2,SIGAUDR1,SIGAUDR2,SIGASPA             
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIGA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCGAA1;SIGACOD,SIGADES,SIGAGLI,SIGAUDD1,SIGAUDD2:         
                        SIGAUDY1,SIGAUDY2,SIGAUDR1,SIGAUDR2,SIGASPA             
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIGA1                                                                         
          UPDATE    SINCGAA1;SIGACOD,SIGADES,SIGAGLI,SIGAUDD1,SIGAUDD2:         
                        SIGAUDY1,SIGAUDY2,SIGAUDR1,SIGAUDR2,SIGASPA             
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIGA1   RESET     KEY6                                                        
          WRITE     SINCGAA1,KEY6;SIGACOD,SIGADES,SIGAGLI,SIGAUDD1,SIGAUDD2:    
                        SIGAUDY1,SIGAUDY2,SIGAUDR1,SIGAUDR2,SIGASPA             
          RETURN
.
DESIGA1   RESET     KEY6                                                        
          DELETE    SINCGAA1,KEY6                                               
          RETURN
.
RLSIGA1   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READL     SINCGAA1,KEY6;SIGACOD,SIGADES,SIGAGLI,SIGAUDD1,SIGAUDD2:    
                        SIGAUDY1,SIGAUDY2,SIGAUDR1,SIGAUDR2,SIGASPA             
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIGA1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINCGAA1;SIGACOD,SIGADES,SIGAGLI,SIGAUDD1,SIGAUDD2:         
                        SIGAUDY1,SIGAUDY2,SIGAUDR1,SIGAUDR2,SIGASPA             
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIGA1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINCGAA1;SIGACOD,SIGADES,SIGAGLI,SIGAUDD1,SIGAUDD2:         
                        SIGAUDY1,SIGAUDY2,SIGAUDR1,SIGAUDR2,SIGASPA             
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIGA1   RESET     KEY6                                                        
          UNLOCK    SINCGAA1                                                    
          RETURN
.
RSSIGA2   RESET     KEY46                                                       
          READ      SINCGAA2,KEY46;;                                            
          RETURN
.
RASIGA2   RESET     KEY46                                                       
          MOVE      ZERO,OVRCD
          READ      SINCGAA2,KEY46;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIGA2   RESET     KEY46                                                       
          MOVE      ZERO,OVRCD
          READ      SINCGAA2,KEY46;SIGACOD,SIGADES,SIGAGLI,SIGAUDD1,SIGAUDD2:   
                        SIGAUDY1,SIGAUDY2,SIGAUDR1,SIGAUDR2,SIGASPA             
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIGA2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCGAA2;SIGACOD,SIGADES,SIGAGLI,SIGAUDD1,SIGAUDD2:         
                        SIGAUDY1,SIGAUDY2,SIGAUDR1,SIGAUDR2,SIGASPA             
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIGA2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCGAA2;SIGACOD,SIGADES,SIGAGLI,SIGAUDD1,SIGAUDD2:         
                        SIGAUDY1,SIGAUDY2,SIGAUDR1,SIGAUDR2,SIGASPA             
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIGA2                                                                         
          UPDATE    SINCGAA2;SIGACOD,SIGADES,SIGAGLI,SIGAUDD1,SIGAUDD2:         
                        SIGAUDY1,SIGAUDY2,SIGAUDR1,SIGAUDR2,SIGASPA             
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIGA2   RESET     KEY46                                                       
          WRITE     SINCGAA2,KEY46;SIGACOD,SIGADES,SIGAGLI,SIGAUDD1,SIGAUDD2:   
                        SIGAUDY1,SIGAUDY2,SIGAUDR1,SIGAUDR2,SIGASPA             
          RETURN
.
DESIGA2   RESET     KEY46                                                       
          DELETE    SINCGAA2,KEY46                                              
          RETURN
.
RLSIGA2   RESET     KEY46                                                       
          MOVE      ZERO,OVRCD
          READL     SINCGAA2,KEY46;SIGACOD,SIGADES,SIGAGLI,SIGAUDD1,SIGAUDD2:   
                        SIGAUDY1,SIGAUDY2,SIGAUDR1,SIGAUDR2,SIGASPA             
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIGA2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINCGAA2;SIGACOD,SIGADES,SIGAGLI,SIGAUDD1,SIGAUDD2:         
                        SIGAUDY1,SIGAUDY2,SIGAUDR1,SIGAUDR2,SIGASPA             
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIGA2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINCGAA2;SIGACOD,SIGADES,SIGAGLI,SIGAUDD1,SIGAUDD2:         
                        SIGAUDY1,SIGAUDY2,SIGAUDR1,SIGAUDR2,SIGASPA             
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIGA2   RESET     KEY46                                                       
          UNLOCK    SINCGAA2                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WASIGA00
          MOVE      "   24",AUDTSECT
          MOVE      "201",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WASIGA99 IF NOT EQUAL
.
          PACK     SIGAAUDD,CCC,CYY,CMM,CDD
          REP       " 0",SIGAAUDD
          CLOCK     TIME,SIGAAUDT
          MOVE      PORT,SIGAAUDP
          LOAD      SIGAAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,SIGAAUDS
          MOVE      PASSCODE,SIGAAUDO
          PACK      KEY19,SIGAAUDD,SIGAAUDT,SIGAAUDP,SIGAAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWSIGA
WASIGA99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DASIGA00
          MOVE      "   24",AUDTSECT
          MOVE      "201",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DASIGA99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADSIGA
DASIGA99  RETURN
ASSIGA    RESET     KEY19                                                       
          READ      SINAUDGA,KEY19;;                                            
          RETURN
.
AKSIGA                                                                          
          MOVE      ZERO,OVRCD
          READKS    SINAUDGA;SIGAAUDD,SIGAAUDT,SIGAAUDP,SIGAAUDR,SIGAAUDS:      
                    SIGAAUDO,SIGACOD,SIGADES,SIGAGLI,SIGAUDD1,SIGAUDD2:         
                        SIGAUDY1,SIGAUDY2,SIGAUDR1,SIGAUDR2,SIGASPA             
          GOTO      OVERCOND IF OVER
          RETURN
.
AUSIGA                                                                          
          UPDATE    SINAUDGA;SIGAAUDD,SIGAAUDT,SIGAAUDP,SIGAAUDR,SIGAAUDS:      
                    SIGAAUDO,SIGACOD,SIGADES,SIGAGLI,SIGAUDD1,SIGAUDD2:         
                        SIGAUDY1,SIGAUDY2,SIGAUDR1,SIGAUDR2,SIGASPA             
          RETURN
.
AWSIGA    RESET     KEY19                                                       
          WRITE     SINAUDGA,KEY19;SIGAAUDD,SIGAAUDT,SIGAAUDP,SIGAAUDR,SIGAAUDS:
                    SIGAAUDO,SIGACOD,SIGADES,SIGAGLI,SIGAUDD1,SIGAUDD2:         
                        SIGAUDY1,SIGAUDY2,SIGAUDR1,SIGAUDR2,SIGASPA             
          RETURN
.
ADSIGA    RESET     KEY19                                                       
          DELETE    SINAUDGA,KEY19;                                             
          RETURN
.
