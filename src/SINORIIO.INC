.
. SINORIIO    
. --------
. Filename     : sinoriaf.dat
.
RSSIOR1   RESET     KEY3                                                        
          READ      SINORIA1,KEY3;;                                             
          RETURN
.
RASIOR1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      SINORIA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIOR1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      SINORIA1,KEY3;SIORORIG,SIORNAME,SIORHOSP,SIORDEL,SIORMESS:  
                        SIOREXT,SIORCON,SIORUR1,SIORUR2,SIORUD1,SIORUD2:        
                        SIORUC1,SIORUC2,SIORUY1,SIORUY2,SIORSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIOR1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINORIA1;SIORORIG,SIORNAME,SIORHOSP,SIORDEL,SIORMESS:       
                        SIOREXT,SIORCON,SIORUR1,SIORUR2,SIORUD1,SIORUD2:        
                        SIORUC1,SIORUC2,SIORUY1,SIORUY2,SIORSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIOR1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINORIA1;SIORORIG,SIORNAME,SIORHOSP,SIORDEL,SIORMESS:       
                        SIOREXT,SIORCON,SIORUR1,SIORUR2,SIORUD1,SIORUD2:        
                        SIORUC1,SIORUC2,SIORUY1,SIORUY2,SIORSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIOR1                                                                         
          UPDATE    SINORIA1;SIORORIG,SIORNAME,SIORHOSP,SIORDEL,SIORMESS:       
                        SIOREXT,SIORCON,SIORUR1,SIORUR2,SIORUD1,SIORUD2:        
                        SIORUC1,SIORUC2,SIORUY1,SIORUY2,SIORSPA                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIOR1   RESET     KEY3                                                        
          WRITE     SINORIA1,KEY3;SIORORIG,SIORNAME,SIORHOSP,SIORDEL,SIORMESS:  
                        SIOREXT,SIORCON,SIORUR1,SIORUR2,SIORUD1,SIORUD2:        
                        SIORUC1,SIORUC2,SIORUY1,SIORUY2,SIORSPA                 
          RETURN
.
DESIOR1   RESET     KEY3                                                        
          DELETE    SINORIA1,KEY3                                               
          RETURN
.
RLSIOR1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READL     SINORIA1,KEY3;SIORORIG,SIORNAME,SIORHOSP,SIORDEL,SIORMESS:  
                        SIOREXT,SIORCON,SIORUR1,SIORUR2,SIORUD1,SIORUD2:        
                        SIORUC1,SIORUC2,SIORUY1,SIORUY2,SIORSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIOR1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINORIA1;SIORORIG,SIORNAME,SIORHOSP,SIORDEL,SIORMESS:       
                        SIOREXT,SIORCON,SIORUR1,SIORUR2,SIORUD1,SIORUD2:        
                        SIORUC1,SIORUC2,SIORUY1,SIORUY2,SIORSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIOR1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINORIA1;SIORORIG,SIORNAME,SIORHOSP,SIORDEL,SIORMESS:       
                        SIOREXT,SIORCON,SIORUR1,SIORUR2,SIORUD1,SIORUD2:        
                        SIORUC1,SIORUC2,SIORUY1,SIORUY2,SIORSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIOR1   RESET     KEY3                                                        
          UNLOCK    SINORIA1                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WASIOR00
          MOVE      "   24",AUDTSECT
          MOVE      "215",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WASIOR99 IF NOT EQUAL
.
          PACK     SIORAUDD,CCC,CYY,CMM,CDD
          REP       " 0",SIORAUDD
          CLOCK     TIME,SIORAUDT
          MOVE      PORT,SIORAUDP
          LOAD      SIORAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,SIORAUDS
          MOVE      PASSCODE,SIORAUDO
          PACK      KEY19,SIORAUDD,SIORAUDT,SIORAUDP,SIORAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWSIOR
WASIOR99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DASIOR00
          MOVE      "   24",AUDTSECT
          MOVE      "215",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DASIOR99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADSIOR
DASIOR99  RETURN
ASSIOR    RESET     KEY19                                                       
          READ      SINAUDOR,KEY19;;                                            
          RETURN
.
AKSIOR                                                                          
          MOVE      ZERO,OVRCD
          READKS    SINAUDOR;SIORAUDD,SIORAUDT,SIORAUDP,SIORAUDR,SIORAUDS:      
                    SIORAUDO,SIORORIG,SIORNAME,SIORHOSP,SIORDEL,SIORMESS:       
                        SIOREXT,SIORCON,SIORUR1,SIORUR2,SIORUD1,SIORUD2:        
                        SIORUC1,SIORUC2,SIORUY1,SIORUY2,SIORSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
AUSIOR                                                                          
          UPDATE    SINAUDOR;SIORAUDD,SIORAUDT,SIORAUDP,SIORAUDR,SIORAUDS:      
                    SIORAUDO,SIORORIG,SIORNAME,SIORHOSP,SIORDEL,SIORMESS:       
                        SIOREXT,SIORCON,SIORUR1,SIORUR2,SIORUD1,SIORUD2:        
                        SIORUC1,SIORUC2,SIORUY1,SIORUY2,SIORSPA                 
          RETURN
.
AWSIOR    RESET     KEY19                                                       
          WRITE     SINAUDOR,KEY19;SIORAUDD,SIORAUDT,SIORAUDP,SIORAUDR,SIORAUDS:
                    SIORAUDO,SIORORIG,SIORNAME,SIORHOSP,SIORDEL,SIORMESS:       
                        SIOREXT,SIORCON,SIORUR1,SIORUR2,SIORUD1,SIORUD2:        
                        SIORUC1,SIORUC2,SIORUY1,SIORUY2,SIORSPA                 
          RETURN
.
ADSIOR    RESET     KEY19                                                       
          DELETE    SINAUDOR,KEY19;                                             
          RETURN
.
