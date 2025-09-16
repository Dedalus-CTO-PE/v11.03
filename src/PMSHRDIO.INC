.
. PMSHRDIO    
. --------
. Filename     : pmshrdaf.dat
.
RSPMHRD1  RESET     KEY25                                                       
          READ      PMSHRDA1,KEY25;;                                            
          RETURN
.
RAPMHRD1  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHRDA1,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMHRD1  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHRDA1,KEY25;PMHRHOSP,PMHRWARD,PMHRBEDD,PMHRRDAT,PMHRRTIM:
                        PMHRRSTA,PMHRCSTA,PMHRCWEB,PMHRCDAT,PMHRCTIM,PMHRSTAT:  
                        PMHRCOM1,PMHRCOM2,PMHRCRES,PMHRWEBU,PMHRDATU,PMHRTIMU:  
                        PMHRSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMHRD1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSHRDA1;PMHRHOSP,PMHRWARD,PMHRBEDD,PMHRRDAT,PMHRRTIM:      
                        PMHRRSTA,PMHRCSTA,PMHRCWEB,PMHRCDAT,PMHRCTIM,PMHRSTAT:  
                        PMHRCOM1,PMHRCOM2,PMHRCRES,PMHRWEBU,PMHRDATU,PMHRTIMU:  
                        PMHRSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMHRD1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSHRDA1;PMHRHOSP,PMHRWARD,PMHRBEDD,PMHRRDAT,PMHRRTIM:      
                        PMHRRSTA,PMHRCSTA,PMHRCWEB,PMHRCDAT,PMHRCTIM,PMHRSTAT:  
                        PMHRCOM1,PMHRCOM2,PMHRCRES,PMHRWEBU,PMHRDATU,PMHRTIMU:  
                        PMHRSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMHRD1                                                                        
          UPDATE    PMSHRDA1;PMHRHOSP,PMHRWARD,PMHRBEDD,PMHRRDAT,PMHRRTIM:      
                        PMHRRSTA,PMHRCSTA,PMHRCWEB,PMHRCDAT,PMHRCTIM,PMHRSTAT:  
                        PMHRCOM1,PMHRCOM2,PMHRCRES,PMHRWEBU,PMHRDATU,PMHRTIMU:  
                        PMHRSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMHRD1  RESET     KEY25                                                       
          WRITE     PMSHRDA1,KEY25;PMHRHOSP,PMHRWARD,PMHRBEDD,PMHRRDAT,PMHRRTIM:
                        PMHRRSTA,PMHRCSTA,PMHRCWEB,PMHRCDAT,PMHRCTIM,PMHRSTAT:  
                        PMHRCOM1,PMHRCOM2,PMHRCRES,PMHRWEBU,PMHRDATU,PMHRTIMU:  
                        PMHRSPAR                                                
          RETURN
.
DEPMHRD1  RESET     KEY25                                                       
          DELETE    PMSHRDA1,KEY25                                              
          RETURN
.
RLPMHRD1  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READL     PMSHRDA1,KEY25;PMHRHOSP,PMHRWARD,PMHRBEDD,PMHRRDAT,PMHRRTIM:
                        PMHRRSTA,PMHRCSTA,PMHRCWEB,PMHRCDAT,PMHRCTIM,PMHRSTAT:  
                        PMHRCOM1,PMHRCOM2,PMHRCRES,PMHRWEBU,PMHRDATU,PMHRTIMU:  
                        PMHRSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMHRD1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSHRDA1;PMHRHOSP,PMHRWARD,PMHRBEDD,PMHRRDAT,PMHRRTIM:      
                        PMHRRSTA,PMHRCSTA,PMHRCWEB,PMHRCDAT,PMHRCTIM,PMHRSTAT:  
                        PMHRCOM1,PMHRCOM2,PMHRCRES,PMHRWEBU,PMHRDATU,PMHRTIMU:  
                        PMHRSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMHRD1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSHRDA1;PMHRHOSP,PMHRWARD,PMHRBEDD,PMHRRDAT,PMHRRTIM:      
                        PMHRRSTA,PMHRCSTA,PMHRCWEB,PMHRCDAT,PMHRCTIM,PMHRSTAT:  
                        PMHRCOM1,PMHRCOM2,PMHRCRES,PMHRWEBU,PMHRDATU,PMHRTIMU:  
                        PMHRSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMHRD1  RESET     KEY25                                                       
          UNLOCK    PMSHRDA1                                                    
          RETURN
