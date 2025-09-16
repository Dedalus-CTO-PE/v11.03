.
. ALLCTMIO    
. --------
. Filename     : allctmaf.dat
.
RSALCTM1  RESET     KEY20                                                       
          READ      ALLCTMA1,KEY20;;                                            
          RETURN
.
RAALCTM1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      ALLCTMA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALCTM1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      ALLCTMA1,KEY20;ALCTTEAM,ALCTHCPC,ALCTSDAT,ALCTEDAT,ALCTCDAT:
                        ALCTCTIM,ALCTCUID,ALCTUDAT,ALCTUTIM,ALCTUUID,ALCTSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALCTM1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLCTMA1;ALCTTEAM,ALCTHCPC,ALCTSDAT,ALCTEDAT,ALCTCDAT:      
                        ALCTCTIM,ALCTCUID,ALCTUDAT,ALCTUTIM,ALCTUUID,ALCTSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALCTM1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLCTMA1;ALCTTEAM,ALCTHCPC,ALCTSDAT,ALCTEDAT,ALCTCDAT:      
                        ALCTCTIM,ALCTCUID,ALCTUDAT,ALCTUTIM,ALCTUUID,ALCTSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALCTM1                                                                        
          UPDATE    ALLCTMA1;ALCTTEAM,ALCTHCPC,ALCTSDAT,ALCTEDAT,ALCTCDAT:      
                        ALCTCTIM,ALCTCUID,ALCTUDAT,ALCTUTIM,ALCTUUID,ALCTSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALCTM1  RESET     KEY20                                                       
          WRITE     ALLCTMA1,KEY20;ALCTTEAM,ALCTHCPC,ALCTSDAT,ALCTEDAT,ALCTCDAT:
                        ALCTCTIM,ALCTCUID,ALCTUDAT,ALCTUTIM,ALCTUUID,ALCTSPAR   
          RETURN
.
DEALCTM1  RESET     KEY20                                                       
          DELETE    ALLCTMA1,KEY20                                              
          RETURN
.
RLALCTM1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READL     ALLCTMA1,KEY20;ALCTTEAM,ALCTHCPC,ALCTSDAT,ALCTEDAT,ALCTCDAT:
                        ALCTCTIM,ALCTCUID,ALCTUDAT,ALCTUTIM,ALCTUUID,ALCTSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALCTM1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLCTMA1;ALCTTEAM,ALCTHCPC,ALCTSDAT,ALCTEDAT,ALCTCDAT:      
                        ALCTCTIM,ALCTCUID,ALCTUDAT,ALCTUTIM,ALCTUUID,ALCTSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALCTM1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLCTMA1;ALCTTEAM,ALCTHCPC,ALCTSDAT,ALCTEDAT,ALCTCDAT:      
                        ALCTCTIM,ALCTCUID,ALCTUDAT,ALCTUTIM,ALCTUUID,ALCTSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALCTM1  RESET     KEY20                                                       
          UNLOCK    ALLCTMA1                                                    
          RETURN
.
RSALCTM2  RESET     KEY20                                                       
          READ      ALLCTMA2,KEY20;;                                            
          RETURN
.
RAALCTM2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      ALLCTMA2,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALCTM2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      ALLCTMA2,KEY20;ALCTTEAM,ALCTHCPC,ALCTSDAT,ALCTEDAT,ALCTCDAT:
                        ALCTCTIM,ALCTCUID,ALCTUDAT,ALCTUTIM,ALCTUUID,ALCTSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALCTM2                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLCTMA2;ALCTTEAM,ALCTHCPC,ALCTSDAT,ALCTEDAT,ALCTCDAT:      
                        ALCTCTIM,ALCTCUID,ALCTUDAT,ALCTUTIM,ALCTUUID,ALCTSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALCTM2                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLCTMA2;ALCTTEAM,ALCTHCPC,ALCTSDAT,ALCTEDAT,ALCTCDAT:      
                        ALCTCTIM,ALCTCUID,ALCTUDAT,ALCTUTIM,ALCTUUID,ALCTSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALCTM2                                                                        
          UPDATE    ALLCTMA2;ALCTTEAM,ALCTHCPC,ALCTSDAT,ALCTEDAT,ALCTCDAT:      
                        ALCTCTIM,ALCTCUID,ALCTUDAT,ALCTUTIM,ALCTUUID,ALCTSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALCTM2  RESET     KEY20                                                       
          WRITE     ALLCTMA2,KEY20;ALCTTEAM,ALCTHCPC,ALCTSDAT,ALCTEDAT,ALCTCDAT:
                        ALCTCTIM,ALCTCUID,ALCTUDAT,ALCTUTIM,ALCTUUID,ALCTSPAR   
          RETURN
.
DEALCTM2  RESET     KEY20                                                       
          DELETE    ALLCTMA2,KEY20                                              
          RETURN
.
RLALCTM2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READL     ALLCTMA2,KEY20;ALCTTEAM,ALCTHCPC,ALCTSDAT,ALCTEDAT,ALCTCDAT:
                        ALCTCTIM,ALCTCUID,ALCTUDAT,ALCTUTIM,ALCTUUID,ALCTSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALCTM2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLCTMA2;ALCTTEAM,ALCTHCPC,ALCTSDAT,ALCTEDAT,ALCTCDAT:      
                        ALCTCTIM,ALCTCUID,ALCTUDAT,ALCTUTIM,ALCTUUID,ALCTSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALCTM2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLCTMA2;ALCTTEAM,ALCTHCPC,ALCTSDAT,ALCTEDAT,ALCTCDAT:      
                        ALCTCTIM,ALCTCUID,ALCTUDAT,ALCTUTIM,ALCTUUID,ALCTSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALCTM2  RESET     KEY20                                                       
          UNLOCK    ALLCTMA2                                                    
          RETURN
.
