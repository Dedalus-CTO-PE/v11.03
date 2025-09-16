.
. ALLGPAIO    
. --------
. Filename     : allgpaaf.dat
.
RSALGPA1  RESET     KEY16                                                       
          READ      ALLGPAA1,KEY16;;                                            
          RETURN
.
RAALGPA1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ALLGPAA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALGPA1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ALLGPAA1,KEY16;ALGACONT,ALGAURNO,ALGAREFN,ALGACURP,ALGAPSTA:
                        ALGAMEAL,ALGAMOHX,ALGACDAT,ALGACTIM,ALGACUID,ALGAUDAT:  
                        ALGAUTIM,ALGAUUID,ALGARCST,ALGASPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALGPA1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLGPAA1;ALGACONT,ALGAURNO,ALGAREFN,ALGACURP,ALGAPSTA:      
                        ALGAMEAL,ALGAMOHX,ALGACDAT,ALGACTIM,ALGACUID,ALGAUDAT:  
                        ALGAUTIM,ALGAUUID,ALGARCST,ALGASPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALGPA1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLGPAA1;ALGACONT,ALGAURNO,ALGAREFN,ALGACURP,ALGAPSTA:      
                        ALGAMEAL,ALGAMOHX,ALGACDAT,ALGACTIM,ALGACUID,ALGAUDAT:  
                        ALGAUTIM,ALGAUUID,ALGARCST,ALGASPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALGPA1                                                                        
          UPDATE    ALLGPAA1;ALGACONT,ALGAURNO,ALGAREFN,ALGACURP,ALGAPSTA:      
                        ALGAMEAL,ALGAMOHX,ALGACDAT,ALGACTIM,ALGACUID,ALGAUDAT:  
                        ALGAUTIM,ALGAUUID,ALGARCST,ALGASPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALGPA1  RESET     KEY16                                                       
          WRITE     ALLGPAA1,KEY16;ALGACONT,ALGAURNO,ALGAREFN,ALGACURP,ALGAPSTA:
                        ALGAMEAL,ALGAMOHX,ALGACDAT,ALGACTIM,ALGACUID,ALGAUDAT:  
                        ALGAUTIM,ALGAUUID,ALGARCST,ALGASPAR                     
          RETURN
.
DEALGPA1  RESET     KEY16                                                       
          DELETE    ALLGPAA1,KEY16                                              
          RETURN
.
RLALGPA1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     ALLGPAA1,KEY16;ALGACONT,ALGAURNO,ALGAREFN,ALGACURP,ALGAPSTA:
                        ALGAMEAL,ALGAMOHX,ALGACDAT,ALGACTIM,ALGACUID,ALGAUDAT:  
                        ALGAUTIM,ALGAUUID,ALGARCST,ALGASPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALGPA1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLGPAA1;ALGACONT,ALGAURNO,ALGAREFN,ALGACURP,ALGAPSTA:      
                        ALGAMEAL,ALGAMOHX,ALGACDAT,ALGACTIM,ALGACUID,ALGAUDAT:  
                        ALGAUTIM,ALGAUUID,ALGARCST,ALGASPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALGPA1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLGPAA1;ALGACONT,ALGAURNO,ALGAREFN,ALGACURP,ALGAPSTA:      
                        ALGAMEAL,ALGAMOHX,ALGACDAT,ALGACTIM,ALGACUID,ALGAUDAT:  
                        ALGAUTIM,ALGAUUID,ALGARCST,ALGASPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALGPA1  RESET     KEY16                                                       
          UNLOCK    ALLGPAA1                                                    
          RETURN
.
RSALGPA2  RESET     KEY16                                                       
          READ      ALLGPAA2,KEY16;;                                            
          RETURN
.
RAALGPA2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ALLGPAA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALGPA2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ALLGPAA2,KEY16;ALGACONT,ALGAURNO,ALGAREFN,ALGACURP,ALGAPSTA:
                        ALGAMEAL,ALGAMOHX,ALGACDAT,ALGACTIM,ALGACUID,ALGAUDAT:  
                        ALGAUTIM,ALGAUUID,ALGARCST,ALGASPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALGPA2                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLGPAA2;ALGACONT,ALGAURNO,ALGAREFN,ALGACURP,ALGAPSTA:      
                        ALGAMEAL,ALGAMOHX,ALGACDAT,ALGACTIM,ALGACUID,ALGAUDAT:  
                        ALGAUTIM,ALGAUUID,ALGARCST,ALGASPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALGPA2                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLGPAA2;ALGACONT,ALGAURNO,ALGAREFN,ALGACURP,ALGAPSTA:      
                        ALGAMEAL,ALGAMOHX,ALGACDAT,ALGACTIM,ALGACUID,ALGAUDAT:  
                        ALGAUTIM,ALGAUUID,ALGARCST,ALGASPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALGPA2                                                                        
          UPDATE    ALLGPAA2;ALGACONT,ALGAURNO,ALGAREFN,ALGACURP,ALGAPSTA:      
                        ALGAMEAL,ALGAMOHX,ALGACDAT,ALGACTIM,ALGACUID,ALGAUDAT:  
                        ALGAUTIM,ALGAUUID,ALGARCST,ALGASPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALGPA2  RESET     KEY16                                                       
          WRITE     ALLGPAA2,KEY16;ALGACONT,ALGAURNO,ALGAREFN,ALGACURP,ALGAPSTA:
                        ALGAMEAL,ALGAMOHX,ALGACDAT,ALGACTIM,ALGACUID,ALGAUDAT:  
                        ALGAUTIM,ALGAUUID,ALGARCST,ALGASPAR                     
          RETURN
.
DEALGPA2  RESET     KEY16                                                       
          DELETE    ALLGPAA2,KEY16                                              
          RETURN
.
RLALGPA2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     ALLGPAA2,KEY16;ALGACONT,ALGAURNO,ALGAREFN,ALGACURP,ALGAPSTA:
                        ALGAMEAL,ALGAMOHX,ALGACDAT,ALGACTIM,ALGACUID,ALGAUDAT:  
                        ALGAUTIM,ALGAUUID,ALGARCST,ALGASPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALGPA2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLGPAA2;ALGACONT,ALGAURNO,ALGAREFN,ALGACURP,ALGAPSTA:      
                        ALGAMEAL,ALGAMOHX,ALGACDAT,ALGACTIM,ALGACUID,ALGAUDAT:  
                        ALGAUTIM,ALGAUUID,ALGARCST,ALGASPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALGPA2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLGPAA2;ALGACONT,ALGAURNO,ALGAREFN,ALGACURP,ALGAPSTA:      
                        ALGAMEAL,ALGAMOHX,ALGACDAT,ALGACTIM,ALGACUID,ALGAUDAT:  
                        ALGAUTIM,ALGAUUID,ALGARCST,ALGASPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALGPA2  RESET     KEY16                                                       
          UNLOCK    ALLGPAA2                                                    
          RETURN
.
