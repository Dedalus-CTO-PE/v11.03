.
. OUTVACIO    
. --------
. Filename     : outvacaf.dat
.
RSOTVAC1  RESET     KEY11                                                       
          READ      OUTVACA1,KEY11;;                                            
          RETURN
.
RAOTVAC1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OUTVACA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTVAC1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OUTVACA1,KEY11;OTVACODE,OTVADATE,OTVAWGHT,OTVAAMNT,OTVASPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTVAC1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OUTVACA1;OTVACODE,OTVADATE,OTVAWGHT,OTVAAMNT,OTVASPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTVAC1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OUTVACA1;OTVACODE,OTVADATE,OTVAWGHT,OTVAAMNT,OTVASPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTVAC1                                                                        
          UPDATE    OUTVACA1;OTVACODE,OTVADATE,OTVAWGHT,OTVAAMNT,OTVASPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTVAC1  RESET     KEY11                                                       
          WRITE     OUTVACA1,KEY11;OTVACODE,OTVADATE,OTVAWGHT,OTVAAMNT,OTVASPAR 
          RETURN
.
DEOTVAC1  RESET     KEY11                                                       
          DELETE    OUTVACA1,KEY11                                              
          RETURN
.
RLOTVAC1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READL     OUTVACA1,KEY11;OTVACODE,OTVADATE,OTVAWGHT,OTVAAMNT,OTVASPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOTVAC1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   OUTVACA1;OTVACODE,OTVADATE,OTVAWGHT,OTVAAMNT,OTVASPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOTVAC1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   OUTVACA1;OTVACODE,OTVADATE,OTVAWGHT,OTVAAMNT,OTVASPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOTVAC1  RESET     KEY11                                                       
          UNLOCK    OUTVACA1                                                    
          RETURN
.
RSOTVAC2  RESET     KEY11                                                       
          READ      OUTVACA2,KEY11;;                                            
          RETURN
.
RAOTVAC2  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OUTVACA2,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTVAC2  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OUTVACA2,KEY11;OTVACODE,OTVADATE,OTVAWGHT,OTVAAMNT,OTVASPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTVAC2                                                                        
          MOVE      ZERO,OVRCD
          READKS    OUTVACA2;OTVACODE,OTVADATE,OTVAWGHT,OTVAAMNT,OTVASPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTVAC2                                                                        
          MOVE      ZERO,OVRCD
          READKP    OUTVACA2;OTVACODE,OTVADATE,OTVAWGHT,OTVAAMNT,OTVASPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTVAC2                                                                        
          UPDATE    OUTVACA2;OTVACODE,OTVADATE,OTVAWGHT,OTVAAMNT,OTVASPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTVAC2  RESET     KEY11                                                       
          WRITE     OUTVACA2,KEY11;OTVACODE,OTVADATE,OTVAWGHT,OTVAAMNT,OTVASPAR 
          RETURN
.
DEOTVAC2  RESET     KEY11                                                       
          DELETE    OUTVACA2,KEY11                                              
          RETURN
.
RLOTVAC2  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READL     OUTVACA2,KEY11;OTVACODE,OTVADATE,OTVAWGHT,OTVAAMNT,OTVASPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOTVAC2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   OUTVACA2;OTVACODE,OTVADATE,OTVAWGHT,OTVAAMNT,OTVASPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOTVAC2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   OUTVACA2;OTVACODE,OTVADATE,OTVAWGHT,OTVAAMNT,OTVASPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOTVAC2  RESET     KEY11                                                       
          UNLOCK    OUTVACA2                                                    
          RETURN
.
