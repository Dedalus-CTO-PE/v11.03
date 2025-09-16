.
. SINWSEIO    
. --------
. Filename     : sinwseaf.dat
.
RSSIWS1   RESET     KEY9                                                        
          READ      SINWSEA1,KEY9;;                                             
          RETURN
.
RASIWS1   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      SINWSEA1,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIWS1   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      SINWSEA1,KEY9;SIWSUID,SIWSWAR,SIWSLEV,SIWSSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIWS1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINWSEA1;SIWSUID,SIWSWAR,SIWSLEV,SIWSSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIWS1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINWSEA1;SIWSUID,SIWSWAR,SIWSLEV,SIWSSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIWS1                                                                         
          UPDATE    SINWSEA1;SIWSUID,SIWSWAR,SIWSLEV,SIWSSPA                    
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIWS1   RESET     KEY9                                                        
          WRITE     SINWSEA1,KEY9;SIWSUID,SIWSWAR,SIWSLEV,SIWSSPA               
          RETURN
.
DESIWS1   RESET     KEY9                                                        
          DELETE    SINWSEA1,KEY9                                               
          RETURN
.
RLSIWS1   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READL     SINWSEA1,KEY9;SIWSUID,SIWSWAR,SIWSLEV,SIWSSPA               
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIWS1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINWSEA1;SIWSUID,SIWSWAR,SIWSLEV,SIWSSPA                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIWS1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINWSEA1;SIWSUID,SIWSWAR,SIWSLEV,SIWSSPA                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIWS1   RESET     KEY9                                                        
          UNLOCK    SINWSEA1                                                    
          RETURN
.
RSSIWS2   RESET     KEY9                                                        
          READ      SINWSEA2,KEY9;;                                             
          RETURN
.
RASIWS2   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      SINWSEA2,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIWS2   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      SINWSEA2,KEY9;SIWSUID,SIWSWAR,SIWSLEV,SIWSSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIWS2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINWSEA2;SIWSUID,SIWSWAR,SIWSLEV,SIWSSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIWS2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINWSEA2;SIWSUID,SIWSWAR,SIWSLEV,SIWSSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIWS2                                                                         
          UPDATE    SINWSEA2;SIWSUID,SIWSWAR,SIWSLEV,SIWSSPA                    
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIWS2   RESET     KEY9                                                        
          WRITE     SINWSEA2,KEY9;SIWSUID,SIWSWAR,SIWSLEV,SIWSSPA               
          RETURN
.
DESIWS2   RESET     KEY9                                                        
          DELETE    SINWSEA2,KEY9                                               
          RETURN
.
RLSIWS2   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READL     SINWSEA2,KEY9;SIWSUID,SIWSWAR,SIWSLEV,SIWSSPA               
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIWS2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINWSEA2;SIWSUID,SIWSWAR,SIWSLEV,SIWSSPA                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIWS2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINWSEA2;SIWSUID,SIWSWAR,SIWSLEV,SIWSSPA                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIWS2   RESET     KEY9                                                        
          UNLOCK    SINWSEA2                                                    
          RETURN
.
