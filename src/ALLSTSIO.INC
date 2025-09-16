.
. ALLSTSIO    
. --------
. Filename     : allstsaf.dat
.
RSALSTS1  RESET     KEY17                                                       
          READ      ALLSTSA1,KEY17;;                                            
          RETURN
.
RAALSTS1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      ALLSTSA1,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALSTS1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      ALLSTSA1,KEY17;ALSTVISN,ALSTSTAT,ALSTSDAT,ALSTCDAT,ALSTCTIM:
                        ALSTCUID,ALSTUDAT,ALSTUTIM,ALSTUUID,ALSTSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALSTS1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLSTSA1;ALSTVISN,ALSTSTAT,ALSTSDAT,ALSTCDAT,ALSTCTIM:      
                        ALSTCUID,ALSTUDAT,ALSTUTIM,ALSTUUID,ALSTSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALSTS1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLSTSA1;ALSTVISN,ALSTSTAT,ALSTSDAT,ALSTCDAT,ALSTCTIM:      
                        ALSTCUID,ALSTUDAT,ALSTUTIM,ALSTUUID,ALSTSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALSTS1                                                                        
          UPDATE    ALLSTSA1;ALSTVISN,ALSTSTAT,ALSTSDAT,ALSTCDAT,ALSTCTIM:      
                        ALSTCUID,ALSTUDAT,ALSTUTIM,ALSTUUID,ALSTSPAR            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALSTS1  RESET     KEY17                                                       
          WRITE     ALLSTSA1,KEY17;ALSTVISN,ALSTSTAT,ALSTSDAT,ALSTCDAT,ALSTCTIM:
                        ALSTCUID,ALSTUDAT,ALSTUTIM,ALSTUUID,ALSTSPAR            
          RETURN
.
DEALSTS1  RESET     KEY17                                                       
          DELETE    ALLSTSA1,KEY17                                              
          RETURN
.
RLALSTS1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READL     ALLSTSA1,KEY17;ALSTVISN,ALSTSTAT,ALSTSDAT,ALSTCDAT,ALSTCTIM:
                        ALSTCUID,ALSTUDAT,ALSTUTIM,ALSTUUID,ALSTSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALSTS1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLSTSA1;ALSTVISN,ALSTSTAT,ALSTSDAT,ALSTCDAT,ALSTCTIM:      
                        ALSTCUID,ALSTUDAT,ALSTUTIM,ALSTUUID,ALSTSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALSTS1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLSTSA1;ALSTVISN,ALSTSTAT,ALSTSDAT,ALSTCDAT,ALSTCTIM:      
                        ALSTCUID,ALSTUDAT,ALSTUTIM,ALSTUUID,ALSTSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALSTS1  RESET     KEY17                                                       
          UNLOCK    ALLSTSA1                                                    
          RETURN
.
