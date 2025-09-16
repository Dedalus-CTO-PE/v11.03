.
. BOKLTSIO    
. --------
. Filename     : bokltsaf.dat
.
RSBKLTS1  RESET     KEY4                                                        
          READ      BOKLTSA1,KEY4;;                                             
          RETURN
.
RABKLTS1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      BOKLTSA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDBKLTS1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      BOKLTSA1,KEY4;BKLSSEID,BKLSDESC,BKLSDEPS,BKLSSTDT,BKLSENDT: 
                        BKLSSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKBKLTS1                                                                        
          MOVE      ZERO,OVRCD
          READKS    BOKLTSA1;BKLSSEID,BKLSDESC,BKLSDEPS,BKLSSTDT,BKLSENDT:      
                        BKLSSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPBKLTS1                                                                        
          MOVE      ZERO,OVRCD
          READKP    BOKLTSA1;BKLSSEID,BKLSDESC,BKLSDEPS,BKLSSTDT,BKLSENDT:      
                        BKLSSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPBKLTS1                                                                        
          UPDATE    BOKLTSA1;BKLSSEID,BKLSDESC,BKLSDEPS,BKLSSTDT,BKLSENDT:      
                        BKLSSPAR                                                
          RETURN
.
WRBKLTS1  RESET     KEY4                                                        
          WRITE     BOKLTSA1,KEY4;BKLSSEID,BKLSDESC,BKLSDEPS,BKLSSTDT,BKLSENDT: 
                        BKLSSPAR                                                
          RETURN
.
DEBKLTS1  RESET     KEY4                                                        
          DELETE    BOKLTSA1,KEY4                                               
          RETURN
.
