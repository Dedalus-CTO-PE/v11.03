.
. ALLGRHIO    
. --------
. Filename     : allgrhaf.dat
.
RSALGRH1  RESET     KEY21                                                       
          READ      ALLGRHA1,KEY21;;                                            
          RETURN
.
RAALGRH1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      ALLGRHA1,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALGRH1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      ALLGRHA1,KEY21;ALGHSESN,ALGHHCPC,ALGHSPEC,ALGHACTV,ALGHCDAT:
                        ALGHCTIM,ALGHCUID,ALGHUDAT,ALGHUTIM,ALGHUUID,ALGHSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALGRH1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLGRHA1;ALGHSESN,ALGHHCPC,ALGHSPEC,ALGHACTV,ALGHCDAT:      
                        ALGHCTIM,ALGHCUID,ALGHUDAT,ALGHUTIM,ALGHUUID,ALGHSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALGRH1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLGRHA1;ALGHSESN,ALGHHCPC,ALGHSPEC,ALGHACTV,ALGHCDAT:      
                        ALGHCTIM,ALGHCUID,ALGHUDAT,ALGHUTIM,ALGHUUID,ALGHSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALGRH1                                                                        
          UPDATE    ALLGRHA1;ALGHSESN,ALGHHCPC,ALGHSPEC,ALGHACTV,ALGHCDAT:      
                        ALGHCTIM,ALGHCUID,ALGHUDAT,ALGHUTIM,ALGHUUID,ALGHSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALGRH1  RESET     KEY21                                                       
          WRITE     ALLGRHA1,KEY21;ALGHSESN,ALGHHCPC,ALGHSPEC,ALGHACTV,ALGHCDAT:
                        ALGHCTIM,ALGHCUID,ALGHUDAT,ALGHUTIM,ALGHUUID,ALGHSPAR   
          RETURN
.
DEALGRH1  RESET     KEY21                                                       
          DELETE    ALLGRHA1,KEY21                                              
          RETURN
.
RLALGRH1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READL     ALLGRHA1,KEY21;ALGHSESN,ALGHHCPC,ALGHSPEC,ALGHACTV,ALGHCDAT:
                        ALGHCTIM,ALGHCUID,ALGHUDAT,ALGHUTIM,ALGHUUID,ALGHSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALGRH1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLGRHA1;ALGHSESN,ALGHHCPC,ALGHSPEC,ALGHACTV,ALGHCDAT:      
                        ALGHCTIM,ALGHCUID,ALGHUDAT,ALGHUTIM,ALGHUUID,ALGHSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALGRH1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLGRHA1;ALGHSESN,ALGHHCPC,ALGHSPEC,ALGHACTV,ALGHCDAT:      
                        ALGHCTIM,ALGHCUID,ALGHUDAT,ALGHUTIM,ALGHUUID,ALGHSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALGRH1  RESET     KEY21                                                       
          UNLOCK    ALLGRHA1                                                    
          RETURN
.
RSALGRH2  RESET     KEY22                                                       
          READ      ALLGRHA2,KEY22;;                                            
          RETURN
.
RAALGRH2  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      ALLGRHA2,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALGRH2  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      ALLGRHA2,KEY22;ALGHSESN,ALGHHCPC,ALGHSPEC,ALGHACTV,ALGHCDAT:
                        ALGHCTIM,ALGHCUID,ALGHUDAT,ALGHUTIM,ALGHUUID,ALGHSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALGRH2                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLGRHA2;ALGHSESN,ALGHHCPC,ALGHSPEC,ALGHACTV,ALGHCDAT:      
                        ALGHCTIM,ALGHCUID,ALGHUDAT,ALGHUTIM,ALGHUUID,ALGHSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALGRH2                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLGRHA2;ALGHSESN,ALGHHCPC,ALGHSPEC,ALGHACTV,ALGHCDAT:      
                        ALGHCTIM,ALGHCUID,ALGHUDAT,ALGHUTIM,ALGHUUID,ALGHSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALGRH2                                                                        
          UPDATE    ALLGRHA2;ALGHSESN,ALGHHCPC,ALGHSPEC,ALGHACTV,ALGHCDAT:      
                        ALGHCTIM,ALGHCUID,ALGHUDAT,ALGHUTIM,ALGHUUID,ALGHSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALGRH2  RESET     KEY22                                                       
          WRITE     ALLGRHA2,KEY22;ALGHSESN,ALGHHCPC,ALGHSPEC,ALGHACTV,ALGHCDAT:
                        ALGHCTIM,ALGHCUID,ALGHUDAT,ALGHUTIM,ALGHUUID,ALGHSPAR   
          RETURN
.
DEALGRH2  RESET     KEY22                                                       
          DELETE    ALLGRHA2,KEY22                                              
          RETURN
.
RLALGRH2  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READL     ALLGRHA2,KEY22;ALGHSESN,ALGHHCPC,ALGHSPEC,ALGHACTV,ALGHCDAT:
                        ALGHCTIM,ALGHCUID,ALGHUDAT,ALGHUTIM,ALGHUUID,ALGHSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALGRH2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLGRHA2;ALGHSESN,ALGHHCPC,ALGHSPEC,ALGHACTV,ALGHCDAT:      
                        ALGHCTIM,ALGHCUID,ALGHUDAT,ALGHUTIM,ALGHUUID,ALGHSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALGRH2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLGRHA2;ALGHSESN,ALGHHCPC,ALGHSPEC,ALGHACTV,ALGHCDAT:      
                        ALGHCTIM,ALGHCUID,ALGHUDAT,ALGHUTIM,ALGHUUID,ALGHSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALGRH2  RESET     KEY22                                                       
          UNLOCK    ALLGRHA2                                                    
          RETURN
.
