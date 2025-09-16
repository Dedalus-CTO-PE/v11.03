.
. ALLEXTIO    
. --------
. Filename     : allextaf.dat
.
RSALEXT1  RESET     KEY16                                                       
          READ      ALLEXTA1,KEY16;;                                            
          RETURN
.
RAALEXT1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ALLEXTA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALEXT1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ALLEXTA1,KEY16;ALEXVISN,ALEXEXTR,ALEXRDAT,ALEXAHCP,ALEXCAST:
                        ALEXRREF,ALEXREFT,ALEXORCD,ALEXHCPC,ALEXCOM1,ALEXCOM2:  
                        ALEXCOM3,ALEXCOM4,ALEXCDAT,ALEXCTIM,ALEXCUID,ALEXUDAT:  
                        ALEXUTIM,ALEXUUID,ALEXMOHR,ALEXRCST,ALEXSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALEXT1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLEXTA1;ALEXVISN,ALEXEXTR,ALEXRDAT,ALEXAHCP,ALEXCAST:      
                        ALEXRREF,ALEXREFT,ALEXORCD,ALEXHCPC,ALEXCOM1,ALEXCOM2:  
                        ALEXCOM3,ALEXCOM4,ALEXCDAT,ALEXCTIM,ALEXCUID,ALEXUDAT:  
                        ALEXUTIM,ALEXUUID,ALEXMOHR,ALEXRCST,ALEXSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALEXT1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLEXTA1;ALEXVISN,ALEXEXTR,ALEXRDAT,ALEXAHCP,ALEXCAST:      
                        ALEXRREF,ALEXREFT,ALEXORCD,ALEXHCPC,ALEXCOM1,ALEXCOM2:  
                        ALEXCOM3,ALEXCOM4,ALEXCDAT,ALEXCTIM,ALEXCUID,ALEXUDAT:  
                        ALEXUTIM,ALEXUUID,ALEXMOHR,ALEXRCST,ALEXSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALEXT1                                                                        
          UPDATE    ALLEXTA1;ALEXVISN,ALEXEXTR,ALEXRDAT,ALEXAHCP,ALEXCAST:      
                        ALEXRREF,ALEXREFT,ALEXORCD,ALEXHCPC,ALEXCOM1,ALEXCOM2:  
                        ALEXCOM3,ALEXCOM4,ALEXCDAT,ALEXCTIM,ALEXCUID,ALEXUDAT:  
                        ALEXUTIM,ALEXUUID,ALEXMOHR,ALEXRCST,ALEXSPAR            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALEXT1  RESET     KEY16                                                       
          WRITE     ALLEXTA1,KEY16;ALEXVISN,ALEXEXTR,ALEXRDAT,ALEXAHCP,ALEXCAST:
                        ALEXRREF,ALEXREFT,ALEXORCD,ALEXHCPC,ALEXCOM1,ALEXCOM2:  
                        ALEXCOM3,ALEXCOM4,ALEXCDAT,ALEXCTIM,ALEXCUID,ALEXUDAT:  
                        ALEXUTIM,ALEXUUID,ALEXMOHR,ALEXRCST,ALEXSPAR            
          RETURN
.
DEALEXT1  RESET     KEY16                                                       
          DELETE    ALLEXTA1,KEY16                                              
          RETURN
.
RLALEXT1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     ALLEXTA1,KEY16;ALEXVISN,ALEXEXTR,ALEXRDAT,ALEXAHCP,ALEXCAST:
                        ALEXRREF,ALEXREFT,ALEXORCD,ALEXHCPC,ALEXCOM1,ALEXCOM2:  
                        ALEXCOM3,ALEXCOM4,ALEXCDAT,ALEXCTIM,ALEXCUID,ALEXUDAT:  
                        ALEXUTIM,ALEXUUID,ALEXMOHR,ALEXRCST,ALEXSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALEXT1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLEXTA1;ALEXVISN,ALEXEXTR,ALEXRDAT,ALEXAHCP,ALEXCAST:      
                        ALEXRREF,ALEXREFT,ALEXORCD,ALEXHCPC,ALEXCOM1,ALEXCOM2:  
                        ALEXCOM3,ALEXCOM4,ALEXCDAT,ALEXCTIM,ALEXCUID,ALEXUDAT:  
                        ALEXUTIM,ALEXUUID,ALEXMOHR,ALEXRCST,ALEXSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALEXT1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLEXTA1;ALEXVISN,ALEXEXTR,ALEXRDAT,ALEXAHCP,ALEXCAST:      
                        ALEXRREF,ALEXREFT,ALEXORCD,ALEXHCPC,ALEXCOM1,ALEXCOM2:  
                        ALEXCOM3,ALEXCOM4,ALEXCDAT,ALEXCTIM,ALEXCUID,ALEXUDAT:  
                        ALEXUTIM,ALEXUUID,ALEXMOHR,ALEXRCST,ALEXSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALEXT1  RESET     KEY16                                                       
          UNLOCK    ALLEXTA1                                                    
          RETURN
