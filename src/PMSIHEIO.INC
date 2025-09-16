.
. PMSIHEIO    
. --------
. Filename     : pmsiheaf.dat
.
RSPMIHE1  RESET     KEY72                                                       
          READ      PMSIHEA1,KEY72;;                                            
          RETURN
.
RAPMIHE1  RESET     KEY72                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIHEA1,KEY72;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIHE1  RESET     KEY72                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIHEA1,KEY72;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:
                                   PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:
                                   PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:
                                   PMIEUUID,PMIEDESC,PMIESPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMIHE1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSIHEA1;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:      
                             PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:      
                             PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:      
                             PMIEUUID,PMIEDESC,PMIESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMIHE1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSIHEA1;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:      
                             PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:      
                             PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:      
                             PMIEUUID,PMIEDESC,PMIESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMIHE1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSIHEA1;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:      
                             PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:      
                             PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:      
                             PMIEUUID,PMIEDESC,PMIESPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMIHE1  RESET     KEY72                                                       
          WRITE     PMSIHEA1,KEY72;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:
                                   PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:
                                   PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:
                                   PMIEUUID,PMIEDESC,PMIESPAR                   
          RETURN
.
DEPMIHE1  RESET     KEY72                                                       
          DELETE    PMSIHEA1,KEY72                                              
          RETURN
.
RLPMIHE1  RESET     KEY72                                                       
          MOVE      ZERO,OVRCD
          READL     PMSIHEA1,KEY72;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:
                                   PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:
                                   PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:
                                   PMIEUUID,PMIEDESC,PMIESPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMIHE1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSIHEA1;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:      
                             PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:      
                             PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:      
                             PMIEUUID,PMIEDESC,PMIESPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMIHE1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSIHEA1;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:      
                             PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:      
                             PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:      
                             PMIEUUID,PMIEDESC,PMIESPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMIHE1  RESET     KEY72                                                       
          UNLOCK    PMSIHEA1                                                    
          RETURN
.
RSPMIHE2  RESET     KEY72                                                       
          READ      PMSIHEA2,KEY72;;                                            
          RETURN
.
RAPMIHE2  RESET     KEY72                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIHEA2,KEY72;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIHE2  RESET     KEY72                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIHEA2,KEY72;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:
                                   PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:
                                   PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:
                                   PMIEUUID,PMIEDESC,PMIESPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMIHE2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSIHEA2;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:      
                             PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:      
                             PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:      
                             PMIEUUID,PMIEDESC,PMIESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMIHE2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSIHEA2;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:      
                             PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:      
                             PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:      
                             PMIEUUID,PMIEDESC,PMIESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMIHE2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSIHEA2;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:      
                             PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:      
                             PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:      
                             PMIEUUID,PMIEDESC,PMIESPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMIHE2  RESET     KEY72                                                       
          WRITE     PMSIHEA2,KEY72;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:
                                   PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:
                                   PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:
                                   PMIEUUID,PMIEDESC,PMIESPAR                   
          RETURN
.
DEPMIHE2  RESET     KEY72                                                       
          DELETE    PMSIHEA2,KEY72                                              
          RETURN
.
RLPMIHE2  RESET     KEY72                                                       
          MOVE      ZERO,OVRCD
          READL     PMSIHEA2,KEY72;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:
                                   PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:
                                   PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:
                                   PMIEUUID,PMIEDESC,PMIESPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMIHE2  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSIHEA2;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:      
                             PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:      
                             PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:      
                             PMIEUUID,PMIEDESC,PMIESPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMIHE2  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSIHEA2;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:      
                             PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:      
                             PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:      
                             PMIEUUID,PMIEDESC,PMIESPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMIHE2  RESET     KEY72                                                       
          UNLOCK    PMSIHEA2                                                    
          RETURN
.
RSPMIHE3  RESET     KEY72                                                       
          READ      PMSIHEA3,KEY72;;                                            
          RETURN
.
RAPMIHE3  RESET     KEY72                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIHEA3,KEY72;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIHE3  RESET     KEY72                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIHEA3,KEY72;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:
                                   PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:
                                   PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:
                                   PMIEUUID,PMIEDESC,PMIESPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMIHE3  MOVE      ZERO,OVRCD                                                  
          READKS    PMSIHEA3;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:      
                             PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:      
                             PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:      
                             PMIEUUID,PMIEDESC,PMIESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMIHE3  MOVE      ZERO,OVRCD                                                  
          READKP    PMSIHEA3;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:      
                             PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:      
                             PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:      
                             PMIEUUID,PMIEDESC,PMIESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMIHE3  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSIHEA3;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:      
                             PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:      
                             PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:      
                             PMIEUUID,PMIEDESC,PMIESPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMIHE3  RESET     KEY72                                                       
          WRITE     PMSIHEA3,KEY72;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:
                                   PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:
                                   PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:
                                   PMIEUUID,PMIEDESC,PMIESPAR                   
          RETURN
.
DEPMIHE3  RESET     KEY72                                                       
          DELETE    PMSIHEA3,KEY72                                              
          RETURN
.
RLPMIHE3  RESET     KEY72                                                       
          MOVE      ZERO,OVRCD
          READL     PMSIHEA3,KEY72;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:
                                   PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:
                                   PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:
                                   PMIEUUID,PMIEDESC,PMIESPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMIHE3  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSIHEA3;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:      
                             PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:      
                             PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:      
                             PMIEUUID,PMIEDESC,PMIESPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMIHE3  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSIHEA3;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:      
                             PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:      
                             PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:      
                             PMIEUUID,PMIEDESC,PMIESPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMIHE3  RESET     KEY72                                                       
          UNLOCK    PMSIHEA3                                                    
          RETURN
