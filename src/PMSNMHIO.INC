.
. PMSNMHIO    
. --------
. Filename     : pmsnmhaf.dat
.
RSPMNMH1  RESET     KEY17                                                       
          READ      PMSNMHA1,KEY17;;                                            
          RETURN
.
RAPMNMH1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      PMSNMHA1,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMNMH1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      PMSNMHA1,KEY17;PMNHXDAT,PMNHDHBC,PMNHAGEN,PMNHBTCH,PMNHPENV:
                        PMNHSTAT,PMNHFDAT,PMNHTDAT,PMNHFVER,PMNHFNAM,PMNHRECS:  
                        PMNHPROC,PMNHRDEL,PMNHRINS,PMNHRREJ,PMNHLDAT,PMNHUSRS:  
                        PMNHUDAT,PMNHUTIM,PMNHSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMNMH1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSNMHA1;PMNHXDAT,PMNHDHBC,PMNHAGEN,PMNHBTCH,PMNHPENV:      
                        PMNHSTAT,PMNHFDAT,PMNHTDAT,PMNHFVER,PMNHFNAM,PMNHRECS:  
                        PMNHPROC,PMNHRDEL,PMNHRINS,PMNHRREJ,PMNHLDAT,PMNHUSRS:  
                        PMNHUDAT,PMNHUTIM,PMNHSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMNMH1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSNMHA1;PMNHXDAT,PMNHDHBC,PMNHAGEN,PMNHBTCH,PMNHPENV:      
                        PMNHSTAT,PMNHFDAT,PMNHTDAT,PMNHFVER,PMNHFNAM,PMNHRECS:  
                        PMNHPROC,PMNHRDEL,PMNHRINS,PMNHRREJ,PMNHLDAT,PMNHUSRS:  
                        PMNHUDAT,PMNHUTIM,PMNHSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMNMH1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSNMHA1;PMNHXDAT,PMNHDHBC,PMNHAGEN,PMNHBTCH,PMNHPENV:      
                        PMNHSTAT,PMNHFDAT,PMNHTDAT,PMNHFVER,PMNHFNAM,PMNHRECS:  
                        PMNHPROC,PMNHRDEL,PMNHRINS,PMNHRREJ,PMNHLDAT,PMNHUSRS:  
                        PMNHUDAT,PMNHUTIM,PMNHSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMNMH1  RESET     KEY17                                                       
          WRITE     PMSNMHA1,KEY17;PMNHXDAT,PMNHDHBC,PMNHAGEN,PMNHBTCH,PMNHPENV:
                        PMNHSTAT,PMNHFDAT,PMNHTDAT,PMNHFVER,PMNHFNAM,PMNHRECS:  
                        PMNHPROC,PMNHRDEL,PMNHRINS,PMNHRREJ,PMNHLDAT,PMNHUSRS:  
                        PMNHUDAT,PMNHUTIM,PMNHSPAR                              
          RETURN
.
DEPMNMH1  RESET     KEY17                                                       
          DELETE    PMSNMHA1,KEY17                                              
          RETURN
.
RLPMNMH1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READL     PMSNMHA1,KEY17;PMNHXDAT,PMNHDHBC,PMNHAGEN,PMNHBTCH,PMNHPENV:
                        PMNHSTAT,PMNHFDAT,PMNHTDAT,PMNHFVER,PMNHFNAM,PMNHRECS:  
                        PMNHPROC,PMNHRDEL,PMNHRINS,PMNHRREJ,PMNHLDAT,PMNHUSRS:  
                        PMNHUDAT,PMNHUTIM,PMNHSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMNMH1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSNMHA1;PMNHXDAT,PMNHDHBC,PMNHAGEN,PMNHBTCH,PMNHPENV:      
                        PMNHSTAT,PMNHFDAT,PMNHTDAT,PMNHFVER,PMNHFNAM,PMNHRECS:  
                        PMNHPROC,PMNHRDEL,PMNHRINS,PMNHRREJ,PMNHLDAT,PMNHUSRS:  
                        PMNHUDAT,PMNHUTIM,PMNHSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMNMH1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSNMHA1;PMNHXDAT,PMNHDHBC,PMNHAGEN,PMNHBTCH,PMNHPENV:      
                        PMNHSTAT,PMNHFDAT,PMNHTDAT,PMNHFVER,PMNHFNAM,PMNHRECS:  
                        PMNHPROC,PMNHRDEL,PMNHRINS,PMNHRREJ,PMNHLDAT,PMNHUSRS:  
                        PMNHUDAT,PMNHUTIM,PMNHSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMNMH1  RESET     KEY17                                                       
          UNLOCK    PMSNMHA1                                                    
          RETURN
.
