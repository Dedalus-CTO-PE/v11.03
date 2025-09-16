.
. PATW13IO    
. --------
. Filename     : patw13af.dat
.
RSPT131   RESET     KEY4                                                        
          READ      PATW13A1,KEY4;;                                             
          RETURN
.
RAPT131   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      PATW13A1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT131   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      PATW13A1,KEY4;PT13DRGC,PT13DRGD,PT13SDMT,PT13MVEL,PT13CPAY: 
                        PT13LIBP,PT13HIBP,PT13ILOS,PT13SDOD,PT13TSDW,PT13TODW:  
                        PT13TLOM,PT13TIMW,PT13THOM,PT13THIH,PT13SPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT131                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATW13A1;PT13DRGC,PT13DRGD,PT13SDMT,PT13MVEL,PT13CPAY:      
                        PT13LIBP,PT13HIBP,PT13ILOS,PT13SDOD,PT13TSDW,PT13TODW:  
                        PT13TLOM,PT13TIMW,PT13THOM,PT13THIH,PT13SPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT131                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATW13A1;PT13DRGC,PT13DRGD,PT13SDMT,PT13MVEL,PT13CPAY:      
                        PT13LIBP,PT13HIBP,PT13ILOS,PT13SDOD,PT13TSDW,PT13TODW:  
                        PT13TLOM,PT13TIMW,PT13THOM,PT13THIH,PT13SPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT131                                                                        
          UPDATE    PATW13A1;PT13DRGC,PT13DRGD,PT13SDMT,PT13MVEL,PT13CPAY:      
                        PT13LIBP,PT13HIBP,PT13ILOS,PT13SDOD,PT13TSDW,PT13TODW:  
                        PT13TLOM,PT13TIMW,PT13THOM,PT13THIH,PT13SPAR            
          RETURN
.
WRPT131   RESET     KEY4                                                        
          WRITE     PATW13A1,KEY4;PT13DRGC,PT13DRGD,PT13SDMT,PT13MVEL,PT13CPAY: 
                        PT13LIBP,PT13HIBP,PT13ILOS,PT13SDOD,PT13TSDW,PT13TODW:  
                        PT13TLOM,PT13TIMW,PT13THOM,PT13THIH,PT13SPAR            
          RETURN
.
DEPT131   RESET     KEY4                                                        
          DELETE    PATW13A1,KEY4                                               
          RETURN
.