.
RSALEXT2  RESET     KEY24                                                       
          READ      ALLEXTA2,KEY24;;                                            
          RETURN
.
RAALEXT2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      ALLEXTA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALEXT2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      ALLEXTA2,KEY24;ALEXVISN,ALEXEXTR,ALEXRDAT,ALEXAHCP,ALEXCAST:
                        ALEXRREF,ALEXREFT,ALEXORCD,ALEXHCPC,ALEXCOM1,ALEXCOM2:  
                        ALEXCOM3,ALEXCOM4,ALEXCDAT,ALEXCTIM,ALEXCUID,ALEXUDAT:  
                        ALEXUTIM,ALEXUUID,ALEXMOHR,ALEXRCST,ALEXSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALEXT2                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLEXTA2;ALEXVISN,ALEXEXTR,ALEXRDAT,ALEXAHCP,ALEXCAST:      
                        ALEXRREF,ALEXREFT,ALEXORCD,ALEXHCPC,ALEXCOM1,ALEXCOM2:  
                        ALEXCOM3,ALEXCOM4,ALEXCDAT,ALEXCTIM,ALEXCUID,ALEXUDAT:  
                        ALEXUTIM,ALEXUUID,ALEXMOHR,ALEXRCST,ALEXSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALEXT2                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLEXTA2;ALEXVISN,ALEXEXTR,ALEXRDAT,ALEXAHCP,ALEXCAST:      
                        ALEXRREF,ALEXREFT,ALEXORCD,ALEXHCPC,ALEXCOM1,ALEXCOM2:  
                        ALEXCOM3,ALEXCOM4,ALEXCDAT,ALEXCTIM,ALEXCUID,ALEXUDAT:  
                        ALEXUTIM,ALEXUUID,ALEXMOHR,ALEXRCST,ALEXSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALEXT2                                                                        
          UPDATE    ALLEXTA2;ALEXVISN,ALEXEXTR,ALEXRDAT,ALEXAHCP,ALEXCAST:      
                        ALEXRREF,ALEXREFT,ALEXORCD,ALEXHCPC,ALEXCOM1,ALEXCOM2:  
                        ALEXCOM3,ALEXCOM4,ALEXCDAT,ALEXCTIM,ALEXCUID,ALEXUDAT:  
                        ALEXUTIM,ALEXUUID,ALEXMOHR,ALEXRCST,ALEXSPAR            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALEXT2  RESET     KEY24                                                       
          WRITE     ALLEXTA2,KEY24;ALEXVISN,ALEXEXTR,ALEXRDAT,ALEXAHCP,ALEXCAST:
                        ALEXRREF,ALEXREFT,ALEXORCD,ALEXHCPC,ALEXCOM1,ALEXCOM2:  
                        ALEXCOM3,ALEXCOM4,ALEXCDAT,ALEXCTIM,ALEXCUID,ALEXUDAT:  
                        ALEXUTIM,ALEXUUID,ALEXMOHR,ALEXRCST,ALEXSPAR            
          RETURN
.
DEALEXT2  RESET     KEY24                                                       
          DELETE    ALLEXTA2,KEY24                                              
          RETURN
.
RLALEXT2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     ALLEXTA2,KEY24;ALEXVISN,ALEXEXTR,ALEXRDAT,ALEXAHCP,ALEXCAST:
                        ALEXRREF,ALEXREFT,ALEXORCD,ALEXHCPC,ALEXCOM1,ALEXCOM2:  
                        ALEXCOM3,ALEXCOM4,ALEXCDAT,ALEXCTIM,ALEXCUID,ALEXUDAT:  
                        ALEXUTIM,ALEXUUID,ALEXMOHR,ALEXRCST,ALEXSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALEXT2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLEXTA2;ALEXVISN,ALEXEXTR,ALEXRDAT,ALEXAHCP,ALEXCAST:      
                        ALEXRREF,ALEXREFT,ALEXORCD,ALEXHCPC,ALEXCOM1,ALEXCOM2:  
                        ALEXCOM3,ALEXCOM4,ALEXCDAT,ALEXCTIM,ALEXCUID,ALEXUDAT:  
                        ALEXUTIM,ALEXUUID,ALEXMOHR,ALEXRCST,ALEXSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALEXT2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLEXTA2;ALEXVISN,ALEXEXTR,ALEXRDAT,ALEXAHCP,ALEXCAST:      
                        ALEXRREF,ALEXREFT,ALEXORCD,ALEXHCPC,ALEXCOM1,ALEXCOM2:  
                        ALEXCOM3,ALEXCOM4,ALEXCDAT,ALEXCTIM,ALEXCUID,ALEXUDAT:  
                        ALEXUTIM,ALEXUUID,ALEXMOHR,ALEXRCST,ALEXSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALEXT2  RESET     KEY24                                                       
          UNLOCK    ALLEXTA2                                                    
          RETURN
.
