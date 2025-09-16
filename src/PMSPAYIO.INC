.
. PMSPAYIO    
. --------
. Filename     : pmspayaf.dat
.
RSPMPAY1  RESET     KEY14                                                       
          READ      PMSPAYA1,KEY14;;                                            
          RETURN
.
RAPMPAY1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPAYA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPAY1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPAYA1,KEY14;PMPAURNO,PMPAPAYC,PMPASEQN,PMPACOMM,PMPAACTV:
                        PMPACDAT,PMPACTIM,PMPACUID,PMPAUDAT,PMPAUTIM,PMPAUUID:  
                        PMPASPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPAY1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSPAYA1;PMPAURNO,PMPAPAYC,PMPASEQN,PMPACOMM,PMPAACTV:      
                        PMPACDAT,PMPACTIM,PMPACUID,PMPAUDAT,PMPAUTIM,PMPAUUID:  
                        PMPASPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPAY1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSPAYA1;PMPAURNO,PMPAPAYC,PMPASEQN,PMPACOMM,PMPAACTV:      
                        PMPACDAT,PMPACTIM,PMPACUID,PMPAUDAT,PMPAUTIM,PMPAUUID:  
                        PMPASPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPAY1                                                                        
          UPDATE    PMSPAYA1;PMPAURNO,PMPAPAYC,PMPASEQN,PMPACOMM,PMPAACTV:      
                        PMPACDAT,PMPACTIM,PMPACUID,PMPAUDAT,PMPAUTIM,PMPAUUID:  
                        PMPASPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMPAY1  RESET     KEY14                                                       
          WRITE     PMSPAYA1,KEY14;PMPAURNO,PMPAPAYC,PMPASEQN,PMPACOMM,PMPAACTV:
                        PMPACDAT,PMPACTIM,PMPACUID,PMPAUDAT,PMPAUTIM,PMPAUUID:  
                        PMPASPAR                                                
          RETURN
.
DEPMPAY1  RESET     KEY14                                                       
          DELETE    PMSPAYA1,KEY14                                              
          RETURN
.
RLPMPAY1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READL     PMSPAYA1,KEY14;PMPAURNO,PMPAPAYC,PMPASEQN,PMPACOMM,PMPAACTV:
                        PMPACDAT,PMPACTIM,PMPACUID,PMPAUDAT,PMPAUTIM,PMPAUUID:  
                        PMPASPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMPAY1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSPAYA1;PMPAURNO,PMPAPAYC,PMPASEQN,PMPACOMM,PMPAACTV:      
                        PMPACDAT,PMPACTIM,PMPACUID,PMPAUDAT,PMPAUTIM,PMPAUUID:  
                        PMPASPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMPAY1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSPAYA1;PMPAURNO,PMPAPAYC,PMPASEQN,PMPACOMM,PMPAACTV:      
                        PMPACDAT,PMPACTIM,PMPACUID,PMPAUDAT,PMPAUTIM,PMPAUUID:  
                        PMPASPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMPAY1  RESET     KEY14                                                       
          UNLOCK    PMSPAYA1                                                    
          RETURN
.
RSPMPAY2  RESET     KEY10                                                       
          READ      PMSPAYA2,KEY10;;                                            
          RETURN
.
RAPMPAY2  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPAYA2,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPAY2  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPAYA2,KEY10;PMPAURNO,PMPAPAYC,PMPASEQN,PMPACOMM,PMPAACTV:
                        PMPACDAT,PMPACTIM,PMPACUID,PMPAUDAT,PMPAUTIM,PMPAUUID:  
                        PMPASPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPAY2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSPAYA2;PMPAURNO,PMPAPAYC,PMPASEQN,PMPACOMM,PMPAACTV:      
                        PMPACDAT,PMPACTIM,PMPACUID,PMPAUDAT,PMPAUTIM,PMPAUUID:  
                        PMPASPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPAY2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSPAYA2;PMPAURNO,PMPAPAYC,PMPASEQN,PMPACOMM,PMPAACTV:      
                        PMPACDAT,PMPACTIM,PMPACUID,PMPAUDAT,PMPAUTIM,PMPAUUID:  
                        PMPASPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPAY2                                                                        
          UPDATE    PMSPAYA2;PMPAURNO,PMPAPAYC,PMPASEQN,PMPACOMM,PMPAACTV:      
                        PMPACDAT,PMPACTIM,PMPACUID,PMPAUDAT,PMPAUTIM,PMPAUUID:  
                        PMPASPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMPAY2  RESET     KEY10                                                       
          WRITE     PMSPAYA2,KEY10;PMPAURNO,PMPAPAYC,PMPASEQN,PMPACOMM,PMPAACTV:
                        PMPACDAT,PMPACTIM,PMPACUID,PMPAUDAT,PMPAUTIM,PMPAUUID:  
                        PMPASPAR                                                
          RETURN
.
DEPMPAY2  RESET     KEY10                                                       
          DELETE    PMSPAYA2,KEY10                                              
          RETURN
.
RLPMPAY2  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     PMSPAYA2,KEY10;PMPAURNO,PMPAPAYC,PMPASEQN,PMPACOMM,PMPAACTV:
                        PMPACDAT,PMPACTIM,PMPACUID,PMPAUDAT,PMPAUTIM,PMPAUUID:  
                        PMPASPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMPAY2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSPAYA2;PMPAURNO,PMPAPAYC,PMPASEQN,PMPACOMM,PMPAACTV:      
                        PMPACDAT,PMPACTIM,PMPACUID,PMPAUDAT,PMPAUTIM,PMPAUUID:  
                        PMPASPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMPAY2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSPAYA2;PMPAURNO,PMPAPAYC,PMPASEQN,PMPACOMM,PMPAACTV:      
                        PMPACDAT,PMPACTIM,PMPACUID,PMPAUDAT,PMPAUTIM,PMPAUUID:  
                        PMPASPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMPAY2  RESET     KEY10                                                       
          UNLOCK    PMSPAYA2                                                    
          RETURN
.
