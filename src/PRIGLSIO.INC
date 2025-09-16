.
. PRIGLSIO    
. --------
. Filename     : priglsaf.dat
.
RSPRGLS1  RESET     KEY4                                                        
          READ      PRIGLSA1,KEY4;;                                             
          RETURN
.
RAPRGLS1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      PRIGLSA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRGLS1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      PRIGLSA1,KEY4;PRGLSEID,PRGLSEDC,PRGLDBFR,PRGLDBTO,PRGLSNFR: 
                        PRGLSNTO,PRGLVDFR,PRGLVDTO,PRGLPPFR,PRGLPPTO,PRGLSDFR:  
                        PRGLSDTO,PRGLCCFR,PRGLCCTO,PRGLLTYP,PRGLSCAN,PRGLSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPRGLS1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PRIGLSA1;PRGLSEID,PRGLSEDC,PRGLDBFR,PRGLDBTO,PRGLSNFR:      
                        PRGLSNTO,PRGLVDFR,PRGLVDTO,PRGLPPFR,PRGLPPTO,PRGLSDFR:  
                        PRGLSDTO,PRGLCCFR,PRGLCCTO,PRGLLTYP,PRGLSCAN,PRGLSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPRGLS1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PRIGLSA1;PRGLSEID,PRGLSEDC,PRGLDBFR,PRGLDBTO,PRGLSNFR:      
                        PRGLSNTO,PRGLVDFR,PRGLVDTO,PRGLPPFR,PRGLPPTO,PRGLSDFR:  
                        PRGLSDTO,PRGLCCFR,PRGLCCTO,PRGLLTYP,PRGLSCAN,PRGLSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPRGLS1                                                                        
          UPDATE    PRIGLSA1;PRGLSEID,PRGLSEDC,PRGLDBFR,PRGLDBTO,PRGLSNFR:      
                        PRGLSNTO,PRGLVDFR,PRGLVDTO,PRGLPPFR,PRGLPPTO,PRGLSDFR:  
                        PRGLSDTO,PRGLCCFR,PRGLCCTO,PRGLLTYP,PRGLSCAN,PRGLSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPRGLS1  RESET     KEY4                                                        
          WRITE     PRIGLSA1,KEY4;PRGLSEID,PRGLSEDC,PRGLDBFR,PRGLDBTO,PRGLSNFR: 
                        PRGLSNTO,PRGLVDFR,PRGLVDTO,PRGLPPFR,PRGLPPTO,PRGLSDFR:  
                        PRGLSDTO,PRGLCCFR,PRGLCCTO,PRGLLTYP,PRGLSCAN,PRGLSPAR   
          RETURN
.
DEPRGLS1  RESET     KEY4                                                        
          DELETE    PRIGLSA1,KEY4                                               
          RETURN
.
RLPRGLS1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READL     PRIGLSA1,KEY4;PRGLSEID,PRGLSEDC,PRGLDBFR,PRGLDBTO,PRGLSNFR: 
                        PRGLSNTO,PRGLVDFR,PRGLVDTO,PRGLPPFR,PRGLPPTO,PRGLSDFR:  
                        PRGLSDTO,PRGLCCFR,PRGLCCTO,PRGLLTYP,PRGLSCAN,PRGLSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPRGLS1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PRIGLSA1;PRGLSEID,PRGLSEDC,PRGLDBFR,PRGLDBTO,PRGLSNFR:      
                        PRGLSNTO,PRGLVDFR,PRGLVDTO,PRGLPPFR,PRGLPPTO,PRGLSDFR:  
                        PRGLSDTO,PRGLCCFR,PRGLCCTO,PRGLLTYP,PRGLSCAN,PRGLSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPRGLS1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PRIGLSA1;PRGLSEID,PRGLSEDC,PRGLDBFR,PRGLDBTO,PRGLSNFR:      
                        PRGLSNTO,PRGLVDFR,PRGLVDTO,PRGLPPFR,PRGLPPTO,PRGLSDFR:  
                        PRGLSDTO,PRGLCCFR,PRGLCCTO,PRGLLTYP,PRGLSCAN,PRGLSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPRGLS1  RESET     KEY4                                                        
          UNLOCK    PRIGLSA1                                                    
          RETURN
.
