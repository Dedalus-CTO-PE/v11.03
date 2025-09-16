.
. SINFACIO    
. --------
. Filename     : sinfacaf.dat
.
RSSIFA1   RESET     KEY30                                                       
          READ      SINFACA1,KEY30;;                                            
          RETURN
.
RASIFA1   RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      SINFACA1,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIFA1   RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      SINFACA1,KEY30;SIFAISSU,SIFASUPP,SIFACTOR,SIFAFILL          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIFA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINFACA1;SIFAISSU,SIFASUPP,SIFACTOR,SIFAFILL                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIFA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINFACA1;SIFAISSU,SIFASUPP,SIFACTOR,SIFAFILL                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIFA1                                                                         
          UPDATE    SINFACA1;SIFAISSU,SIFASUPP,SIFACTOR,SIFAFILL                
          RETURN
.
WRSIFA1   RESET     KEY30                                                       
          WRITE     SINFACA1,KEY30;SIFAISSU,SIFASUPP,SIFACTOR,SIFAFILL          
          RETURN
.
DESIFA1   RESET     KEY30                                                       
          DELETE    SINFACA1,KEY30                                              
          RETURN
.
RSSIFA2   RESET     KEY30                                                       
          READ      SINFACA2,KEY30;;                                            
          RETURN
.
RASIFA2   RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      SINFACA2,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIFA2   RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      SINFACA2,KEY30;SIFAISSU,SIFASUPP,SIFACTOR,SIFAFILL          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIFA2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINFACA2;SIFAISSU,SIFASUPP,SIFACTOR,SIFAFILL                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIFA2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINFACA2;SIFAISSU,SIFASUPP,SIFACTOR,SIFAFILL                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIFA2                                                                         
          UPDATE    SINFACA2;SIFAISSU,SIFASUPP,SIFACTOR,SIFAFILL                
          RETURN
.
WRSIFA2   RESET     KEY30                                                       
          WRITE     SINFACA2,KEY30;SIFAISSU,SIFASUPP,SIFACTOR,SIFAFILL          
          RETURN
.
DESIFA2   RESET     KEY30                                                       
          DELETE    SINFACA2,KEY30                                              
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WASIFA00
          MOVE      "   24",AUDTSECT
          MOVE      "205",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WASIFA99 IF NOT EQUAL
.
          PACK      SIFAAUDD,CCC,CYY,CMM,CDD
          REP       " 0",SIFAAUDD
          CLOCK     TIME,SIFAAUDT
          MOVE      PORT,SIFAAUDP
          LOAD      SIFAAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,SIFAAUDS
          MOVE      PASSCODE,SIFAAUDO
          PACK      KEY19,SIFAAUDD,SIFAAUDT,SIFAAUDP,SIFAAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWSIFA
WASIFA99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DASIFA00
          MOVE      "   24",AUDTSECT
          MOVE      "205",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DASIFA99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADSIFA
DASIFA99  RETURN
ASSIFA    RESET     KEY19                                                       
          READ      SINAUDFA,KEY19;;                                            
          RETURN
.
AKSIFA                                                                          
          MOVE      ZERO,OVRCD
          READKS    SINAUDFA;SIFAAUDD,SIFAAUDT,SIFAAUDP,SIFAAUDR,SIFAAUDS:      
                    SIFAAUDO,SIFAISSU,SIFASUPP,SIFACTOR,SIFAFILL                
          GOTO      OVERCOND IF OVER
          RETURN
.
AUSIFA                                                                          
          UPDATE    SINAUDFA;SIFAAUDD,SIFAAUDT,SIFAAUDP,SIFAAUDR,SIFAAUDS:      
                    SIFAAUDO,SIFAISSU,SIFASUPP,SIFACTOR,SIFAFILL                
          RETURN
.
AWSIFA    RESET     KEY19                                                       
          WRITE     SINAUDFA,KEY19;SIFAAUDD,SIFAAUDT,SIFAAUDP,SIFAAUDR,SIFAAUDS:
                    SIFAAUDO,SIFAISSU,SIFASUPP,SIFACTOR,SIFAFILL                
          RETURN
.
ADSIFA    RESET     KEY19                                                       
          DELETE    SINAUDFA,KEY19;                                             
          RETURN
.
