.
. PRIFSLIO    
. --------
. Filename     : prifslaf.dat
.
RSPRFSL1  RESET     KEY22                                                       
          READ      PRIFSLA1,KEY22;;                                            
          RETURN
.
RAPRFSL1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PRIFSLA1,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRFSL1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PRIFSLA1,KEY22;PRFSSEID,PRFSDEBT,DPRFSSCA,DPRFSUNI,PRFSPRAC:
                        PRFSSDOC,PRFSPIND,PRFSOSMT,PRFSSTAT,PRFSSPAR            
          GOTO      OVERCOND IF OVER
          MOVE      DPRFSSCA,PRFSSCAN                                           
          MOVE      DPRFSUNI,PRFSUNIQ                                           
          RETURN
.
RKPRFSL1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PRIFSLA1;PRFSSEID,PRFSDEBT,DPRFSSCA,DPRFSUNI,PRFSPRAC:      
                        PRFSSDOC,PRFSPIND,PRFSOSMT,PRFSSTAT,PRFSSPAR            
          GOTO      OVERCOND IF OVER
          MOVE      DPRFSSCA,PRFSSCAN                                           
          MOVE      DPRFSUNI,PRFSUNIQ                                           
          RETURN
.
RPPRFSL1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PRIFSLA1;PRFSSEID,PRFSDEBT,DPRFSSCA,DPRFSUNI,PRFSPRAC:      
                        PRFSSDOC,PRFSPIND,PRFSOSMT,PRFSSTAT,PRFSSPAR            
          GOTO      OVERCOND IF OVER
          MOVE      DPRFSSCA,PRFSSCAN                                           
          MOVE      DPRFSUNI,PRFSUNIQ                                           
          RETURN
.
UPPRFSL1                                                                        
          MOVE      PRFSSCAN,DPRFSSCA                                           
          MOVE      PRFSUNIQ,DPRFSUNI                                           
          UPDATE    PRIFSLA1;PRFSSEID,PRFSDEBT,DPRFSSCA,DPRFSUNI,PRFSPRAC:      
                        PRFSSDOC,PRFSPIND,PRFSOSMT,PRFSSTAT,PRFSSPAR            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPRFSL1  RESET     KEY22                                                       
          MOVE      PRFSSCAN,DPRFSSCA                                           
          MOVE      PRFSUNIQ,DPRFSUNI                                           
          WRITE     PRIFSLA1,KEY22;PRFSSEID,PRFSDEBT,DPRFSSCA,DPRFSUNI,PRFSPRAC:
                        PRFSSDOC,PRFSPIND,PRFSOSMT,PRFSSTAT,PRFSSPAR            
          RETURN
.
DEPRFSL1  RESET     KEY22                                                       
          DELETE    PRIFSLA1,KEY22                                              
          RETURN
.
RLPRFSL1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READL     PRIFSLA1,KEY22;PRFSSEID,PRFSDEBT,DPRFSSCA,DPRFSUNI,PRFSPRAC:
                        PRFSSDOC,PRFSPIND,PRFSOSMT,PRFSSTAT,PRFSSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DPRFSSCA,PRFSSCAN                                           
          MOVE      DPRFSUNI,PRFSUNIQ                                           
          RETURN
.
KLPRFSL1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PRIFSLA1;PRFSSEID,PRFSDEBT,DPRFSSCA,DPRFSUNI,PRFSPRAC:      
                        PRFSSDOC,PRFSPIND,PRFSOSMT,PRFSSTAT,PRFSSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DPRFSSCA,PRFSSCAN                                           
          MOVE      DPRFSUNI,PRFSUNIQ                                           
          RETURN
.
PLPRFSL1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PRIFSLA1;PRFSSEID,PRFSDEBT,DPRFSSCA,DPRFSUNI,PRFSPRAC:      
                        PRFSSDOC,PRFSPIND,PRFSOSMT,PRFSSTAT,PRFSSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DPRFSSCA,PRFSSCAN                                           
          MOVE      DPRFSUNI,PRFSUNIQ                                           
          RETURN
.
UUPRFSL1  RESET     KEY22                                                       
          UNLOCK    PRIFSLA1                                                    
          RETURN
.
