.
. APSCKIIO    
. --------
. Filename     : apsckiaf.dat
.
RSAPCK1   RESET     KEY20                                                       
          READ      APSCKIA1,KEY20;;                                            
          RETURN
.
RAAPCK1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      APSCKIA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPCK1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      APSCKIA1,KEY20;APCKCRD,APCKKWD,APCKSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPCK1                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSCKIA1;APCKCRD,APCKKWD,APCKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPCK1                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSCKIA1;APCKCRD,APCKKWD,APCKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPCK1                                                                         
          UPDATE    APSCKIA1;APCKCRD,APCKKWD,APCKSPA                            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRAPCK1   RESET     KEY20                                                       
          WRITE     APSCKIA1,KEY20;APCKCRD,APCKKWD,APCKSPA                      
          RETURN
.
DEAPCK1   RESET     KEY20                                                       
          DELETE    APSCKIA1,KEY20                                              
          RETURN
.
RLAPCK1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READL     APSCKIA1,KEY20;APCKCRD,APCKKWD,APCKSPA                      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLAPCK1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   APSCKIA1;APCKCRD,APCKKWD,APCKSPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLAPCK1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   APSCKIA1;APCKCRD,APCKKWD,APCKSPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUAPCK1   RESET     KEY20                                                       
          UNLOCK    APSCKIA1                                                    
          RETURN
.
RSAPCK2   RESET     KEY20                                                       
          READ      APSCKIA2,KEY20;;                                            
          RETURN
.
RAAPCK2   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      APSCKIA2,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPCK2   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      APSCKIA2,KEY20;APCKCRD,APCKKWD,APCKSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPCK2                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSCKIA2;APCKCRD,APCKKWD,APCKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPCK2                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSCKIA2;APCKCRD,APCKKWD,APCKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPCK2                                                                         
          UPDATE    APSCKIA2;APCKCRD,APCKKWD,APCKSPA                            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRAPCK2   RESET     KEY20                                                       
          WRITE     APSCKIA2,KEY20;APCKCRD,APCKKWD,APCKSPA                      
          RETURN
.
DEAPCK2   RESET     KEY20                                                       
          DELETE    APSCKIA2,KEY20                                              
          RETURN
.
RLAPCK2   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READL     APSCKIA2,KEY20;APCKCRD,APCKKWD,APCKSPA                      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLAPCK2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   APSCKIA2;APCKCRD,APCKKWD,APCKSPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLAPCK2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   APSCKIA2;APCKCRD,APCKKWD,APCKSPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUAPCK2   RESET     KEY20                                                       
          UNLOCK    APSCKIA2                                                    
          RETURN
.
