.
. OUTLKBIO    
. --------
. Filename     : outlkbaf.dat
.
RSOTLKB1  RESET     KEY24                                                       
          READ      OUTLKBA1,KEY24;;                                            
          RETURN
.
RAOTLKB1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      OUTLKBA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTLKB1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      OUTLKBA1,KEY24;OTLKURNO,OTLKOBOK,OTLKLBOK,OTLKBSTA,OTLKSSTA:
                        OTLKLDAT,OTLKLTIM,OTLKLUID,OTLKUDAT,OTLKUTIM,OTLKUUID:  
                        OTLKSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTLKB1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OUTLKBA1;OTLKURNO,OTLKOBOK,OTLKLBOK,OTLKBSTA,OTLKSSTA:      
                        OTLKLDAT,OTLKLTIM,OTLKLUID,OTLKUDAT,OTLKUTIM,OTLKUUID:  
                        OTLKSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTLKB1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OUTLKBA1;OTLKURNO,OTLKOBOK,OTLKLBOK,OTLKBSTA,OTLKSSTA:      
                        OTLKLDAT,OTLKLTIM,OTLKLUID,OTLKUDAT,OTLKUTIM,OTLKUUID:  
                        OTLKSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTLKB1                                                                        
          UPDATE    OUTLKBA1;OTLKURNO,OTLKOBOK,OTLKLBOK,OTLKBSTA,OTLKSSTA:      
                        OTLKLDAT,OTLKLTIM,OTLKLUID,OTLKUDAT,OTLKUTIM,OTLKUUID:  
                        OTLKSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTLKB1  RESET     KEY24                                                       
          WRITE     OUTLKBA1,KEY24;OTLKURNO,OTLKOBOK,OTLKLBOK,OTLKBSTA,OTLKSSTA:
                        OTLKLDAT,OTLKLTIM,OTLKLUID,OTLKUDAT,OTLKUTIM,OTLKUUID:  
                        OTLKSPAR                                                
          RETURN
.
DEOTLKB1  RESET     KEY24                                                       
          DELETE    OUTLKBA1,KEY24                                              
          RETURN
.
RLOTLKB1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     OUTLKBA1,KEY24;OTLKURNO,OTLKOBOK,OTLKLBOK,OTLKBSTA,OTLKSSTA:
                        OTLKLDAT,OTLKLTIM,OTLKLUID,OTLKUDAT,OTLKUTIM,OTLKUUID:  
                        OTLKSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOTLKB1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   OUTLKBA1;OTLKURNO,OTLKOBOK,OTLKLBOK,OTLKBSTA,OTLKSSTA:      
                        OTLKLDAT,OTLKLTIM,OTLKLUID,OTLKUDAT,OTLKUTIM,OTLKUUID:  
                        OTLKSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOTLKB1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   OUTLKBA1;OTLKURNO,OTLKOBOK,OTLKLBOK,OTLKBSTA,OTLKSSTA:      
                        OTLKLDAT,OTLKLTIM,OTLKLUID,OTLKUDAT,OTLKUTIM,OTLKUUID:  
                        OTLKSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOTLKB1  RESET     KEY24                                                       
          UNLOCK    OUTLKBA1                                                    
          RETURN
.
RSOTLKB2  RESET     KEY24                                                       
          READ      OUTLKBA2,KEY24;;                                            
          RETURN
.
RAOTLKB2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      OUTLKBA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTLKB2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      OUTLKBA2,KEY24;OTLKURNO,OTLKOBOK,OTLKLBOK,OTLKBSTA,OTLKSSTA:
                        OTLKLDAT,OTLKLTIM,OTLKLUID,OTLKUDAT,OTLKUTIM,OTLKUUID:  
                        OTLKSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTLKB2                                                                        
          MOVE      ZERO,OVRCD
          READKS    OUTLKBA2;OTLKURNO,OTLKOBOK,OTLKLBOK,OTLKBSTA,OTLKSSTA:      
                        OTLKLDAT,OTLKLTIM,OTLKLUID,OTLKUDAT,OTLKUTIM,OTLKUUID:  
                        OTLKSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTLKB2                                                                        
          MOVE      ZERO,OVRCD
          READKP    OUTLKBA2;OTLKURNO,OTLKOBOK,OTLKLBOK,OTLKBSTA,OTLKSSTA:      
                        OTLKLDAT,OTLKLTIM,OTLKLUID,OTLKUDAT,OTLKUTIM,OTLKUUID:  
                        OTLKSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTLKB2                                                                        
          UPDATE    OUTLKBA2;OTLKURNO,OTLKOBOK,OTLKLBOK,OTLKBSTA,OTLKSSTA:      
                        OTLKLDAT,OTLKLTIM,OTLKLUID,OTLKUDAT,OTLKUTIM,OTLKUUID:  
                        OTLKSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTLKB2  RESET     KEY24                                                       
          WRITE     OUTLKBA2,KEY24;OTLKURNO,OTLKOBOK,OTLKLBOK,OTLKBSTA,OTLKSSTA:
                        OTLKLDAT,OTLKLTIM,OTLKLUID,OTLKUDAT,OTLKUTIM,OTLKUUID:  
                        OTLKSPAR                                                
          RETURN
.
DEOTLKB2  RESET     KEY24                                                       
          DELETE    OUTLKBA2,KEY24                                              
          RETURN
.
RLOTLKB2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     OUTLKBA2,KEY24;OTLKURNO,OTLKOBOK,OTLKLBOK,OTLKBSTA,OTLKSSTA:
                        OTLKLDAT,OTLKLTIM,OTLKLUID,OTLKUDAT,OTLKUTIM,OTLKUUID:  
                        OTLKSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOTLKB2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   OUTLKBA2;OTLKURNO,OTLKOBOK,OTLKLBOK,OTLKBSTA,OTLKSSTA:      
                        OTLKLDAT,OTLKLTIM,OTLKLUID,OTLKUDAT,OTLKUTIM,OTLKUUID:  
                        OTLKSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOTLKB2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   OUTLKBA2;OTLKURNO,OTLKOBOK,OTLKLBOK,OTLKBSTA,OTLKSSTA:      
                        OTLKLDAT,OTLKLTIM,OTLKLUID,OTLKUDAT,OTLKUTIM,OTLKUUID:  
                        OTLKSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOTLKB2  RESET     KEY24                                                       
          UNLOCK    OUTLKBA2                                                    
          RETURN
.
