.
. CCSDCOIO    
. --------
. Filename     : ccsdcoaf.dat
.
RSCCDC1   RESET     KEY20                                                       
          READ      CCSDCOA1,KEY20;;                                            
          RETURN
.
RACCDC1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      CCSDCOA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCDC1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      CCSDCOA1,KEY20;CCDCHCD,CCDCDPT,CCDCYEAR,CCDCPER,CCDCCTY:    
                        CCDCDIR,CCDCIND,CCDCCAL,CCDCDBU,CCDCIBU,CCDCCBU:        
                        CCDCFBU,CCDCSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCDC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSDCOA1;CCDCHCD,CCDCDPT,CCDCYEAR,CCDCPER,CCDCCTY:          
                        CCDCDIR,CCDCIND,CCDCCAL,CCDCDBU,CCDCIBU,CCDCCBU:        
                        CCDCFBU,CCDCSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCDC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSDCOA1;CCDCHCD,CCDCDPT,CCDCYEAR,CCDCPER,CCDCCTY:          
                        CCDCDIR,CCDCIND,CCDCCAL,CCDCDBU,CCDCIBU,CCDCCBU:        
                        CCDCFBU,CCDCSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCDC1                                                                         
          UPDATE    CCSDCOA1;CCDCHCD,CCDCDPT,CCDCYEAR,CCDCPER,CCDCCTY:          
                        CCDCDIR,CCDCIND,CCDCCAL,CCDCDBU,CCDCIBU,CCDCCBU:        
                        CCDCFBU,CCDCSPA                                         
          RETURN
.
WRCCDC1   RESET     KEY20                                                       
          WRITE     CCSDCOA1,KEY20;CCDCHCD,CCDCDPT,CCDCYEAR,CCDCPER,CCDCCTY:    
                        CCDCDIR,CCDCIND,CCDCCAL,CCDCDBU,CCDCIBU,CCDCCBU:        
                        CCDCFBU,CCDCSPA                                         
          RETURN
.
DECCDC1   RESET     KEY20                                                       
          DELETE    CCSDCOA1,KEY20                                              
          RETURN
.
RSCCDC2   RESET     KEY20                                                       
          READ      CCSDCOA2,KEY20;;                                            
          RETURN
.
RACCDC2   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      CCSDCOA2,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCDC2   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      CCSDCOA2,KEY20;CCDCHCD,CCDCDPT,CCDCYEAR,CCDCPER,CCDCCTY:    
                        CCDCDIR,CCDCIND,CCDCCAL,CCDCDBU,CCDCIBU,CCDCCBU:        
                        CCDCFBU,CCDCSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCDC2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSDCOA2;CCDCHCD,CCDCDPT,CCDCYEAR,CCDCPER,CCDCCTY:          
                        CCDCDIR,CCDCIND,CCDCCAL,CCDCDBU,CCDCIBU,CCDCCBU:        
                        CCDCFBU,CCDCSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCDC2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSDCOA2;CCDCHCD,CCDCDPT,CCDCYEAR,CCDCPER,CCDCCTY:          
                        CCDCDIR,CCDCIND,CCDCCAL,CCDCDBU,CCDCIBU,CCDCCBU:        
                        CCDCFBU,CCDCSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCDC2                                                                         
          UPDATE    CCSDCOA2;CCDCHCD,CCDCDPT,CCDCYEAR,CCDCPER,CCDCCTY:          
                        CCDCDIR,CCDCIND,CCDCCAL,CCDCDBU,CCDCIBU,CCDCCBU:        
                        CCDCFBU,CCDCSPA                                         
          RETURN
.
WRCCDC2   RESET     KEY20                                                       
          WRITE     CCSDCOA2,KEY20;CCDCHCD,CCDCDPT,CCDCYEAR,CCDCPER,CCDCCTY:    
                        CCDCDIR,CCDCIND,CCDCCAL,CCDCDBU,CCDCIBU,CCDCCBU:        
                        CCDCFBU,CCDCSPA                                         
          RETURN
.
DECCDC2   RESET     KEY20                                                       
          DELETE    CCSDCOA2,KEY20                                              
          RETURN
.
