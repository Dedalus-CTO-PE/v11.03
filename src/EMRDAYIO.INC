.
. EMRDAYIO    
. --------
. Filename     : emrdayaf.dat
.
RSEMDY1   RESET     KEY8                                                        
          READ      EMRDAYA1,KEY8;;                                             
          RETURN
.
RAEMDY1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      EMRDAYA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMDY1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      EMRDAYA1,KEY8;EMDYDAT,EMDYCNT,EMDYSPA                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMDY1                                                                         
          MOVE      ZERO,OVRCD
          READKS    EMRDAYA1;EMDYDAT,EMDYCNT,EMDYSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMDY1                                                                         
          MOVE      ZERO,OVRCD
          READKP    EMRDAYA1;EMDYDAT,EMDYCNT,EMDYSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMDY1                                                                         
          UPDATE    EMRDAYA1;EMDYDAT,EMDYCNT,EMDYSPA                            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMDY1   RESET     KEY8                                                        
          WRITE     EMRDAYA1,KEY8;EMDYDAT,EMDYCNT,EMDYSPA                       
          RETURN
.
DEEMDY1   RESET     KEY8                                                        
          DELETE    EMRDAYA1,KEY8                                               
          RETURN
.
RLEMDY1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     EMRDAYA1,KEY8;EMDYDAT,EMDYCNT,EMDYSPA                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMDY1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   EMRDAYA1;EMDYDAT,EMDYCNT,EMDYSPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMDY1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   EMRDAYA1;EMDYDAT,EMDYCNT,EMDYSPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMDY1   RESET     KEY8                                                        
          UNLOCK    EMRDAYA1                                                    
          RETURN
.
