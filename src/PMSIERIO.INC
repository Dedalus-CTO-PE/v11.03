.
. PMSIERIO    
. --------
. Filename     : pmsieraf.dat
.
RSPMIER1  RESET     KEY88                                                       
          READ      PMSIERA1,KEY88;;                                            
          RETURN
.
RAPMIER1  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIERA1,KEY88;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIER1  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIERA1,KEY88;PMIRRTYP,PMIRCODE,PMIRINUM,PMIRRDAT,PMIRRTIM:
                        PMIRRUID,PMIRECOD,PMIREMES,PMIRSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMIER1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSIERA1;PMIRRTYP,PMIRCODE,PMIRINUM,PMIRRDAT,PMIRRTIM:      
                        PMIRRUID,PMIRECOD,PMIREMES,PMIRSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMIER1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSIERA1;PMIRRTYP,PMIRCODE,PMIRINUM,PMIRRDAT,PMIRRTIM:      
                        PMIRRUID,PMIRECOD,PMIREMES,PMIRSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMIER1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSIERA1;PMIRRTYP,PMIRCODE,PMIRINUM,PMIRRDAT,PMIRRTIM:      
                        PMIRRUID,PMIRECOD,PMIREMES,PMIRSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMIER1  RESET     KEY88                                                       
          WRITE     PMSIERA1,KEY88;PMIRRTYP,PMIRCODE,PMIRINUM,PMIRRDAT,PMIRRTIM:
                        PMIRRUID,PMIRECOD,PMIREMES,PMIRSPAR                     
          RETURN
.
DEPMIER1  RESET     KEY88                                                       
          DELETE    PMSIERA1,KEY88                                              
          RETURN
.
RLPMIER1  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READL     PMSIERA1,KEY88;PMIRRTYP,PMIRCODE,PMIRINUM,PMIRRDAT,PMIRRTIM:
                        PMIRRUID,PMIRECOD,PMIREMES,PMIRSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMIER1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSIERA1;PMIRRTYP,PMIRCODE,PMIRINUM,PMIRRDAT,PMIRRTIM:      
                        PMIRRUID,PMIRECOD,PMIREMES,PMIRSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMIER1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSIERA1;PMIRRTYP,PMIRCODE,PMIRINUM,PMIRRDAT,PMIRRTIM:      
                        PMIRRUID,PMIRECOD,PMIREMES,PMIRSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMIER1  RESET     KEY88                                                       
          UNLOCK    PMSIERA1                                                    
          RETURN
.
RSPMIER2  RESET     KEY88                                                       
          READ      PMSIERA2,KEY88;;                                            
          RETURN
.
RAPMIER2  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIERA2,KEY88;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIER2  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIERA2,KEY88;PMIRRTYP,PMIRCODE,PMIRINUM,PMIRRDAT,PMIRRTIM:
                        PMIRRUID,PMIRECOD,PMIREMES,PMIRSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMIER2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSIERA2;PMIRRTYP,PMIRCODE,PMIRINUM,PMIRRDAT,PMIRRTIM:      
                        PMIRRUID,PMIRECOD,PMIREMES,PMIRSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMIER2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSIERA2;PMIRRTYP,PMIRCODE,PMIRINUM,PMIRRDAT,PMIRRTIM:      
                        PMIRRUID,PMIRECOD,PMIREMES,PMIRSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMIER2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSIERA2;PMIRRTYP,PMIRCODE,PMIRINUM,PMIRRDAT,PMIRRTIM:      
                        PMIRRUID,PMIRECOD,PMIREMES,PMIRSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMIER2  RESET     KEY88                                                       
          WRITE     PMSIERA2,KEY88;PMIRRTYP,PMIRCODE,PMIRINUM,PMIRRDAT,PMIRRTIM:
                        PMIRRUID,PMIRECOD,PMIREMES,PMIRSPAR                     
          RETURN
.
DEPMIER2  RESET     KEY88                                                       
          DELETE    PMSIERA2,KEY88                                              
          RETURN
.
RLPMIER2  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READL     PMSIERA2,KEY88;PMIRRTYP,PMIRCODE,PMIRINUM,PMIRRDAT,PMIRRTIM:
                        PMIRRUID,PMIRECOD,PMIREMES,PMIRSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMIER2  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSIERA2;PMIRRTYP,PMIRCODE,PMIRINUM,PMIRRDAT,PMIRRTIM:      
                        PMIRRUID,PMIRECOD,PMIREMES,PMIRSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMIER2  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSIERA2;PMIRRTYP,PMIRCODE,PMIRINUM,PMIRRDAT,PMIRRTIM:      
                        PMIRRUID,PMIRECOD,PMIREMES,PMIRSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMIER2  RESET     KEY88                                                       
          UNLOCK    PMSIERA2                                                    
          RETURN
.
RSPMIER3  RESET     KEY88                                                       
          READ      PMSIERA3,KEY88;;                                            
          RETURN
.
RAPMIER3  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIERA3,KEY88;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIER3  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIERA3,KEY88;PMIRRTYP,PMIRCODE,PMIRINUM,PMIRRDAT,PMIRRTIM:
                        PMIRRUID,PMIRECOD,PMIREMES,PMIRSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMIER3  MOVE      ZERO,OVRCD                                                  
          READKS    PMSIERA3;PMIRRTYP,PMIRCODE,PMIRINUM,PMIRRDAT,PMIRRTIM:      
                        PMIRRUID,PMIRECOD,PMIREMES,PMIRSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMIER3  MOVE      ZERO,OVRCD                                                  
          READKP    PMSIERA3;PMIRRTYP,PMIRCODE,PMIRINUM,PMIRRDAT,PMIRRTIM:      
                        PMIRRUID,PMIRECOD,PMIREMES,PMIRSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMIER3  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSIERA3;PMIRRTYP,PMIRCODE,PMIRINUM,PMIRRDAT,PMIRRTIM:      
                        PMIRRUID,PMIRECOD,PMIREMES,PMIRSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMIER3  RESET     KEY88                                                       
          WRITE     PMSIERA3,KEY88;PMIRRTYP,PMIRCODE,PMIRINUM,PMIRRDAT,PMIRRTIM:
                        PMIRRUID,PMIRECOD,PMIREMES,PMIRSPAR                     
          RETURN
.
DEPMIER3  RESET     KEY88                                                       
          DELETE    PMSIERA3,KEY88                                              
          RETURN
.
RLPMIER3  RESET     KEY88                                                       
          MOVE      ZERO,OVRCD
          READL     PMSIERA3,KEY88;PMIRRTYP,PMIRCODE,PMIRINUM,PMIRRDAT,PMIRRTIM:
                        PMIRRUID,PMIRECOD,PMIREMES,PMIRSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMIER3  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSIERA3;PMIRRTYP,PMIRCODE,PMIRINUM,PMIRRDAT,PMIRRTIM:      
                        PMIRRUID,PMIRECOD,PMIREMES,PMIRSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMIER3  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSIERA3;PMIRRTYP,PMIRCODE,PMIRINUM,PMIRRDAT,PMIRRTIM:      
                        PMIRRUID,PMIRECOD,PMIREMES,PMIRSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMIER3  RESET     KEY88                                                       
          UNLOCK    PMSIERA3                                                    
          RETURN
.
