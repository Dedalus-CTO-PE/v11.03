.
. PATIOVIO    
. --------
. Filename     : patiovaf.dat
.
RSPTIOV1  RESET     KEY30                                                       
          READ      PATIOVA1,KEY30;;                                            
          RETURN
.
RAPTIOV1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      PATIOVA1,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTIOV1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      PATIOVA1,KEY30;PTIOCODE,PTIOFUND,PTIOTBLT,PTIOCSCD,PTIOBRCD:
                        PTIOAMNT,PTIOCNID,PTIOSPRE                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTIOV1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATIOVA1;PTIOCODE,PTIOFUND,PTIOTBLT,PTIOCSCD,PTIOBRCD:      
                        PTIOAMNT,PTIOCNID,PTIOSPRE                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTIOV1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATIOVA1;PTIOCODE,PTIOFUND,PTIOTBLT,PTIOCSCD,PTIOBRCD:      
                        PTIOAMNT,PTIOCNID,PTIOSPRE                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTIOV1                                                                        
          UPDATE    PATIOVA1;PTIOCODE,PTIOFUND,PTIOTBLT,PTIOCSCD,PTIOBRCD:      
                        PTIOAMNT,PTIOCNID,PTIOSPRE                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTIOV1  RESET     KEY30                         
          UNPACK    KEY30,PTIOCNID,PTIOCODE,PTIOFUND,PTIOTBLT,PTIOCSCD,PTIOBRCD
          WRITE     PATIOVA1,KEY30;PTIOCODE,PTIOFUND,PTIOTBLT,PTIOCSCD,PTIOBRCD:
                        PTIOAMNT,PTIOCNID,PTIOSPRE                                                
          RETURN
.
DEPTIOV1  RESET     KEY30                                                       
          DELETE    PATIOVA1,KEY30                                              
          RETURN
.
RLPTIOV1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READL     PATIOVA1,KEY30;PTIOCODE,PTIOFUND,PTIOTBLT,PTIOCSCD,PTIOBRCD:
                        PTIOAMNT,PTIOCNID,PTIOSPRE                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTIOV1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PATIOVA1;PTIOCODE,PTIOFUND,PTIOTBLT,PTIOCSCD,PTIOBRCD:      
                        PTIOAMNT,PTIOCNID,PTIOSPRE                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTIOV1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PATIOVA1;PTIOCODE,PTIOFUND,PTIOTBLT,PTIOCSCD,PTIOBRCD:      
                        PTIOAMNT,PTIOCNID,PTIOSPRE                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTIOV1  RESET     KEY30                                                       
          UNLOCK    PATIOVA1                                                    
          RETURN
.
