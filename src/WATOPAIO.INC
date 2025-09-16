.
. WATOPAIO    
. --------
. Filename     : watopaaf.dat
.
RSWTOPA1  RESET     KEY27                                                       
          READ      WATOPAA1,KEY27;;                                            
          RETURN
.
RAWTOPA1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      WATOPAA1,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTOPA1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      WATOPAA1,KEY27;WTOPURNO,WTOPCODE,WTOPCOUN,WTOPSITE,WTOPCLIN:
                        WTOPDATE,WTOPSTRT,WTOPSLOT,WTOPOUTN,WTOPOSTA,WTOPPDAT:  
                        WTOPPTIM,WTOPSTAT,WTOPCDAT,WTOPCTIM,WTOPCUID,WTOPUDAT:  
                        WTOPUTIM,WTOPUUID,WTOPSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTOPA1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATOPAA1;WTOPURNO,WTOPCODE,WTOPCOUN,WTOPSITE,WTOPCLIN:      
                        WTOPDATE,WTOPSTRT,WTOPSLOT,WTOPOUTN,WTOPOSTA,WTOPPDAT:  
                        WTOPPTIM,WTOPSTAT,WTOPCDAT,WTOPCTIM,WTOPCUID,WTOPUDAT:  
                        WTOPUTIM,WTOPUUID,WTOPSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTOPA1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATOPAA1;WTOPURNO,WTOPCODE,WTOPCOUN,WTOPSITE,WTOPCLIN:      
                        WTOPDATE,WTOPSTRT,WTOPSLOT,WTOPOUTN,WTOPOSTA,WTOPPDAT:  
                        WTOPPTIM,WTOPSTAT,WTOPCDAT,WTOPCTIM,WTOPCUID,WTOPUDAT:  
                        WTOPUTIM,WTOPUUID,WTOPSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTOPA1                                                                        
          UPDATE    WATOPAA1;WTOPURNO,WTOPCODE,WTOPCOUN,WTOPSITE,WTOPCLIN:      
                        WTOPDATE,WTOPSTRT,WTOPSLOT,WTOPOUTN,WTOPOSTA,WTOPPDAT:  
                        WTOPPTIM,WTOPSTAT,WTOPCDAT,WTOPCTIM,WTOPCUID,WTOPUDAT:  
                        WTOPUTIM,WTOPUUID,WTOPSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTOPA1  RESET     KEY27                                                       
          WRITE     WATOPAA1,KEY27;WTOPURNO,WTOPCODE,WTOPCOUN,WTOPSITE,WTOPCLIN:
                        WTOPDATE,WTOPSTRT,WTOPSLOT,WTOPOUTN,WTOPOSTA,WTOPPDAT:  
                        WTOPPTIM,WTOPSTAT,WTOPCDAT,WTOPCTIM,WTOPCUID,WTOPUDAT:  
                        WTOPUTIM,WTOPUUID,WTOPSPAR                              
          RETURN
.
DEWTOPA1  RESET     KEY27                                                       
          DELETE    WATOPAA1,KEY27                                              
          RETURN
.
RLWTOPA1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READL     WATOPAA1,KEY27;WTOPURNO,WTOPCODE,WTOPCOUN,WTOPSITE,WTOPCLIN:
                        WTOPDATE,WTOPSTRT,WTOPSLOT,WTOPOUTN,WTOPOSTA,WTOPPDAT:  
                        WTOPPTIM,WTOPSTAT,WTOPCDAT,WTOPCTIM,WTOPCUID,WTOPUDAT:  
                        WTOPUTIM,WTOPUUID,WTOPSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTOPA1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WATOPAA1;WTOPURNO,WTOPCODE,WTOPCOUN,WTOPSITE,WTOPCLIN:      
                        WTOPDATE,WTOPSTRT,WTOPSLOT,WTOPOUTN,WTOPOSTA,WTOPPDAT:  
                        WTOPPTIM,WTOPSTAT,WTOPCDAT,WTOPCTIM,WTOPCUID,WTOPUDAT:  
                        WTOPUTIM,WTOPUUID,WTOPSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTOPA1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WATOPAA1;WTOPURNO,WTOPCODE,WTOPCOUN,WTOPSITE,WTOPCLIN:      
                        WTOPDATE,WTOPSTRT,WTOPSLOT,WTOPOUTN,WTOPOSTA,WTOPPDAT:  
                        WTOPPTIM,WTOPSTAT,WTOPCDAT,WTOPCTIM,WTOPCUID,WTOPUDAT:  
                        WTOPUTIM,WTOPUUID,WTOPSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTOPA1  RESET     KEY27                                                       
          UNLOCK    WATOPAA1                                                    
          RETURN
