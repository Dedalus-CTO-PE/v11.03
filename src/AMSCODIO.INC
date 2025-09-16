.
. AMSCODIO    
. --------
. Filename     : amscodaf.dat
.
RSAMCD1   RESET     KEY5                                                        
          READ      AMSCODA1,KEY5;;                                             
          RETURN
.
RAAMCD1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      AMSCODA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMCD1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      AMSCODA1,KEY5;AMCDCAT,AMCDCOD,AMCDDES,AMCDUR1,AMCDUR2:      
                        AMCDUY1,AMCDUY2,AMCDSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMCD1                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSCODA1;AMCDCAT,AMCDCOD,AMCDDES,AMCDUR1,AMCDUR2:           
                        AMCDUY1,AMCDUY2,AMCDSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMCD1                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSCODA1;AMCDCAT,AMCDCOD,AMCDDES,AMCDUR1,AMCDUR2:           
                        AMCDUY1,AMCDUY2,AMCDSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMCD1                                                                         
          UPDATE    AMSCODA1;AMCDCAT,AMCDCOD,AMCDDES,AMCDUR1,AMCDUR2:           
                        AMCDUY1,AMCDUY2,AMCDSPA                                 
          RETURN
.
WRAMCD1   RESET     KEY5                                                        
          WRITE     AMSCODA1,KEY5;AMCDCAT,AMCDCOD,AMCDDES,AMCDUR1,AMCDUR2:      
                        AMCDUY1,AMCDUY2,AMCDSPA                                 
          RETURN
.
DEAMCD1   RESET     KEY5                                                        
          DELETE    AMSCODA1,KEY5                                               
          RETURN
.
RSAMCD2   RESET     KEY5                                                        
          READ      AMSCODA2,KEY5;;                                             
          RETURN
.
RAAMCD2   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      AMSCODA2,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMCD2   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      AMSCODA2,KEY5;AMCDCAT,AMCDCOD,AMCDDES,AMCDUR1,AMCDUR2:      
                        AMCDUY1,AMCDUY2,AMCDSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMCD2                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSCODA2;AMCDCAT,AMCDCOD,AMCDDES,AMCDUR1,AMCDUR2:           
                        AMCDUY1,AMCDUY2,AMCDSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMCD2                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSCODA2;AMCDCAT,AMCDCOD,AMCDDES,AMCDUR1,AMCDUR2:           
                        AMCDUY1,AMCDUY2,AMCDSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMCD2                                                                         
          UPDATE    AMSCODA2;AMCDCAT,AMCDCOD,AMCDDES,AMCDUR1,AMCDUR2:           
                        AMCDUY1,AMCDUY2,AMCDSPA                                 
          RETURN
.
WRAMCD2   RESET     KEY5                                                        
          WRITE     AMSCODA2,KEY5;AMCDCAT,AMCDCOD,AMCDDES,AMCDUR1,AMCDUR2:      
                        AMCDUY1,AMCDUY2,AMCDSPA                                 
          RETURN
.
DEAMCD2   RESET     KEY5                                                        
          DELETE    AMSCODA2,KEY5                                               
          RETURN
.
