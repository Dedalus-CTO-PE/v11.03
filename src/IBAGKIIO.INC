.
. IBAGKIIO    
. --------
. Filename     : ibagkiaf.dat
.
RSIBGK1   RESET     KEY21                                                       
          READ      IBAGKIA1,KEY21;;                                            
          RETURN
.
RAIBGK1   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      IBAGKIA1,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBGK1   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      IBAGKIA1,KEY21;IBGKGST,IBGKKWD,IBGKSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBGK1                                                                         
          MOVE      ZERO,OVRCD
          READKS    IBAGKIA1;IBGKGST,IBGKKWD,IBGKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBGK1                                                                         
          MOVE      ZERO,OVRCD
          READKP    IBAGKIA1;IBGKGST,IBGKKWD,IBGKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBGK1                                                                         
          UPDATE    IBAGKIA1;IBGKGST,IBGKKWD,IBGKSPA                            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBGK1   RESET     KEY21                                                       
          WRITE     IBAGKIA1,KEY21;IBGKGST,IBGKKWD,IBGKSPA                      
          RETURN
.
DEIBGK1   RESET     KEY21                                                       
          DELETE    IBAGKIA1,KEY21                                              
          RETURN
.
RLIBGK1   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READL     IBAGKIA1,KEY21;IBGKGST,IBGKKWD,IBGKSPA                      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLIBGK1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   IBAGKIA1;IBGKGST,IBGKKWD,IBGKSPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLIBGK1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   IBAGKIA1;IBGKGST,IBGKKWD,IBGKSPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUIBGK1   RESET     KEY21                                                       
          UNLOCK    IBAGKIA1                                                    
          RETURN
.
RSIBGK2   RESET     KEY21                                                       
          READ      IBAGKIA2,KEY21;;                                            
          RETURN
.
RAIBGK2   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      IBAGKIA2,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBGK2   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      IBAGKIA2,KEY21;IBGKGST,IBGKKWD,IBGKSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBGK2                                                                         
          MOVE      ZERO,OVRCD
          READKS    IBAGKIA2;IBGKGST,IBGKKWD,IBGKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBGK2                                                                         
          MOVE      ZERO,OVRCD
          READKP    IBAGKIA2;IBGKGST,IBGKKWD,IBGKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBGK2                                                                         
          UPDATE    IBAGKIA2;IBGKGST,IBGKKWD,IBGKSPA                            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBGK2   RESET     KEY21                                                       
          WRITE     IBAGKIA2,KEY21;IBGKGST,IBGKKWD,IBGKSPA                      
          RETURN
.
DEIBGK2   RESET     KEY21                                                       
          DELETE    IBAGKIA2,KEY21                                              
          RETURN
.
RLIBGK2   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READL     IBAGKIA2,KEY21;IBGKGST,IBGKKWD,IBGKSPA                      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLIBGK2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   IBAGKIA2;IBGKGST,IBGKKWD,IBGKSPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLIBGK2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   IBAGKIA2;IBGKGST,IBGKKWD,IBGKSPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUIBGK2   RESET     KEY21                                                       
          UNLOCK    IBAGKIA2                                                    
          RETURN
.
