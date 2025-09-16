.
. SINCIHIO    
. --------
. Filename     : sincihaf.dat
.
RSSIIH1   RESET     KEY18                                                       
          READ      SINCIHA1,KEY18;;                                            
          RETURN
.
RASIIH1   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      SINCIHA1,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIIH1   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      SINCIHA1,KEY18;SIIHCAT,SIIHWAR,SIIHDAT,SIIHUQT,SIIHUAM:     
                        SIIHPQT,SIIHPAM,SIIHRQT,SIIHRAM,SIIHSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIIH1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCIHA1;SIIHCAT,SIIHWAR,SIIHDAT,SIIHUQT,SIIHUAM:           
                        SIIHPQT,SIIHPAM,SIIHRQT,SIIHRAM,SIIHSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIIH1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCIHA1;SIIHCAT,SIIHWAR,SIIHDAT,SIIHUQT,SIIHUAM:           
                        SIIHPQT,SIIHPAM,SIIHRQT,SIIHRAM,SIIHSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIIH1                                                                         
          UPDATE    SINCIHA1;SIIHCAT,SIIHWAR,SIIHDAT,SIIHUQT,SIIHUAM:           
                        SIIHPQT,SIIHPAM,SIIHRQT,SIIHRAM,SIIHSPA                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIIH1   RESET     KEY18                                                       
          WRITE     SINCIHA1,KEY18;SIIHCAT,SIIHWAR,SIIHDAT,SIIHUQT,SIIHUAM:     
                        SIIHPQT,SIIHPAM,SIIHRQT,SIIHRAM,SIIHSPA                 
          RETURN
.
DESIIH1   RESET     KEY18                                                       
          DELETE    SINCIHA1,KEY18                                              
          RETURN
.
RLSIIH1   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READL     SINCIHA1,KEY18;SIIHCAT,SIIHWAR,SIIHDAT,SIIHUQT,SIIHUAM:     
                        SIIHPQT,SIIHPAM,SIIHRQT,SIIHRAM,SIIHSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIIH1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINCIHA1;SIIHCAT,SIIHWAR,SIIHDAT,SIIHUQT,SIIHUAM:           
                        SIIHPQT,SIIHPAM,SIIHRQT,SIIHRAM,SIIHSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIIH1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINCIHA1;SIIHCAT,SIIHWAR,SIIHDAT,SIIHUQT,SIIHUAM:           
                        SIIHPQT,SIIHPAM,SIIHRQT,SIIHRAM,SIIHSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIIH1   RESET     KEY18                                                       
          UNLOCK    SINCIHA1                                                    
          RETURN
.
RSSIIH2   RESET     KEY18                                                       
          READ      SINCIHA2,KEY18;;                                            
          RETURN
.
RASIIH2   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      SINCIHA2,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIIH2   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      SINCIHA2,KEY18;SIIHCAT,SIIHWAR,SIIHDAT,SIIHUQT,SIIHUAM:     
                        SIIHPQT,SIIHPAM,SIIHRQT,SIIHRAM,SIIHSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIIH2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCIHA2;SIIHCAT,SIIHWAR,SIIHDAT,SIIHUQT,SIIHUAM:           
                        SIIHPQT,SIIHPAM,SIIHRQT,SIIHRAM,SIIHSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIIH2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCIHA2;SIIHCAT,SIIHWAR,SIIHDAT,SIIHUQT,SIIHUAM:           
                        SIIHPQT,SIIHPAM,SIIHRQT,SIIHRAM,SIIHSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIIH2                                                                         
          UPDATE    SINCIHA2;SIIHCAT,SIIHWAR,SIIHDAT,SIIHUQT,SIIHUAM:           
                        SIIHPQT,SIIHPAM,SIIHRQT,SIIHRAM,SIIHSPA                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIIH2   RESET     KEY18                                                       
          WRITE     SINCIHA2,KEY18;SIIHCAT,SIIHWAR,SIIHDAT,SIIHUQT,SIIHUAM:     
                        SIIHPQT,SIIHPAM,SIIHRQT,SIIHRAM,SIIHSPA                 
          RETURN
.
DESIIH2   RESET     KEY18                                                       
          DELETE    SINCIHA2,KEY18                                              
          RETURN
.
RLSIIH2   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READL     SINCIHA2,KEY18;SIIHCAT,SIIHWAR,SIIHDAT,SIIHUQT,SIIHUAM:     
                        SIIHPQT,SIIHPAM,SIIHRQT,SIIHRAM,SIIHSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIIH2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINCIHA2;SIIHCAT,SIIHWAR,SIIHDAT,SIIHUQT,SIIHUAM:           
                        SIIHPQT,SIIHPAM,SIIHRQT,SIIHRAM,SIIHSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIIH2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINCIHA2;SIIHCAT,SIIHWAR,SIIHDAT,SIIHUQT,SIIHUAM:           
                        SIIHPQT,SIIHPAM,SIIHRQT,SIIHRAM,SIIHSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIIH2   RESET     KEY18                                                       
          UNLOCK    SINCIHA2                                                    
          RETURN
.
