.
. AAEDG1IO    
. --------
. Filename     : aaedg1af.dat
.
RSAEDG11  RESET     KEY2                                                        
          READ      AAEDG1A1,KEY2;;                                             
          RETURN
.
RAAEDG11  RESET     KEY2                                                        
          MOVE      ZERO,OVRCD
          READ      AAEDG1A1,KEY2;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAEDG11  RESET     KEY2                                                        
          MOVE      ZERO,OVRCD
          READ      AAEDG1A1,KEY2;AED1INIT,AED1DESC,AED1BOX1                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAEDG11                                                                        
          MOVE      ZERO,OVRCD
          READKS    AAEDG1A1;AED1INIT,AED1DESC,AED1BOX1                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAEDG11                                                                        
          MOVE      ZERO,OVRCD
          READKP    AAEDG1A1;AED1INIT,AED1DESC,AED1BOX1                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAEDG11                                                                        
          UPDATE    AAEDG1A1;AED1INIT,AED1DESC,AED1BOX1                         
          RETURN
.
WRAEDG11  RESET     KEY2                                                        
          WRITE     AAEDG1A1,KEY2;AED1INIT,AED1DESC,AED1BOX1                    
          RETURN
.
DEAEDG11  RESET     KEY2                                                        
          DELETE    AAEDG1A1,KEY2                                               
          RETURN
.
