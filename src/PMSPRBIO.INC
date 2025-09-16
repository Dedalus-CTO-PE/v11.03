.
. PMSPRBIO    
. --------
. Filename     : pmsprbaf.dat
.
RSPMPRB1  RESET     KEY13                                                       
          READ      PMSPRBA1,KEY13;;                                            
          RETURN
.
RAPMPRB1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPRBA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPRB1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPRBA1,KEY13;PMPBURNO,PMPBPNUM,PMPBSPIN,PMPBPPNO,PMPBPRID:
                        PMPBPRTY,PMPBACTV,PMPBPRST,PMPBDSC1,PMPBDSC2,PMPBDCSY:  
                        PMPBDCOD,PMPBESDT,PMPBESTI,PMPBESBY,PMPBERDT,PMPBERTI:  
                        PMPBARDT,PMPBARTI,PMPBRVST,PMPBNRDT,PMPBNRTI,PMPBUDC1:  
                        PMPBUDC2,PMPBUDY1,PMPBUDY2,PMPBUDD1,PMPBUDD2,PMPBUDT1:  
                        PMPBUDT2,PMPBLVIS,PMPBSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPRB1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSPRBA1;PMPBURNO,PMPBPNUM,PMPBSPIN,PMPBPPNO,PMPBPRID:      
                        PMPBPRTY,PMPBACTV,PMPBPRST,PMPBDSC1,PMPBDSC2,PMPBDCSY:  
                        PMPBDCOD,PMPBESDT,PMPBESTI,PMPBESBY,PMPBERDT,PMPBERTI:  
                        PMPBARDT,PMPBARTI,PMPBRVST,PMPBNRDT,PMPBNRTI,PMPBUDC1:  
                        PMPBUDC2,PMPBUDY1,PMPBUDY2,PMPBUDD1,PMPBUDD2,PMPBUDT1:  
                        PMPBUDT2,PMPBLVIS,PMPBSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPRB1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSPRBA1;PMPBURNO,PMPBPNUM,PMPBSPIN,PMPBPPNO,PMPBPRID:      
                        PMPBPRTY,PMPBACTV,PMPBPRST,PMPBDSC1,PMPBDSC2,PMPBDCSY:  
                        PMPBDCOD,PMPBESDT,PMPBESTI,PMPBESBY,PMPBERDT,PMPBERTI:  
                        PMPBARDT,PMPBARTI,PMPBRVST,PMPBNRDT,PMPBNRTI,PMPBUDC1:  
                        PMPBUDC2,PMPBUDY1,PMPBUDY2,PMPBUDD1,PMPBUDD2,PMPBUDT1:  
                        PMPBUDT2,PMPBLVIS,PMPBSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPRB1                                                                        
          UPDATE    PMSPRBA1;PMPBURNO,PMPBPNUM,PMPBSPIN,PMPBPPNO,PMPBPRID:      
                        PMPBPRTY,PMPBACTV,PMPBPRST,PMPBDSC1,PMPBDSC2,PMPBDCSY:  
                        PMPBDCOD,PMPBESDT,PMPBESTI,PMPBESBY,PMPBERDT,PMPBERTI:  
                        PMPBARDT,PMPBARTI,PMPBRVST,PMPBNRDT,PMPBNRTI,PMPBUDC1:  
                        PMPBUDC2,PMPBUDY1,PMPBUDY2,PMPBUDD1,PMPBUDD2,PMPBUDT1:  
                        PMPBUDT2,PMPBLVIS,PMPBSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMPRB1  RESET     KEY13                                                       
          WRITE     PMSPRBA1,KEY13;PMPBURNO,PMPBPNUM,PMPBSPIN,PMPBPPNO,PMPBPRID:
                        PMPBPRTY,PMPBACTV,PMPBPRST,PMPBDSC1,PMPBDSC2,PMPBDCSY:  
                        PMPBDCOD,PMPBESDT,PMPBESTI,PMPBESBY,PMPBERDT,PMPBERTI:  
                        PMPBARDT,PMPBARTI,PMPBRVST,PMPBNRDT,PMPBNRTI,PMPBUDC1:  
                        PMPBUDC2,PMPBUDY1,PMPBUDY2,PMPBUDD1,PMPBUDD2,PMPBUDT1:  
                        PMPBUDT2,PMPBLVIS,PMPBSPAR                              
          RETURN
