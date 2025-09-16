.
. PATCMCIO    
. --------
. Filename     : patcmcaf.dat
.
RSPTCMC1  RESET     KEY9                                                        
          READ      PATCMCA1,KEY9;;                                             
          RETURN
.
RAPTCMC1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      PATCMCA1,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTCMC1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      PATCMCA1,KEY9;PTCACODE,PTCADES1,PTCADES2,PTCAELOS,PTCAACTV: 
                        PTCSPARE                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTCMC1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATCMCA1;PTCACODE,PTCADES1,PTCADES2,PTCAELOS,PTCAACTV:      
                        PTCSPARE                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTCMC1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATCMCA1;PTCACODE,PTCADES1,PTCADES2,PTCAELOS,PTCAACTV:      
                        PTCSPARE                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTCMC1                                                                        
          UPDATE    PATCMCA1;PTCACODE,PTCADES1,PTCADES2,PTCAELOS,PTCAACTV:      
                        PTCSPARE                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTCMC1  RESET     KEY9                                                        
          WRITE     PATCMCA1,KEY9;PTCACODE,PTCADES1,PTCADES2,PTCAELOS,PTCAACTV: 
                        PTCSPARE                                                
          RETURN
.
DEPTCMC1  RESET     KEY9                                                        
          DELETE    PATCMCA1,KEY9                                               
          RETURN
.
RLPTCMC1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READL     PATCMCA1,KEY9;PTCACODE,PTCADES1,PTCADES2,PTCAELOS,PTCAACTV: 
                        PTCSPARE                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTCMC1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PATCMCA1;PTCACODE,PTCADES1,PTCADES2,PTCAELOS,PTCAACTV:      
                        PTCSPARE                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTCMC1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PATCMCA1;PTCACODE,PTCADES1,PTCADES2,PTCAELOS,PTCAACTV:      
                        PTCSPARE                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTCMC1  RESET     KEY9                                                        
          UNLOCK    PATCMCA1                                                    
          RETURN
.
.
RSPTCMC2  RESET     KEY69
          READ      PATCMCA2,KEY69;;
          RETURN
.
RAPTCMC2  RESET     KEY69
          MOVE      ZERO,OVRCD
          READ      PATCMCA2,KEY69;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTCMC2  RESET     KEY69
          MOVE      ZERO,OVRCD
          READ      PATCMCA2,KEY69;PTCACODE,PTCADES1,PTCADES2,PTCAELOS,PTCAACTV:
                        PTCSPARE
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTCMC2
          MOVE      ZERO,OVRCD
          READKS    PATCMCA2;PTCACODE,PTCADES1,PTCADES2,PTCAELOS,PTCAACTV:
                        PTCSPARE
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTCMC2  
          MOVE      ZERO,OVRCD
          READKP    PATCMCA2;PTCACODE,PTCADES1,PTCADES2,PTCAELOS,PTCAACTV:
                        PTCSPARE
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTCMC2  
          UPDATE    PATCMCA2;PTCACODE,PTCADES1,PTCADES2,PTCAELOS,PTCAACTV:
                        PTCSPARE
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTCMC2  RESET     KEY69
          WRITE     PATCMCA2,KEY69;PTCACODE,PTCADES1,PTCADES2,PTCAELOS,PTCAACTV:
                        PTCSPARE
          RETURN
.
DEPTCMC2  RESET     KEY69
          DELETE    PATCMCA2,KEY69
          RETURN
.
RLPTCMC2  RESET     KEY69
          MOVE      ZERO,OVRCD
          READL     PATCMCA2,KEY69;PTCACODE,PTCADES1,PTCADES2,PTCAELOS,PTCAACTV:
                        PTCSPARE
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTCMC2
          MOVE      ZERO,OVRCD
          READLKS   PATCMCA2;PTCACODE,PTCADES1,PTCADES2,PTCAELOS,PTCAACTV:
                        PTCSPARE
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTCMC2
          MOVE      ZERO,OVRCD
          READLKP   PATCMCA2;PTCACODE,PTCADES1,PTCADES2,PTCAELOS,PTCAACTV:
                        PTCSPARE
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTCMC2  RESET     KEY69
          UNLOCK    PATCMCA2
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WAPTCA00
          MOVE      "   95",AUDTSECT
          MOVE      "145",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WAPTCA99 IF NOT EQUAL
.
          PACK     PTCAAUDD,CCC,CYY,CMM,CDD
          REP       " 0",PTCAAUDD
          CLOCK     TIME,PTCAAUDT
          MOVE      PORT,PTCAAUDP
          LOAD      PTCAAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,PTCAAUDS
          MOVE      PASSCODE,PTCAAUDO
          PACK      KEY19,PTCAAUDD,PTCAAUDT,PTCAAUDP,PTCAAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWPTCA
WAPTCA99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DAPTCA00
          MOVE      "   95",AUDTSECT
          MOVE      "145",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DAPTCA99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADPTCA
DAPTCA99  RETURN
ASPTCMC   RESET     KEY19                                                       
          READ      PATAUDCA,KEY19;;                                            
          RETURN
.
AKPTCMC                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATAUDCA;PTCAAUDD,PTCAAUDT,PTCAAUDP,PTCAAUDR,PTCAAUDS:      
                    PTCAAUDO,PTCACODE,PTCADES1,PTCADES2,PTCAELOS,PTCAACTV:      
                        PTCSPARE                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
AUPTCMC                                                                         
          UPDATE    PATAUDCA;PTCAAUDD,PTCAAUDT,PTCAAUDP,PTCAAUDR,PTCAAUDS:      
                    PTCAAUDO,PTCACODE,PTCADES1,PTCADES2,PTCAELOS,PTCAACTV:      
                        PTCSPARE                                                
          RETURN
.
AWPTCMC   RESET     KEY19                                                       
          WRITE     PATAUDCA,KEY19;PTCAAUDD,PTCAAUDT,PTCAAUDP,PTCAAUDR,PTCAAUDS:
                    PTCAAUDO,PTCACODE,PTCADES1,PTCADES2,PTCAELOS,PTCAACTV:      
                        PTCSPARE                                                
          RETURN
.
ADPTCMC   RESET     KEY19                                                       
          DELETE    PATAUDCA,KEY19;                                             
          RETURN
.
