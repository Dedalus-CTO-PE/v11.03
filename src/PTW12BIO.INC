.
. PATW12IO    
. --------
. Filename     : patw12bf.dat
.
RSPT12B1  RESET     KEY4                                                        
          READ      PATW12B1,KEY4;;                                             
          RETURN
.
RAPT12B1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      PATW12B1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT12B1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      PATW12B1,KEY4;PT12DRGC,PT12DRGD,PT12SDMT,PT12MVEL,PT12CPAY: 
                        PT12LIBP,PT12HIBP,PT12ILOS,PT12SDOD,PT12TSDW,PT12TODW:  
                        PT12TLOM,PT12TIMW,PT12THOM,PT12THIH,PT12SPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT12B1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATW12B1;PT12DRGC,PT12DRGD,PT12SDMT,PT12MVEL,PT12CPAY:      
                        PT12LIBP,PT12HIBP,PT12ILOS,PT12SDOD,PT12TSDW,PT12TODW:  
                        PT12TLOM,PT12TIMW,PT12THOM,PT12THIH,PT12SPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT12B1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATW12B1;PT12DRGC,PT12DRGD,PT12SDMT,PT12MVEL,PT12CPAY:      
                        PT12LIBP,PT12HIBP,PT12ILOS,PT12SDOD,PT12TSDW,PT12TODW:  
                        PT12TLOM,PT12TIMW,PT12THOM,PT12THIH,PT12SPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT12B1                                                                        
          UPDATE    PATW12B1;PT12DRGC,PT12DRGD,PT12SDMT,PT12MVEL,PT12CPAY:      
                        PT12LIBP,PT12HIBP,PT12ILOS,PT12SDOD,PT12TSDW,PT12TODW:  
                        PT12TLOM,PT12TIMW,PT12THOM,PT12THIH,PT12SPAR            
          RETURN
.
WRPT12B1  RESET     KEY4                                                        
          WRITE     PATW12B1,KEY4;PT12DRGC,PT12DRGD,PT12SDMT,PT12MVEL,PT12CPAY: 
                        PT12LIBP,PT12HIBP,PT12ILOS,PT12SDOD,PT12TSDW,PT12TODW:  
                        PT12TLOM,PT12TIMW,PT12THOM,PT12THIH,PT12SPAR            
          RETURN
.
DEPT12B1  RESET     KEY4                                                        
          DELETE    PATW12B1,KEY4                                               
          RETURN
.