.
DEPMPRB1  RESET     KEY13                                                       
          DELETE    PMSPRBA1,KEY13                                              
          RETURN
.
RLPMPRB1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READL     PMSPRBA1,KEY13;PMPBURNO,PMPBPNUM,PMPBSPIN,PMPBPPNO,PMPBPRID:
                        PMPBPRTY,PMPBACTV,PMPBPRST,PMPBDSC1,PMPBDSC2,PMPBDCSY:  
                        PMPBDCOD,PMPBESDT,PMPBESTI,PMPBESBY,PMPBERDT,PMPBERTI:  
                        PMPBARDT,PMPBARTI,PMPBRVST,PMPBNRDT,PMPBNRTI,PMPBUDC1:  
                        PMPBUDC2,PMPBUDY1,PMPBUDY2,PMPBUDD1,PMPBUDD2,PMPBUDT1:  
                        PMPBUDT2,PMPBLVIS,PMPBSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMPRB1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSPRBA1;PMPBURNO,PMPBPNUM,PMPBSPIN,PMPBPPNO,PMPBPRID:      
                        PMPBPRTY,PMPBACTV,PMPBPRST,PMPBDSC1,PMPBDSC2,PMPBDCSY:  
                        PMPBDCOD,PMPBESDT,PMPBESTI,PMPBESBY,PMPBERDT,PMPBERTI:  
                        PMPBARDT,PMPBARTI,PMPBRVST,PMPBNRDT,PMPBNRTI,PMPBUDC1:  
                        PMPBUDC2,PMPBUDY1,PMPBUDY2,PMPBUDD1,PMPBUDD2,PMPBUDT1:  
                        PMPBUDT2,PMPBLVIS,PMPBSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMPRB1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSPRBA1;PMPBURNO,PMPBPNUM,PMPBSPIN,PMPBPPNO,PMPBPRID:      
                        PMPBPRTY,PMPBACTV,PMPBPRST,PMPBDSC1,PMPBDSC2,PMPBDCSY:  
                        PMPBDCOD,PMPBESDT,PMPBESTI,PMPBESBY,PMPBERDT,PMPBERTI:  
                        PMPBARDT,PMPBARTI,PMPBRVST,PMPBNRDT,PMPBNRTI,PMPBUDC1:  
                        PMPBUDC2,PMPBUDY1,PMPBUDY2,PMPBUDD1,PMPBUDD2,PMPBUDT1:  
                        PMPBUDT2,PMPBLVIS,PMPBSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMPRB1  RESET     KEY13                                                       
          UNLOCK    PMSPRBA1                                                    
          RETURN
.
RSPMPRB2  RESET     KEY21                                                       
          READ      PMSPRBA2,KEY21;;                                            
          RETURN
