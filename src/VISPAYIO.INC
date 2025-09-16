.
. VISPAYIO    
. --------
. Filename     : vispayaf.dat
.
RSVSPAY1  RESET     KEY14                                                       
          READ      VISPAYA1,KEY14;;                                            
          RETURN
.
RAVSPAY1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      VISPAYA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDVSPAY1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      VISPAYA1,KEY14;VSPAVISN,VSPAPAYC,VSPASEQN,VSPACOMM,VSPAACTV:
                        VSPAISEN,VSPACDAT,VSPACTIM,VSPACUID,VSPAUDAT,VSPAUTIM:  
                        VSPAUUID,VSPASPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKVSPAY1                                                                        
          MOVE      ZERO,OVRCD
          READKS    VISPAYA1;VSPAVISN,VSPAPAYC,VSPASEQN,VSPACOMM,VSPAACTV:      
                        VSPAISEN,VSPACDAT,VSPACTIM,VSPACUID,VSPAUDAT,VSPAUTIM:  
                        VSPAUUID,VSPASPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPVSPAY1                                                                        
          MOVE      ZERO,OVRCD
          READKP    VISPAYA1;VSPAVISN,VSPAPAYC,VSPASEQN,VSPACOMM,VSPAACTV:      
                        VSPAISEN,VSPACDAT,VSPACTIM,VSPACUID,VSPAUDAT,VSPAUTIM:  
                        VSPAUUID,VSPASPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPVSPAY1                                                                        
          UPDATE    VISPAYA1;VSPAVISN,VSPAPAYC,VSPASEQN,VSPACOMM,VSPAACTV:      
                        VSPAISEN,VSPACDAT,VSPACTIM,VSPACUID,VSPAUDAT,VSPAUTIM:  
                        VSPAUUID,VSPASPAR                                       
          RETURN
.
WRVSPAY1  RESET     KEY14                                                       
          WRITE     VISPAYA1,KEY14;VSPAVISN,VSPAPAYC,VSPASEQN,VSPACOMM,VSPAACTV:
                        VSPAISEN,VSPACDAT,VSPACTIM,VSPACUID,VSPAUDAT,VSPAUTIM:  
                        VSPAUUID,VSPASPAR                                       
          RETURN
.
DEVSPAY1  RESET     KEY14                                                       
          DELETE    VISPAYA1,KEY14                                              
          RETURN
.
RSVSPAY2  RESET     KEY10                                                       
          READ      VISPAYA2,KEY10;;                                            
          RETURN
.
RAVSPAY2  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      VISPAYA2,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDVSPAY2  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      VISPAYA2,KEY10;VSPAVISN,VSPAPAYC,VSPASEQN,VSPACOMM,VSPAACTV:
                        VSPAISEN,VSPACDAT,VSPACTIM,VSPACUID,VSPAUDAT,VSPAUTIM:  
                        VSPAUUID,VSPASPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKVSPAY2                                                                        
          MOVE      ZERO,OVRCD
          READKS    VISPAYA2;VSPAVISN,VSPAPAYC,VSPASEQN,VSPACOMM,VSPAACTV:      
                        VSPAISEN,VSPACDAT,VSPACTIM,VSPACUID,VSPAUDAT,VSPAUTIM:  
                        VSPAUUID,VSPASPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPVSPAY2                                                                        
          MOVE      ZERO,OVRCD
          READKP    VISPAYA2;VSPAVISN,VSPAPAYC,VSPASEQN,VSPACOMM,VSPAACTV:      
                        VSPAISEN,VSPACDAT,VSPACTIM,VSPACUID,VSPAUDAT,VSPAUTIM:  
                        VSPAUUID,VSPASPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPVSPAY2                                                                        
          UPDATE    VISPAYA2;VSPAVISN,VSPAPAYC,VSPASEQN,VSPACOMM,VSPAACTV:      
                        VSPAISEN,VSPACDAT,VSPACTIM,VSPACUID,VSPAUDAT,VSPAUTIM:  
                        VSPAUUID,VSPASPAR                                       
          RETURN
.
WRVSPAY2  RESET     KEY10                                                       
          WRITE     VISPAYA2,KEY10;VSPAVISN,VSPAPAYC,VSPASEQN,VSPACOMM,VSPAACTV:
                        VSPAISEN,VSPACDAT,VSPACTIM,VSPACUID,VSPAUDAT,VSPAUTIM:  
                        VSPAUUID,VSPASPAR                                       
          RETURN
.
DEVSPAY2  RESET     KEY10                                                       
          DELETE    VISPAYA2,KEY10                                              
          RETURN
.
