.
. CCSSTYIO    
. --------
. Filename     : ccsstyaf.dat
.
RSCCST1   RESET     KEY3                                                        
          READ      CCSSTYA1,KEY3;;                                             
          RETURN
.
RACCST1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      CCSSTYA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCST1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      CCSSTYA1,KEY3;CCSTSTY,CCSTDES,CCSTLEN,CCSTJR,CCSTZF:        
                        CCSTDE,CCSTSPA                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCST1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSSTYA1;CCSTSTY,CCSTDES,CCSTLEN,CCSTJR,CCSTZF:             
                        CCSTDE,CCSTSPA                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCST1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSSTYA1;CCSTSTY,CCSTDES,CCSTLEN,CCSTJR,CCSTZF:             
                        CCSTDE,CCSTSPA                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCST1                                                                         
          UPDATE    CCSSTYA1;CCSTSTY,CCSTDES,CCSTLEN,CCSTJR,CCSTZF:             
                        CCSTDE,CCSTSPA                                          
          RETURN
.
WRCCST1   RESET     KEY3                                                        
          WRITE     CCSSTYA1,KEY3;CCSTSTY,CCSTDES,CCSTLEN,CCSTJR,CCSTZF:        
                        CCSTDE,CCSTSPA                                          
          RETURN
.
DECCST1   RESET     KEY3                                                        
          DELETE    CCSSTYA1,KEY3                                               
          RETURN
.
RSCCST2   RESET     KEY38                                                       
          READ      CCSSTYA2,KEY38;;                                            
          RETURN
.
RACCST2   RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      CCSSTYA2,KEY38;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCST2   RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      CCSSTYA2,KEY38;CCSTSTY,CCSTDES,CCSTLEN,CCSTJR,CCSTZF:       
                        CCSTDE,CCSTSPA                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCST2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSSTYA2;CCSTSTY,CCSTDES,CCSTLEN,CCSTJR,CCSTZF:             
                        CCSTDE,CCSTSPA                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCST2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSSTYA2;CCSTSTY,CCSTDES,CCSTLEN,CCSTJR,CCSTZF:             
                        CCSTDE,CCSTSPA                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCST2                                                                         
          UPDATE    CCSSTYA2;CCSTSTY,CCSTDES,CCSTLEN,CCSTJR,CCSTZF:             
                        CCSTDE,CCSTSPA                                          
          RETURN
.
WRCCST2   RESET     KEY38                                                       
          WRITE     CCSSTYA2,KEY38;CCSTSTY,CCSTDES,CCSTLEN,CCSTJR,CCSTZF:       
                        CCSTDE,CCSTSPA                                          
          RETURN
.
DECCST2   RESET     KEY38                                                       
          DELETE    CCSSTYA2,KEY38                                              
          RETURN
.
