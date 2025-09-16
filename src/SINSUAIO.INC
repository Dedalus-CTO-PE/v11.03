.
. SINSUAIO    
. --------
. Filename     : sinsuaaf.dat
.
RSSISA1   RESET     KEY5                                                        
          READ      SINSUAA1,KEY5;;                                             
          RETURN
.
RASISA1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      SINSUAA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSISA1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      SINSUAA1,KEY5;SISACODE,SISADESC,SISACOMM,SISAGLI,SISAUR1:   
                        SISAUR2,SISAUD1,SISAUD2,SISAUC1,SISAUC2,SISAUY1:        
                        SISAUY2,SISASPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSISA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINSUAA1;SISACODE,SISADESC,SISACOMM,SISAGLI,SISAUR1:        
                        SISAUR2,SISAUD1,SISAUD2,SISAUC1,SISAUC2,SISAUY1:        
                        SISAUY2,SISASPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSISA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINSUAA1;SISACODE,SISADESC,SISACOMM,SISAGLI,SISAUR1:        
                        SISAUR2,SISAUD1,SISAUD2,SISAUC1,SISAUC2,SISAUY1:        
                        SISAUY2,SISASPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSISA1                                                                         
          UPDATE    SINSUAA1;SISACODE,SISADESC,SISACOMM,SISAGLI,SISAUR1:        
                        SISAUR2,SISAUD1,SISAUD2,SISAUC1,SISAUC2,SISAUY1:        
                        SISAUY2,SISASPA                                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSISA1   RESET     KEY5                                                        
          WRITE     SINSUAA1,KEY5;SISACODE,SISADESC,SISACOMM,SISAGLI,SISAUR1:   
                        SISAUR2,SISAUD1,SISAUD2,SISAUC1,SISAUC2,SISAUY1:        
                        SISAUY2,SISASPA                                         
          RETURN
.
DESISA1   RESET     KEY5                                                        
          DELETE    SINSUAA1,KEY5                                               
          RETURN
.
RLSISA1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READL     SINSUAA1,KEY5;SISACODE,SISADESC,SISACOMM,SISAGLI,SISAUR1:   
                        SISAUR2,SISAUD1,SISAUD2,SISAUC1,SISAUC2,SISAUY1:        
                        SISAUY2,SISASPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSISA1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINSUAA1;SISACODE,SISADESC,SISACOMM,SISAGLI,SISAUR1:        
                        SISAUR2,SISAUD1,SISAUD2,SISAUC1,SISAUC2,SISAUY1:        
                        SISAUY2,SISASPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSISA1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINSUAA1;SISACODE,SISADESC,SISACOMM,SISAGLI,SISAUR1:        
                        SISAUR2,SISAUD1,SISAUD2,SISAUC1,SISAUC2,SISAUY1:        
                        SISAUY2,SISASPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSISA1   RESET     KEY5                                                        
          UNLOCK    SINSUAA1                                                    
          RETURN
.
RSSISA2   RESET     KEY35                                                       
          READ      SINSUAA2,KEY35;;                                            
          RETURN
.
RASISA2   RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      SINSUAA2,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSISA2   RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      SINSUAA2,KEY35;SISACODE,SISADESC,SISACOMM,SISAGLI,SISAUR1:  
                        SISAUR2,SISAUD1,SISAUD2,SISAUC1,SISAUC2,SISAUY1:        
                        SISAUY2,SISASPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSISA2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINSUAA2;SISACODE,SISADESC,SISACOMM,SISAGLI,SISAUR1:        
                        SISAUR2,SISAUD1,SISAUD2,SISAUC1,SISAUC2,SISAUY1:        
                        SISAUY2,SISASPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSISA2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINSUAA2;SISACODE,SISADESC,SISACOMM,SISAGLI,SISAUR1:        
                        SISAUR2,SISAUD1,SISAUD2,SISAUC1,SISAUC2,SISAUY1:        
                        SISAUY2,SISASPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSISA2                                                                         
          UPDATE    SINSUAA2;SISACODE,SISADESC,SISACOMM,SISAGLI,SISAUR1:        
                        SISAUR2,SISAUD1,SISAUD2,SISAUC1,SISAUC2,SISAUY1:        
                        SISAUY2,SISASPA                                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSISA2   RESET     KEY35                                                       
          WRITE     SINSUAA2,KEY35;SISACODE,SISADESC,SISACOMM,SISAGLI,SISAUR1:  
                        SISAUR2,SISAUD1,SISAUD2,SISAUC1,SISAUC2,SISAUY1:        
                        SISAUY2,SISASPA                                         
          RETURN
.
DESISA2   RESET     KEY35                                                       
          DELETE    SINSUAA2,KEY35                                              
          RETURN
.
RLSISA2   RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READL     SINSUAA2,KEY35;SISACODE,SISADESC,SISACOMM,SISAGLI,SISAUR1:  
                        SISAUR2,SISAUD1,SISAUD2,SISAUC1,SISAUC2,SISAUY1:        
                        SISAUY2,SISASPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSISA2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINSUAA2;SISACODE,SISADESC,SISACOMM,SISAGLI,SISAUR1:        
                        SISAUR2,SISAUD1,SISAUD2,SISAUC1,SISAUC2,SISAUY1:        
                        SISAUY2,SISASPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSISA2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINSUAA2;SISACODE,SISADESC,SISACOMM,SISAGLI,SISAUR1:        
                        SISAUR2,SISAUD1,SISAUD2,SISAUC1,SISAUC2,SISAUY1:        
                        SISAUY2,SISASPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSISA2   RESET     KEY35                                                       
          UNLOCK    SINSUAA2                                                    
          RETURN
