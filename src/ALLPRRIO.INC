.
. ALLPRRIO    
. --------
. Filename     : allprraf.dat
.
RSALPRR1  RESET     KEY12                                                       
          READ      ALLPRRA1,KEY12;;                                            
          RETURN
.
RAALPRR1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      ALLPRRA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALPRR1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      ALLPRRA1,KEY12;ALPRDEPT,ALPRPROB,ALPRDESC,ALPRICD,ALPRACTV: 
                        ALPRCDAT,ALPRCTIM,ALPRCUID,ALPRUDAT,ALPRUTIM,ALPRUUID:  
                        ALPRMHDP,ALPRDFCD,ALPROTHR,ALPRSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALPRR1  MOVE      ZERO,OVRCD                                                  
          READKS    ALLPRRA1;ALPRDEPT,ALPRPROB,ALPRDESC,ALPRICD,ALPRACTV:       
                        ALPRCDAT,ALPRCTIM,ALPRCUID,ALPRUDAT,ALPRUTIM,ALPRUUID:  
                        ALPRMHDP,ALPRDFCD,ALPROTHR,ALPRSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALPRR1  MOVE      ZERO,OVRCD                                                  
          READKP    ALLPRRA1;ALPRDEPT,ALPRPROB,ALPRDESC,ALPRICD,ALPRACTV:       
                        ALPRCDAT,ALPRCTIM,ALPRCUID,ALPRUDAT,ALPRUTIM,ALPRUUID:  
                        ALPRMHDP,ALPRDFCD,ALPROTHR,ALPRSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALPRR1  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLPRRA1;ALPRDEPT,ALPRPROB,ALPRDESC,ALPRICD,ALPRACTV:       
                        ALPRCDAT,ALPRCTIM,ALPRCUID,ALPRUDAT,ALPRUTIM,ALPRUUID:  
                        ALPRMHDP,ALPRDFCD,ALPROTHR,ALPRSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALPRR1  RESET     KEY12                                                       
          WRITE     ALLPRRA1,KEY12;ALPRDEPT,ALPRPROB,ALPRDESC,ALPRICD,ALPRACTV: 
                        ALPRCDAT,ALPRCTIM,ALPRCUID,ALPRUDAT,ALPRUTIM,ALPRUUID:  
                        ALPRMHDP,ALPRDFCD,ALPROTHR,ALPRSPAR                     
          RETURN
.
DEALPRR1  RESET     KEY12                                                       
          DELETE    ALLPRRA1,KEY12                                              
          RETURN
.
RLALPRR1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READL     ALLPRRA1,KEY12;ALPRDEPT,ALPRPROB,ALPRDESC,ALPRICD,ALPRACTV: 
                        ALPRCDAT,ALPRCTIM,ALPRCUID,ALPRUDAT,ALPRUTIM,ALPRUUID:  
                        ALPRMHDP,ALPRDFCD,ALPROTHR,ALPRSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALPRR1  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLPRRA1;ALPRDEPT,ALPRPROB,ALPRDESC,ALPRICD,ALPRACTV:       
                        ALPRCDAT,ALPRCTIM,ALPRCUID,ALPRUDAT,ALPRUTIM,ALPRUUID:  
                        ALPRMHDP,ALPRDFCD,ALPROTHR,ALPRSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALPRR1  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLPRRA1;ALPRDEPT,ALPRPROB,ALPRDESC,ALPRICD,ALPRACTV:       
                        ALPRCDAT,ALPRCTIM,ALPRCUID,ALPRUDAT,ALPRUTIM,ALPRUUID:  
                        ALPRMHDP,ALPRDFCD,ALPROTHR,ALPRSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALPRR1  RESET     KEY12                                                       
          UNLOCK    ALLPRRA1                                                    
          RETURN
.
RSALPRR2  RESET     KEY52                                                       
          READ      ALLPRRA2,KEY52;;                                            
          RETURN
.
RAALPRR2  RESET     KEY52                                                       
          MOVE      ZERO,OVRCD
          READ      ALLPRRA2,KEY52;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALPRR2  RESET     KEY52                                                       
          MOVE      ZERO,OVRCD
          READ      ALLPRRA2,KEY52;ALPRDEPT,ALPRPROB,ALPRDESC,ALPRICD,ALPRACTV: 
                        ALPRCDAT,ALPRCTIM,ALPRCUID,ALPRUDAT,ALPRUTIM,ALPRUUID:  
                        ALPRMHDP,ALPRDFCD,ALPROTHR,ALPRSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALPRR2  MOVE      ZERO,OVRCD                                                  
          READKS    ALLPRRA2;ALPRDEPT,ALPRPROB,ALPRDESC,ALPRICD,ALPRACTV:       
                        ALPRCDAT,ALPRCTIM,ALPRCUID,ALPRUDAT,ALPRUTIM,ALPRUUID:  
                        ALPRMHDP,ALPRDFCD,ALPROTHR,ALPRSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALPRR2  MOVE      ZERO,OVRCD                                                  
          READKP    ALLPRRA2;ALPRDEPT,ALPRPROB,ALPRDESC,ALPRICD,ALPRACTV:       
                        ALPRCDAT,ALPRCTIM,ALPRCUID,ALPRUDAT,ALPRUTIM,ALPRUUID:  
                        ALPRMHDP,ALPRDFCD,ALPROTHR,ALPRSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALPRR2  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLPRRA2;ALPRDEPT,ALPRPROB,ALPRDESC,ALPRICD,ALPRACTV:       
                        ALPRCDAT,ALPRCTIM,ALPRCUID,ALPRUDAT,ALPRUTIM,ALPRUUID:  
                        ALPRMHDP,ALPRDFCD,ALPROTHR,ALPRSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALPRR2  RESET     KEY52                                                       
          WRITE     ALLPRRA2,KEY52;ALPRDEPT,ALPRPROB,ALPRDESC,ALPRICD,ALPRACTV: 
                        ALPRCDAT,ALPRCTIM,ALPRCUID,ALPRUDAT,ALPRUTIM,ALPRUUID:  
                        ALPRMHDP,ALPRDFCD,ALPROTHR,ALPRSPAR                     
          RETURN
.
DEALPRR2  RESET     KEY52                                                       
          DELETE    ALLPRRA2,KEY52                                              
          RETURN
.
RLALPRR2  RESET     KEY52                                                       
          MOVE      ZERO,OVRCD
          READL     ALLPRRA2,KEY52;ALPRDEPT,ALPRPROB,ALPRDESC,ALPRICD,ALPRACTV: 
                        ALPRCDAT,ALPRCTIM,ALPRCUID,ALPRUDAT,ALPRUTIM,ALPRUUID:  
                        ALPRMHDP,ALPRDFCD,ALPROTHR,ALPRSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALPRR2  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLPRRA2;ALPRDEPT,ALPRPROB,ALPRDESC,ALPRICD,ALPRACTV:       
                        ALPRCDAT,ALPRCTIM,ALPRCUID,ALPRUDAT,ALPRUTIM,ALPRUUID:  
                        ALPRMHDP,ALPRDFCD,ALPROTHR,ALPRSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALPRR2  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLPRRA2;ALPRDEPT,ALPRPROB,ALPRDESC,ALPRICD,ALPRACTV:       
                        ALPRCDAT,ALPRCTIM,ALPRCUID,ALPRUDAT,ALPRUTIM,ALPRUUID:  
                        ALPRMHDP,ALPRDFCD,ALPROTHR,ALPRSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALPRR2  RESET     KEY52                                                       
          UNLOCK    ALLPRRA2                                                    
          RETURN
.
