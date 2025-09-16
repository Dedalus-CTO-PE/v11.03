.
. CCSCMCIO    
. --------
. Filename     : ccscmcaf.dat
.
RSCCMC1   RESET     KEY16                                                       
          READ      CCSCMCA1,KEY16;;                                            
          RETURN
.
RACCMC1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCMCA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCMC1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCMCA1,KEY16;CCMCHCD,CCMCDPT,CCMCYEAR,CCMCPER,CCMCDIR:    
                        CCMCIND,CCMCFLX,CCMCSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCMC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSCMCA1;CCMCHCD,CCMCDPT,CCMCYEAR,CCMCPER,CCMCDIR:          
                        CCMCIND,CCMCFLX,CCMCSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCMC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSCMCA1;CCMCHCD,CCMCDPT,CCMCYEAR,CCMCPER,CCMCDIR:          
                        CCMCIND,CCMCFLX,CCMCSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCMC1                                                                         
          UPDATE    CCSCMCA1;CCMCHCD,CCMCDPT,CCMCYEAR,CCMCPER,CCMCDIR:          
                        CCMCIND,CCMCFLX,CCMCSPA                                 
          RETURN
.
WRCCMC1   RESET     KEY16                                                       
          WRITE     CCSCMCA1,KEY16;CCMCHCD,CCMCDPT,CCMCYEAR,CCMCPER,CCMCDIR:    
                        CCMCIND,CCMCFLX,CCMCSPA                                 
          RETURN
.
DECCMC1   RESET     KEY16                                                       
          DELETE    CCSCMCA1,KEY16                                              
          RETURN
.
RSCCMC2   RESET     KEY16                                                       
          READ      CCSCMCA2,KEY16;;                                            
          RETURN
.
RACCMC2   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCMCA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCMC2   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCMCA2,KEY16;CCMCHCD,CCMCDPT,CCMCYEAR,CCMCPER,CCMCDIR:    
                        CCMCIND,CCMCFLX,CCMCSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCMC2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSCMCA2;CCMCHCD,CCMCDPT,CCMCYEAR,CCMCPER,CCMCDIR:          
                        CCMCIND,CCMCFLX,CCMCSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCMC2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSCMCA2;CCMCHCD,CCMCDPT,CCMCYEAR,CCMCPER,CCMCDIR:          
                        CCMCIND,CCMCFLX,CCMCSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCMC2                                                                         
          UPDATE    CCSCMCA2;CCMCHCD,CCMCDPT,CCMCYEAR,CCMCPER,CCMCDIR:          
                        CCMCIND,CCMCFLX,CCMCSPA                                 
          RETURN
.
WRCCMC2   RESET     KEY16                                                       
          WRITE     CCSCMCA2,KEY16;CCMCHCD,CCMCDPT,CCMCYEAR,CCMCPER,CCMCDIR:    
                        CCMCIND,CCMCFLX,CCMCSPA                                 
          RETURN
.
DECCMC2   RESET     KEY16                                                       
          DELETE    CCSCMCA2,KEY16                                              
          RETURN
.
