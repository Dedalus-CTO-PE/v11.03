.
. PRSDTLIO    
. --------
. Filename     : prsdtlaf.dat
.
RSP2DTL1  RESET     KEY18                                                       
          READ      PRSDTLA1,KEY18;;                                            
          RETURN
.
RAP2DTL1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PRSDTLA1,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDP2DTL1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PRSDTLA1,KEY18;P2DTURUN,P2DTADMN,P2DTEPSS,P2DTCODS,P2DTEPSD:
                        P2DTCODD,P2DTHOSP,P2DTSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKP2DTL1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PRSDTLA1;P2DTURUN,P2DTADMN,P2DTEPSS,P2DTCODS,P2DTEPSD:      
                        P2DTCODD,P2DTHOSP,P2DTSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPP2DTL1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PRSDTLA1;P2DTURUN,P2DTADMN,P2DTEPSS,P2DTCODS,P2DTEPSD:      
                        P2DTCODD,P2DTHOSP,P2DTSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPP2DTL1                                                                        
          UPDATE    PRSDTLA1;P2DTURUN,P2DTADMN,P2DTEPSS,P2DTCODS,P2DTEPSD:      
                        P2DTCODD,P2DTHOSP,P2DTSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRP2DTL1  RESET     KEY18                                                       
          WRITE     PRSDTLA1,KEY18;P2DTURUN,P2DTADMN,P2DTEPSS,P2DTCODS,P2DTEPSD:
                        P2DTCODD,P2DTHOSP,P2DTSPAR                              
          RETURN
.
DEP2DTL1  RESET     KEY18                                                       
          DELETE    PRSDTLA1,KEY18                                              
          RETURN
.
RLP2DTL1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READL     PRSDTLA1,KEY18;P2DTURUN,P2DTADMN,P2DTEPSS,P2DTCODS,P2DTEPSD:
                        P2DTCODD,P2DTHOSP,P2DTSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLP2DTL1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PRSDTLA1;P2DTURUN,P2DTADMN,P2DTEPSS,P2DTCODS,P2DTEPSD:      
                        P2DTCODD,P2DTHOSP,P2DTSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLP2DTL1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PRSDTLA1;P2DTURUN,P2DTADMN,P2DTEPSS,P2DTCODS,P2DTEPSD:      
                        P2DTCODD,P2DTHOSP,P2DTSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUP2DTL1  RESET     KEY18                                                       
          UNLOCK    PRSDTLA1                                                    
          RETURN
.
RSP2DTL2  RESET     KEY18                                                       
          READ      PRSDTLA2,KEY18;;                                            
          RETURN
.
RAP2DTL2  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PRSDTLA2,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDP2DTL2  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PRSDTLA2,KEY18;P2DTURUN,P2DTADMN,P2DTEPSS,P2DTCODS,P2DTEPSD:
                        P2DTCODD,P2DTHOSP,P2DTSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKP2DTL2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PRSDTLA2;P2DTURUN,P2DTADMN,P2DTEPSS,P2DTCODS,P2DTEPSD:      
                        P2DTCODD,P2DTHOSP,P2DTSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPP2DTL2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PRSDTLA2;P2DTURUN,P2DTADMN,P2DTEPSS,P2DTCODS,P2DTEPSD:      
                        P2DTCODD,P2DTHOSP,P2DTSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPP2DTL2                                                                        
          UPDATE    PRSDTLA2;P2DTURUN,P2DTADMN,P2DTEPSS,P2DTCODS,P2DTEPSD:      
                        P2DTCODD,P2DTHOSP,P2DTSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRP2DTL2  RESET     KEY18                                                       
          WRITE     PRSDTLA2,KEY18;P2DTURUN,P2DTADMN,P2DTEPSS,P2DTCODS,P2DTEPSD:
                        P2DTCODD,P2DTHOSP,P2DTSPAR                              
          RETURN
.
DEP2DTL2  RESET     KEY18                                                       
          DELETE    PRSDTLA2,KEY18                                              
          RETURN
.
RLP2DTL2  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READL     PRSDTLA2,KEY18;P2DTURUN,P2DTADMN,P2DTEPSS,P2DTCODS,P2DTEPSD:
                        P2DTCODD,P2DTHOSP,P2DTSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLP2DTL2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PRSDTLA2;P2DTURUN,P2DTADMN,P2DTEPSS,P2DTCODS,P2DTEPSD:      
                        P2DTCODD,P2DTHOSP,P2DTSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLP2DTL2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PRSDTLA2;P2DTURUN,P2DTADMN,P2DTEPSS,P2DTCODS,P2DTEPSD:      
                        P2DTCODD,P2DTHOSP,P2DTSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUP2DTL2  RESET     KEY18                                                       
          UNLOCK    PRSDTLA2                                                    
          RETURN
.