.
RAPMPRB2  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPRBA2,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPRB2  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPRBA2,KEY21;PMPBURNO,PMPBPNUM,PMPBSPIN,PMPBPPNO,PMPBPRID:
                        PMPBPRTY,PMPBACTV,PMPBPRST,PMPBDSC1,PMPBDSC2,PMPBDCSY:  
                        PMPBDCOD,PMPBESDT,PMPBESTI,PMPBESBY,PMPBERDT,PMPBERTI:  
                        PMPBARDT,PMPBARTI,PMPBRVST,PMPBNRDT,PMPBNRTI,PMPBUDC1:  
                        PMPBUDC2,PMPBUDY1,PMPBUDY2,PMPBUDD1,PMPBUDD2,PMPBUDT1:  
                        PMPBUDT2,PMPBLVIS,PMPBSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPRB2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSPRBA2;PMPBURNO,PMPBPNUM,PMPBSPIN,PMPBPPNO,PMPBPRID:      
                        PMPBPRTY,PMPBACTV,PMPBPRST,PMPBDSC1,PMPBDSC2,PMPBDCSY:  
                        PMPBDCOD,PMPBESDT,PMPBESTI,PMPBESBY,PMPBERDT,PMPBERTI:  
                        PMPBARDT,PMPBARTI,PMPBRVST,PMPBNRDT,PMPBNRTI,PMPBUDC1:  
                        PMPBUDC2,PMPBUDY1,PMPBUDY2,PMPBUDD1,PMPBUDD2,PMPBUDT1:  
                        PMPBUDT2,PMPBLVIS,PMPBSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPRB2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSPRBA2;PMPBURNO,PMPBPNUM,PMPBSPIN,PMPBPPNO,PMPBPRID:      
                        PMPBPRTY,PMPBACTV,PMPBPRST,PMPBDSC1,PMPBDSC2,PMPBDCSY:  
                        PMPBDCOD,PMPBESDT,PMPBESTI,PMPBESBY,PMPBERDT,PMPBERTI:  
                        PMPBARDT,PMPBARTI,PMPBRVST,PMPBNRDT,PMPBNRTI,PMPBUDC1:  
                        PMPBUDC2,PMPBUDY1,PMPBUDY2,PMPBUDD1,PMPBUDD2,PMPBUDT1:  
                        PMPBUDT2,PMPBLVIS,PMPBSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPRB2                                                                        
          UPDATE    PMSPRBA2;PMPBURNO,PMPBPNUM,PMPBSPIN,PMPBPPNO,PMPBPRID:      
                        PMPBPRTY,PMPBACTV,PMPBPRST,PMPBDSC1,PMPBDSC2,PMPBDCSY:  
                        PMPBDCOD,PMPBESDT,PMPBESTI,PMPBESBY,PMPBERDT,PMPBERTI:  
                        PMPBARDT,PMPBARTI,PMPBRVST,PMPBNRDT,PMPBNRTI,PMPBUDC1:  
                        PMPBUDC2,PMPBUDY1,PMPBUDY2,PMPBUDD1,PMPBUDD2,PMPBUDT1:  
                        PMPBUDT2,PMPBLVIS,PMPBSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMPRB2  RESET     KEY21                                                       
          WRITE     PMSPRBA2,KEY21;PMPBURNO,PMPBPNUM,PMPBSPIN,PMPBPPNO,PMPBPRID:
                        PMPBPRTY,PMPBACTV,PMPBPRST,PMPBDSC1,PMPBDSC2,PMPBDCSY:  
                        PMPBDCOD,PMPBESDT,PMPBESTI,PMPBESBY,PMPBERDT,PMPBERTI:  
                        PMPBARDT,PMPBARTI,PMPBRVST,PMPBNRDT,PMPBNRTI,PMPBUDC1:  
                        PMPBUDC2,PMPBUDY1,PMPBUDY2,PMPBUDD1,PMPBUDD2,PMPBUDT1:  
                        PMPBUDT2,PMPBLVIS,PMPBSPAR                              
          RETURN
.
DEPMPRB2  RESET     KEY21                                                       
          DELETE    PMSPRBA2,KEY21                                              
          RETURN
