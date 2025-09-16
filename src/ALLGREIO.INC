.
. ALLGREIO    
. --------
. Filename     : allgreaf.dat
.
RSALGRE1  RESET     KEY8                                                        
          READ      ALLGREA1,KEY8;;                                             
          RETURN
.
RAALGRE1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      ALLGREA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALGRE1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      ALLGREA1,KEY8;ALGECONT,ALGESESN,ALGELOCN,ALGEGDTE,ALGEGTIM: 
                        ALGEDURN,ALGECDAT,ALGECTIM,ALGECUID,ALGEUDAT,ALGEUTIM:  
                        ALGEUUID,ALGESPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALGRE1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLGREA1;ALGECONT,ALGESESN,ALGELOCN,ALGEGDTE,ALGEGTIM:      
                        ALGEDURN,ALGECDAT,ALGECTIM,ALGECUID,ALGEUDAT,ALGEUTIM:  
                        ALGEUUID,ALGESPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALGRE1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLGREA1;ALGECONT,ALGESESN,ALGELOCN,ALGEGDTE,ALGEGTIM:      
                        ALGEDURN,ALGECDAT,ALGECTIM,ALGECUID,ALGEUDAT,ALGEUTIM:  
                        ALGEUUID,ALGESPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALGRE1                                                                        
          UPDATE    ALLGREA1;ALGECONT,ALGESESN,ALGELOCN,ALGEGDTE,ALGEGTIM:      
                        ALGEDURN,ALGECDAT,ALGECTIM,ALGECUID,ALGEUDAT,ALGEUTIM:  
                        ALGEUUID,ALGESPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALGRE1  RESET     KEY8                                                        
          WRITE     ALLGREA1,KEY8;ALGECONT,ALGESESN,ALGELOCN,ALGEGDTE,ALGEGTIM: 
                        ALGEDURN,ALGECDAT,ALGECTIM,ALGECUID,ALGEUDAT,ALGEUTIM:  
                        ALGEUUID,ALGESPAR                                       
          RETURN
.
DEALGRE1  RESET     KEY8                                                        
          DELETE    ALLGREA1,KEY8                                               
          RETURN
.
RLALGRE1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     ALLGREA1,KEY8;ALGECONT,ALGESESN,ALGELOCN,ALGEGDTE,ALGEGTIM: 
                        ALGEDURN,ALGECDAT,ALGECTIM,ALGECUID,ALGEUDAT,ALGEUTIM:  
                        ALGEUUID,ALGESPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALGRE1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLGREA1;ALGECONT,ALGESESN,ALGELOCN,ALGEGDTE,ALGEGTIM:      
                        ALGEDURN,ALGECDAT,ALGECTIM,ALGECUID,ALGEUDAT,ALGEUTIM:  
                        ALGEUUID,ALGESPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALGRE1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLGREA1;ALGECONT,ALGESESN,ALGELOCN,ALGEGDTE,ALGEGTIM:      
                        ALGEDURN,ALGECDAT,ALGECTIM,ALGECUID,ALGEUDAT,ALGEUTIM:  
                        ALGEUUID,ALGESPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALGRE1  RESET     KEY8                                                        
          UNLOCK    ALLGREA1                                                    
          RETURN
.
RSALGRE2  RESET     KEY16                                                       
          READ      ALLGREA2,KEY16;;                                            
          RETURN
.
RAALGRE2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ALLGREA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALGRE2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ALLGREA2,KEY16;ALGECONT,ALGESESN,ALGELOCN,ALGEGDTE,ALGEGTIM:
                        ALGEDURN,ALGECDAT,ALGECTIM,ALGECUID,ALGEUDAT,ALGEUTIM:  
                        ALGEUUID,ALGESPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALGRE2                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLGREA2;ALGECONT,ALGESESN,ALGELOCN,ALGEGDTE,ALGEGTIM:      
                        ALGEDURN,ALGECDAT,ALGECTIM,ALGECUID,ALGEUDAT,ALGEUTIM:  
                        ALGEUUID,ALGESPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALGRE2                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLGREA2;ALGECONT,ALGESESN,ALGELOCN,ALGEGDTE,ALGEGTIM:      
                        ALGEDURN,ALGECDAT,ALGECTIM,ALGECUID,ALGEUDAT,ALGEUTIM:  
                        ALGEUUID,ALGESPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALGRE2                                                                        
          UPDATE    ALLGREA2;ALGECONT,ALGESESN,ALGELOCN,ALGEGDTE,ALGEGTIM:      
                        ALGEDURN,ALGECDAT,ALGECTIM,ALGECUID,ALGEUDAT,ALGEUTIM:  
                        ALGEUUID,ALGESPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALGRE2  RESET     KEY16                                                       
          WRITE     ALLGREA2,KEY16;ALGECONT,ALGESESN,ALGELOCN,ALGEGDTE,ALGEGTIM:
                        ALGEDURN,ALGECDAT,ALGECTIM,ALGECUID,ALGEUDAT,ALGEUTIM:  
                        ALGEUUID,ALGESPAR                                       
          RETURN
