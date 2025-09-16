.
. SINWARIO    
. --------
. Filename     : sinwaraf.dat
.
RSSIWA1   RESET     KEY5                                                        
          READ      SINWARA1,KEY5;;                                             
          RETURN
.
RASIWA1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      SINWARA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIWA1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      SINWARA1,KEY5;SIWAWAR,SIWADES,SIWATYP,SIWACTY,SIWAPTY:      
                        SIWALED,SIWAIACC,SIWAPACC,SIWADISS,SIWARESP,SIWAUR1:    
                        SIWAMUAC,SIWANAT,SIWAUR2,SIWAUD1,SIWAUD2,SIWAUC1:       
                        SIWAUC2,SIWAUY1,SIWAUY2,SIWAPIC,SIWAPA1,SIWAPA2:        
                        SIWAPA3,SIWAPA4,SIWANPO,SIWASTA,SIWAPSH                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIWA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINWARA1;SIWAWAR,SIWADES,SIWATYP,SIWACTY,SIWAPTY:           
                        SIWALED,SIWAIACC,SIWAPACC,SIWADISS,SIWARESP,SIWAUR1:    
                        SIWAMUAC,SIWANAT,SIWAUR2,SIWAUD1,SIWAUD2,SIWAUC1:       
                        SIWAUC2,SIWAUY1,SIWAUY2,SIWAPIC,SIWAPA1,SIWAPA2:        
                        SIWAPA3,SIWAPA4,SIWANPO,SIWASTA,SIWAPSH                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIWA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINWARA1;SIWAWAR,SIWADES,SIWATYP,SIWACTY,SIWAPTY:           
                        SIWALED,SIWAIACC,SIWAPACC,SIWADISS,SIWARESP,SIWAUR1:    
                        SIWAMUAC,SIWANAT,SIWAUR2,SIWAUD1,SIWAUD2,SIWAUC1:       
                        SIWAUC2,SIWAUY1,SIWAUY2,SIWAPIC,SIWAPA1,SIWAPA2:        
                        SIWAPA3,SIWAPA4,SIWANPO,SIWASTA,SIWAPSH                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIWA1                                                                         
          UPDATE    SINWARA1;SIWAWAR,SIWADES,SIWATYP,SIWACTY,SIWAPTY:           
                        SIWALED,SIWAIACC,SIWAPACC,SIWADISS,SIWARESP,SIWAUR1:    
                        SIWAMUAC,SIWANAT,SIWAUR2,SIWAUD1,SIWAUD2,SIWAUC1:       
                        SIWAUC2,SIWAUY1,SIWAUY2,SIWAPIC,SIWAPA1,SIWAPA2:        
                        SIWAPA3,SIWAPA4,SIWANPO,SIWASTA,SIWAPSH                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIWA1   RESET     KEY5                                                        
          WRITE     SINWARA1,KEY5;SIWAWAR,SIWADES,SIWATYP,SIWACTY,SIWAPTY:      
                        SIWALED,SIWAIACC,SIWAPACC,SIWADISS,SIWARESP,SIWAUR1:    
                        SIWAMUAC,SIWANAT,SIWAUR2,SIWAUD1,SIWAUD2,SIWAUC1:       
                        SIWAUC2,SIWAUY1,SIWAUY2,SIWAPIC,SIWAPA1,SIWAPA2:        
                        SIWAPA3,SIWAPA4,SIWANPO,SIWASTA,SIWAPSH                 
          RETURN
.
DESIWA1   RESET     KEY5                                                        
          DELETE    SINWARA1,KEY5                                               
          RETURN
.
RLSIWA1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READL     SINWARA1,KEY5;SIWAWAR,SIWADES,SIWATYP,SIWACTY,SIWAPTY:      
                        SIWALED,SIWAIACC,SIWAPACC,SIWADISS,SIWARESP,SIWAUR1:    
                        SIWAMUAC,SIWANAT,SIWAUR2,SIWAUD1,SIWAUD2,SIWAUC1:       
                        SIWAUC2,SIWAUY1,SIWAUY2,SIWAPIC,SIWAPA1,SIWAPA2:        
                        SIWAPA3,SIWAPA4,SIWANPO,SIWASTA,SIWAPSH                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIWA1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINWARA1;SIWAWAR,SIWADES,SIWATYP,SIWACTY,SIWAPTY:           
                        SIWALED,SIWAIACC,SIWAPACC,SIWADISS,SIWARESP,SIWAUR1:    
                        SIWAMUAC,SIWANAT,SIWAUR2,SIWAUD1,SIWAUD2,SIWAUC1:       
                        SIWAUC2,SIWAUY1,SIWAUY2,SIWAPIC,SIWAPA1,SIWAPA2:        
                        SIWAPA3,SIWAPA4,SIWANPO,SIWASTA,SIWAPSH                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIWA1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINWARA1;SIWAWAR,SIWADES,SIWATYP,SIWACTY,SIWAPTY:           
                        SIWALED,SIWAIACC,SIWAPACC,SIWADISS,SIWARESP,SIWAUR1:    
                        SIWAMUAC,SIWANAT,SIWAUR2,SIWAUD1,SIWAUD2,SIWAUC1:       
                        SIWAUC2,SIWAUY1,SIWAUY2,SIWAPIC,SIWAPA1,SIWAPA2:        
                        SIWAPA3,SIWAPA4,SIWANPO,SIWASTA,SIWAPSH                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIWA1   RESET     KEY5                                                        
          UNLOCK    SINWARA1                                                    
          RETURN
