.
. PATW12IO    
. --------
. Filename     : patw12af.dat
.
RSPT121   RESET     KEY4                                                        
          READ      PATW12A1,KEY4;;                                             
          RETURN
.
RAPT121   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      PATW12A1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT121   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      PATW12A1,KEY4;PT12DRGC,PT12DRGD,PT12SDMT,PT12MVEL,PT12CPAY: 
                        PT12LIBP,PT12HIBP,PT12ILOS,PT12SDOD,PT12TSDW,PT12TODW:  
                        PT12TLOM,PT12TIMW,PT12THOM,PT12THIH,PT12SPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT121                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATW12A1;PT12DRGC,PT12DRGD,PT12SDMT,PT12MVEL,PT12CPAY:      
                        PT12LIBP,PT12HIBP,PT12ILOS,PT12SDOD,PT12TSDW,PT12TODW:  
                        PT12TLOM,PT12TIMW,PT12THOM,PT12THIH,PT12SPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT121                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATW12A1;PT12DRGC,PT12DRGD,PT12SDMT,PT12MVEL,PT12CPAY:      
                        PT12LIBP,PT12HIBP,PT12ILOS,PT12SDOD,PT12TSDW,PT12TODW:  
                        PT12TLOM,PT12TIMW,PT12THOM,PT12THIH,PT12SPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT121                                                                         
          UPDATE    PATW12A1;PT12DRGC,PT12DRGD,PT12SDMT,PT12MVEL,PT12CPAY:      
                        PT12LIBP,PT12HIBP,PT12ILOS,PT12SDOD,PT12TSDW,PT12TODW:  
                        PT12TLOM,PT12TIMW,PT12THOM,PT12THIH,PT12SPAR            
          RETURN
.
WRPT121   RESET     KEY4                                                        
          WRITE     PATW12A1,KEY4;PT12DRGC,PT12DRGD,PT12SDMT,PT12MVEL,PT12CPAY: 
                        PT12LIBP,PT12HIBP,PT12ILOS,PT12SDOD,PT12TSDW,PT12TODW:  
                        PT12TLOM,PT12TIMW,PT12THOM,PT12THIH,PT12SPAR            
          RETURN
.
DEPT121   RESET     KEY4                                                        
          DELETE    PATW12A1,KEY4                                               
          RETURN
.
