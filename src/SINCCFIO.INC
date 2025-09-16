.
. SINCCFIO    
. --------
. Filename     : sinccfaf.dat
.
RSSICF1   RESET     KEY16                                                       
          READ      SINCCFA1,KEY16;;                                            
          RETURN
.
RASICF1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      SINCCFA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSICF1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      SINCCFA1,KEY16;SICFCST,SICFSUB,SICFDAT,SICFAMT,SICFBUD:     
                        SICFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSICF1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCCFA1;SICFCST,SICFSUB,SICFDAT,SICFAMT,SICFBUD:           
                        SICFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSICF1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCCFA1;SICFCST,SICFSUB,SICFDAT,SICFAMT,SICFBUD:           
                        SICFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSICF1                                                                         
          UPDATE    SINCCFA1;SICFCST,SICFSUB,SICFDAT,SICFAMT,SICFBUD:           
                        SICFSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSICF1   RESET     KEY16                                                       
          WRITE     SINCCFA1,KEY16;SICFCST,SICFSUB,SICFDAT,SICFAMT,SICFBUD:     
                        SICFSPAR                                                
          RETURN
.
DESICF1   RESET     KEY16                                                       
          DELETE    SINCCFA1,KEY16                                              
          RETURN
.
RLSICF1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     SINCCFA1,KEY16;SICFCST,SICFSUB,SICFDAT,SICFAMT,SICFBUD:     
                        SICFSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSICF1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINCCFA1;SICFCST,SICFSUB,SICFDAT,SICFAMT,SICFBUD:           
                        SICFSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSICF1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINCCFA1;SICFCST,SICFSUB,SICFDAT,SICFAMT,SICFBUD:           
                        SICFSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSICF1   RESET     KEY16                                                       
          UNLOCK    SINCCFA1                                                    
          RETURN
.
RSSICF2   RESET     KEY16                                                       
          READ      SINCCFA2,KEY16;;                                            
          RETURN
.
RASICF2   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      SINCCFA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSICF2   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      SINCCFA2,KEY16;SICFCST,SICFSUB,SICFDAT,SICFAMT,SICFBUD:     
                        SICFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSICF2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCCFA2;SICFCST,SICFSUB,SICFDAT,SICFAMT,SICFBUD:           
                        SICFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSICF2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCCFA2;SICFCST,SICFSUB,SICFDAT,SICFAMT,SICFBUD:           
                        SICFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSICF2                                                                         
          UPDATE    SINCCFA2;SICFCST,SICFSUB,SICFDAT,SICFAMT,SICFBUD:           
                        SICFSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSICF2   RESET     KEY16                                                       
          WRITE     SINCCFA2,KEY16;SICFCST,SICFSUB,SICFDAT,SICFAMT,SICFBUD:     
                        SICFSPAR                                                
          RETURN
.
DESICF2   RESET     KEY16                                                       
          DELETE    SINCCFA2,KEY16                                              
          RETURN
.
RLSICF2   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     SINCCFA2,KEY16;SICFCST,SICFSUB,SICFDAT,SICFAMT,SICFBUD:     
                        SICFSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSICF2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINCCFA2;SICFCST,SICFSUB,SICFDAT,SICFAMT,SICFBUD:           
                        SICFSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSICF2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINCCFA2;SICFCST,SICFSUB,SICFDAT,SICFAMT,SICFBUD:           
                        SICFSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSICF2   RESET     KEY16                                                       
          UNLOCK    SINCCFA2                                                    
          RETURN
.