.
RSSIWA2   RESET     KEY45                                                       
          READ      SINWARA2,KEY45;;                                            
          RETURN
.
RASIWA2   RESET     KEY45                                                       
          MOVE      ZERO,OVRCD
          READ      SINWARA2,KEY45;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIWA2   RESET     KEY45                                                       
          MOVE      ZERO,OVRCD
          READ      SINWARA2,KEY45;SIWAWAR,SIWADES,SIWATYP,SIWACTY,SIWAPTY:     
                        SIWALED,SIWAIACC,SIWAPACC,SIWADISS,SIWARESP,SIWAUR1:    
                        SIWAMUAC,SIWANAT,SIWAUR2,SIWAUD1,SIWAUD2,SIWAUC1:       
                        SIWAUC2,SIWAUY1,SIWAUY2,SIWAPIC,SIWAPA1,SIWAPA2:        
                        SIWAPA3,SIWAPA4,SIWANPO,SIWASTA,SIWAPSH                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIWA2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINWARA2;SIWAWAR,SIWADES,SIWATYP,SIWACTY,SIWAPTY:           
                        SIWALED,SIWAIACC,SIWAPACC,SIWADISS,SIWARESP,SIWAUR1:    
                        SIWAMUAC,SIWANAT,SIWAUR2,SIWAUD1,SIWAUD2,SIWAUC1:       
                        SIWAUC2,SIWAUY1,SIWAUY2,SIWAPIC,SIWAPA1,SIWAPA2:        
                        SIWAPA3,SIWAPA4,SIWANPO,SIWASTA,SIWAPSH                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIWA2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINWARA2;SIWAWAR,SIWADES,SIWATYP,SIWACTY,SIWAPTY:           
                        SIWALED,SIWAIACC,SIWAPACC,SIWADISS,SIWARESP,SIWAUR1:    
                        SIWAMUAC,SIWANAT,SIWAUR2,SIWAUD1,SIWAUD2,SIWAUC1:       
                        SIWAUC2,SIWAUY1,SIWAUY2,SIWAPIC,SIWAPA1,SIWAPA2:        
                        SIWAPA3,SIWAPA4,SIWANPO,SIWASTA,SIWAPSH                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIWA2                                                                         
          UPDATE    SINWARA2;SIWAWAR,SIWADES,SIWATYP,SIWACTY,SIWAPTY:           
                        SIWALED,SIWAIACC,SIWAPACC,SIWADISS,SIWARESP,SIWAUR1:    
                        SIWAMUAC,SIWANAT,SIWAUR2,SIWAUD1,SIWAUD2,SIWAUC1:       
                        SIWAUC2,SIWAUY1,SIWAUY2,SIWAPIC,SIWAPA1,SIWAPA2:        
                        SIWAPA3,SIWAPA4,SIWANPO,SIWASTA,SIWAPSH                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIWA2   RESET     KEY45                                                       
          WRITE     SINWARA2,KEY45;SIWAWAR,SIWADES,SIWATYP,SIWACTY,SIWAPTY:     
                        SIWALED,SIWAIACC,SIWAPACC,SIWADISS,SIWARESP,SIWAUR1:    
                        SIWAMUAC,SIWANAT,SIWAUR2,SIWAUD1,SIWAUD2,SIWAUC1:       
                        SIWAUC2,SIWAUY1,SIWAUY2,SIWAPIC,SIWAPA1,SIWAPA2:        
                        SIWAPA3,SIWAPA4,SIWANPO,SIWASTA,SIWAPSH                 
          RETURN
.
DESIWA2   RESET     KEY45                                                       
          DELETE    SINWARA2,KEY45                                              
          RETURN
