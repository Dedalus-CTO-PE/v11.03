.
. PRIFLSIO    
. --------
. Filename     : priflsaf.dat
.
RSPRFLS1  RESET     KEY4                                                        
          READ      PRIFLSA1,KEY4;;                                             
          RETURN
.
RAPRFLS1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      PRIFLSA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRFLS1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      PRIFLSA1,KEY4;PRFLSEID,PRFLSEDC,PRFLDBFR,PRFLDBTO,PRFLSNFR: 
                        PRFLSNTO,PRFLVDFR,PRFLVDTO,PRFLPPFR,PRFLPPTO,PRFLSDFR:  
                        PRFLSDTO,PRFLCCFR,PRFLCCTO,PRFLLLFR,PRFLLLTO,PRFLDLFR:  
                        PRFLDLTO,PRFLFCFR,PRFLFCTO,PRFLFDFR,PRFLFDTO,PRFLMBAL:  
                        PRFLIDFR,PRFLIDTO,PRFLLTYP,PRFLSCAN,PRFLSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPRFLS1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PRIFLSA1;PRFLSEID,PRFLSEDC,PRFLDBFR,PRFLDBTO,PRFLSNFR:      
                        PRFLSNTO,PRFLVDFR,PRFLVDTO,PRFLPPFR,PRFLPPTO,PRFLSDFR:  
                        PRFLSDTO,PRFLCCFR,PRFLCCTO,PRFLLLFR,PRFLLLTO,PRFLDLFR:  
                        PRFLDLTO,PRFLFCFR,PRFLFCTO,PRFLFDFR,PRFLFDTO,PRFLMBAL:  
                        PRFLIDFR,PRFLIDTO,PRFLLTYP,PRFLSCAN,PRFLSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPRFLS1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PRIFLSA1;PRFLSEID,PRFLSEDC,PRFLDBFR,PRFLDBTO,PRFLSNFR:      
                        PRFLSNTO,PRFLVDFR,PRFLVDTO,PRFLPPFR,PRFLPPTO,PRFLSDFR:  
                        PRFLSDTO,PRFLCCFR,PRFLCCTO,PRFLLLFR,PRFLLLTO,PRFLDLFR:  
                        PRFLDLTO,PRFLFCFR,PRFLFCTO,PRFLFDFR,PRFLFDTO,PRFLMBAL:  
                        PRFLIDFR,PRFLIDTO,PRFLLTYP,PRFLSCAN,PRFLSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPRFLS1                                                                        
          UPDATE    PRIFLSA1;PRFLSEID,PRFLSEDC,PRFLDBFR,PRFLDBTO,PRFLSNFR:      
                        PRFLSNTO,PRFLVDFR,PRFLVDTO,PRFLPPFR,PRFLPPTO,PRFLSDFR:  
                        PRFLSDTO,PRFLCCFR,PRFLCCTO,PRFLLLFR,PRFLLLTO,PRFLDLFR:  
                        PRFLDLTO,PRFLFCFR,PRFLFCTO,PRFLFDFR,PRFLFDTO,PRFLMBAL:  
                        PRFLIDFR,PRFLIDTO,PRFLLTYP,PRFLSCAN,PRFLSPAR            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPRFLS1  RESET     KEY4                                                        
          WRITE     PRIFLSA1,KEY4;PRFLSEID,PRFLSEDC,PRFLDBFR,PRFLDBTO,PRFLSNFR: 
                        PRFLSNTO,PRFLVDFR,PRFLVDTO,PRFLPPFR,PRFLPPTO,PRFLSDFR:  
                        PRFLSDTO,PRFLCCFR,PRFLCCTO,PRFLLLFR,PRFLLLTO,PRFLDLFR:  
                        PRFLDLTO,PRFLFCFR,PRFLFCTO,PRFLFDFR,PRFLFDTO,PRFLMBAL:  
                        PRFLIDFR,PRFLIDTO,PRFLLTYP,PRFLSCAN,PRFLSPAR            
          RETURN
.
DEPRFLS1  RESET     KEY4                                                        
          DELETE    PRIFLSA1,KEY4                                               
          RETURN
.
RLPRFLS1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READL     PRIFLSA1,KEY4;PRFLSEID,PRFLSEDC,PRFLDBFR,PRFLDBTO,PRFLSNFR: 
                        PRFLSNTO,PRFLVDFR,PRFLVDTO,PRFLPPFR,PRFLPPTO,PRFLSDFR:  
                        PRFLSDTO,PRFLCCFR,PRFLCCTO,PRFLLLFR,PRFLLLTO,PRFLDLFR:  
                        PRFLDLTO,PRFLFCFR,PRFLFCTO,PRFLFDFR,PRFLFDTO,PRFLMBAL:  
                        PRFLIDFR,PRFLIDTO,PRFLLTYP,PRFLSCAN,PRFLSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPRFLS1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PRIFLSA1;PRFLSEID,PRFLSEDC,PRFLDBFR,PRFLDBTO,PRFLSNFR:      
                        PRFLSNTO,PRFLVDFR,PRFLVDTO,PRFLPPFR,PRFLPPTO,PRFLSDFR:  
                        PRFLSDTO,PRFLCCFR,PRFLCCTO,PRFLLLFR,PRFLLLTO,PRFLDLFR:  
                        PRFLDLTO,PRFLFCFR,PRFLFCTO,PRFLFDFR,PRFLFDTO,PRFLMBAL:  
                        PRFLIDFR,PRFLIDTO,PRFLLTYP,PRFLSCAN,PRFLSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPRFLS1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PRIFLSA1;PRFLSEID,PRFLSEDC,PRFLDBFR,PRFLDBTO,PRFLSNFR:      
                        PRFLSNTO,PRFLVDFR,PRFLVDTO,PRFLPPFR,PRFLPPTO,PRFLSDFR:  
                        PRFLSDTO,PRFLCCFR,PRFLCCTO,PRFLLLFR,PRFLLLTO,PRFLDLFR:  
                        PRFLDLTO,PRFLFCFR,PRFLFCTO,PRFLFDFR,PRFLFDTO,PRFLMBAL:  
                        PRFLIDFR,PRFLIDTO,PRFLLTYP,PRFLSCAN,PRFLSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPRFLS1  RESET     KEY4                                                        
          UNLOCK    PRIFLSA1                                                    
          RETURN
.
