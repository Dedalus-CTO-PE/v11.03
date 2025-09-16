.
. EMRUTYIO    
. --------
. Filename     : emrutyaf.dat
.
RSEMUTY1  RESET     KEY5                                                        
          READ      EMRUTYA1,KEY5;;                                             
          RETURN
.
RAEMUTY1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      EMRUTYA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMUTY1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      EMRUTYA1,KEY5;EMUTUTY,EMUTDES,EMUTSLV,EMUTSID,EMUTPWD:      
                        EMUTSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMUTY1                                                                        
          MOVE      ZERO,OVRCD
          READKS    EMRUTYA1;EMUTUTY,EMUTDES,EMUTSLV,EMUTSID,EMUTPWD:           
                        EMUTSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMUTY1                                                                        
          MOVE      ZERO,OVRCD
          READKP    EMRUTYA1;EMUTUTY,EMUTDES,EMUTSLV,EMUTSID,EMUTPWD:           
                        EMUTSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMUTY1                                                                        
          UPDATE    EMRUTYA1;EMUTUTY,EMUTDES,EMUTSLV,EMUTSID,EMUTPWD:           
                        EMUTSPA                                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMUTY1  RESET     KEY5                                                        
          WRITE     EMRUTYA1,KEY5;EMUTUTY,EMUTDES,EMUTSLV,EMUTSID,EMUTPWD:      
                        EMUTSPA                                                 
          RETURN
.
DEEMUTY1  RESET     KEY5                                                        
          DELETE    EMRUTYA1,KEY5                                               
          RETURN
.
RLEMUTY1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READL     EMRUTYA1,KEY5;EMUTUTY,EMUTDES,EMUTSLV,EMUTSID,EMUTPWD:      
                        EMUTSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMUTY1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   EMRUTYA1;EMUTUTY,EMUTDES,EMUTSLV,EMUTSID,EMUTPWD:           
                        EMUTSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMUTY1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   EMRUTYA1;EMUTUTY,EMUTDES,EMUTSLV,EMUTSID,EMUTPWD:           
                        EMUTSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMUTY1  RESET     KEY5                                                        
          UNLOCK    EMRUTYA1                                                    
          RETURN
.
