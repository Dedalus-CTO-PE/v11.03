.
. ALLSERIO    
. --------
. Filename     : allseraf.dat
.
RSALSER1  RESET     KEY9                                                        
          READ      ALLSERA1,KEY9;;                                             
          RETURN
.
RAALSER1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      ALLSERA1,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALSER1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      ALLSERA1,KEY9;ALSRDEPT,ALSRSERV,ALSRDESC,ALSRLENG,ALSRVACS: 
                        ALSRACTV,ALSRCDAT,ALSRCTIM,ALSRCUID,ALSRUDAT,ALSRUTIM:  
                        ALSRUUID,ALSRGROU,ALSRNURA,ALSRMHDP:
                        ALSRSPEC,ALSRHOME,ALSRSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALSER1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLSERA1;ALSRDEPT,ALSRSERV,ALSRDESC,ALSRLENG,ALSRVACS:      
                        ALSRACTV,ALSRCDAT,ALSRCTIM,ALSRCUID,ALSRUDAT,ALSRUTIM:  
                        ALSRUUID,ALSRGROU,ALSRNURA,ALSRMHDP:
                        ALSRSPEC,ALSRHOME,ALSRSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALSER1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLSERA1;ALSRDEPT,ALSRSERV,ALSRDESC,ALSRLENG,ALSRVACS:      
                        ALSRACTV,ALSRCDAT,ALSRCTIM,ALSRCUID,ALSRUDAT,ALSRUTIM:  
                        ALSRUUID,ALSRGROU,ALSRNURA,ALSRMHDP:            
                        ALSRSPEC,ALSRHOME,ALSRSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALSER1                                                                        
          UPDATE    ALLSERA1;ALSRDEPT,ALSRSERV,ALSRDESC,ALSRLENG,ALSRVACS:      
                        ALSRACTV,ALSRCDAT,ALSRCTIM,ALSRCUID,ALSRUDAT,ALSRUTIM:  
                        ALSRUUID,ALSRGROU,ALSRNURA,ALSRMHDP:
                        ALSRSPEC,ALSRHOME,ALSRSPAR
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALSER1  RESET     KEY9                                                        
          WRITE     ALLSERA1,KEY9;ALSRDEPT,ALSRSERV,ALSRDESC,ALSRLENG,ALSRVACS: 
                        ALSRACTV,ALSRCDAT,ALSRCTIM,ALSRCUID,ALSRUDAT,ALSRUTIM:  
                        ALSRUUID,ALSRGROU,ALSRNURA,ALSRMHDP:
                        ALSRSPEC,ALSRHOME,ALSRSPAR
          RETURN
.
DEALSER1  RESET     KEY9                                                        
          DELETE    ALLSERA1,KEY9                                               
          RETURN
.
RLALSER1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READL     ALLSERA1,KEY9;ALSRDEPT,ALSRSERV,ALSRDESC,ALSRLENG,ALSRVACS: 
                        ALSRACTV,ALSRCDAT,ALSRCTIM,ALSRCUID,ALSRUDAT,ALSRUTIM:  
                        ALSRUUID,ALSRGROU,ALSRNURA,ALSRMHDP:
                        ALSRSPEC,ALSRHOME,ALSRSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALSER1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLSERA1;ALSRDEPT,ALSRSERV,ALSRDESC,ALSRLENG,ALSRVACS:      
                        ALSRACTV,ALSRCDAT,ALSRCTIM,ALSRCUID,ALSRUDAT,ALSRUTIM:  
                        ALSRUUID,ALSRGROU,ALSRNURA,ALSRMHDP:          
                        ALSRSPEC,ALSRHOME,ALSRSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALSER1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLSERA1;ALSRDEPT,ALSRSERV,ALSRDESC,ALSRLENG,ALSRVACS:      
                        ALSRACTV,ALSRCDAT,ALSRCTIM,ALSRCUID,ALSRUDAT,ALSRUTIM:  
                        ALSRUUID,ALSRGROU,ALSRNURA,ALSRMHDP:            
                        ALSRSPEC,ALSRHOME,ALSRSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALSER1  RESET     KEY9                                                        
          UNLOCK    ALLSERA1                                                    
          RETURN
