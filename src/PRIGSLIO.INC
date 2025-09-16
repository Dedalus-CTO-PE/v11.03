.
. PRIGSLIO    
. --------
. Filename     : prigslaf.dat
.
RSPRGSL1  RESET     KEY22                                                       
          READ      PRIGSLA1,KEY22;;                                            
          RETURN
.
RAPRGSL1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PRIGSLA1,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRGSL1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PRIGSLA1,KEY22;PRGSSEID,PRGSDEBT,DPRGSSCA,DPRGSUNI,PRGSPRAC:
                        PRGSSDOC,PRGSPIND,PRGSSTAT,PRGSSPAR                     
          GOTO      OVERCOND IF OVER
          MOVE      DPRGSSCA,PRGSSCAN                                           
          MOVE      DPRGSUNI,PRGSUNIQ                                           
          RETURN
.
RKPRGSL1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PRIGSLA1;PRGSSEID,PRGSDEBT,DPRGSSCA,DPRGSUNI,PRGSPRAC:      
                        PRGSSDOC,PRGSPIND,PRGSSTAT,PRGSSPAR                     
          GOTO      OVERCOND IF OVER
          MOVE      DPRGSSCA,PRGSSCAN                                           
          MOVE      DPRGSUNI,PRGSUNIQ                                           
          RETURN
.
RPPRGSL1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PRIGSLA1;PRGSSEID,PRGSDEBT,DPRGSSCA,DPRGSUNI,PRGSPRAC:      
                        PRGSSDOC,PRGSPIND,PRGSSTAT,PRGSSPAR                     
          GOTO      OVERCOND IF OVER
          MOVE      DPRGSSCA,PRGSSCAN                                           
          MOVE      DPRGSUNI,PRGSUNIQ                                           
          RETURN
.
UPPRGSL1                                                                        
          MOVE      PRGSSCAN,DPRGSSCA                                           
          MOVE      PRGSUNIQ,DPRGSUNI                                           
          UPDATE    PRIGSLA1;PRGSSEID,PRGSDEBT,DPRGSSCA,DPRGSUNI,PRGSPRAC:      
                        PRGSSDOC,PRGSPIND,PRGSSTAT,PRGSSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPRGSL1  RESET     KEY22                                                       
          MOVE      PRGSSCAN,DPRGSSCA                                           
          MOVE      PRGSUNIQ,DPRGSUNI                                           
          WRITE     PRIGSLA1,KEY22;PRGSSEID,PRGSDEBT,DPRGSSCA,DPRGSUNI,PRGSPRAC:
                        PRGSSDOC,PRGSPIND,PRGSSTAT,PRGSSPAR                     
          RETURN
.
DEPRGSL1  RESET     KEY22                                                       
          DELETE    PRIGSLA1,KEY22                                              
          RETURN
.
RLPRGSL1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READL     PRIGSLA1,KEY22;PRGSSEID,PRGSDEBT,DPRGSSCA,DPRGSUNI,PRGSPRAC:
                        PRGSSDOC,PRGSPIND,PRGSSTAT,PRGSSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DPRGSSCA,PRGSSCAN                                           
          MOVE      DPRGSUNI,PRGSUNIQ                                           
          RETURN
.
KLPRGSL1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PRIGSLA1;PRGSSEID,PRGSDEBT,DPRGSSCA,DPRGSUNI,PRGSPRAC:      
                        PRGSSDOC,PRGSPIND,PRGSSTAT,PRGSSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DPRGSSCA,PRGSSCAN                                           
          MOVE      DPRGSUNI,PRGSUNIQ                                           
          RETURN
.
PLPRGSL1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PRIGSLA1;PRGSSEID,PRGSDEBT,DPRGSSCA,DPRGSUNI,PRGSPRAC:      
                        PRGSSDOC,PRGSPIND,PRGSSTAT,PRGSSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DPRGSSCA,PRGSSCAN                                           
          MOVE      DPRGSUNI,PRGSUNIQ                                           
          RETURN
.
UUPRGSL1  RESET     KEY22                                                       
          UNLOCK    PRIGSLA1                                                    
          RETURN
.
