.
. PRIALSIO    
. --------
. Filename     : prialsaf.dat
.
RSPRALS1  RESET     KEY10                                                       
          READ      PRIALSA1,KEY10;;                                            
          RETURN
.
RAPRALS1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PRIALSA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRALS1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PRIALSA1,KEY10;PRALUSID,PRALSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPRALS1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PRIALSA1;PRALUSID,PRALSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPRALS1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PRIALSA1;PRALUSID,PRALSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPRALS1                                                                        
          UPDATE    PRIALSA1;PRALUSID,PRALSPAR                                  
          RETURN
.
WRPRALS1  RESET     KEY10                                                       
          WRITE     PRIALSA1,KEY10;PRALUSID,PRALSPAR                            
          RETURN
.
DEPRALS1  RESET     KEY10                                                       
          DELETE    PRIALSA1,KEY10                                              
          RETURN
.
