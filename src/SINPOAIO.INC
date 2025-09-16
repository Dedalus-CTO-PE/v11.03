.
. SINPOAIO    
. --------
. Filename     : sinpoaaf.dat
.
RSSIPA1   RESET     KEY7                                                        
          READ      SINPOAA1,KEY7;;                                             
          RETURN
.
RASIPA1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      SINPOAA1,KEY7;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIPA1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      SINPOAA1,KEY7;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:      
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIPA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINPOAA1;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:           
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIPA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINPOAA1;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:           
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIPA1                                                                         
          UPDATE    SINPOAA1;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:           
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIPA1   RESET     KEY7                                                        
          WRITE     SINPOAA1,KEY7;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:      
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          RETURN
.
DESIPA1   RESET     KEY7                                                        
          DELETE    SINPOAA1,KEY7                                               
          RETURN
.
RLSIPA1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READL     SINPOAA1,KEY7;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:      
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIPA1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINPOAA1;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:           
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIPA1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINPOAA1;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:           
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIPA1   RESET     KEY7                                                        
          UNLOCK    SINPOAA1                                                    
          RETURN
.
RSSIPA2   RESET     KEY20                                                       
          READ      SINPOAA2,KEY20;;                                            
          RETURN
.
RASIPA2   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      SINPOAA2,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIPA2   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      SINPOAA2,KEY20;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:     
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIPA2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINPOAA2;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:           
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIPA2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINPOAA2;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:           
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIPA2                                                                         
          UPDATE    SINPOAA2;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:           
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIPA2   RESET     KEY20                                                       
          WRITE     SINPOAA2,KEY20;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:     
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          RETURN
.
DESIPA2   RESET     KEY20                                                       
          DELETE    SINPOAA2,KEY20                                              
          RETURN
.
RLSIPA2   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READL     SINPOAA2,KEY20;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:     
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIPA2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINPOAA2;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:           
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIPA2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINPOAA2;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:           
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIPA2   RESET     KEY20                                                       
          UNLOCK    SINPOAA2                                                    
          RETURN
.
RSSIPA3   RESET     KEY15                                                       
          READ      SINPOAA3,KEY15;;                                            
          RETURN
.
RASIPA3   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      SINPOAA3,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIPA3   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      SINPOAA3,KEY15;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:     
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIPA3                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINPOAA3;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:           
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIPA3                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINPOAA3;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:           
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIPA3                                                                         
          UPDATE    SINPOAA3;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:           
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIPA3   RESET     KEY15                                                       
          WRITE     SINPOAA3,KEY15;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:     
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          RETURN
.
DESIPA3   RESET     KEY15                                                       
          DELETE    SINPOAA3,KEY15                                              
          RETURN
.
RLSIPA3   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READL     SINPOAA3,KEY15;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:     
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIPA3                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINPOAA3;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:           
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIPA3                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINPOAA3;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:           
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIPA3   RESET     KEY15                                                       
          UNLOCK    SINPOAA3                                                    
          RETURN
.
RSSIPA4   RESET     KEY15                                                       
          READ      SINPOAA4,KEY15;;                                            
          RETURN
.
RASIPA4   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      SINPOAA4,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIPA4   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      SINPOAA4,KEY15;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:     
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIPA4                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINPOAA4;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:           
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIPA4                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINPOAA4;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:           
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIPA4                                                                         
          UPDATE    SINPOAA4;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:           
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIPA4   RESET     KEY15                                                       
          WRITE     SINPOAA4,KEY15;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:     
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          RETURN
.
DESIPA4   RESET     KEY15                                                       
          DELETE    SINPOAA4,KEY15                                              
          RETURN
.
RLSIPA4   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READL     SINPOAA4,KEY15;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:     
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIPA4                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINPOAA4;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:           
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIPA4                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINPOAA4;SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:           
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIPA4   RESET     KEY15                                                       
          UNLOCK    SINPOAA4                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WASIPA00
          MOVE      "   24",AUDTSECT
          MOVE      "210",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WASIPA99 IF NOT EQUAL
.
          PACK     SIPAAUDD,CCC,CYY,CMM,CDD
          REP       " 0",SIPAAUDD
          CLOCK     TIME,SIPAAUDT
          MOVE      PORT,SIPAAUDP
          LOAD      SIPAAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,SIPAAUDS
          MOVE      PASSCODE,SIPAAUDO
          PACK      KEY19,SIPAAUDD,SIPAAUDT,SIPAAUDP,SIPAAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWSIPA
WASIPA99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DASIPA00
          MOVE      "   24",AUDTSECT
          MOVE      "210",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DASIPA99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADSIPA
DASIPA99  RETURN
ASSIPA    RESET     KEY19                                                       
          READ      SINAUDPA,KEY19;;                                            
          RETURN
.
AKSIPA                                                                          
          MOVE      ZERO,OVRCD
          READKS    SINAUDPA;SIPAAUDD,SIPAAUDT,SIPAAUDP,SIPAAUDR,SIPAAUDS:      
                    SIPAAUDO,SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:           
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
AUSIPA                                                                          
          UPDATE    SINAUDPA;SIPAAUDD,SIPAAUDT,SIPAAUDP,SIPAAUDR,SIPAAUDS:      
                    SIPAAUDO,SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:           
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          RETURN
.
AWSIPA    RESET     KEY19                                                       
          WRITE     SINAUDPA,KEY19;SIPAAUDD,SIPAAUDT,SIPAAUDP,SIPAAUDR,SIPAAUDS:
                    SIPAAUDO,SIPAPON,SIPASUP,SIPAORI,SIPAICN,SIPASCN:           
                        SIPADEL,SIPAMES,SIPADIN,SIPADPR,SIPADCN,SIPADCM:        
                        SIPACON,SIPAIDP,SIPAUR1,SIPAUR2,SIPAUD1,SIPAUD2:        
                        SIPAUC1,SIPAUC2,SIPAUY1,SIPAUY2,SIPACST,SIPAWAR:        
                        SIPAPNT,SIPAMDP,SIPASPA                                 
          RETURN
.
ADSIPA    RESET     KEY19                                                       
          DELETE    SINAUDPA,KEY19;                                             
          RETURN
.
