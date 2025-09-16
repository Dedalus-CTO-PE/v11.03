.
. PMSNMDIO    
. --------
. Filename     : pmsnmdaf.dat
.
RSPMNMD1  RESET     KEY19                                                       
          READ      PMSNMDA1,KEY19;;                                            
          RETURN
.
RAPMNMD1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSNMDA1,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMNMD1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSNMDA1,KEY19;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMNMD1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSNMDA1;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:      
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMNMD1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSNMDA1;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:      
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMNMD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSNMDA1;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:      
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMNMD1  RESET     KEY19                                                       
          WRITE     PMSNMDA1,KEY19;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          RETURN
.
DEPMNMD1  RESET     KEY19                                                       
          DELETE    PMSNMDA1,KEY19                                              
          RETURN
.
RLPMNMD1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READL     PMSNMDA1,KEY19;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMNMD1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSNMDA1;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:      
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMNMD1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSNMDA1;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:      
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMNMD1  RESET     KEY19                                                       
          UNLOCK    PMSNMDA1                                                    
          RETURN
.
RSPMNMD2  RESET     KEY20                                                       
          READ      PMSNMDA2,KEY20;;                                            
          RETURN
.
RAPMNMD2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSNMDA2,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMNMD2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSNMDA2,KEY20;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMNMD2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSNMDA2;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:      
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMNMD2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSNMDA2;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:      
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMNMD2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSNMDA2;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:      
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMNMD2  RESET     KEY20                                                       
          WRITE     PMSNMDA2,KEY20;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          RETURN
.
DEPMNMD2  RESET     KEY20                                                       
          DELETE    PMSNMDA2,KEY20                                              
          RETURN
.
RLPMNMD2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READL     PMSNMDA2,KEY20;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMNMD2  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSNMDA2;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:      
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMNMD2  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSNMDA2;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:      
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMNMD2  RESET     KEY20                                                       
          UNLOCK    PMSNMDA2                                                    
          RETURN
.
RSPMNMD3  RESET     KEY29                                                       
          READ      PMSNMDA3,KEY29;;                                            
          RETURN
.
RAPMNMD3  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      PMSNMDA3,KEY29;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMNMD3  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      PMSNMDA3,KEY29;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMNMD3  MOVE      ZERO,OVRCD                                                  
          READKS    PMSNMDA3;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:      
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMNMD3  MOVE      ZERO,OVRCD                                                  
          READKP    PMSNMDA3;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:      
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMNMD3  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSNMDA3;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:      
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMNMD3  RESET     KEY29                                                       
          WRITE     PMSNMDA3,KEY29;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          RETURN
.
DEPMNMD3  RESET     KEY29                                                       
          DELETE    PMSNMDA3,KEY29                                              
          RETURN
.
RLPMNMD3  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READL     PMSNMDA3,KEY29;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMNMD3  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSNMDA3;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:      
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMNMD3  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSNMDA3;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:      
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMNMD3  RESET     KEY29                                                       
          UNLOCK    PMSNMDA3                                                    
          RETURN
.
RSPMNMD4  RESET     KEY19                                                       
          READ      PMSNMDA4,KEY19;;                                            
          RETURN
.
RAPMNMD4  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSNMDA4,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMNMD4  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSNMDA4,KEY19;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMNMD4  MOVE      ZERO,OVRCD                                                  
          READKS    PMSNMDA4;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:      
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMNMD4  MOVE      ZERO,OVRCD                                                  
          READKP    PMSNMDA4;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:      
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMNMD4  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSNMDA4;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:      
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMNMD4  RESET     KEY19                                                       
          WRITE     PMSNMDA4,KEY19;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          RETURN
.
DEPMNMD4  RESET     KEY19                                                       
          DELETE    PMSNMDA4,KEY19                                              
          RETURN
.
RLPMNMD4  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READL     PMSNMDA4,KEY19;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMNMD4  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSNMDA4;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:      
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMNMD4  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSNMDA4;PMNDADMN,PMNDPNHI,PMNDETYP,PMNDEDAT,PMNDETIM:      
                        PMNDFACI,PMNDELID,PMNDXDAT,PMNDBTCH,PMNDSTAT,PMNDDIAG:  
                        PMNDLSDT,PMNDLSCD,PMNDERRC,PMNDERRN,PMNDERRT,PMNDUSRS:  
                        PMNDUDAT,PMNDUTIM,PMNDREDT,PMNDSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMNMD4  RESET     KEY19                                                       
          UNLOCK    PMSNMDA4                                                    
          RETURN
.
