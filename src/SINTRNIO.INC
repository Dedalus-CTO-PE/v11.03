.
. SINTRNIO    
. --------
. Filename     : sintrnaf.dat
.
RSSITR1   RESET     KEY7                                                        
          READ      SINTRNA1,KEY7;;                                             
          RETURN
.
RASITR1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      SINTRNA1,KEY7;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSITR1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      SINTRNA1,KEY7;SITRPURC,SITRSTAT,SITRUSER,SITRCREA,SITRORG:  
                        SITREDAT,SITRTDAT,SITRTNUM,SITRSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSITR1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINTRNA1;SITRPURC,SITRSTAT,SITRUSER,SITRCREA,SITRORG:       
                        SITREDAT,SITRTDAT,SITRTNUM,SITRSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSITR1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINTRNA1;SITRPURC,SITRSTAT,SITRUSER,SITRCREA,SITRORG:       
                        SITREDAT,SITRTDAT,SITRTNUM,SITRSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSITR1                                                                         
          UPDATE    SINTRNA1;SITRPURC,SITRSTAT,SITRUSER,SITRCREA,SITRORG:       
                        SITREDAT,SITRTDAT,SITRTNUM,SITRSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSITR1   RESET     KEY7                                                        
          WRITE     SINTRNA1,KEY7;SITRPURC,SITRSTAT,SITRUSER,SITRCREA,SITRORG:  
                        SITREDAT,SITRTDAT,SITRTNUM,SITRSPAR                     
          RETURN
.
DESITR1   RESET     KEY7                                                        
          DELETE    SINTRNA1,KEY7                                               
          RETURN
.
RLSITR1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READL     SINTRNA1,KEY7;SITRPURC,SITRSTAT,SITRUSER,SITRCREA,SITRORG:  
                        SITREDAT,SITRTDAT,SITRTNUM,SITRSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSITR1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINTRNA1;SITRPURC,SITRSTAT,SITRUSER,SITRCREA,SITRORG:       
                        SITREDAT,SITRTDAT,SITRTNUM,SITRSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSITR1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINTRNA1;SITRPURC,SITRSTAT,SITRUSER,SITRCREA,SITRORG:       
                        SITREDAT,SITRTDAT,SITRTNUM,SITRSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSITR1   RESET     KEY7                                                        
          UNLOCK    SINTRNA1                                                    
          RETURN
.
RSSITR2   RESET     KEY8                                                        
          READ      SINTRNA2,KEY8;;                                             
          RETURN
.
RASITR2   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      SINTRNA2,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSITR2   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      SINTRNA2,KEY8;SITRPURC,SITRSTAT,SITRUSER,SITRCREA,SITRORG:  
                        SITREDAT,SITRTDAT,SITRTNUM,SITRSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSITR2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINTRNA2;SITRPURC,SITRSTAT,SITRUSER,SITRCREA,SITRORG:       
                        SITREDAT,SITRTDAT,SITRTNUM,SITRSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSITR2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINTRNA2;SITRPURC,SITRSTAT,SITRUSER,SITRCREA,SITRORG:       
                        SITREDAT,SITRTDAT,SITRTNUM,SITRSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSITR2                                                                         
          UPDATE    SINTRNA2;SITRPURC,SITRSTAT,SITRUSER,SITRCREA,SITRORG:       
                        SITREDAT,SITRTDAT,SITRTNUM,SITRSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSITR2   RESET     KEY8                                                        
          WRITE     SINTRNA2,KEY8;SITRPURC,SITRSTAT,SITRUSER,SITRCREA,SITRORG:  
                        SITREDAT,SITRTDAT,SITRTNUM,SITRSPAR                     
          RETURN
.
DESITR2   RESET     KEY8                                                        
          DELETE    SINTRNA2,KEY8                                               
          RETURN
.
RLSITR2   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     SINTRNA2,KEY8;SITRPURC,SITRSTAT,SITRUSER,SITRCREA,SITRORG:  
                        SITREDAT,SITRTDAT,SITRTNUM,SITRSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSITR2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINTRNA2;SITRPURC,SITRSTAT,SITRUSER,SITRCREA,SITRORG:       
                        SITREDAT,SITRTDAT,SITRTNUM,SITRSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSITR2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINTRNA2;SITRPURC,SITRSTAT,SITRUSER,SITRCREA,SITRORG:       
                        SITREDAT,SITRTDAT,SITRTNUM,SITRSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSITR2   RESET     KEY8                                                        
          UNLOCK    SINTRNA2                                                    
          RETURN
.
