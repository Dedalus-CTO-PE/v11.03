.
. PMSMORIO    
. --------
. Filename     : pmsmoraf.dat
.
RSPMMOR1  RESET     KEY8                                                        
          READ      PMSMORA1,KEY8;;                                             
          RETURN
.
RAPMMOR1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSMORA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMMOR1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSMORA1,KEY8;PMMRURNO,PMMRADMN,PMMRARDT,PMMRARTM,PMMRLOCA: 
                        PMMRECBY,PMMRECDT,PMMRECTM,PMMRECCM,PMMRACBY,PMMRACDT:  
                        PMMRACTM,PMMRACCM,PMMRHOSP,PMMRSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMMOR1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSMORA1;PMMRURNO,PMMRADMN,PMMRARDT,PMMRARTM,PMMRLOCA:      
                        PMMRECBY,PMMRECDT,PMMRECTM,PMMRECCM,PMMRACBY,PMMRACDT:  
                        PMMRACTM,PMMRACCM,PMMRHOSP,PMMRSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMMOR1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSMORA1;PMMRURNO,PMMRADMN,PMMRARDT,PMMRARTM,PMMRLOCA:      
                        PMMRECBY,PMMRECDT,PMMRECTM,PMMRECCM,PMMRACBY,PMMRACDT:  
                        PMMRACTM,PMMRACCM,PMMRHOSP,PMMRSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMMOR1                                                                        
          UPDATE    PMSMORA1;PMMRURNO,PMMRADMN,PMMRARDT,PMMRARTM,PMMRLOCA:      
                        PMMRECBY,PMMRECDT,PMMRECTM,PMMRECCM,PMMRACBY,PMMRACDT:  
                        PMMRACTM,PMMRACCM,PMMRHOSP,PMMRSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMMOR1  RESET     KEY8                                                        
          WRITE     PMSMORA1,KEY8;PMMRURNO,PMMRADMN,PMMRARDT,PMMRARTM,PMMRLOCA: 
                        PMMRECBY,PMMRECDT,PMMRECTM,PMMRECCM,PMMRACBY,PMMRACDT:  
                        PMMRACTM,PMMRACCM,PMMRHOSP,PMMRSPAR                     
          RETURN
.
DEPMMOR1  RESET     KEY8                                                        
          DELETE    PMSMORA1,KEY8                                               
          RETURN
.
RLPMMOR1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     PMSMORA1,KEY8;PMMRURNO,PMMRADMN,PMMRARDT,PMMRARTM,PMMRLOCA: 
                        PMMRECBY,PMMRECDT,PMMRECTM,PMMRECCM,PMMRACBY,PMMRACDT:  
                        PMMRACTM,PMMRACCM,PMMRHOSP,PMMRSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMMOR1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSMORA1;PMMRURNO,PMMRADMN,PMMRARDT,PMMRARTM,PMMRLOCA:      
                        PMMRECBY,PMMRECDT,PMMRECTM,PMMRECCM,PMMRACBY,PMMRACDT:  
                        PMMRACTM,PMMRACCM,PMMRHOSP,PMMRSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMMOR1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSMORA1;PMMRURNO,PMMRADMN,PMMRARDT,PMMRARTM,PMMRLOCA:      
                        PMMRECBY,PMMRECDT,PMMRECTM,PMMRECCM,PMMRACBY,PMMRACDT:  
                        PMMRACTM,PMMRACCM,PMMRHOSP,PMMRSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMMOR1  RESET     KEY8                                                        
          UNLOCK    PMSMORA1                                                    
          RETURN
.
RSPMMOR2  RESET     KEY24                                                       
          READ      PMSMORA2,KEY24;;                                            
          RETURN
.
RAPMMOR2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMORA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMMOR2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMORA2,KEY24;PMMRURNO,PMMRADMN,PMMRARDT,PMMRARTM,PMMRLOCA:
                        PMMRECBY,PMMRECDT,PMMRECTM,PMMRECCM,PMMRACBY,PMMRACDT:  
                        PMMRACTM,PMMRACCM,PMMRHOSP,PMMRSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMMOR2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSMORA2;PMMRURNO,PMMRADMN,PMMRARDT,PMMRARTM,PMMRLOCA:      
                        PMMRECBY,PMMRECDT,PMMRECTM,PMMRECCM,PMMRACBY,PMMRACDT:  
                        PMMRACTM,PMMRACCM,PMMRHOSP,PMMRSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMMOR2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSMORA2;PMMRURNO,PMMRADMN,PMMRARDT,PMMRARTM,PMMRLOCA:      
                        PMMRECBY,PMMRECDT,PMMRECTM,PMMRECCM,PMMRACBY,PMMRACDT:  
                        PMMRACTM,PMMRACCM,PMMRHOSP,PMMRSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMMOR2                                                                        
          UPDATE    PMSMORA2;PMMRURNO,PMMRADMN,PMMRARDT,PMMRARTM,PMMRLOCA:      
                        PMMRECBY,PMMRECDT,PMMRECTM,PMMRECCM,PMMRACBY,PMMRACDT:  
                        PMMRACTM,PMMRACCM,PMMRHOSP,PMMRSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMMOR2  RESET     KEY24                                                       
          WRITE     PMSMORA2,KEY24;PMMRURNO,PMMRADMN,PMMRARDT,PMMRARTM,PMMRLOCA:
                        PMMRECBY,PMMRECDT,PMMRECTM,PMMRECCM,PMMRACBY,PMMRACDT:  
                        PMMRACTM,PMMRACCM,PMMRHOSP,PMMRSPAR                     
          RETURN
.
DEPMMOR2  RESET     KEY24                                                       
          DELETE    PMSMORA2,KEY24                                              
          RETURN
.
RLPMMOR2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     PMSMORA2,KEY24;PMMRURNO,PMMRADMN,PMMRARDT,PMMRARTM,PMMRLOCA:
                        PMMRECBY,PMMRECDT,PMMRECTM,PMMRECCM,PMMRACBY,PMMRACDT:  
                        PMMRACTM,PMMRACCM,PMMRHOSP,PMMRSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMMOR2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSMORA2;PMMRURNO,PMMRADMN,PMMRARDT,PMMRARTM,PMMRLOCA:      
                        PMMRECBY,PMMRECDT,PMMRECTM,PMMRECCM,PMMRACBY,PMMRACDT:  
                        PMMRACTM,PMMRACCM,PMMRHOSP,PMMRSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMMOR2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSMORA2;PMMRURNO,PMMRADMN,PMMRARDT,PMMRARTM,PMMRLOCA:      
                        PMMRECBY,PMMRECDT,PMMRECTM,PMMRECCM,PMMRACBY,PMMRACDT:  
                        PMMRACTM,PMMRACCM,PMMRHOSP,PMMRSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMMOR2  RESET     KEY24                                                       
          UNLOCK    PMSMORA2                                                    
          RETURN
.