.
RLPMPRB2  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READL     PMSPRBA2,KEY21;PMPBURNO,PMPBPNUM,PMPBSPIN,PMPBPPNO,PMPBPRID:
                        PMPBPRTY,PMPBACTV,PMPBPRST,PMPBDSC1,PMPBDSC2,PMPBDCSY:  
                        PMPBDCOD,PMPBESDT,PMPBESTI,PMPBESBY,PMPBERDT,PMPBERTI:  
                        PMPBARDT,PMPBARTI,PMPBRVST,PMPBNRDT,PMPBNRTI,PMPBUDC1:  
                        PMPBUDC2,PMPBUDY1,PMPBUDY2,PMPBUDD1,PMPBUDD2,PMPBUDT1:  
                        PMPBUDT2,PMPBLVIS,PMPBSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMPRB2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSPRBA2;PMPBURNO,PMPBPNUM,PMPBSPIN,PMPBPPNO,PMPBPRID:      
                        PMPBPRTY,PMPBACTV,PMPBPRST,PMPBDSC1,PMPBDSC2,PMPBDCSY:  
                        PMPBDCOD,PMPBESDT,PMPBESTI,PMPBESBY,PMPBERDT,PMPBERTI:  
                        PMPBARDT,PMPBARTI,PMPBRVST,PMPBNRDT,PMPBNRTI,PMPBUDC1:  
                        PMPBUDC2,PMPBUDY1,PMPBUDY2,PMPBUDD1,PMPBUDD2,PMPBUDT1:  
                        PMPBUDT2,PMPBLVIS,PMPBSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMPRB2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSPRBA2;PMPBURNO,PMPBPNUM,PMPBSPIN,PMPBPPNO,PMPBPRID:      
                        PMPBPRTY,PMPBACTV,PMPBPRST,PMPBDSC1,PMPBDSC2,PMPBDCSY:  
                        PMPBDCOD,PMPBESDT,PMPBESTI,PMPBESBY,PMPBERDT,PMPBERTI:  
                        PMPBARDT,PMPBARTI,PMPBRVST,PMPBNRDT,PMPBNRTI,PMPBUDC1:  
                        PMPBUDC2,PMPBUDY1,PMPBUDY2,PMPBUDD1,PMPBUDD2,PMPBUDT1:  
                        PMPBUDT2,PMPBLVIS,PMPBSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMPRB2  RESET     KEY21                                                       
          UNLOCK    PMSPRBA2                                                    
          RETURN
.
RSPMPRB3  RESET     KEY21                                                       
          READ      PMSPRBA3,KEY21;;                                            
          RETURN
.
RAPMPRB3  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPRBA3,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPRB3  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPRBA3,KEY21;PMPBURNO,PMPBPNUM,PMPBSPIN,PMPBPPNO,PMPBPRID:
                        PMPBPRTY,PMPBACTV,PMPBPRST,PMPBDSC1,PMPBDSC2,PMPBDCSY:  
                        PMPBDCOD,PMPBESDT,PMPBESTI,PMPBESBY,PMPBERDT,PMPBERTI:  
                        PMPBARDT,PMPBARTI,PMPBRVST,PMPBNRDT,PMPBNRTI,PMPBUDC1:  
                        PMPBUDC2,PMPBUDY1,PMPBUDY2,PMPBUDD1,PMPBUDD2,PMPBUDT1:  
                        PMPBUDT2,PMPBLVIS,PMPBSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPRB3                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSPRBA3;PMPBURNO,PMPBPNUM,PMPBSPIN,PMPBPPNO,PMPBPRID:      
                        PMPBPRTY,PMPBACTV,PMPBPRST,PMPBDSC1,PMPBDSC2,PMPBDCSY:  
                        PMPBDCOD,PMPBESDT,PMPBESTI,PMPBESBY,PMPBERDT,PMPBERTI:  
                        PMPBARDT,PMPBARTI,PMPBRVST,PMPBNRDT,PMPBNRTI,PMPBUDC1:  
                        PMPBUDC2,PMPBUDY1,PMPBUDY2,PMPBUDD1,PMPBUDD2,PMPBUDT1:  
                        PMPBUDT2,PMPBLVIS,PMPBSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPRB3                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSPRBA3;PMPBURNO,PMPBPNUM,PMPBSPIN,PMPBPPNO,PMPBPRID:      
                        PMPBPRTY,PMPBACTV,PMPBPRST,PMPBDSC1,PMPBDSC2,PMPBDCSY:  
                        PMPBDCOD,PMPBESDT,PMPBESTI,PMPBESBY,PMPBERDT,PMPBERTI:  
                        PMPBARDT,PMPBARTI,PMPBRVST,PMPBNRDT,PMPBNRTI,PMPBUDC1:  
                        PMPBUDC2,PMPBUDY1,PMPBUDY2,PMPBUDD1,PMPBUDD2,PMPBUDT1:  
                        PMPBUDT2,PMPBLVIS,PMPBSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPRB3                                                                        
          UPDATE    PMSPRBA3;PMPBURNO,PMPBPNUM,PMPBSPIN,PMPBPPNO,PMPBPRID:      
                        PMPBPRTY,PMPBACTV,PMPBPRST,PMPBDSC1,PMPBDSC2,PMPBDCSY:  
                        PMPBDCOD,PMPBESDT,PMPBESTI,PMPBESBY,PMPBERDT,PMPBERTI:  
                        PMPBARDT,PMPBARTI,PMPBRVST,PMPBNRDT,PMPBNRTI,PMPBUDC1:  
                        PMPBUDC2,PMPBUDY1,PMPBUDY2,PMPBUDD1,PMPBUDD2,PMPBUDT1:  
                        PMPBUDT2,PMPBLVIS,PMPBSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMPRB3  RESET     KEY21                                                       
          WRITE     PMSPRBA3,KEY21;PMPBURNO,PMPBPNUM,PMPBSPIN,PMPBPPNO,PMPBPRID:
                        PMPBPRTY,PMPBACTV,PMPBPRST,PMPBDSC1,PMPBDSC2,PMPBDCSY:  
                        PMPBDCOD,PMPBESDT,PMPBESTI,PMPBESBY,PMPBERDT,PMPBERTI:  
                        PMPBARDT,PMPBARTI,PMPBRVST,PMPBNRDT,PMPBNRTI,PMPBUDC1:  
                        PMPBUDC2,PMPBUDY1,PMPBUDY2,PMPBUDD1,PMPBUDD2,PMPBUDT1:  
                        PMPBUDT2,PMPBLVIS,PMPBSPAR                              
          RETURN
