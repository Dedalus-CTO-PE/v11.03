.
. AMSLOCIO    
. --------
. Filename     : amslocaf.dat
.
RSAMLO1   RESET     KEY9                                                        
          READ      AMSLOCA1,KEY9;;                                             
          RETURN
.
RAAMLO1   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      AMSLOCA1,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMLO1   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      AMSLOCA1,KEY9;AMLOBLD,AMLOLOC,AMLODES,AMLOUR1,AMLOUR2:      
                        AMLOUD1,AMLOUD2,AMLOUY1,AMLOUY2,AMLOSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMLO1                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSLOCA1;AMLOBLD,AMLOLOC,AMLODES,AMLOUR1,AMLOUR2:           
                        AMLOUD1,AMLOUD2,AMLOUY1,AMLOUY2,AMLOSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMLO1                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSLOCA1;AMLOBLD,AMLOLOC,AMLODES,AMLOUR1,AMLOUR2:           
                        AMLOUD1,AMLOUD2,AMLOUY1,AMLOUY2,AMLOSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMLO1                                                                         
          UPDATE    AMSLOCA1;AMLOBLD,AMLOLOC,AMLODES,AMLOUR1,AMLOUR2:           
                        AMLOUD1,AMLOUD2,AMLOUY1,AMLOUY2,AMLOSPA                 
          RETURN
.
WRAMLO1   RESET     KEY9                                                        
          WRITE     AMSLOCA1,KEY9;AMLOBLD,AMLOLOC,AMLODES,AMLOUR1,AMLOUR2:      
                        AMLOUD1,AMLOUD2,AMLOUY1,AMLOUY2,AMLOSPA                 
          RETURN
.
DEAMLO1   RESET     KEY9                                                        
          DELETE    AMSLOCA1,KEY9                                               
          RETURN
.
. index 2
RSAMLO2   RESET     KEY9                                                        
          READ      AMSLOCA2,KEY9;;                                             
          RETURN
.
RAAMLO2   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      AMSLOCA2,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMLO2   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      AMSLOCA2,KEY9;AMLOBLD,AMLOLOC,AMLODES,AMLOUR1,AMLOUR2:      
                        AMLOUD1,AMLOUD2,AMLOUY1,AMLOUY2,AMLOSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMLO2                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSLOCA2;AMLOBLD,AMLOLOC,AMLODES,AMLOUR1,AMLOUR2:           
                        AMLOUD1,AMLOUD2,AMLOUY1,AMLOUY2,AMLOSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMLO2                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSLOCA2;AMLOBLD,AMLOLOC,AMLODES,AMLOUR1,AMLOUR2:           
                        AMLOUD1,AMLOUD2,AMLOUY1,AMLOUY2,AMLOSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMLO2                                                                         
          UPDATE    AMSLOCA2;AMLOBLD,AMLOLOC,AMLODES,AMLOUR1,AMLOUR2:           
                        AMLOUD1,AMLOUD2,AMLOUY1,AMLOUY2,AMLOSPA                 
          RETURN
.
WRAMLO2   RESET     KEY9                                                        
          WRITE     AMSLOCA2,KEY9;AMLOBLD,AMLOLOC,AMLODES,AMLOUR1,AMLOUR2:      
                        AMLOUD1,AMLOUD2,AMLOUY1,AMLOUY2,AMLOSPA                 
          RETURN
.
DEAMLO2   RESET     KEY9                                                        
          DELETE    AMSLOCA2,KEY9                                               
          RETURN
.