.
DEALGRE2  RESET     KEY16                                                       
          DELETE    ALLGREA2,KEY16                                              
          RETURN
.
RLALGRE2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     ALLGREA2,KEY16;ALGECONT,ALGESESN,ALGELOCN,ALGEGDTE,ALGEGTIM:
                        ALGEDURN,ALGECDAT,ALGECTIM,ALGECUID,ALGEUDAT,ALGEUTIM:  
                        ALGEUUID,ALGESPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALGRE2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLGREA2;ALGECONT,ALGESESN,ALGELOCN,ALGEGDTE,ALGEGTIM:      
                        ALGEDURN,ALGECDAT,ALGECTIM,ALGECUID,ALGEUDAT,ALGEUTIM:  
                        ALGEUUID,ALGESPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALGRE2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLGREA2;ALGECONT,ALGESESN,ALGELOCN,ALGEGDTE,ALGEGTIM:      
                        ALGEDURN,ALGECDAT,ALGECTIM,ALGECUID,ALGEUDAT,ALGEUTIM:  
                        ALGEUUID,ALGESPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALGRE2  RESET     KEY16                                                       
          UNLOCK    ALLGREA2                                                    
          RETURN
.
RSALGRE3  RESET     KEY24                                                       
          READ      ALLGREA3,KEY24;;                                            
          RETURN
.
RAALGRE3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      ALLGREA3,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALGRE3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      ALLGREA3,KEY24;ALGECONT,ALGESESN,ALGELOCN,ALGEGDTE,ALGEGTIM:
                        ALGEDURN,ALGECDAT,ALGECTIM,ALGECUID,ALGEUDAT,ALGEUTIM:  
                        ALGEUUID,ALGESPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALGRE3                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLGREA3;ALGECONT,ALGESESN,ALGELOCN,ALGEGDTE,ALGEGTIM:      
                        ALGEDURN,ALGECDAT,ALGECTIM,ALGECUID,ALGEUDAT,ALGEUTIM:  
                        ALGEUUID,ALGESPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALGRE3                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLGREA3;ALGECONT,ALGESESN,ALGELOCN,ALGEGDTE,ALGEGTIM:      
                        ALGEDURN,ALGECDAT,ALGECTIM,ALGECUID,ALGEUDAT,ALGEUTIM:  
                        ALGEUUID,ALGESPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALGRE3                                                                        
          UPDATE    ALLGREA3;ALGECONT,ALGESESN,ALGELOCN,ALGEGDTE,ALGEGTIM:      
                        ALGEDURN,ALGECDAT,ALGECTIM,ALGECUID,ALGEUDAT,ALGEUTIM:  
                        ALGEUUID,ALGESPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALGRE3  RESET     KEY24                                                       
          WRITE     ALLGREA3,KEY24;ALGECONT,ALGESESN,ALGELOCN,ALGEGDTE,ALGEGTIM:
                        ALGEDURN,ALGECDAT,ALGECTIM,ALGECUID,ALGEUDAT,ALGEUTIM:  
                        ALGEUUID,ALGESPAR                                       
          RETURN
.
DEALGRE3  RESET     KEY24                                                       
          DELETE    ALLGREA3,KEY24                                              
          RETURN
.
RLALGRE3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     ALLGREA3,KEY24;ALGECONT,ALGESESN,ALGELOCN,ALGEGDTE,ALGEGTIM:
                        ALGEDURN,ALGECDAT,ALGECTIM,ALGECUID,ALGEUDAT,ALGEUTIM:  
                        ALGEUUID,ALGESPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALGRE3                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLGREA3;ALGECONT,ALGESESN,ALGELOCN,ALGEGDTE,ALGEGTIM:      
                        ALGEDURN,ALGECDAT,ALGECTIM,ALGECUID,ALGEUDAT,ALGEUTIM:  
                        ALGEUUID,ALGESPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALGRE3                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLGREA3;ALGECONT,ALGESESN,ALGELOCN,ALGEGDTE,ALGEGTIM:      
                        ALGEDURN,ALGECDAT,ALGECTIM,ALGECUID,ALGEUDAT,ALGEUTIM:  
                        ALGEUUID,ALGESPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALGRE3  RESET     KEY24                                                       
          UNLOCK    ALLGREA3                                                    
          RETURN
.
