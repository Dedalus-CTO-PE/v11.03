.
. SINBACIO    
. --------
. Filename     : sinbacaf.dat
.
RSSIBA1   RESET     KEY25                                                       
          READ      SINBACA1,KEY25;;                                            
          RETURN
.
RASIBA1   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      SINBACA1,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIBA1   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      SINBACA1,KEY25;SIBACST,SIBACAT,SIBAREQ,SIBAWAR,SIBADAT:     
                        SIBAQTY,SIBARESI,SIBASPA                               
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIBA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINBACA1;SIBACST,SIBACAT,SIBAREQ,SIBAWAR,SIBADAT:           
                        SIBAQTY,SIBARESI,SIBASPA                               
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIBA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINBACA1;SIBACST,SIBACAT,SIBAREQ,SIBAWAR,SIBADAT:           
                        SIBAQTY,SIBARESI,SIBASPA                               
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIBA1                                                                         
          UPDATE    SINBACA1;SIBACST,SIBACAT,SIBAREQ,SIBAWAR,SIBADAT:           
                        SIBAQTY,SIBARESI,SIBASPA                               
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIBA1   RESET     KEY25                                                       
          WRITE     SINBACA1,KEY25;SIBACST,SIBACAT,SIBAREQ,SIBAWAR,SIBADAT:     
                        SIBAQTY,SIBARESI,SIBASPA                               
          RETURN
.
DESIBA1   RESET     KEY25                                                       
          DELETE    SINBACA1,KEY25                                              
          RETURN
.
RLSIBA1   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READL     SINBACA1,KEY25;SIBACST,SIBACAT,SIBAREQ,SIBAWAR,SIBADAT:     
                        SIBAQTY,SIBARESI,SIBASPA                               
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIBA1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINBACA1;SIBACST,SIBACAT,SIBAREQ,SIBAWAR,SIBADAT:           
                        SIBAQTY,SIBARESI,SIBASPA                               
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIBA1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINBACA1;SIBACST,SIBACAT,SIBAREQ,SIBAWAR,SIBADAT:           
                        SIBAQTY,SIBARESI,SIBASPA                               
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIBA1   RESET     KEY25                                                       
          UNLOCK    SINBACA1                                                    
          RETURN
.
RSSIBA2   RESET     KEY25                                                       
          READ      SINBACA2,KEY25;;                                            
          RETURN
.
RASIBA2   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      SINBACA2,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIBA2   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      SINBACA2,KEY25;SIBACST,SIBACAT,SIBAREQ,SIBAWAR,SIBADAT:     
                        SIBAQTY,SIBARESI,SIBASPA                               
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIBA2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINBACA2;SIBACST,SIBACAT,SIBAREQ,SIBAWAR,SIBADAT:           
                        SIBAQTY,SIBARESI,SIBASPA                               
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIBA2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINBACA2;SIBACST,SIBACAT,SIBAREQ,SIBAWAR,SIBADAT:           
                        SIBAQTY,SIBARESI,SIBASPA                               
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIBA2                                                                         
          UPDATE    SINBACA2;SIBACST,SIBACAT,SIBAREQ,SIBAWAR,SIBADAT:           
                        SIBAQTY,SIBARESI,SIBASPA                               
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIBA2   RESET     KEY25                                                       
          WRITE     SINBACA2,KEY25;SIBACST,SIBACAT,SIBAREQ,SIBAWAR,SIBADAT:     
                        SIBAQTY,SIBARESI,SIBASPA                               
          RETURN
.
DESIBA2   RESET     KEY25                                                       
          DELETE    SINBACA2,KEY25                                              
          RETURN
.
RLSIBA2   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READL     SINBACA2,KEY25;SIBACST,SIBACAT,SIBAREQ,SIBAWAR,SIBADAT:     
                        SIBAQTY,SIBARESI,SIBASPA                               
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIBA2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINBACA2;SIBACST,SIBACAT,SIBAREQ,SIBAWAR,SIBADAT:           
                        SIBAQTY,SIBARESI,SIBASPA                               
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIBA2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINBACA2;SIBACST,SIBACAT,SIBAREQ,SIBAWAR,SIBADAT:           
                        SIBAQTY,SIBARESI,SIBASPA                               
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIBA2   RESET     KEY25                                                       
          UNLOCK    SINBACA2                                                    
          RETURN