.
DEPMPRB3  RESET     KEY21                                                       
          DELETE    PMSPRBA3,KEY21                                              
          RETURN
.
RLPMPRB3  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READL     PMSPRBA3,KEY21;PMPBURNO,PMPBPNUM,PMPBSPIN,PMPBPPNO,PMPBPRID:
                        PMPBPRTY,PMPBACTV,PMPBPRST,PMPBDSC1,PMPBDSC2,PMPBDCSY:  
                        PMPBDCOD,PMPBESDT,PMPBESTI,PMPBESBY,PMPBERDT,PMPBERTI:  
                        PMPBARDT,PMPBARTI,PMPBRVST,PMPBNRDT,PMPBNRTI,PMPBUDC1:  
                        PMPBUDC2,PMPBUDY1,PMPBUDY2,PMPBUDD1,PMPBUDD2,PMPBUDT1:  
                        PMPBUDT2,PMPBLVIS,PMPBSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMPRB3                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSPRBA3;PMPBURNO,PMPBPNUM,PMPBSPIN,PMPBPPNO,PMPBPRID:      
                        PMPBPRTY,PMPBACTV,PMPBPRST,PMPBDSC1,PMPBDSC2,PMPBDCSY:  
                        PMPBDCOD,PMPBESDT,PMPBESTI,PMPBESBY,PMPBERDT,PMPBERTI:  
                        PMPBARDT,PMPBARTI,PMPBRVST,PMPBNRDT,PMPBNRTI,PMPBUDC1:  
                        PMPBUDC2,PMPBUDY1,PMPBUDY2,PMPBUDD1,PMPBUDD2,PMPBUDT1:  
                        PMPBUDT2,PMPBLVIS,PMPBSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMPRB3                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSPRBA3;PMPBURNO,PMPBPNUM,PMPBSPIN,PMPBPPNO,PMPBPRID:      
                        PMPBPRTY,PMPBACTV,PMPBPRST,PMPBDSC1,PMPBDSC2,PMPBDCSY:  
                        PMPBDCOD,PMPBESDT,PMPBESTI,PMPBESBY,PMPBERDT,PMPBERTI:  
                        PMPBARDT,PMPBARTI,PMPBRVST,PMPBNRDT,PMPBNRTI,PMPBUDC1:  
                        PMPBUDC2,PMPBUDY1,PMPBUDY2,PMPBUDD1,PMPBUDD2,PMPBUDT1:  
                        PMPBUDT2,PMPBLVIS,PMPBSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMPRB3  RESET     KEY21                                                       
          UNLOCK    PMSPRBA3                                                    
          RETURN
.
