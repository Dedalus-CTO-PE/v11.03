.
. PATPRDIO    
. --------
. Filename     : patprdaf.dat
.
RSPTPRD1  RESET     KEY13                                                       
          READ      PATPRDA1,KEY13;;                                            
          RETURN
.
RAPTPRD1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      PATPRDA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTPRD1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      PATPRDA1,KEY13;PTPDCMBS,PTPDPDRG,PTPDWGHT,PTPDPSEX,PTPDSDAY:
                                   PTPDAGEF,PTPDAGET,PTPDACTV,PTPDSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTPRD1  MOVE      ZERO,OVRCD                                                  
          READKS    PATPRDA1;PTPDCMBS,PTPDPDRG,PTPDWGHT,PTPDPSEX,PTPDSDAY:      
                             PTPDAGEF,PTPDAGET,PTPDACTV,PTPDSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTPRD1  MOVE      ZERO,OVRCD                                                  
          READKP    PATPRDA1;PTPDCMBS,PTPDPDRG,PTPDWGHT,PTPDPSEX,PTPDSDAY:      
                             PTPDAGEF,PTPDAGET,PTPDACTV,PTPDSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTPRD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATPRDA1;PTPDCMBS,PTPDPDRG,PTPDWGHT,PTPDPSEX,PTPDSDAY:      
                             PTPDAGEF,PTPDAGET,PTPDACTV,PTPDSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTPRD1  RESET     KEY13                                                       
          WRITE     PATPRDA1,KEY13;PTPDCMBS,PTPDPDRG,PTPDWGHT,PTPDPSEX,PTPDSDAY:
                                   PTPDAGEF,PTPDAGET,PTPDACTV,PTPDSPAR          
          RETURN
.
DEPTPRD1  RESET     KEY13                                                       
          DELETE    PATPRDA1,KEY13                                              
          RETURN
.
RLPTPRD1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READL     PATPRDA1,KEY13;PTPDCMBS,PTPDPDRG,PTPDWGHT,PTPDPSEX,PTPDSDAY:
                                   PTPDAGEF,PTPDAGET,PTPDACTV,PTPDSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTPRD1  MOVE      ZERO,OVRCD                                                  
          READLKS   PATPRDA1;PTPDCMBS,PTPDPDRG,PTPDWGHT,PTPDPSEX,PTPDSDAY:      
                             PTPDAGEF,PTPDAGET,PTPDACTV,PTPDSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTPRD1  MOVE      ZERO,OVRCD                                                  
          READLKP   PATPRDA1;PTPDCMBS,PTPDPDRG,PTPDWGHT,PTPDPSEX,PTPDSDAY:      
                             PTPDAGEF,PTPDAGET,PTPDACTV,PTPDSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTPRD1  RESET     KEY13                                                       
          UNLOCK    PATPRDA1                                                    
          RETURN
.
RSPTPRD2  RESET     KEY16                                                       
          READ      PATPRDA2,KEY16;;                                            
          RETURN
.
RAPTPRD2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PATPRDA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTPRD2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PATPRDA2,KEY16;PTPDCMBS,PTPDPDRG,PTPDWGHT,PTPDPSEX,PTPDSDAY:
                                   PTPDAGEF,PTPDAGET,PTPDACTV,PTPDSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTPRD2  MOVE      ZERO,OVRCD                                                  
          READKS    PATPRDA2;PTPDCMBS,PTPDPDRG,PTPDWGHT,PTPDPSEX,PTPDSDAY:      
                             PTPDAGEF,PTPDAGET,PTPDACTV,PTPDSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTPRD2  MOVE      ZERO,OVRCD                                                  
          READKP    PATPRDA2;PTPDCMBS,PTPDPDRG,PTPDWGHT,PTPDPSEX,PTPDSDAY:      
                             PTPDAGEF,PTPDAGET,PTPDACTV,PTPDSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTPRD2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATPRDA2;PTPDCMBS,PTPDPDRG,PTPDWGHT,PTPDPSEX,PTPDSDAY:      
                             PTPDAGEF,PTPDAGET,PTPDACTV,PTPDSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTPRD2  RESET     KEY16                                                       
          WRITE     PATPRDA2,KEY16;PTPDCMBS,PTPDPDRG,PTPDWGHT,PTPDPSEX,PTPDSDAY:
                                   PTPDAGEF,PTPDAGET,PTPDACTV,PTPDSPAR          
          RETURN
.
DEPTPRD2  RESET     KEY16                                                       
          DELETE    PATPRDA2,KEY16                                              
          RETURN
.
RLPTPRD2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     PATPRDA2,KEY16;PTPDCMBS,PTPDPDRG,PTPDWGHT,PTPDPSEX,PTPDSDAY:
                                   PTPDAGEF,PTPDAGET,PTPDACTV,PTPDSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTPRD2  MOVE      ZERO,OVRCD                                                  
          READLKS   PATPRDA2;PTPDCMBS,PTPDPDRG,PTPDWGHT,PTPDPSEX,PTPDSDAY:      
                             PTPDAGEF,PTPDAGET,PTPDACTV,PTPDSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTPRD2  MOVE      ZERO,OVRCD                                                  
          READLKP   PATPRDA2;PTPDCMBS,PTPDPDRG,PTPDWGHT,PTPDPSEX,PTPDSDAY:      
                             PTPDAGEF,PTPDAGET,PTPDACTV,PTPDSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTPRD2  RESET     KEY16                                                       
          UNLOCK    PATPRDA2                                                    
          RETURN
.
