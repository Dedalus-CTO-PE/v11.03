.
. PATW11IO    
. --------
. Filename     : patw11af.dat
.
RSPT111   RESET     KEY4                                                        
          READ      PATW11A1,KEY4;;                                             
          RETURN
.
RAPT111   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      PATW11A1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT111   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      PATW11A1,KEY4;PT11DRGC,PT11DRGD,PT11SDMT,PT11MVEL,PT11CPAY: 
                        PT11LIBP,PT11HIBP,PT11ILOS,PT11SDOD,PT11TSDW,PT11TODW:  
                        PT11TLOM,PT11TIMW,PT11THOM,PT11THIH,PT11SPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT111                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATW11A1;PT11DRGC,PT11DRGD,PT11SDMT,PT11MVEL,PT11CPAY:      
                        PT11LIBP,PT11HIBP,PT11ILOS,PT11SDOD,PT11TSDW,PT11TODW:  
                        PT11TLOM,PT11TIMW,PT11THOM,PT11THIH,PT11SPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT111                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATW11A1;PT11DRGC,PT11DRGD,PT11SDMT,PT11MVEL,PT11CPAY:      
                        PT11LIBP,PT11HIBP,PT11ILOS,PT11SDOD,PT11TSDW,PT11TODW:  
                        PT11TLOM,PT11TIMW,PT11THOM,PT11THIH,PT11SPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT111                                                                         
          UPDATE    PATW11A1;PT11DRGC,PT11DRGD,PT11SDMT,PT11MVEL,PT11CPAY:      
                        PT11LIBP,PT11HIBP,PT11ILOS,PT11SDOD,PT11TSDW,PT11TODW:  
                        PT11TLOM,PT11TIMW,PT11THOM,PT11THIH,PT11SPAR            
          RETURN
.
WRPT111   RESET     KEY4                                                        
          WRITE     PATW11A1,KEY4;PT11DRGC,PT11DRGD,PT11SDMT,PT11MVEL,PT11CPAY: 
                        PT11LIBP,PT11HIBP,PT11ILOS,PT11SDOD,PT11TSDW,PT11TODW:  
                        PT11TLOM,PT11TIMW,PT11THOM,PT11THIH,PT11SPAR            
          RETURN
.
DEPT111   RESET     KEY4                                                        
          DELETE    PATW11A1,KEY4                                               
          RETURN
.