.
RLSIWA2   RESET     KEY45                                                       
          MOVE      ZERO,OVRCD
          READL     SINWARA2,KEY45;SIWAWAR,SIWADES,SIWATYP,SIWACTY,SIWAPTY:     
                        SIWALED,SIWAIACC,SIWAPACC,SIWADISS,SIWARESP,SIWAUR1:    
                        SIWAMUAC,SIWANAT,SIWAUR2,SIWAUD1,SIWAUD2,SIWAUC1:       
                        SIWAUC2,SIWAUY1,SIWAUY2,SIWAPIC,SIWAPA1,SIWAPA2:        
                        SIWAPA3,SIWAPA4,SIWANPO,SIWASTA,SIWAPSH                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIWA2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINWARA2;SIWAWAR,SIWADES,SIWATYP,SIWACTY,SIWAPTY:           
                        SIWALED,SIWAIACC,SIWAPACC,SIWADISS,SIWARESP,SIWAUR1:    
                        SIWAMUAC,SIWANAT,SIWAUR2,SIWAUD1,SIWAUD2,SIWAUC1:       
                        SIWAUC2,SIWAUY1,SIWAUY2,SIWAPIC,SIWAPA1,SIWAPA2:        
                        SIWAPA3,SIWAPA4,SIWANPO,SIWASTA,SIWAPSH                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIWA2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINWARA2;SIWAWAR,SIWADES,SIWATYP,SIWACTY,SIWAPTY:           
                        SIWALED,SIWAIACC,SIWAPACC,SIWADISS,SIWARESP,SIWAUR1:    
                        SIWAMUAC,SIWANAT,SIWAUR2,SIWAUD1,SIWAUD2,SIWAUC1:       
                        SIWAUC2,SIWAUY1,SIWAUY2,SIWAPIC,SIWAPA1,SIWAPA2:        
                        SIWAPA3,SIWAPA4,SIWANPO,SIWASTA,SIWAPSH                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIWA2   RESET     KEY45                                                       
          UNLOCK    SINWARA2                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WASIWA00
          MOVE      "   24",AUDTSECT
          MOVE      "223",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WASIWA99 IF NOT EQUAL
.
          PACK      SIWAAUDD,CCC,CYY,CMM,CDD
          REP       " 0",SIWAAUDD
          CLOCK     TIME,SIWAAUDT
          MOVE      PORT,SIWAAUDP
          LOAD      SIWAAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,SIWAAUDS
          MOVE      PASSCODE,SIWAAUDO
          PACK      KEY19,SIWAAUDD,SIWAAUDT,SIWAAUDP,SIWAAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWSIWA
WASIWA99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DASIWA00
          MOVE      "   24",AUDTSECT
          MOVE      "223",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DASIWA99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADSIWA
DASIWA99  RETURN
ASSIWA    RESET     KEY19                                                       
          READ      SINAUDWA,KEY19;;                                            
          RETURN
.
AKSIWA                                                                          
          MOVE      ZERO,OVRCD
          READKS    SINAUDWA;SIWAAUDD,SIWAAUDT,SIWAAUDP,SIWAAUDR,SIWAAUDS:      
                    SIWAAUDO,SIWAWAR,SIWADES,SIWATYP,SIWACTY,SIWAPTY:           
                        SIWALED,SIWAIACC,SIWAPACC,SIWADISS,SIWARESP,SIWAUR1:    
                        SIWAMUAC,SIWANAT,SIWAUR2,SIWAUD1,SIWAUD2,SIWAUC1:       
                        SIWAUC2,SIWAUY1,SIWAUY2,SIWAPIC,SIWAPA1,SIWAPA2:        
                        SIWAPA3,SIWAPA4,SIWANPO,SIWASTA,SIWAPSH                 
          GOTO      OVERCOND IF OVER
          RETURN
.
AUSIWA                                                                          
          UPDATE    SINAUDWA;SIWAAUDD,SIWAAUDT,SIWAAUDP,SIWAAUDR,SIWAAUDS:      
                    SIWAAUDO,SIWAWAR,SIWADES,SIWATYP,SIWACTY,SIWAPTY:           
                        SIWALED,SIWAIACC,SIWAPACC,SIWADISS,SIWARESP,SIWAUR1:    
                        SIWAMUAC,SIWANAT,SIWAUR2,SIWAUD1,SIWAUD2,SIWAUC1:       
                        SIWAUC2,SIWAUY1,SIWAUY2,SIWAPIC,SIWAPA1,SIWAPA2:        
                        SIWAPA3,SIWAPA4,SIWANPO,SIWASTA,SIWAPSH                 
          RETURN
.
AWSIWA    RESET     KEY19                                                       
          WRITE     SINAUDWA,KEY19;SIWAAUDD,SIWAAUDT,SIWAAUDP,SIWAAUDR,SIWAAUDS:
                    SIWAAUDO,SIWAWAR,SIWADES,SIWATYP,SIWACTY,SIWAPTY:           
                        SIWALED,SIWAIACC,SIWAPACC,SIWADISS,SIWARESP,SIWAUR1:    
                        SIWAMUAC,SIWANAT,SIWAUR2,SIWAUD1,SIWAUD2,SIWAUC1:       
                        SIWAUC2,SIWAUY1,SIWAUY2,SIWAPIC,SIWAPA1,SIWAPA2:        
                        SIWAPA3,SIWAPA4,SIWANPO,SIWASTA,SIWAPSH                 
          RETURN
.
ADSIWA    RESET     KEY19                                                       
          DELETE    SINAUDWA,KEY19;                                             
          RETURN
.
