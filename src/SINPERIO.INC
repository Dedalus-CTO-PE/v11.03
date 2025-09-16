.
. SINPERIO    
. --------
. Filename     : sinperaf.dat
.
RSSIPE1   RESET     KEY6                                                        
          READ      SINPERA1,KEY6;;                                             
          RETURN
.
RASIPE1   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      SINPERA1,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIPE1   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      SINPERA1,KEY6;SIPEYEAR,SIPEPER,SIPESDT,SIPEEDT,SIPELOC:     
                        SIPESPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIPE1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINPERA1;SIPEYEAR,SIPEPER,SIPESDT,SIPEEDT,SIPELOC:          
                        SIPESPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIPE1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINPERA1;SIPEYEAR,SIPEPER,SIPESDT,SIPEEDT,SIPELOC:          
                        SIPESPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIPE1                                                                         
          UPDATE    SINPERA1;SIPEYEAR,SIPEPER,SIPESDT,SIPEEDT,SIPELOC:          
                        SIPESPA                                                 
          RETURN
.
WRSIPE1   RESET     KEY6                                                        
          WRITE     SINPERA1,KEY6;SIPEYEAR,SIPEPER,SIPESDT,SIPEEDT,SIPELOC:     
                        SIPESPA                                                 
          RETURN
.
DESIPE1   RESET     KEY6                                                        
          DELETE    SINPERA1,KEY6                                               
          RETURN
.
RSSIPE2   RESET     KEY14                                                       
          READ      SINPERA2,KEY14;;                                            
          RETURN
.
RASIPE2   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      SINPERA2,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIPE2   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      SINPERA2,KEY14;SIPEYEAR,SIPEPER,SIPESDT,SIPEEDT,SIPELOC:    
                        SIPESPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIPE2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINPERA2;SIPEYEAR,SIPEPER,SIPESDT,SIPEEDT,SIPELOC:          
                        SIPESPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIPE2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINPERA2;SIPEYEAR,SIPEPER,SIPESDT,SIPEEDT,SIPELOC:          
                        SIPESPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIPE2                                                                         
          UPDATE    SINPERA2;SIPEYEAR,SIPEPER,SIPESDT,SIPEEDT,SIPELOC:          
                        SIPESPA                                                 
          RETURN
.
WRSIPE2   RESET     KEY14                                                       
          WRITE     SINPERA2,KEY14;SIPEYEAR,SIPEPER,SIPESDT,SIPEEDT,SIPELOC:    
                        SIPESPA                                                 
          RETURN
.
DESIPE2   RESET     KEY14                                                       
          DELETE    SINPERA2,KEY14                                              
          RETURN
.
