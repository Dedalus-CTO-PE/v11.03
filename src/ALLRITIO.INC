.
. ALLRITIO    
. --------
. Filename     : allritaf.dat
.
RSALRIT1  RESET     KEY10                                                       
          READ      ALLRITA1,KEY10;;                                            
          RETURN
.
RAALRIT1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      ALLRITA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALRIT1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      ALLRITA1,KEY10;ALRTVISN,ALRTITMC,ALRTIFLG,ALRTITMN,ALRTSUBN:
                        ALRTCDAT,ALRTCTIM,ALRTCUID,ALRTUDAT,ALRTUTIM,ALRTUUID:  
                        ALRTPUSE,ALRTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALRIT1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLRITA1;ALRTVISN,ALRTITMC,ALRTIFLG,ALRTITMN,ALRTSUBN:      
                        ALRTCDAT,ALRTCTIM,ALRTCUID,ALRTUDAT,ALRTUTIM,ALRTUUID:  
                        ALRTPUSE,ALRTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALRIT1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLRITA1;ALRTVISN,ALRTITMC,ALRTIFLG,ALRTITMN,ALRTSUBN:      
                        ALRTCDAT,ALRTCTIM,ALRTCUID,ALRTUDAT,ALRTUTIM,ALRTUUID:  
                        ALRTPUSE,ALRTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALRIT1                                                                        
          UPDATE    ALLRITA1;ALRTVISN,ALRTITMC,ALRTIFLG,ALRTITMN,ALRTSUBN:      
                        ALRTCDAT,ALRTCTIM,ALRTCUID,ALRTUDAT,ALRTUTIM,ALRTUUID:  
                        ALRTPUSE,ALRTSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALRIT1  RESET     KEY10                                                       
          WRITE     ALLRITA1,KEY10;ALRTVISN,ALRTITMC,ALRTIFLG,ALRTITMN,ALRTSUBN:
                        ALRTCDAT,ALRTCTIM,ALRTCUID,ALRTUDAT,ALRTUTIM,ALRTUUID:  
                        ALRTPUSE,ALRTSPAR                                       
          RETURN
.
DEALRIT1  RESET     KEY10                                                       
          DELETE    ALLRITA1,KEY10                                              
          RETURN
.
RLALRIT1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     ALLRITA1,KEY10;ALRTVISN,ALRTITMC,ALRTIFLG,ALRTITMN,ALRTSUBN:
                        ALRTCDAT,ALRTCTIM,ALRTCUID,ALRTUDAT,ALRTUTIM,ALRTUUID:  
                        ALRTPUSE,ALRTSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALRIT1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLRITA1;ALRTVISN,ALRTITMC,ALRTIFLG,ALRTITMN,ALRTSUBN:      
                        ALRTCDAT,ALRTCTIM,ALRTCUID,ALRTUDAT,ALRTUTIM,ALRTUUID:  
                        ALRTPUSE,ALRTSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALRIT1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLRITA1;ALRTVISN,ALRTITMC,ALRTIFLG,ALRTITMN,ALRTSUBN:      
                        ALRTCDAT,ALRTCTIM,ALRTCUID,ALRTUDAT,ALRTUTIM,ALRTUUID:  
                        ALRTPUSE,ALRTSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALRIT1  RESET     KEY10                                                       
          UNLOCK    ALLRITA1                                                    
          RETURN
.
