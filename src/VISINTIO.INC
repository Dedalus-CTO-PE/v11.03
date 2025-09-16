.
. VISINTIO    
. --------
. Filename     : visintaf.dat
.
RSVSINT1  RESET     KEY8                                                        
          READ      VISINTA1,KEY8;;                                             
          RETURN
.
RAVSINT1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      VISINTA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDVSINT1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      VISINTA1,KEY8;VSINVISN,VSINDATE,VSINTIME,VSINTYPE,VSINSUBK: 
                        VSINWUID,VSINNOTF,VSINUDC1,VSINUDC2,VSINUDC3,VSINUDC4:  
                        VSININTP,VSINCONF,VSINCHON,VSINSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKVSINT1                                                                        
          MOVE      ZERO,OVRCD
          READKS    VISINTA1;VSINVISN,VSINDATE,VSINTIME,VSINTYPE,VSINSUBK:      
                        VSINWUID,VSINNOTF,VSINUDC1,VSINUDC2,VSINUDC3,VSINUDC4:  
                        VSININTP,VSINCONF,VSINCHON,VSINSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPVSINT1                                                                        
          MOVE      ZERO,OVRCD
          READKP    VISINTA1;VSINVISN,VSINDATE,VSINTIME,VSINTYPE,VSINSUBK:      
                        VSINWUID,VSINNOTF,VSINUDC1,VSINUDC2,VSINUDC3,VSINUDC4:  
                        VSININTP,VSINCONF,VSINCHON,VSINSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPVSINT1                                                                        
          PACK      VSINSPAR,SP70
          UPDATE    VISINTA1;VSINVISN,VSINDATE,VSINTIME,VSINTYPE,VSINSUBK:      
                        VSINWUID,VSINNOTF,VSINUDC1,VSINUDC2,VSINUDC3,VSINUDC4:  
                        VSININTP,VSINCONF,VSINCHON,VSINSPAR
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRVSINT1  
          PACK      VSINSPAR,SP70
          RESET     KEY8                                                        
          WRITE     VISINTA1,KEY8;VSINVISN,VSINDATE,VSINTIME,VSINTYPE,VSINSUBK: 
                        VSINWUID,VSINNOTF,VSINUDC1,VSINUDC2,VSINUDC3,VSINUDC4:  
                        VSININTP,VSINCONF,VSINCHON,VSINSPAR
          RETURN
.
DEVSINT1  RESET     KEY8                                                        
          DELETE    VISINTA1,KEY8                                               
          RETURN
.
RLVSINT1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     VISINTA1,KEY8;VSINVISN,VSINDATE,VSINTIME,VSINTYPE,VSINSUBK: 
                        VSINWUID,VSINNOTF,VSINUDC1,VSINUDC2,VSINUDC3,VSINUDC4:  
                        VSININTP,VSINCONF,VSINCHON,VSINSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLVSINT1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   VISINTA1;VSINVISN,VSINDATE,VSINTIME,VSINTYPE,VSINSUBK:      
                        VSINWUID,VSINNOTF,VSINUDC1,VSINUDC2,VSINUDC3,VSINUDC4:  
                        VSININTP,VSINCONF,VSINCHON,VSINSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLVSINT1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   VISINTA1;VSINVISN,VSINDATE,VSINTIME,VSINTYPE,VSINSUBK:      
                        VSINWUID,VSINNOTF,VSINUDC1,VSINUDC2,VSINUDC3,VSINUDC4:  
                        VSININTP,VSINCONF,VSINCHON,VSINSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUVSINT1  RESET     KEY8                                                        
          UNLOCK    VISINTA1                                                    
          RETURN
.
RSVSINT2  RESET     KEY24                                                       
          READ      VISINTA2,KEY24;;                                            
          RETURN
.
RAVSINT2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      VISINTA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDVSINT2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      VISINTA2,KEY24;VSINVISN,VSINDATE,VSINTIME,VSINTYPE,VSINSUBK:
                        VSINWUID,VSINNOTF,VSINUDC1,VSINUDC2,VSINUDC3,VSINUDC4:  
                        VSININTP,VSINCONF,VSINCHON,VSINSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKVSINT2                                                                        
          MOVE      ZERO,OVRCD
          READKS    VISINTA2;VSINVISN,VSINDATE,VSINTIME,VSINTYPE,VSINSUBK:      
                        VSINWUID,VSINNOTF,VSINUDC1,VSINUDC2,VSINUDC3,VSINUDC4:  
                        VSININTP,VSINCONF,VSINCHON,VSINSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPVSINT2                                                                        
          MOVE      ZERO,OVRCD
          READKP    VISINTA2;VSINVISN,VSINDATE,VSINTIME,VSINTYPE,VSINSUBK:      
                        VSINWUID,VSINNOTF,VSINUDC1,VSINUDC2,VSINUDC3,VSINUDC4:  
                        VSININTP,VSINCONF,VSINCHON,VSINSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPVSINT2                                                                        
          PACK      VSINSPAR,SP70
          UPDATE    VISINTA2;VSINVISN,VSINDATE,VSINTIME,VSINTYPE,VSINSUBK:      
                        VSINWUID,VSINNOTF,VSINUDC1,VSINUDC2,VSINUDC3,VSINUDC4:  
                        VSININTP,VSINCONF,VSINCHON,VSINSPAR
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRVSINT2  
          PACK      VSINSPAR,SP70
          RESET     KEY24                                                       
          WRITE     VISINTA2,KEY24;VSINVISN,VSINDATE,VSINTIME,VSINTYPE,VSINSUBK:
                        VSINWUID,VSINNOTF,VSINUDC1,VSINUDC2,VSINUDC3,VSINUDC4:  
                        VSININTP,VSINCONF,VSINCHON,VSINSPAR
          RETURN
.
DEVSINT2  RESET     KEY24                                                       
          DELETE    VISINTA2,KEY24                                              
          RETURN
.
RLVSINT2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     VISINTA2,KEY24;VSINVISN,VSINDATE,VSINTIME,VSINTYPE,VSINSUBK:
                        VSINWUID,VSINNOTF,VSINUDC1,VSINUDC2,VSINUDC3,VSINUDC4:  
                        VSININTP,VSINCONF,VSINCHON,VSINSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLVSINT2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   VISINTA2;VSINVISN,VSINDATE,VSINTIME,VSINTYPE,VSINSUBK:      
                        VSINWUID,VSINNOTF,VSINUDC1,VSINUDC2,VSINUDC3,VSINUDC4:  
                        VSININTP,VSINCONF,VSINCHON,VSINSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLVSINT2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   VISINTA2;VSINVISN,VSINDATE,VSINTIME,VSINTYPE,VSINSUBK:      
                        VSINWUID,VSINNOTF,VSINUDC1,VSINUDC2,VSINUDC3,VSINUDC4:  
                        VSININTP,VSINCONF,VSINCHON,VSINSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUVSINT2  RESET     KEY24                                                       
          UNLOCK    VISINTA2                                                    
          RETURN
.
