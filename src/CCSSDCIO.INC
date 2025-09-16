.
. CCSSDCIO    
. --------
. Filename     : ccssdcaf.dat
.
RSCCSD1   RESET     KEY16                                                       
          READ      CCSSDCA1,KEY16;;                                            
          RETURN
.
RACCSD1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      CCSSDCA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCSD1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      CCSSDCA1,KEY16;CCSDHCD,CCSDDPT,CCSDYEAR,CCSDPER,CCSDDIR:    
                        CCSDDRB,CCSDIND,CCSDINB,CCSDFBU,CCSDSTD,CCSDCHG:        
                        CCSDSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCSD1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSSDCA1;CCSDHCD,CCSDDPT,CCSDYEAR,CCSDPER,CCSDDIR:          
                        CCSDDRB,CCSDIND,CCSDINB,CCSDFBU,CCSDSTD,CCSDCHG:        
                        CCSDSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCSD1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSSDCA1;CCSDHCD,CCSDDPT,CCSDYEAR,CCSDPER,CCSDDIR:          
                        CCSDDRB,CCSDIND,CCSDINB,CCSDFBU,CCSDSTD,CCSDCHG:        
                        CCSDSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCSD1                                                                         
          UPDATE    CCSSDCA1;CCSDHCD,CCSDDPT,CCSDYEAR,CCSDPER,CCSDDIR:          
                        CCSDDRB,CCSDIND,CCSDINB,CCSDFBU,CCSDSTD,CCSDCHG:        
                        CCSDSPA                                                 
          RETURN
.
WRCCSD1   RESET     KEY16                                                       
          WRITE     CCSSDCA1,KEY16;CCSDHCD,CCSDDPT,CCSDYEAR,CCSDPER,CCSDDIR:    
                        CCSDDRB,CCSDIND,CCSDINB,CCSDFBU,CCSDSTD,CCSDCHG:        
                        CCSDSPA                                                 
          RETURN
.
DECCSD1   RESET     KEY16                                                       
          DELETE    CCSSDCA1,KEY16                                              
          RETURN
.
RSCCSD2   RESET     KEY16                                                       
          READ      CCSSDCA2,KEY16;;                                            
          RETURN
.
RACCSD2   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      CCSSDCA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCSD2   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      CCSSDCA2,KEY16;CCSDHCD,CCSDDPT,CCSDYEAR,CCSDPER,CCSDDIR:    
                        CCSDDRB,CCSDIND,CCSDINB,CCSDFBU,CCSDSTD,CCSDCHG:        
                        CCSDSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCSD2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSSDCA2;CCSDHCD,CCSDDPT,CCSDYEAR,CCSDPER,CCSDDIR:          
                        CCSDDRB,CCSDIND,CCSDINB,CCSDFBU,CCSDSTD,CCSDCHG:        
                        CCSDSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCSD2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSSDCA2;CCSDHCD,CCSDDPT,CCSDYEAR,CCSDPER,CCSDDIR:          
                        CCSDDRB,CCSDIND,CCSDINB,CCSDFBU,CCSDSTD,CCSDCHG:        
                        CCSDSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCSD2                                                                         
          UPDATE    CCSSDCA2;CCSDHCD,CCSDDPT,CCSDYEAR,CCSDPER,CCSDDIR:          
                        CCSDDRB,CCSDIND,CCSDINB,CCSDFBU,CCSDSTD,CCSDCHG:        
                        CCSDSPA                                                 
          RETURN
.
WRCCSD2   RESET     KEY16                                                       
          WRITE     CCSSDCA2,KEY16;CCSDHCD,CCSDDPT,CCSDYEAR,CCSDPER,CCSDDIR:    
                        CCSDDRB,CCSDIND,CCSDINB,CCSDFBU,CCSDSTD,CCSDCHG:        
                        CCSDSPA                                                 
          RETURN
.
DECCSD2   RESET     KEY16                                                       
          DELETE    CCSSDCA2,KEY16                                              
          RETURN
.