.
RSALSER2  RESET     KEY49                                                       
          READ      ALLSERA2,KEY49;;                                            
          RETURN
.
RAALSER2  RESET     KEY49                                                       
          MOVE      ZERO,OVRCD
          READ      ALLSERA2,KEY49;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALSER2  RESET     KEY49                                                       
          MOVE      ZERO,OVRCD
          READ      ALLSERA2,KEY49;ALSRDEPT,ALSRSERV,ALSRDESC,ALSRLENG,ALSRVACS:
                        ALSRACTV,ALSRCDAT,ALSRCTIM,ALSRCUID,ALSRUDAT,ALSRUTIM:  
                        ALSRUUID,ALSRGROU,ALSRNURA,ALSRMHDP:
                        ALSRSPEC,ALSRHOME,ALSRSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALSER2                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLSERA2;ALSRDEPT,ALSRSERV,ALSRDESC,ALSRLENG,ALSRVACS:      
                        ALSRACTV,ALSRCDAT,ALSRCTIM,ALSRCUID,ALSRUDAT,ALSRUTIM:  
                        ALSRUUID,ALSRGROU,ALSRNURA,ALSRMHDP:
                        ALSRSPEC,ALSRHOME,ALSRSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALSER2                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLSERA2;ALSRDEPT,ALSRSERV,ALSRDESC,ALSRLENG,ALSRVACS:      
                        ALSRACTV,ALSRCDAT,ALSRCTIM,ALSRCUID,ALSRUDAT,ALSRUTIM:  
                        ALSRUUID,ALSRGROU,ALSRNURA,ALSRMHDP:
                        ALSRSPEC,ALSRHOME,ALSRSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALSER2                                                                        
          UPDATE    ALLSERA2;ALSRDEPT,ALSRSERV,ALSRDESC,ALSRLENG,ALSRVACS:      
                        ALSRACTV,ALSRCDAT,ALSRCTIM,ALSRCUID,ALSRUDAT,ALSRUTIM:  
                        ALSRUUID,ALSRGROU,ALSRNURA,ALSRMHDP:
                        ALSRSPEC,ALSRHOME,ALSRSPAR
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALSER2  RESET     KEY49                                                       
          WRITE     ALLSERA2,KEY49;ALSRDEPT,ALSRSERV,ALSRDESC,ALSRLENG,ALSRVACS:
                        ALSRACTV,ALSRCDAT,ALSRCTIM,ALSRCUID,ALSRUDAT,ALSRUTIM:  
                        ALSRUUID,ALSRGROU,ALSRNURA,ALSRMHDP:
                        ALSRSPEC,ALSRHOME,ALSRSPAR
          RETURN
.
DEALSER2  RESET     KEY49                                                       
          DELETE    ALLSERA2,KEY49                                              
          RETURN
.
RLALSER2  RESET     KEY49                                                       
          MOVE      ZERO,OVRCD
          READL     ALLSERA2,KEY49;ALSRDEPT,ALSRSERV,ALSRDESC,ALSRLENG,ALSRVACS:
                        ALSRACTV,ALSRCDAT,ALSRCTIM,ALSRCUID,ALSRUDAT,ALSRUTIM:  
                        ALSRUUID,ALSRGROU,ALSRNURA,ALSRMHDP:
                        ALSRSPEC,ALSRHOME,ALSRSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALSER2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLSERA2;ALSRDEPT,ALSRSERV,ALSRDESC,ALSRLENG,ALSRVACS:      
                        ALSRACTV,ALSRCDAT,ALSRCTIM,ALSRCUID,ALSRUDAT,ALSRUTIM:  
                        ALSRUUID,ALSRGROU,ALSRNURA,ALSRMHDP:
                        ALSRSPEC,ALSRHOME,ALSRSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALSER2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLSERA2;ALSRDEPT,ALSRSERV,ALSRDESC,ALSRLENG,ALSRVACS:      
                        ALSRACTV,ALSRCDAT,ALSRCTIM,ALSRCUID,ALSRUDAT,ALSRUTIM:  
                        ALSRUUID,ALSRGROU,ALSRNURA,ALSRMHDP:
                        ALSRSPEC,ALSRHOME,ALSRSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALSER2  RESET     KEY49                                                       
          UNLOCK    ALLSERA2                                                    
          RETURN
.
