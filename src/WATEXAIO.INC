.
. WATEXAIO    
. --------
. Filename     : watexaaf.dat
.
RSWTEXA1  RESET     KEY10                                                       
          READ      WATEXAA1,KEY10;;                                            
          RETURN
.
RAWTEXA1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      WATEXAA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTEXA1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      WATEXAA1,KEY10;WTXANLV1,WTXANLEP,WTXANTL1,WTXANMN1,WTXANMX1:
                        WTXANSV1,WTXANTL2,WTXANMN2,WTXANMX2,WTXANSV2,WTXANTL3:  
                        WTXANMN3,WTXANMX3,WTXANSV3,WTXANSPA                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTEXA1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATEXAA1;WTXANLV1,WTXANLEP,WTXANTL1,WTXANMN1,WTXANMX1:      
                        WTXANSV1,WTXANTL2,WTXANMN2,WTXANMX2,WTXANSV2,WTXANTL3:  
                        WTXANMN3,WTXANMX3,WTXANSV3,WTXANSPA                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTEXA1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATEXAA1;WTXANLV1,WTXANLEP,WTXANTL1,WTXANMN1,WTXANMX1:      
                        WTXANSV1,WTXANTL2,WTXANMN2,WTXANMX2,WTXANSV2,WTXANTL3:  
                        WTXANMN3,WTXANMX3,WTXANSV3,WTXANSPA                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTEXA1                                                                        
          UPDATE    WATEXAA1;WTXANLV1,WTXANLEP,WTXANTL1,WTXANMN1,WTXANMX1:      
                        WTXANSV1,WTXANTL2,WTXANMN2,WTXANMX2,WTXANSV2,WTXANTL3:  
                        WTXANMN3,WTXANMX3,WTXANSV3,WTXANSPA                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTEXA1  RESET     KEY10                                                       
          WRITE     WATEXAA1,KEY10;WTXANLV1,WTXANLEP,WTXANTL1,WTXANMN1,WTXANMX1:
                        WTXANSV1,WTXANTL2,WTXANMN2,WTXANMX2,WTXANSV2,WTXANTL3:  
                        WTXANMN3,WTXANMX3,WTXANSV3,WTXANSPA                     
          RETURN
.
DEWTEXA1  RESET     KEY10                                                       
          DELETE    WATEXAA1,KEY10                                              
          RETURN
.
RLWTEXA1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     WATEXAA1,KEY10;WTXANLV1,WTXANLEP,WTXANTL1,WTXANMN1,WTXANMX1:
                        WTXANSV1,WTXANTL2,WTXANMN2,WTXANMX2,WTXANSV2,WTXANTL3:  
                        WTXANMN3,WTXANMX3,WTXANSV3,WTXANSPA                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTEXA1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WATEXAA1;WTXANLV1,WTXANLEP,WTXANTL1,WTXANMN1,WTXANMX1:      
                        WTXANSV1,WTXANTL2,WTXANMN2,WTXANMX2,WTXANSV2,WTXANTL3:  
                        WTXANMN3,WTXANMX3,WTXANSV3,WTXANSPA                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTEXA1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WATEXAA1;WTXANLV1,WTXANLEP,WTXANTL1,WTXANMN1,WTXANMX1:      
                        WTXANSV1,WTXANTL2,WTXANMN2,WTXANMX2,WTXANSV2,WTXANTL3:  
                        WTXANMN3,WTXANMX3,WTXANSV3,WTXANSPA                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTEXA1  RESET     KEY10                                                       
          UNLOCK    WATEXAA1                                                    
          RETURN
.
