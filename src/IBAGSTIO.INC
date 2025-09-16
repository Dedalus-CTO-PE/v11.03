.
. IBAGSTIO    
. --------
. Filename     : ibagstaf.dat
.
RSIBGS1   RESET     KEY6                                                        
          READ      IBAGSTA1,KEY6;;                                             
          RETURN
.
RAIBGS1   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      IBAGSTA1,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBGS1   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      IBAGSTA1,KEY6;IBGSCODE,IBGSDESC,IBGSACTV,IBGSBASC,IBGSSPAR  
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBGS1                                                                         
          MOVE      ZERO,OVRCD
          READKS    IBAGSTA1;IBGSCODE,IBGSDESC,IBGSACTV,IBGSBASC,IBGSSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBGS1                                                                         
          MOVE      ZERO,OVRCD
          READKP    IBAGSTA1;IBGSCODE,IBGSDESC,IBGSACTV,IBGSBASC,IBGSSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBGS1                                                                         
          UPDATE    IBAGSTA1;IBGSCODE,IBGSDESC,IBGSACTV,IBGSBASC,IBGSSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBGS1   RESET     KEY6                                                        
          WRITE     IBAGSTA1,KEY6;IBGSCODE,IBGSDESC,IBGSACTV,IBGSBASC,IBGSSPAR  
          RETURN
.
DEIBGS1   RESET     KEY6                                                        
          DELETE    IBAGSTA1,KEY6                                               
          RETURN
.
RLIBGS1   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READL     IBAGSTA1,KEY6;IBGSCODE,IBGSDESC,IBGSACTV,IBGSBASC,IBGSSPAR  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLIBGS1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   IBAGSTA1;IBGSCODE,IBGSDESC,IBGSACTV,IBGSBASC,IBGSSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLIBGS1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   IBAGSTA1;IBGSCODE,IBGSDESC,IBGSACTV,IBGSBASC,IBGSSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUIBGS1   RESET     KEY6                                                        
          UNLOCK    IBAGSTA1                                                    
          RETURN
.
RSIBGS2   RESET     KEY36                                                       
          READ      IBAGSTA2,KEY36;;                                            
          RETURN
.
RAIBGS2   RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      IBAGSTA2,KEY36;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBGS2   RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      IBAGSTA2,KEY36;IBGSCODE,IBGSDESC,IBGSACTV,IBGSBASC,IBGSSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBGS2                                                                         
          MOVE      ZERO,OVRCD
          READKS    IBAGSTA2;IBGSCODE,IBGSDESC,IBGSACTV,IBGSBASC,IBGSSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBGS2                                                                         
          MOVE      ZERO,OVRCD
          READKP    IBAGSTA2;IBGSCODE,IBGSDESC,IBGSACTV,IBGSBASC,IBGSSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBGS2                                                                         
          UPDATE    IBAGSTA2;IBGSCODE,IBGSDESC,IBGSACTV,IBGSBASC,IBGSSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBGS2   RESET     KEY36                                                       
          WRITE     IBAGSTA2,KEY36;IBGSCODE,IBGSDESC,IBGSACTV,IBGSBASC,IBGSSPAR 
          RETURN
.
DEIBGS2   RESET     KEY36                                                       
          DELETE    IBAGSTA2,KEY36                                              
          RETURN
.
RLIBGS2   RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READL     IBAGSTA2,KEY36;IBGSCODE,IBGSDESC,IBGSACTV,IBGSBASC,IBGSSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLIBGS2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   IBAGSTA2;IBGSCODE,IBGSDESC,IBGSACTV,IBGSBASC,IBGSSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLIBGS2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   IBAGSTA2;IBGSCODE,IBGSDESC,IBGSACTV,IBGSBASC,IBGSSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUIBGS2   RESET     KEY36                                                       
          UNLOCK    IBAGSTA2                                                    
          RETURN
.
RSIBGS3   RESET     KEY9                                                        
          READ      IBAGSTA3,KEY9;;                                             
          RETURN
.
RAIBGS3   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      IBAGSTA3,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBGS3   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      IBAGSTA3,KEY9;IBGSCODE,IBGSDESC,IBGSACTV,IBGSBASC,IBGSSPAR  
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBGS3                                                                         
          MOVE      ZERO,OVRCD
          READKS    IBAGSTA3;IBGSCODE,IBGSDESC,IBGSACTV,IBGSBASC,IBGSSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBGS3                                                                         
          MOVE      ZERO,OVRCD
          READKP    IBAGSTA3;IBGSCODE,IBGSDESC,IBGSACTV,IBGSBASC,IBGSSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBGS3                                                                         
          UPDATE    IBAGSTA3;IBGSCODE,IBGSDESC,IBGSACTV,IBGSBASC,IBGSSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBGS3   RESET     KEY9                                                        
          WRITE     IBAGSTA3,KEY9;IBGSCODE,IBGSDESC,IBGSACTV,IBGSBASC,IBGSSPAR  
          RETURN
.
DEIBGS3   RESET     KEY9                                                        
          DELETE    IBAGSTA3,KEY9                                               
          RETURN
.
RLIBGS3   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READL     IBAGSTA3,KEY9;IBGSCODE,IBGSDESC,IBGSACTV,IBGSBASC,IBGSSPAR  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLIBGS3                                                                         
          MOVE      ZERO,OVRCD
          READLKS   IBAGSTA3;IBGSCODE,IBGSDESC,IBGSACTV,IBGSBASC,IBGSSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLIBGS3                                                                         
          MOVE      ZERO,OVRCD
          READLKP   IBAGSTA3;IBGSCODE,IBGSDESC,IBGSACTV,IBGSBASC,IBGSSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUIBGS3   RESET     KEY9                                                        
          UNLOCK    IBAGSTA3                                                    
          RETURN
.
