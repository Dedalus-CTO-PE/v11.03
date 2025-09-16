.
. OUTMSPIO    
. --------
. Filename     : outmspaf.dat
.
RSOTMSP1  RESET     KEY24                                                       
          READ      OUTMSPA1,KEY24;;                                            
          RETURN
.
RAOTMSP1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      OUTMSPA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTMSP1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      OUTMSPA1,KEY24;OTMSSITE,OTMSCLIN,OTMSDOWK,OTMSSTIM,OTMSSUSP:
                        OTMSFDAT,OTMSTDAT,OTMSREAS,OTMSEDAT,OTMSETIM,OTMSEUID:  
                        OTMSRFDT,OTMSRTDT,OTMSPARE                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTMSP1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OUTMSPA1;OTMSSITE,OTMSCLIN,OTMSDOWK,OTMSSTIM,OTMSSUSP:      
                        OTMSFDAT,OTMSTDAT,OTMSREAS,OTMSEDAT,OTMSETIM,OTMSEUID:  
                        OTMSRFDT,OTMSRTDT,OTMSPARE                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTMSP1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OUTMSPA1;OTMSSITE,OTMSCLIN,OTMSDOWK,OTMSSTIM,OTMSSUSP:      
                        OTMSFDAT,OTMSTDAT,OTMSREAS,OTMSEDAT,OTMSETIM,OTMSEUID:  
                        OTMSRFDT,OTMSRTDT,OTMSPARE                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTMSP1                                                                        
          UPDATE    OUTMSPA1;OTMSSITE,OTMSCLIN,OTMSDOWK,OTMSSTIM,OTMSSUSP:      
                        OTMSFDAT,OTMSTDAT,OTMSREAS,OTMSEDAT,OTMSETIM,OTMSEUID:  
                        OTMSRFDT,OTMSRTDT,OTMSPARE                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTMSP1  RESET     KEY24                                                       
          WRITE     OUTMSPA1,KEY24;OTMSSITE,OTMSCLIN,OTMSDOWK,OTMSSTIM,OTMSSUSP:
                        OTMSFDAT,OTMSTDAT,OTMSREAS,OTMSEDAT,OTMSETIM,OTMSEUID:  
                        OTMSRFDT,OTMSRTDT,OTMSPARE                              
          RETURN
.
DEOTMSP1  RESET     KEY24                                                       
          DELETE    OUTMSPA1,KEY24                                              
          RETURN
.
RLOTMSP1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     OUTMSPA1,KEY24;OTMSSITE,OTMSCLIN,OTMSDOWK,OTMSSTIM,OTMSSUSP:
                        OTMSFDAT,OTMSTDAT,OTMSREAS,OTMSEDAT,OTMSETIM,OTMSEUID:  
                        OTMSRFDT,OTMSRTDT,OTMSPARE                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOTMSP1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   OUTMSPA1;OTMSSITE,OTMSCLIN,OTMSDOWK,OTMSSTIM,OTMSSUSP:      
                        OTMSFDAT,OTMSTDAT,OTMSREAS,OTMSEDAT,OTMSETIM,OTMSEUID:  
                        OTMSRFDT,OTMSRTDT,OTMSPARE                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOTMSP1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   OUTMSPA1;OTMSSITE,OTMSCLIN,OTMSDOWK,OTMSSTIM,OTMSSUSP:      
                        OTMSFDAT,OTMSTDAT,OTMSREAS,OTMSEDAT,OTMSETIM,OTMSEUID:  
                        OTMSRFDT,OTMSRTDT,OTMSPARE                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOTMSP1  RESET     KEY24                                                       
          UNLOCK    OUTMSPA1                                                    
          RETURN
.
RSOTMSP2  RESET     KEY24                                                       
          READ      OUTMSPA2,KEY24;;                                            
          RETURN
.
RAOTMSP2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      OUTMSPA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTMSP2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      OUTMSPA2,KEY24;OTMSSITE,OTMSCLIN,OTMSDOWK,OTMSSTIM,OTMSSUSP:
                        OTMSFDAT,OTMSTDAT,OTMSREAS,OTMSEDAT,OTMSETIM,OTMSEUID:  
                        OTMSRFDT,OTMSRTDT,OTMSPARE                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTMSP2                                                                        
          MOVE      ZERO,OVRCD
          READKS    OUTMSPA2;OTMSSITE,OTMSCLIN,OTMSDOWK,OTMSSTIM,OTMSSUSP:      
                        OTMSFDAT,OTMSTDAT,OTMSREAS,OTMSEDAT,OTMSETIM,OTMSEUID:  
                        OTMSRFDT,OTMSRTDT,OTMSPARE                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTMSP2                                                                        
          MOVE      ZERO,OVRCD
          READKP    OUTMSPA2;OTMSSITE,OTMSCLIN,OTMSDOWK,OTMSSTIM,OTMSSUSP:      
                        OTMSFDAT,OTMSTDAT,OTMSREAS,OTMSEDAT,OTMSETIM,OTMSEUID:  
                        OTMSRFDT,OTMSRTDT,OTMSPARE                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTMSP2                                                                        
          UPDATE    OUTMSPA2;OTMSSITE,OTMSCLIN,OTMSDOWK,OTMSSTIM,OTMSSUSP:      
                        OTMSFDAT,OTMSTDAT,OTMSREAS,OTMSEDAT,OTMSETIM,OTMSEUID:  
                        OTMSRFDT,OTMSRTDT,OTMSPARE                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTMSP2  RESET     KEY24                                                       
          WRITE     OUTMSPA2,KEY24;OTMSSITE,OTMSCLIN,OTMSDOWK,OTMSSTIM,OTMSSUSP:
                        OTMSFDAT,OTMSTDAT,OTMSREAS,OTMSEDAT,OTMSETIM,OTMSEUID:  
                        OTMSRFDT,OTMSRTDT,OTMSPARE                              
          RETURN
.
DEOTMSP2  RESET     KEY24                                                       
          DELETE    OUTMSPA2,KEY24                                              
          RETURN
.
RLOTMSP2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     OUTMSPA2,KEY24;OTMSSITE,OTMSCLIN,OTMSDOWK,OTMSSTIM,OTMSSUSP:
                        OTMSFDAT,OTMSTDAT,OTMSREAS,OTMSEDAT,OTMSETIM,OTMSEUID:  
                        OTMSRFDT,OTMSRTDT,OTMSPARE                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOTMSP2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   OUTMSPA2;OTMSSITE,OTMSCLIN,OTMSDOWK,OTMSSTIM,OTMSSUSP:      
                        OTMSFDAT,OTMSTDAT,OTMSREAS,OTMSEDAT,OTMSETIM,OTMSEUID:  
                        OTMSRFDT,OTMSRTDT,OTMSPARE                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOTMSP2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   OUTMSPA2;OTMSSITE,OTMSCLIN,OTMSDOWK,OTMSSTIM,OTMSSUSP:      
                        OTMSFDAT,OTMSTDAT,OTMSREAS,OTMSEDAT,OTMSETIM,OTMSEUID:  
                        OTMSRFDT,OTMSRTDT,OTMSPARE                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOTMSP2  RESET     KEY24                                                       
          UNLOCK    OUTMSPA2                                                    
          RETURN
.
