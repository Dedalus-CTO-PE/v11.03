.
. APSCAFIO    
. --------
. Filename     : apscafaf.dat
.
RSAPCA1   RESET     KEY37                                                       
          READ      APSCAFA1,KEY37;;                                            
          RETURN
.
RAAPCA1   RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      APSCAFA1,KEY37;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPCA1   RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      APSCAFA1,KEY37;APCACHQ,APCACRD,APCAINV,APCALED,APCAAMT:     
                        APCADES,APCASORT                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPCA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSCAFA1;APCACHQ,APCACRD,APCAINV,APCALED,APCAAMT:           
                        APCADES,APCASORT                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPCA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSCAFA1;APCACHQ,APCACRD,APCAINV,APCALED,APCAAMT:           
                        APCADES,APCASORT                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPCA1                                                                         
          UPDATE    APSCAFA1;APCACHQ,APCACRD,APCAINV,APCALED,APCAAMT:           
                        APCADES,APCASORT                                        
          RETURN
.
WRAPCA1   RESET     KEY37                                                       
          WRITE     APSCAFA1,KEY37;APCACHQ,APCACRD,APCAINV,APCALED,APCAAMT:     
                        APCADES,APCASORT                                        
          RETURN
.
DEAPCA1   RESET     KEY37                                                       
          DELETE    APSCAFA1,KEY37                                              
          RETURN
.
RSAPCA2   RESET     KEY37                                                       
          READ      APSCAFA2,KEY37;;                                            
          RETURN
.
RAAPCA2   RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      APSCAFA2,KEY37;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPCA2   RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      APSCAFA2,KEY37;APCACHQ,APCACRD,APCAINV,APCALED,APCAAMT:     
                        APCADES,APCASORT                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPCA2                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSCAFA2;APCACHQ,APCACRD,APCAINV,APCALED,APCAAMT:           
                        APCADES,APCASORT                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPCA2                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSCAFA2;APCACHQ,APCACRD,APCAINV,APCALED,APCAAMT:           
                        APCADES,APCASORT                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPCA2                                                                         
          UPDATE    APSCAFA2;APCACHQ,APCACRD,APCAINV,APCALED,APCAAMT:           
                        APCADES,APCASORT                                        
          RETURN
.
WRAPCA2   RESET     KEY37                                                       
          WRITE     APSCAFA2,KEY37;APCACHQ,APCACRD,APCAINV,APCALED,APCAAMT:     
                        APCADES,APCASORT                                        
          RETURN
.
DEAPCA2   RESET     KEY37                                                       
          DELETE    APSCAFA2,KEY37                                              
          RETURN
.
RSAPCA3   RESET     KEY43                                                       
          READ      APSCAFA3,KEY43;;                                            
          RETURN
.
RAAPCA3   RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READ      APSCAFA3,KEY43;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPCA3   RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READ      APSCAFA3,KEY43;APCACHQ,APCACRD,APCAINV,APCALED,APCAAMT:     
                        APCADES,APCASORT                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPCA3                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSCAFA3;APCACHQ,APCACRD,APCAINV,APCALED,APCAAMT:           
                        APCADES,APCASORT                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPCA3                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSCAFA3;APCACHQ,APCACRD,APCAINV,APCALED,APCAAMT:           
                        APCADES,APCASORT                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPCA3                                                                         
          UPDATE    APSCAFA3;APCACHQ,APCACRD,APCAINV,APCALED,APCAAMT:           
                        APCADES,APCASORT                                        
          RETURN
.
WRAPCA3   RESET     KEY43                                                       
          WRITE     APSCAFA3,KEY43;APCACHQ,APCACRD,APCAINV,APCALED,APCAAMT:     
                        APCADES,APCASORT                                        
          RETURN
.
DEAPCA3   RESET     KEY43                                                       
          DELETE    APSCAFA3,KEY43                                              
          RETURN
.