.
RSWTOPA2  RESET     KEY8                                                        
          READ      WATOPAA2,KEY8;;                                             
          RETURN
.
RAWTOPA2  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      WATOPAA2,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTOPA2  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      WATOPAA2,KEY8;WTOPURNO,WTOPCODE,WTOPCOUN,WTOPSITE,WTOPCLIN: 
                        WTOPDATE,WTOPSTRT,WTOPSLOT,WTOPOUTN,WTOPOSTA,WTOPPDAT:  
                        WTOPPTIM,WTOPSTAT,WTOPCDAT,WTOPCTIM,WTOPCUID,WTOPUDAT:  
                        WTOPUTIM,WTOPUUID,WTOPSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTOPA2                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATOPAA2;WTOPURNO,WTOPCODE,WTOPCOUN,WTOPSITE,WTOPCLIN:      
                        WTOPDATE,WTOPSTRT,WTOPSLOT,WTOPOUTN,WTOPOSTA,WTOPPDAT:  
                        WTOPPTIM,WTOPSTAT,WTOPCDAT,WTOPCTIM,WTOPCUID,WTOPUDAT:  
                        WTOPUTIM,WTOPUUID,WTOPSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTOPA2                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATOPAA2;WTOPURNO,WTOPCODE,WTOPCOUN,WTOPSITE,WTOPCLIN:      
                        WTOPDATE,WTOPSTRT,WTOPSLOT,WTOPOUTN,WTOPOSTA,WTOPPDAT:  
                        WTOPPTIM,WTOPSTAT,WTOPCDAT,WTOPCTIM,WTOPCUID,WTOPUDAT:  
                        WTOPUTIM,WTOPUUID,WTOPSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTOPA2                                                                        
          UPDATE    WATOPAA2;WTOPURNO,WTOPCODE,WTOPCOUN,WTOPSITE,WTOPCLIN:      
                        WTOPDATE,WTOPSTRT,WTOPSLOT,WTOPOUTN,WTOPOSTA,WTOPPDAT:  
                        WTOPPTIM,WTOPSTAT,WTOPCDAT,WTOPCTIM,WTOPCUID,WTOPUDAT:  
                        WTOPUTIM,WTOPUUID,WTOPSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTOPA2  RESET     KEY8                                                        
          WRITE     WATOPAA2,KEY8;WTOPURNO,WTOPCODE,WTOPCOUN,WTOPSITE,WTOPCLIN: 
                        WTOPDATE,WTOPSTRT,WTOPSLOT,WTOPOUTN,WTOPOSTA,WTOPPDAT:  
                        WTOPPTIM,WTOPSTAT,WTOPCDAT,WTOPCTIM,WTOPCUID,WTOPUDAT:  
                        WTOPUTIM,WTOPUUID,WTOPSPAR                              
          RETURN
.
DEWTOPA2  RESET     KEY8                                                        
          DELETE    WATOPAA2,KEY8                                               
          RETURN
.
RLWTOPA2  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     WATOPAA2,KEY8;WTOPURNO,WTOPCODE,WTOPCOUN,WTOPSITE,WTOPCLIN: 
                        WTOPDATE,WTOPSTRT,WTOPSLOT,WTOPOUTN,WTOPOSTA,WTOPPDAT:  
                        WTOPPTIM,WTOPSTAT,WTOPCDAT,WTOPCTIM,WTOPCUID,WTOPUDAT:  
                        WTOPUTIM,WTOPUUID,WTOPSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTOPA2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WATOPAA2;WTOPURNO,WTOPCODE,WTOPCOUN,WTOPSITE,WTOPCLIN:      
                        WTOPDATE,WTOPSTRT,WTOPSLOT,WTOPOUTN,WTOPOSTA,WTOPPDAT:  
                        WTOPPTIM,WTOPSTAT,WTOPCDAT,WTOPCTIM,WTOPCUID,WTOPUDAT:  
                        WTOPUTIM,WTOPUUID,WTOPSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTOPA2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WATOPAA2;WTOPURNO,WTOPCODE,WTOPCOUN,WTOPSITE,WTOPCLIN:      
                        WTOPDATE,WTOPSTRT,WTOPSLOT,WTOPOUTN,WTOPOSTA,WTOPPDAT:  
                        WTOPPTIM,WTOPSTAT,WTOPCDAT,WTOPCTIM,WTOPCUID,WTOPUDAT:  
                        WTOPUTIM,WTOPUUID,WTOPSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTOPA2  RESET     KEY8                                                        
          UNLOCK    WATOPAA2                                                    
          RETURN
.