.
RSSIBA3   RESET     KEY25                                                       
          READ      SINBACA3,KEY25;;                                            
          RETURN
.
RASIBA3   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      SINBACA3,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIBA3   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      SINBACA3,KEY25;SIBACST,SIBACAT,SIBAREQ,SIBAWAR,SIBADAT:     
                        SIBAQTY,SIBARESI,SIBASPA                               
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIBA3                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINBACA3;SIBACST,SIBACAT,SIBAREQ,SIBAWAR,SIBADAT:           
                        SIBAQTY,SIBARESI,SIBASPA                               
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIBA3                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINBACA3;SIBACST,SIBACAT,SIBAREQ,SIBAWAR,SIBADAT:           
                        SIBAQTY,SIBARESI,SIBASPA                               
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIBA3                                                                         
          UPDATE    SINBACA3;SIBACST,SIBACAT,SIBAREQ,SIBAWAR,SIBADAT:           
                        SIBAQTY,SIBARESI,SIBASPA                               
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIBA3   RESET     KEY25                                                       
          WRITE     SINBACA3,KEY25;SIBACST,SIBACAT,SIBAREQ,SIBAWAR,SIBADAT:     
                        SIBAQTY,SIBARESI,SIBASPA                               
          RETURN
.
DESIBA3   RESET     KEY25                                                       
          DELETE    SINBACA3,KEY25                                              
          RETURN
.
RLSIBA3   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READL     SINBACA3,KEY25;SIBACST,SIBACAT,SIBAREQ,SIBAWAR,SIBADAT:     
                        SIBAQTY,SIBARESI,SIBASPA                               
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIBA3                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINBACA3;SIBACST,SIBACAT,SIBAREQ,SIBAWAR,SIBADAT:           
                        SIBAQTY,SIBARESI,SIBASPA                               
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIBA3                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINBACA3;SIBACST,SIBACAT,SIBAREQ,SIBAWAR,SIBADAT:           
                        SIBAQTY,SIBARESI,SIBASPA                               
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIBA3   RESET     KEY25                                                       
          UNLOCK    SINBACA3                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WASIBA00
          MOVE      "   24",AUDTSECT
          MOVE      "206",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WASIBA99 IF NOT EQUAL
.
          PACK     SIBAAUDD,CCC,CYY,CMM,CDD
          REP       " 0",SIBAAUDD
          CLOCK     TIME,SIBAAUDT
          MOVE      PORT,SIBAAUDP
          LOAD      SIBAAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,SIBAAUDS
          MOVE      PASSCODE,SIBAAUDO
          PACK      KEY19,SIBAAUDD,SIBAAUDT,SIBAAUDP,SIBAAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWSIBA
WASIBA99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DASIBA00
          MOVE      "   24",AUDTSECT
          MOVE      "206",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DASIBA99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADSIBA
DASIBA99  RETURN
ASSIBA    RESET     KEY19                                                       
          READ      SINAUDBA,KEY19;;                                            
          RETURN
.
AKSIBA                                                                          
          MOVE      ZERO,OVRCD
          READKS    SINAUDBA;SIBAAUDD,SIBAAUDT,SIBAAUDP,SIBAAUDR,SIBAAUDS:      
                    SIBAAUDO,SIBACST,SIBACAT,SIBAREQ,SIBAWAR,SIBADAT:           
                        SIBAQTY,SIBARESI,SIBASPA                               
          GOTO      OVERCOND IF OVER
          RETURN
.
AUSIBA                                                                          
          UPDATE    SINAUDBA;SIBAAUDD,SIBAAUDT,SIBAAUDP,SIBAAUDR,SIBAAUDS:      
                    SIBAAUDO,SIBACST,SIBACAT,SIBAREQ,SIBAWAR,SIBADAT:           
                        SIBAQTY,SIBARESI,SIBASPA                               
          RETURN
.
AWSIBA    RESET     KEY19                                                       
          WRITE     SINAUDBA,KEY19;SIBAAUDD,SIBAAUDT,SIBAAUDP,SIBAAUDR,SIBAAUDS:
                    SIBAAUDO,SIBACST,SIBACAT,SIBAREQ,SIBAWAR,SIBADAT:           
                        SIBAQTY,SIBARESI,SIBASPA                               
          RETURN
.
ADSIBA    RESET     KEY19                                                       
          DELETE    SINAUDBA,KEY19;                                             
          RETURN
.
