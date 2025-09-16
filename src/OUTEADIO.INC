.
. OUTEADIO    
. --------
. Filename     : outeadaf.dat
.
RSOTEAD1  RESET     KEY40                                                       
          READ      OUTEADA1,KEY40;;                                            
          RETURN
.
RAOTEAD1  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      OUTEADA1,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTEAD1  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      OUTEADA1,KEY40;OTEDCLID,OTEDRPTC,OTEDSRVI,OTEDSRVC,OTEDITMN:
                                   OTEDSERB,OTEDNOPA,OTEDEXPC,OTEDCTID,OTEDRKEY:
                                   OTEDSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTEAD1  MOVE      ZERO,OVRCD                                                  
          READKS    OUTEADA1;OTEDCLID,OTEDRPTC,OTEDSRVI,OTEDSRVC,OTEDITMN:      
                             OTEDSERB,OTEDNOPA,OTEDEXPC,OTEDCTID,OTEDRKEY:      
                             OTEDSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTEAD1  MOVE      ZERO,OVRCD                                                  
          READKP    OUTEADA1;OTEDCLID,OTEDRPTC,OTEDSRVI,OTEDSRVC,OTEDITMN:      
                             OTEDSERB,OTEDNOPA,OTEDEXPC,OTEDCTID,OTEDRKEY:      
                             OTEDSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTEAD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTEADA1;OTEDCLID,OTEDRPTC,OTEDSRVI,OTEDSRVC,OTEDITMN:      
                             OTEDSERB,OTEDNOPA,OTEDEXPC,OTEDCTID,OTEDRKEY:      
                             OTEDSPAR                                           
          RETURN
.
WROTEAD1  RESET     KEY40                                                       
          WRITE     OUTEADA1,KEY40;OTEDCLID,OTEDRPTC,OTEDSRVI,OTEDSRVC,OTEDITMN:
                                   OTEDSERB,OTEDNOPA,OTEDEXPC,OTEDCTID,OTEDRKEY:
                                   OTEDSPAR                                     
          RETURN
.
DEOTEAD1  RESET     KEY40                                                       
          DELETE    OUTEADA1,KEY40                                              
          RETURN
.
RSOTEAD2  RESET     KEY64                                                       
          READ      OUTEADA2,KEY64;;                                            
          RETURN
.
RAOTEAD2  RESET     KEY64                                                       
          MOVE      ZERO,OVRCD
          READ      OUTEADA2,KEY64;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTEAD2  RESET     KEY64                                                       
          MOVE      ZERO,OVRCD
          READ      OUTEADA2,KEY64;OTEDCLID,OTEDRPTC,OTEDSRVI,OTEDSRVC,OTEDITMN:
                                   OTEDSERB,OTEDNOPA,OTEDEXPC,OTEDCTID,OTEDRKEY:
                                   OTEDSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTEAD2  MOVE      ZERO,OVRCD                                                  
          READKS    OUTEADA2;OTEDCLID,OTEDRPTC,OTEDSRVI,OTEDSRVC,OTEDITMN:      
                             OTEDSERB,OTEDNOPA,OTEDEXPC,OTEDCTID,OTEDRKEY:      
                             OTEDSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTEAD2  MOVE      ZERO,OVRCD                                                  
          READKP    OUTEADA2;OTEDCLID,OTEDRPTC,OTEDSRVI,OTEDSRVC,OTEDITMN:      
                             OTEDSERB,OTEDNOPA,OTEDEXPC,OTEDCTID,OTEDRKEY:      
                             OTEDSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTEAD2  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTEADA2;OTEDCLID,OTEDRPTC,OTEDSRVI,OTEDSRVC,OTEDITMN:      
                             OTEDSERB,OTEDNOPA,OTEDEXPC,OTEDCTID,OTEDRKEY:      
                             OTEDSPAR                                           
          RETURN
.
WROTEAD2  RESET     KEY64                                                       
          WRITE     OUTEADA2,KEY64;OTEDCLID,OTEDRPTC,OTEDSRVI,OTEDSRVC,OTEDITMN:
                                   OTEDSERB,OTEDNOPA,OTEDEXPC,OTEDCTID,OTEDRKEY:
                                   OTEDSPAR                                     
          RETURN
.
DEOTEAD2  RESET     KEY64                                                       
          DELETE    OUTEADA2,KEY64                                              
          RETURN
.
