.
. APSPPDIO    
. --------
. Filename     : apsppdaf.dat
.
RSAPPP1   RESET     KEY2                                                        
          READ      APSPPDA1,KEY2;;                                             
          RETURN
.
RAAPPP1   RESET     KEY2                                                        
          MOVE      ZERO,OVRCD
          READ      APSPPDA1,KEY2;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPPP1   RESET     KEY2                                                        
          MOVE      ZERO,OVRCD
          READ      APSPPDA1,KEY2;APPPTER,APPPDES,APPPTYP,APPPDA1,APPPPE1:      
                        APPPDA2,APPPPE2,APPPDA3,APPPPE3,APPPPIN,APPPMDI:        
                        APPPSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPPP1                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSPPDA1;APPPTER,APPPDES,APPPTYP,APPPDA1,APPPPE1:           
                        APPPDA2,APPPPE2,APPPDA3,APPPPE3,APPPPIN,APPPMDI:        
                        APPPSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPPP1                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSPPDA1;APPPTER,APPPDES,APPPTYP,APPPDA1,APPPPE1:           
                        APPPDA2,APPPPE2,APPPDA3,APPPPE3,APPPPIN,APPPMDI:        
                        APPPSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPPP1                                                                         
          UPDATE    APSPPDA1;APPPTER,APPPDES,APPPTYP,APPPDA1,APPPPE1:           
                        APPPDA2,APPPPE2,APPPDA3,APPPPE3,APPPPIN,APPPMDI:        
                        APPPSPA                                                 
          RETURN
.
WRAPPP1   RESET     KEY2                                                        
          WRITE     APSPPDA1,KEY2;APPPTER,APPPDES,APPPTYP,APPPDA1,APPPPE1:      
                        APPPDA2,APPPPE2,APPPDA3,APPPPE3,APPPPIN,APPPMDI:        
                        APPPSPA                                                 
          RETURN
.
DEAPPP1   RESET     KEY2                                                        
          DELETE    APSPPDA1,KEY2                                               
          RETURN
.
