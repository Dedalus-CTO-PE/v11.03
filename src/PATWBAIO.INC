.
. PATWBAIO    
. --------
. Filename     : patwbaaf.dat
.
RSPTWBA1  RESET     KEY9                                                        
          READ      PATWBAA1,KEY9;;                                             
          RETURN
.
RAPTWBA1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      PATWBAA1,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTWBA1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      PATWBAA1,KEY9;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR:  
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTWBA1  MOVE      ZERO,OVRCD                                                  
          READKS    PATWBAA1;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR:       
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTWBA1  MOVE      ZERO,OVRCD                                                  
          READKP    PATWBAA1;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR:       
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTWBA1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATWBAA1;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR:       
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTWBA1  RESET     KEY9                                                        
          WRITE     PATWBAA1,KEY9;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR:  
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          RETURN
.
DEPTWBA1  RESET     KEY9                                                        
          DELETE    PATWBAA1,KEY9                                               
          RETURN
.
RLPTWBA1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READL     PATWBAA1,KEY9;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR:  
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTWBA1  MOVE      ZERO,OVRCD                                                  
          READLKS   PATWBAA1;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR:       
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTWBA1  MOVE      ZERO,OVRCD                                                  
          READLKP   PATWBAA1;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR:       
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTWBA1  RESET     KEY9                                                        
          UNLOCK    PATWBAA1                                                    
          RETURN
.
RSPTWBA2  RESET     KEY9                                                        
          READ      PATWBAA2,KEY9;;                                             
          RETURN
.
RAPTWBA2  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      PATWBAA2,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTWBA2  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      PATWBAA2,KEY9;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR:  
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTWBA2  MOVE      ZERO,OVRCD                                                  
          READKS    PATWBAA2;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR:       
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTWBA2  MOVE      ZERO,OVRCD                                                  
          READKP    PATWBAA2;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR:       
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTWBA2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATWBAA2;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR:       
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTWBA2  RESET     KEY9                                                        
          WRITE     PATWBAA2,KEY9;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR:  
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          RETURN
.
DEPTWBA2  RESET     KEY9                                                        
          DELETE    PATWBAA2,KEY9                                               
          RETURN
.
RLPTWBA2  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READL     PATWBAA2,KEY9;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR:  
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTWBA2  MOVE      ZERO,OVRCD                                                  
          READLKS   PATWBAA2;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR:       
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTWBA2  MOVE      ZERO,OVRCD                                                  
          READLKP   PATWBAA2;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR:       
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTWBA2  RESET     KEY9                                                        
          UNLOCK    PATWBAA2                                                    
          RETURN
.
RSPTWBA3  RESET     KEY12                                                       
          READ      PATWBAA3,KEY12;;                                            
          RETURN
.
RAPTWBA3  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PATWBAA3,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTWBA3  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PATWBAA3,KEY12;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR: 
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTWBA3  MOVE      ZERO,OVRCD                                                  
          READKS    PATWBAA3;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR:       
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTWBA3  MOVE      ZERO,OVRCD                                                  
          READKP    PATWBAA3;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR:       
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTWBA3  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATWBAA3;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR:       
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTWBA3  RESET     KEY12                                                       
          WRITE     PATWBAA3,KEY12;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR: 
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          RETURN
.
DEPTWBA3  RESET     KEY12                                                       
          DELETE    PATWBAA3,KEY12                                              
          RETURN
.
RLPTWBA3  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READL     PATWBAA3,KEY12;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR: 
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTWBA3  MOVE      ZERO,OVRCD                                                  
          READLKS   PATWBAA3;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR:       
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTWBA3  MOVE      ZERO,OVRCD                                                  
          READLKP   PATWBAA3;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR:       
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTWBA3  RESET     KEY12                                                       
          UNLOCK    PATWBAA3                                                    
          RETURN
.
RSPTWBA4  RESET     KEY12                                                       
          READ      PATWBAA4,KEY12;;                                            
          RETURN
.
RAPTWBA4  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PATWBAA4,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTWBA4  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PATWBAA4,KEY12;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR: 
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTWBA4  MOVE      ZERO,OVRCD                                                  
          READKS    PATWBAA4;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR:       
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTWBA4  MOVE      ZERO,OVRCD                                                  
          READKP    PATWBAA4;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR:       
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTWBA4  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATWBAA4;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR:       
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTWBA4  RESET     KEY12                                                       
          WRITE     PATWBAA4,KEY12;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR: 
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          RETURN
.
DEPTWBA4  RESET     KEY12                                                       
          DELETE    PATWBAA4,KEY12                                              
          RETURN
.
RLPTWBA4  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READL     PATWBAA4,KEY12;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR: 
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTWBA4  MOVE      ZERO,OVRCD                                                  
          READLKS   PATWBAA4;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR:       
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTWBA4  MOVE      ZERO,OVRCD                                                  
          READLKP   PATWBAA4;PTWAWARD,PTWABED,PTWABATR,PTWAHOSP,PTWADTCR:       
                        PTWATMCR,PTWAIDCR,PTWADTUP,PTWATMUP,PTWAIDUP,PTWASPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTWBA4  RESET     KEY12                                                       
          UNLOCK    PATWBAA4                                                    
          RETURN
.
