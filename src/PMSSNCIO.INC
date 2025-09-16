.
. PMSSNCIO    
. --------
. Filename     : pmssncaf.dat
.
RSPMSNC1  RESET     KEY20                                                       
          READ      PMSSNCA1,KEY20;;                                            
          RETURN
.
RAPMSNC1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSNCA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMSNC1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSNCA1,KEY20;PMSCCLCD,PMSCVERS,PMSCICDE,PMSCDEFF,PMSCDEFT:
                        PMSCFMSE,PMSCFMSL,PMSCFMSH,PMSCFCSE,PMSCFCSL,PMSCFCSH:  
                        PMSCAGEL,PMSCAGE,PMSCASSO,PMSCFTSR,PMSCFTSL,PMSCFTSH:   
                        PMSCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMSNC1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSSNCA1;PMSCCLCD,PMSCVERS,PMSCICDE,PMSCDEFF,PMSCDEFT:      
                        PMSCFMSE,PMSCFMSL,PMSCFMSH,PMSCFCSE,PMSCFCSL,PMSCFCSH:  
                        PMSCAGEL,PMSCAGE,PMSCASSO,PMSCFTSR,PMSCFTSL,PMSCFTSH:   
                        PMSCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMSNC1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSSNCA1;PMSCCLCD,PMSCVERS,PMSCICDE,PMSCDEFF,PMSCDEFT:      
                        PMSCFMSE,PMSCFMSL,PMSCFMSH,PMSCFCSE,PMSCFCSL,PMSCFCSH:  
                        PMSCAGEL,PMSCAGE,PMSCASSO,PMSCFTSR,PMSCFTSL,PMSCFTSH:   
                        PMSCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMSNC1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSSNCA1;PMSCCLCD,PMSCVERS,PMSCICDE,PMSCDEFF,PMSCDEFT:      
                        PMSCFMSE,PMSCFMSL,PMSCFMSH,PMSCFCSE,PMSCFCSL,PMSCFCSH:  
                        PMSCAGEL,PMSCAGE,PMSCASSO,PMSCFTSR,PMSCFTSL,PMSCFTSH:   
                        PMSCSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMSNC1  RESET     KEY20                                                       
          WRITE     PMSSNCA1,KEY20;PMSCCLCD,PMSCVERS,PMSCICDE,PMSCDEFF,PMSCDEFT:
                        PMSCFMSE,PMSCFMSL,PMSCFMSH,PMSCFCSE,PMSCFCSL,PMSCFCSH:  
                        PMSCAGEL,PMSCAGE,PMSCASSO,PMSCFTSR,PMSCFTSL,PMSCFTSH:   
                        PMSCSPAR                                                
          RETURN
.
DEPMSNC1  RESET     KEY20                                                       
          DELETE    PMSSNCA1,KEY20                                              
          RETURN
.
RLPMSNC1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READL     PMSSNCA1,KEY20;PMSCCLCD,PMSCVERS,PMSCICDE,PMSCDEFF,PMSCDEFT:
                        PMSCFMSE,PMSCFMSL,PMSCFMSH,PMSCFCSE,PMSCFCSL,PMSCFCSH:  
                        PMSCAGEL,PMSCAGE,PMSCASSO,PMSCFTSR,PMSCFTSL,PMSCFTSH:   
                        PMSCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMSNC1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSSNCA1;PMSCCLCD,PMSCVERS,PMSCICDE,PMSCDEFF,PMSCDEFT:      
                        PMSCFMSE,PMSCFMSL,PMSCFMSH,PMSCFCSE,PMSCFCSL,PMSCFCSH:  
                        PMSCAGEL,PMSCAGE,PMSCASSO,PMSCFTSR,PMSCFTSL,PMSCFTSH:   
                        PMSCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMSNC1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSSNCA1;PMSCCLCD,PMSCVERS,PMSCICDE,PMSCDEFF,PMSCDEFT:      
                        PMSCFMSE,PMSCFMSL,PMSCFMSH,PMSCFCSE,PMSCFCSL,PMSCFCSH:  
                        PMSCAGEL,PMSCAGE,PMSCASSO,PMSCFTSR,PMSCFTSL,PMSCFTSH:   
                        PMSCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMSNC1  RESET     KEY20                                                       
          UNLOCK    PMSSNCA1                                                    
          RETURN