.
RSPMIHE4  RESET     KEY88                                                       
          READ      PMSIHEA4,KEY88;;                                            
          RETURN
.
RAPMIHE4  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIHEA4,KEY88;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIHE4  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIHEA4,KEY88;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:
                                   PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:
                                   PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:
                                   PMIEUUID,PMIEDESC,PMIESPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMIHE4  MOVE      ZERO,OVRCD                                                  
          READKS    PMSIHEA4;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:      
                             PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:      
                             PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:      
                             PMIEUUID,PMIEDESC,PMIESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMIHE4  MOVE      ZERO,OVRCD                                                  
          READKP    PMSIHEA4;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:      
                             PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:      
                             PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:      
                             PMIEUUID,PMIEDESC,PMIESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMIHE4  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSIHEA4;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:      
                             PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:      
                             PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:      
                             PMIEUUID,PMIEDESC,PMIESPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMIHE4  RESET     KEY88                                                       
          WRITE     PMSIHEA4,KEY88;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:
                                   PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:
                                   PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:
                                   PMIEUUID,PMIEDESC,PMIESPAR                   
          RETURN
.
DEPMIHE4  RESET     KEY88                                                       
          DELETE    PMSIHEA4,KEY88                                              
          RETURN
.
RLPMIHE4  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READL     PMSIHEA4,KEY88;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:
                                   PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:
                                   PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:
                                   PMIEUUID,PMIEDESC,PMIESPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMIHE4  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSIHEA4;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:      
                             PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:      
                             PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:      
                             PMIEUUID,PMIEDESC,PMIESPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMIHE4  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSIHEA4;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:      
                             PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:      
                             PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:      
                             PMIEUUID,PMIEDESC,PMIESPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMIHE4  RESET     KEY88                                                       
          UNLOCK    PMSIHEA4                                                    
          RETURN
.
RSPMIHE5  RESET     KEY88                                                       
          READ      PMSIHEA5,KEY88;;                                            
          RETURN
.
RAPMIHE5  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIHEA5,KEY88;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIHE5  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIHEA5,KEY88;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:
                                   PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:
                                   PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:
                                   PMIEUUID,PMIEDESC,PMIESPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMIHE5  MOVE      ZERO,OVRCD                                                  
          READKS    PMSIHEA5;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:      
                             PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:      
                             PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:      
                             PMIEUUID,PMIEDESC,PMIESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMIHE5  MOVE      ZERO,OVRCD                                                  
          READKP    PMSIHEA5;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:      
                             PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:      
                             PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:      
                             PMIEUUID,PMIEDESC,PMIESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMIHE5  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSIHEA5;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:      
                             PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:      
                             PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:      
                             PMIEUUID,PMIEDESC,PMIESPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMIHE5  RESET     KEY88                                                       
          WRITE     PMSIHEA5,KEY88;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:
                                   PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:
                                   PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:
                                   PMIEUUID,PMIEDESC,PMIESPAR                   
          RETURN
.
DEPMIHE5  RESET     KEY88                                                       
          DELETE    PMSIHEA5,KEY88                                              
          RETURN
.
RLPMIHE5  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READL     PMSIHEA5,KEY88;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:
                                   PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:
                                   PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:
                                   PMIEUUID,PMIEDESC,PMIESPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMIHE5  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSIHEA5;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:      
                             PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:      
                             PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:      
                             PMIEUUID,PMIEDESC,PMIESPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMIHE5  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSIHEA5;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:      
                             PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:      
                             PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:      
                             PMIEUUID,PMIEDESC,PMIESPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMIHE5  RESET     KEY88                                                       
          UNLOCK    PMSIHEA5                                                    
          RETURN
.
RSPMIHE6  RESET     KEY88                                                       
          READ      PMSIHEA6,KEY88;;                                            
          RETURN
.
RAPMIHE6  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIHEA6,KEY88;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIHE6  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIHEA6,KEY88;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:
                                   PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:
                                   PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:
                                   PMIEUUID,PMIEDESC,PMIESPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMIHE6  MOVE      ZERO,OVRCD                                                  
          READKS    PMSIHEA6;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:      
                             PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:      
                             PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:      
                             PMIEUUID,PMIEDESC,PMIESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMIHE6  MOVE      ZERO,OVRCD                                                  
          READKP    PMSIHEA6;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:      
                             PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:      
                             PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:      
                             PMIEUUID,PMIEDESC,PMIESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMIHE6  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSIHEA6;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:      
                             PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:      
                             PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:      
                             PMIEUUID,PMIEDESC,PMIESPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMIHE6  RESET     KEY88                                                       
          WRITE     PMSIHEA6,KEY88;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:
                                   PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:
                                   PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:
                                   PMIEUUID,PMIEDESC,PMIESPAR                   
          RETURN
.
DEPMIHE6  RESET     KEY88                                                       
          DELETE    PMSIHEA6,KEY88                                              
          RETURN
.
RLPMIHE6  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READL     PMSIHEA6,KEY88;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:
                                   PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:
                                   PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:
                                   PMIEUUID,PMIEDESC,PMIESPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMIHE6  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSIHEA6;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:      
                             PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:      
                             PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:      
                             PMIEUUID,PMIEDESC,PMIESPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMIHE6  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSIHEA6;PMIEURNO,PMIEIHIN,PMIEOTUR,PMIEADAT,PMIEATIM:      
                             PMIEVSTA,PMIEASTA,PMIEIHIS,PMIEHISV,PMIEMESI:      
                             PMIECDAT,PMIECTIM,PMIECUID,PMIEUDAT,PMIEUTIM:      
                             PMIEUUID,PMIEDESC,PMIESPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMIHE6  RESET     KEY88                                                       
          UNLOCK    PMSIHEA6                                                    
          RETURN
.
