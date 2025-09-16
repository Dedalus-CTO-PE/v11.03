.
. EMRDLAIO    
. --------
. Filename     : emrdlaaf.dat
.
RSEMDA1   RESET     KEY8                                                        
          READ      EMRDLAA1,KEY8;;                                             
          RETURN
.
RAEMDA1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      EMRDLAA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMDA1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      EMRDLAA1,KEY8;EMDAADMN,EMDADATE,EMDATIME,EMDAWUID,EMDARECD: 
                        EMDACOMM,EMDASPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMDA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    EMRDLAA1;EMDAADMN,EMDADATE,EMDATIME,EMDAWUID,EMDARECD:      
                        EMDACOMM,EMDASPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMDA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    EMRDLAA1;EMDAADMN,EMDADATE,EMDATIME,EMDAWUID,EMDARECD:      
                        EMDACOMM,EMDASPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMDA1                                                                         
          UPDATE    EMRDLAA1;EMDAADMN,EMDADATE,EMDATIME,EMDAWUID,EMDARECD:      
                        EMDACOMM,EMDASPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMDA1   RESET     KEY8                                                        
          WRITE     EMRDLAA1,KEY8;EMDAADMN,EMDADATE,EMDATIME,EMDAWUID,EMDARECD: 
                        EMDACOMM,EMDASPAR                                       
          RETURN
.
DEEMDA1   RESET     KEY8                                                        
          DELETE    EMRDLAA1,KEY8                                               
          RETURN
.
RLEMDA1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     EMRDLAA1,KEY8;EMDAADMN,EMDADATE,EMDATIME,EMDAWUID,EMDARECD: 
                        EMDACOMM,EMDASPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMDA1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   EMRDLAA1;EMDAADMN,EMDADATE,EMDATIME,EMDAWUID,EMDARECD:      
                        EMDACOMM,EMDASPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMDA1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   EMRDLAA1;EMDAADMN,EMDADATE,EMDATIME,EMDAWUID,EMDARECD:      
                        EMDACOMM,EMDASPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMDA1   RESET     KEY8                                                        
          UNLOCK    EMRDLAA1                                                    
          RETURN
.
RSEMDA2   RESET     KEY21
          READ      EMRDLAA2,KEY21;;
          RETURN
.
RAEMDA2   RESET     KEY21
          MOVE      ZERO,OVRCD
          READ      EMRDLAA2,KEY21;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMDA2   RESET     KEY21
          MOVE      ZERO,OVRCD
          READ      EMRDLAA2,KEY21;EMDAADMN,EMDADATE,EMDATIME,EMDAWUID,EMDARECD:
                        EMDACOMM,EMDASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMDA2   MOVE      ZERO,OVRCD
          READKS    EMRDLAA2;EMDAADMN,EMDADATE,EMDATIME,EMDAWUID,EMDARECD:
                        EMDACOMM,EMDASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMDA2   MOVE      ZERO,OVRCD
          READKP    EMRDLAA2;EMDAADMN,EMDADATE,EMDATIME,EMDAWUID,EMDARECD:
                        EMDACOMM,EMDASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMDA2   UPDATE    EMRDLAA2;EMDAADMN,EMDADATE,EMDATIME,EMDAWUID,EMDARECD:
                        EMDACOMM,EMDASPAR
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMDA2   RESET     KEY21
          WRITE     EMRDLAA2,KEY21;EMDAADMN,EMDADATE,EMDATIME,EMDAWUID,EMDARECD:
                        EMDACOMM,EMDASPAR
          RETURN
.
DEEMDA2   RESET     KEY21
          DELETE    EMRDLAA2,KEY21
          RETURN