.
RSPMSNC2  RESET     KEY20                                                       
          READ      PMSSNCA2,KEY20;;                                            
          RETURN
.
RAPMSNC2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSNCA2,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMSNC2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSNCA2,KEY20;PMSCCLCD,PMSCVERS,PMSCICDE,PMSCDEFF,PMSCDEFT:
                        PMSCFMSE,PMSCFMSL,PMSCFMSH,PMSCFCSE,PMSCFCSL,PMSCFCSH:  
                        PMSCAGEL,PMSCAGE,PMSCASSO,PMSCFTSR,PMSCFTSL,PMSCFTSH:   
                        PMSCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMSNC2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSSNCA2;PMSCCLCD,PMSCVERS,PMSCICDE,PMSCDEFF,PMSCDEFT:      
                        PMSCFMSE,PMSCFMSL,PMSCFMSH,PMSCFCSE,PMSCFCSL,PMSCFCSH:  
                        PMSCAGEL,PMSCAGE,PMSCASSO,PMSCFTSR,PMSCFTSL,PMSCFTSH:   
                        PMSCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMSNC2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSSNCA2;PMSCCLCD,PMSCVERS,PMSCICDE,PMSCDEFF,PMSCDEFT:      
                        PMSCFMSE,PMSCFMSL,PMSCFMSH,PMSCFCSE,PMSCFCSL,PMSCFCSH:  
                        PMSCAGEL,PMSCAGE,PMSCASSO,PMSCFTSR,PMSCFTSL,PMSCFTSH:   
                        PMSCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMSNC2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSSNCA2;PMSCCLCD,PMSCVERS,PMSCICDE,PMSCDEFF,PMSCDEFT:      
                        PMSCFMSE,PMSCFMSL,PMSCFMSH,PMSCFCSE,PMSCFCSL,PMSCFCSH:  
                        PMSCAGEL,PMSCAGE,PMSCASSO,PMSCFTSR,PMSCFTSL,PMSCFTSH:   
                        PMSCSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMSNC2  RESET     KEY20                                                       
          WRITE     PMSSNCA2,KEY20;PMSCCLCD,PMSCVERS,PMSCICDE,PMSCDEFF,PMSCDEFT:
                        PMSCFMSE,PMSCFMSL,PMSCFMSH,PMSCFCSE,PMSCFCSL,PMSCFCSH:  
                        PMSCAGEL,PMSCAGE,PMSCASSO,PMSCFTSR,PMSCFTSL,PMSCFTSH:   
                        PMSCSPAR                                                
          RETURN
.
DEPMSNC2  RESET     KEY20                                                       
          DELETE    PMSSNCA2,KEY20                                              
          RETURN
.
RLPMSNC2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READL     PMSSNCA2,KEY20;PMSCCLCD,PMSCVERS,PMSCICDE,PMSCDEFF,PMSCDEFT:
                        PMSCFMSE,PMSCFMSL,PMSCFMSH,PMSCFCSE,PMSCFCSL,PMSCFCSH:  
                        PMSCAGEL,PMSCAGE,PMSCASSO,PMSCFTSR,PMSCFTSL,PMSCFTSH:   
                        PMSCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMSNC2  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSSNCA2;PMSCCLCD,PMSCVERS,PMSCICDE,PMSCDEFF,PMSCDEFT:      
                        PMSCFMSE,PMSCFMSL,PMSCFMSH,PMSCFCSE,PMSCFCSL,PMSCFCSH:  
                        PMSCAGEL,PMSCAGE,PMSCASSO,PMSCFTSR,PMSCFTSL,PMSCFTSH:   
                        PMSCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMSNC2  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSSNCA2;PMSCCLCD,PMSCVERS,PMSCICDE,PMSCDEFF,PMSCDEFT:      
                        PMSCFMSE,PMSCFMSL,PMSCFMSH,PMSCFCSE,PMSCFCSL,PMSCFCSH:  
                        PMSCAGEL,PMSCAGE,PMSCASSO,PMSCFTSR,PMSCFTSL,PMSCFTSH:   
                        PMSCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMSNC2  RESET     KEY20                                                       
          UNLOCK    PMSSNCA2                                                    
          RETURN
.