.
RSPMHRD2  RESET     KEY25                                                       
          READ      PMSHRDA2,KEY25;;                                            
          RETURN
.
RAPMHRD2  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHRDA2,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMHRD2  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHRDA2,KEY25;PMHRHOSP,PMHRWARD,PMHRBEDD,PMHRRDAT,PMHRRTIM:
                        PMHRRSTA,PMHRCSTA,PMHRCWEB,PMHRCDAT,PMHRCTIM,PMHRSTAT:  
                        PMHRCOM1,PMHRCOM2,PMHRCRES,PMHRWEBU,PMHRDATU,PMHRTIMU:  
                        PMHRSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMHRD2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSHRDA2;PMHRHOSP,PMHRWARD,PMHRBEDD,PMHRRDAT,PMHRRTIM:      
                        PMHRRSTA,PMHRCSTA,PMHRCWEB,PMHRCDAT,PMHRCTIM,PMHRSTAT:  
                        PMHRCOM1,PMHRCOM2,PMHRCRES,PMHRWEBU,PMHRDATU,PMHRTIMU:  
                        PMHRSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMHRD2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSHRDA2;PMHRHOSP,PMHRWARD,PMHRBEDD,PMHRRDAT,PMHRRTIM:      
                        PMHRRSTA,PMHRCSTA,PMHRCWEB,PMHRCDAT,PMHRCTIM,PMHRSTAT:  
                        PMHRCOM1,PMHRCOM2,PMHRCRES,PMHRWEBU,PMHRDATU,PMHRTIMU:  
                        PMHRSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMHRD2                                                                        
          UPDATE    PMSHRDA2;PMHRHOSP,PMHRWARD,PMHRBEDD,PMHRRDAT,PMHRRTIM:      
                        PMHRRSTA,PMHRCSTA,PMHRCWEB,PMHRCDAT,PMHRCTIM,PMHRSTAT:  
                        PMHRCOM1,PMHRCOM2,PMHRCRES,PMHRWEBU,PMHRDATU,PMHRTIMU:  
                        PMHRSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMHRD2  RESET     KEY25                                                       
          WRITE     PMSHRDA2,KEY25;PMHRHOSP,PMHRWARD,PMHRBEDD,PMHRRDAT,PMHRRTIM:
                        PMHRRSTA,PMHRCSTA,PMHRCWEB,PMHRCDAT,PMHRCTIM,PMHRSTAT:  
                        PMHRCOM1,PMHRCOM2,PMHRCRES,PMHRWEBU,PMHRDATU,PMHRTIMU:  
                        PMHRSPAR                                                
          RETURN
.
DEPMHRD2  RESET     KEY25                                                       
          DELETE    PMSHRDA2,KEY25                                              
          RETURN
.
RLPMHRD2  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READL     PMSHRDA2,KEY25;PMHRHOSP,PMHRWARD,PMHRBEDD,PMHRRDAT,PMHRRTIM:
                        PMHRRSTA,PMHRCSTA,PMHRCWEB,PMHRCDAT,PMHRCTIM,PMHRSTAT:  
                        PMHRCOM1,PMHRCOM2,PMHRCRES,PMHRWEBU,PMHRDATU,PMHRTIMU:  
                        PMHRSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMHRD2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSHRDA2;PMHRHOSP,PMHRWARD,PMHRBEDD,PMHRRDAT,PMHRRTIM:      
                        PMHRRSTA,PMHRCSTA,PMHRCWEB,PMHRCDAT,PMHRCTIM,PMHRSTAT:  
                        PMHRCOM1,PMHRCOM2,PMHRCRES,PMHRWEBU,PMHRDATU,PMHRTIMU:  
                        PMHRSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMHRD2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSHRDA2;PMHRHOSP,PMHRWARD,PMHRBEDD,PMHRRDAT,PMHRRTIM:      
                        PMHRRSTA,PMHRCSTA,PMHRCWEB,PMHRCDAT,PMHRCTIM,PMHRSTAT:  
                        PMHRCOM1,PMHRCOM2,PMHRCRES,PMHRWEBU,PMHRDATU,PMHRTIMU:  
                        PMHRSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMHRD2  RESET     KEY25                                                       
          UNLOCK    PMSHRDA2                                                    
          RETURN
.
