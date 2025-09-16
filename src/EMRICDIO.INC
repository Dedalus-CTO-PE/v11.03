.
. EMRICDIO    
. --------
. Filename     : emricdaf.dat
.
RSEMICD1  RESET     KEY9                                                        
          READ      EMRICDA1,KEY9;;                                             
          RETURN
.
RAEMICD1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      EMRICDA1,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMICD1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      EMRICDA1,KEY9;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD: 
                                  EMICKEYW,EMICMETH,EMICSPAR                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMICD1  MOVE      ZERO,OVRCD                                                  
          READKS    EMRICDA1;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD:      
                             EMICKEYW,EMICMETH,EMICSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMICD1  MOVE      ZERO,OVRCD                                                  
          READKP    EMRICDA1;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD:      
                             EMICKEYW,EMICMETH,EMICSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMICD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRICDA1;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD:      
                             EMICKEYW,EMICMETH,EMICSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMICD1  RESET     KEY9                                                        
          WRITE     EMRICDA1,KEY9;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD: 
                                  EMICKEYW,EMICMETH,EMICSPAR                    
          RETURN
.
DEEMICD1  RESET     KEY9                                                        
          DELETE    EMRICDA1,KEY9                                               
          RETURN
.
RLEMICD1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READL     EMRICDA1,KEY9;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD: 
                                  EMICKEYW,EMICMETH,EMICSPAR                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMICD1  MOVE      ZERO,OVRCD                                                  
          READLKS   EMRICDA1;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD:      
                             EMICKEYW,EMICMETH,EMICSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMICD1  MOVE      ZERO,OVRCD                                                  
          READLKP   EMRICDA1;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD:      
                             EMICKEYW,EMICMETH,EMICSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMICD1  RESET     KEY9                                                        
          UNLOCK    EMRICDA1                                                    
          RETURN
.
RSEMICD2  RESET     KEY79                                                       
          READ      EMRICDA2,KEY79;;                                            
          RETURN
.
RAEMICD2  RESET     KEY79                                                       
          MOVE      ZERO,OVRCD
          READ      EMRICDA2,KEY79;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMICD2  RESET     KEY79                                                       
          MOVE      ZERO,OVRCD
          READ      EMRICDA2,KEY79;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD:
                                   EMICKEYW,EMICMETH,EMICSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMICD2  MOVE      ZERO,OVRCD                                                  
          READKS    EMRICDA2;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD:      
                             EMICKEYW,EMICMETH,EMICSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMICD2  MOVE      ZERO,OVRCD                                                  
          READKP    EMRICDA2;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD:      
                             EMICKEYW,EMICMETH,EMICSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMICD2  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRICDA2;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD:      
                             EMICKEYW,EMICMETH,EMICSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMICD2  RESET     KEY79                                                       
          WRITE     EMRICDA2,KEY79;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD:
                                   EMICKEYW,EMICMETH,EMICSPAR                   
          RETURN
.
DEEMICD2  RESET     KEY79                                                       
          DELETE    EMRICDA2,KEY79                                              
          RETURN
.
RLEMICD2  RESET     KEY79                                                       
          MOVE      ZERO,OVRCD
          READL     EMRICDA2,KEY79;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD:
                                   EMICKEYW,EMICMETH,EMICSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMICD2  MOVE      ZERO,OVRCD                                                  
          READLKS   EMRICDA2;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD:      
                             EMICKEYW,EMICMETH,EMICSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMICD2  MOVE      ZERO,OVRCD                                                  
          READLKP   EMRICDA2;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD:      
                             EMICKEYW,EMICMETH,EMICSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMICD2  RESET     KEY79                                                       
          UNLOCK    EMRICDA2                                                    
          RETURN
.
RSEMICD3  RESET     KEY18                                                       
          READ      EMRICDA3,KEY18;;                                            
          RETURN
.
RAEMICD3  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      EMRICDA3,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMICD3  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      EMRICDA3,KEY18;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD:
                                   EMICKEYW,EMICMETH,EMICSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMICD3  MOVE      ZERO,OVRCD                                                  
          READKS    EMRICDA3;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD:      
                             EMICKEYW,EMICMETH,EMICSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMICD3  MOVE      ZERO,OVRCD                                                  
          READKP    EMRICDA3;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD:      
                             EMICKEYW,EMICMETH,EMICSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMICD3  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRICDA3;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD:      
                             EMICKEYW,EMICMETH,EMICSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMICD3  RESET     KEY18                                                       
          WRITE     EMRICDA3,KEY18;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD:
                                   EMICKEYW,EMICMETH,EMICSPAR                   
          RETURN
.
DEEMICD3  RESET     KEY18                                                       
          DELETE    EMRICDA3,KEY18                                              
          RETURN
.
RLEMICD3  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READL     EMRICDA3,KEY18;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD:
                                   EMICKEYW,EMICMETH,EMICSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMICD3  MOVE      ZERO,OVRCD                                                  
          READLKS   EMRICDA3;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD:      
                             EMICKEYW,EMICMETH,EMICSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMICD3  MOVE      ZERO,OVRCD                                                  
          READLKP   EMRICDA3;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD:      
                             EMICKEYW,EMICMETH,EMICSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMICD3  RESET     KEY18                                                       
          UNLOCK    EMRICDA3                                                    
          RETURN
.
RSEMICD4  RESET     KEY18                                                       
          READ      EMRICDA4,KEY18;;                                            
          RETURN
.
RAEMICD4  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      EMRICDA4,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMICD4  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      EMRICDA4,KEY18;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD:
                                   EMICKEYW,EMICMETH,EMICSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMICD4  MOVE      ZERO,OVRCD                                                  
          READKS    EMRICDA4;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD:      
                             EMICKEYW,EMICMETH,EMICSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMICD4  MOVE      ZERO,OVRCD                                                  
          READKP    EMRICDA4;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD:      
                             EMICKEYW,EMICMETH,EMICSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMICD4  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRICDA4;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD:      
                             EMICKEYW,EMICMETH,EMICSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMICD4  RESET     KEY18                                                       
          WRITE     EMRICDA4,KEY18;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD:
                                   EMICKEYW,EMICMETH,EMICSPAR                   
          RETURN
.
DEEMICD4  RESET     KEY18                                                       
          DELETE    EMRICDA4,KEY18                                              
          RETURN
.
RLEMICD4  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READL     EMRICDA4,KEY18;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD:
                                   EMICKEYW,EMICMETH,EMICSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMICD4  MOVE      ZERO,OVRCD                                                  
          READLKS   EMRICDA4;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD:      
                             EMICKEYW,EMICMETH,EMICSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMICD4  MOVE      ZERO,OVRCD                                                  
          READLKP   EMRICDA4;EMIC9COD,EMICDESC,EMIC10CD,EMICACTV,EMICVEMD:      
                             EMICKEYW,EMICMETH,EMICSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMICD4  RESET     KEY18                                                       
          UNLOCK    EMRICDA4                                                    
          RETURN
.
