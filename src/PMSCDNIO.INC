.
. PMSCDNIO    
. --------
. Filename     : pmscdnaf.dat
.
RSPMCDN1  RESET     KEY8                                                        
          READ      PMSCDNA1,KEY8;;                                             
          RETURN
.
RAPMCDN1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSCDNA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCDN1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSCDNA1,KEY8;PMDNVISN,PMDNURNO,PMDNSTAT,PMDNPW01,PMDNPW02: 
                        PMDNPW03,PMDNPW04,PMDNPW05,PMDNPW06,PMDNPW07,PMDNPW08:  
                        PMDNPW09,PMDNPW10,PMDNSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMCDN1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSCDNA1;PMDNVISN,PMDNURNO,PMDNSTAT,PMDNPW01,PMDNPW02:      
                        PMDNPW03,PMDNPW04,PMDNPW05,PMDNPW06,PMDNPW07,PMDNPW08:  
                        PMDNPW09,PMDNPW10,PMDNSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMCDN1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSCDNA1;PMDNVISN,PMDNURNO,PMDNSTAT,PMDNPW01,PMDNPW02:      
                        PMDNPW03,PMDNPW04,PMDNPW05,PMDNPW06,PMDNPW07,PMDNPW08:  
                        PMDNPW09,PMDNPW10,PMDNSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMCDN1                                                                        
          UPDATE    PMSCDNA1;PMDNVISN,PMDNURNO,PMDNSTAT,PMDNPW01,PMDNPW02:      
                        PMDNPW03,PMDNPW04,PMDNPW05,PMDNPW06,PMDNPW07,PMDNPW08:  
                        PMDNPW09,PMDNPW10,PMDNSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMCDN1  RESET     KEY8                                                        
          WRITE     PMSCDNA1,KEY8;PMDNVISN,PMDNURNO,PMDNSTAT,PMDNPW01,PMDNPW02: 
                        PMDNPW03,PMDNPW04,PMDNPW05,PMDNPW06,PMDNPW07,PMDNPW08:  
                        PMDNPW09,PMDNPW10,PMDNSPAR                              
          RETURN
.
DEPMCDN1  RESET     KEY8                                                        
          DELETE    PMSCDNA1,KEY8                                               
          RETURN
.
RLPMCDN1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     PMSCDNA1,KEY8;PMDNVISN,PMDNURNO,PMDNSTAT,PMDNPW01,PMDNPW02: 
                        PMDNPW03,PMDNPW04,PMDNPW05,PMDNPW06,PMDNPW07,PMDNPW08:  
                        PMDNPW09,PMDNPW10,PMDNSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMCDN1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSCDNA1;PMDNVISN,PMDNURNO,PMDNSTAT,PMDNPW01,PMDNPW02:      
                        PMDNPW03,PMDNPW04,PMDNPW05,PMDNPW06,PMDNPW07,PMDNPW08:  
                        PMDNPW09,PMDNPW10,PMDNSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMCDN1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSCDNA1;PMDNVISN,PMDNURNO,PMDNSTAT,PMDNPW01,PMDNPW02:      
                        PMDNPW03,PMDNPW04,PMDNPW05,PMDNPW06,PMDNPW07,PMDNPW08:  
                        PMDNPW09,PMDNPW10,PMDNSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMCDN1  RESET     KEY8                                                        
          UNLOCK    PMSCDNA1                                                    
          RETURN
.
RSPMCDN2  RESET     KEY16                                                       
          READ      PMSCDNA2,KEY16;;                                            
          RETURN
.
RAPMCDN2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCDNA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCDN2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCDNA2,KEY16;PMDNVISN,PMDNURNO,PMDNSTAT,PMDNPW01,PMDNPW02:
                        PMDNPW03,PMDNPW04,PMDNPW05,PMDNPW06,PMDNPW07,PMDNPW08:  
                        PMDNPW09,PMDNPW10,PMDNSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMCDN2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSCDNA2;PMDNVISN,PMDNURNO,PMDNSTAT,PMDNPW01,PMDNPW02:      
                        PMDNPW03,PMDNPW04,PMDNPW05,PMDNPW06,PMDNPW07,PMDNPW08:  
                        PMDNPW09,PMDNPW10,PMDNSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMCDN2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSCDNA2;PMDNVISN,PMDNURNO,PMDNSTAT,PMDNPW01,PMDNPW02:      
                        PMDNPW03,PMDNPW04,PMDNPW05,PMDNPW06,PMDNPW07,PMDNPW08:  
                        PMDNPW09,PMDNPW10,PMDNSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMCDN2                                                                        
          UPDATE    PMSCDNA2;PMDNVISN,PMDNURNO,PMDNSTAT,PMDNPW01,PMDNPW02:      
                        PMDNPW03,PMDNPW04,PMDNPW05,PMDNPW06,PMDNPW07,PMDNPW08:  
                        PMDNPW09,PMDNPW10,PMDNSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMCDN2  RESET     KEY16                                                       
          WRITE     PMSCDNA2,KEY16;PMDNVISN,PMDNURNO,PMDNSTAT,PMDNPW01,PMDNPW02:
                        PMDNPW03,PMDNPW04,PMDNPW05,PMDNPW06,PMDNPW07,PMDNPW08:  
                        PMDNPW09,PMDNPW10,PMDNSPAR                              
          RETURN
.
DEPMCDN2  RESET     KEY16                                                       
          DELETE    PMSCDNA2,KEY16                                              
          RETURN
.
RLPMCDN2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     PMSCDNA2,KEY16;PMDNVISN,PMDNURNO,PMDNSTAT,PMDNPW01,PMDNPW02:
                        PMDNPW03,PMDNPW04,PMDNPW05,PMDNPW06,PMDNPW07,PMDNPW08:  
                        PMDNPW09,PMDNPW10,PMDNSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMCDN2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSCDNA2;PMDNVISN,PMDNURNO,PMDNSTAT,PMDNPW01,PMDNPW02:      
                        PMDNPW03,PMDNPW04,PMDNPW05,PMDNPW06,PMDNPW07,PMDNPW08:  
                        PMDNPW09,PMDNPW10,PMDNSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMCDN2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSCDNA2;PMDNVISN,PMDNURNO,PMDNSTAT,PMDNPW01,PMDNPW02:      
                        PMDNPW03,PMDNPW04,PMDNPW05,PMDNPW06,PMDNPW07,PMDNPW08:  
                        PMDNPW09,PMDNPW10,PMDNSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMCDN2  RESET     KEY16                                                       
          UNLOCK    PMSCDNA2                                                    
          RETURN
.