.
RSSISA3   RESET     KEY11                                                       
          READ      SINSUAA3,KEY11;;                                            
          RETURN
.
RASISA3   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      SINSUAA3,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSISA3   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      SINSUAA3,KEY11;SISACODE,SISADESC,SISACOMM,SISAGLI,SISAUR1:  
                        SISAUR2,SISAUD1,SISAUD2,SISAUC1,SISAUC2,SISAUY1:        
                        SISAUY2,SISASPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSISA3                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINSUAA3;SISACODE,SISADESC,SISACOMM,SISAGLI,SISAUR1:        
                        SISAUR2,SISAUD1,SISAUD2,SISAUC1,SISAUC2,SISAUY1:        
                        SISAUY2,SISASPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSISA3                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINSUAA3;SISACODE,SISADESC,SISACOMM,SISAGLI,SISAUR1:        
                        SISAUR2,SISAUD1,SISAUD2,SISAUC1,SISAUC2,SISAUY1:        
                        SISAUY2,SISASPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSISA3                                                                         
          UPDATE    SINSUAA3;SISACODE,SISADESC,SISACOMM,SISAGLI,SISAUR1:        
                        SISAUR2,SISAUD1,SISAUD2,SISAUC1,SISAUC2,SISAUY1:        
                        SISAUY2,SISASPA                                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSISA3   RESET     KEY11                                                       
          WRITE     SINSUAA3,KEY11;SISACODE,SISADESC,SISACOMM,SISAGLI,SISAUR1:  
                        SISAUR2,SISAUD1,SISAUD2,SISAUC1,SISAUC2,SISAUY1:        
                        SISAUY2,SISASPA                                         
          RETURN
.
DESISA3   RESET     KEY11                                                       
          DELETE    SINSUAA3,KEY11                                              
          RETURN
.
RLSISA3   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READL     SINSUAA3,KEY11;SISACODE,SISADESC,SISACOMM,SISAGLI,SISAUR1:  
                        SISAUR2,SISAUD1,SISAUD2,SISAUC1,SISAUC2,SISAUY1:        
                        SISAUY2,SISASPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSISA3                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINSUAA3;SISACODE,SISADESC,SISACOMM,SISAGLI,SISAUR1:        
                        SISAUR2,SISAUD1,SISAUD2,SISAUC1,SISAUC2,SISAUY1:        
                        SISAUY2,SISASPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSISA3                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINSUAA3;SISACODE,SISADESC,SISACOMM,SISAGLI,SISAUR1:        
                        SISAUR2,SISAUD1,SISAUD2,SISAUC1,SISAUC2,SISAUY1:        
                        SISAUY2,SISASPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSISA3   RESET     KEY11                                                       
          UNLOCK    SINSUAA3                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WASISA00
          MOVE      "   24",AUDTSECT
          MOVE      "219",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WASISA99 IF NOT EQUAL
.
          PACK     SISAAUDD,CCC,CYY,CMM,CDD
          REP       " 0",SISAAUDD
          CLOCK     TIME,SISAAUDT
          MOVE      PORT,SISAAUDP
          LOAD      SISAAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,SISAAUDS
          MOVE      PASSCODE,SISAAUDO
          PACK      KEY19,SISAAUDD,SISAAUDT,SISAAUDP,SISAAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWSISA
WASISA99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DASISA00
          MOVE      "   24",AUDTSECT
          MOVE      "219",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DASISA99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADSISA
DASISA99  RETURN
ASSISA    RESET     KEY19                                                       
          READ      SINAUDSA,KEY19;;                                            
          RETURN
.
AKSISA                                                                          
          MOVE      ZERO,OVRCD
          READKS    SINAUDSA;SISAAUDD,SISAAUDT,SISAAUDP,SISAAUDR,SISAAUDS:      
                    SISAAUDO,SISACODE,SISADESC,SISACOMM,SISAGLI,SISAUR1:        
                        SISAUR2,SISAUD1,SISAUD2,SISAUC1,SISAUC2,SISAUY1:        
                        SISAUY2,SISASPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
AUSISA                                                                          
          UPDATE    SINAUDSA;SISAAUDD,SISAAUDT,SISAAUDP,SISAAUDR,SISAAUDS:      
                    SISAAUDO,SISACODE,SISADESC,SISACOMM,SISAGLI,SISAUR1:        
                        SISAUR2,SISAUD1,SISAUD2,SISAUC1,SISAUC2,SISAUY1:        
                        SISAUY2,SISASPA                                         
          RETURN
.
AWSISA    RESET     KEY19                                                       
          WRITE     SINAUDSA,KEY19;SISAAUDD,SISAAUDT,SISAAUDP,SISAAUDR,SISAAUDS:
                    SISAAUDO,SISACODE,SISADESC,SISACOMM,SISAGLI,SISAUR1:        
                        SISAUR2,SISAUD1,SISAUD2,SISAUC1,SISAUC2,SISAUY1:        
                        SISAUY2,SISASPA                                         
          RETURN
.
ADSISA    RESET     KEY19                                                       
          DELETE    SINAUDSA,KEY19;                                             
          RETURN
.
