.
. WATESEIO    
. --------
. Filename     : wateseaf.dat
.
RSWTESE1  RESET     KEY17                                                       
          READ      WATESEA1,KEY17;;                                            
          RETURN
.
RAWTESE1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      WATESEA1,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTESE1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      WATESEA1,KEY17;WTEEUNIQ,WTEEEDAT,WTEEURNO,WTEEADAT,WTEEDEST:
                                   WTEEINSD,WTEEPLOS,WTEEPROC,WTEEPDES,WTEERREM:
                                   WTEERDAT,WTEEREMD,WTEESREF,WTEESSPC,WTEEPREV:
                                   WTEEREFR,WTEEWEBC,WTEECDAT,WTEECTIM,WTEEWEBU:
                                   WTEEUDAT,WTEEUTIM,WTEEARDT,WTEEMANU,WTEEPTWT:
                                   WTEESGID,WTEERADT,WTEETCMP,WTEESPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTESE1  MOVE      ZERO,OVRCD                                                  
          READKS    WATESEA1;WTEEUNIQ,WTEEEDAT,WTEEURNO,WTEEADAT,WTEEDEST:      
                             WTEEINSD,WTEEPLOS,WTEEPROC,WTEEPDES,WTEERREM:      
                             WTEERDAT,WTEEREMD,WTEESREF,WTEESSPC,WTEEPREV:      
                             WTEEREFR,WTEEWEBC,WTEECDAT,WTEECTIM,WTEEWEBU:      
                             WTEEUDAT,WTEEUTIM,WTEEARDT,WTEEMANU,WTEEPTWT:      
                             WTEESGID,WTEERADT,WTEETCMP,WTEESPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTESE1  MOVE      ZERO,OVRCD                                                  
          READKP    WATESEA1;WTEEUNIQ,WTEEEDAT,WTEEURNO,WTEEADAT,WTEEDEST:      
                             WTEEINSD,WTEEPLOS,WTEEPROC,WTEEPDES,WTEERREM:      
                             WTEERDAT,WTEEREMD,WTEESREF,WTEESSPC,WTEEPREV:      
                             WTEEREFR,WTEEWEBC,WTEECDAT,WTEECTIM,WTEEWEBU:      
                             WTEEUDAT,WTEEUTIM,WTEEARDT,WTEEMANU,WTEEPTWT:      
                             WTEESGID,WTEERADT,WTEETCMP,WTEESPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTESE1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WATESEA1;WTEEUNIQ,WTEEEDAT,WTEEURNO,WTEEADAT,WTEEDEST:      
                             WTEEINSD,WTEEPLOS,WTEEPROC,WTEEPDES,WTEERREM:      
                             WTEERDAT,WTEEREMD,WTEESREF,WTEESSPC,WTEEPREV:      
                             WTEEREFR,WTEEWEBC,WTEECDAT,WTEECTIM,WTEEWEBU:      
                             WTEEUDAT,WTEEUTIM,WTEEARDT,WTEEMANU,WTEEPTWT:      
                             WTEESGID,WTEERADT,WTEETCMP,WTEESPAR                
          RETURN
.
WRWTESE1  RESET     KEY17                                                       
          WRITE     WATESEA1,KEY17;WTEEUNIQ,WTEEEDAT,WTEEURNO,WTEEADAT,WTEEDEST:
                                   WTEEINSD,WTEEPLOS,WTEEPROC,WTEEPDES,WTEERREM:
                                   WTEERDAT,WTEEREMD,WTEESREF,WTEESSPC,WTEEPREV:
                                   WTEEREFR,WTEEWEBC,WTEECDAT,WTEECTIM,WTEEWEBU:
                                   WTEEUDAT,WTEEUTIM,WTEEARDT,WTEEMANU,WTEEPTWT:
                                   WTEESGID,WTEERADT,WTEETCMP,WTEESPAR          
          RETURN
.
DEWTESE1  RESET     KEY17                                                       
          DELETE    WATESEA1,KEY17                                              
          RETURN
.
RSWTESE2  RESET     KEY17                                                       
          READ      WATESEA2,KEY17;;                                            
          RETURN
.
RAWTESE2  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      WATESEA2,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTESE2  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      WATESEA2,KEY17;WTEEUNIQ,WTEEEDAT,WTEEURNO,WTEEADAT,WTEEDEST:
                                   WTEEINSD,WTEEPLOS,WTEEPROC,WTEEPDES,WTEERREM:
                                   WTEERDAT,WTEEREMD,WTEESREF,WTEESSPC,WTEEPREV:
                                   WTEEREFR,WTEEWEBC,WTEECDAT,WTEECTIM,WTEEWEBU:
                                   WTEEUDAT,WTEEUTIM,WTEEARDT,WTEEMANU,WTEEPTWT:
                                   WTEESGID,WTEERADT,WTEETCMP,WTEESPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTESE2  MOVE      ZERO,OVRCD                                                  
          READKS    WATESEA2;WTEEUNIQ,WTEEEDAT,WTEEURNO,WTEEADAT,WTEEDEST:      
                             WTEEINSD,WTEEPLOS,WTEEPROC,WTEEPDES,WTEERREM:      
                             WTEERDAT,WTEEREMD,WTEESREF,WTEESSPC,WTEEPREV:      
                             WTEEREFR,WTEEWEBC,WTEECDAT,WTEECTIM,WTEEWEBU:      
                             WTEEUDAT,WTEEUTIM,WTEEARDT,WTEEMANU,WTEEPTWT:      
                             WTEESGID,WTEERADT,WTEETCMP,WTEESPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTESE2  MOVE      ZERO,OVRCD                                                  
          READKP    WATESEA2;WTEEUNIQ,WTEEEDAT,WTEEURNO,WTEEADAT,WTEEDEST:      
                             WTEEINSD,WTEEPLOS,WTEEPROC,WTEEPDES,WTEERREM:      
                             WTEERDAT,WTEEREMD,WTEESREF,WTEESSPC,WTEEPREV:      
                             WTEEREFR,WTEEWEBC,WTEECDAT,WTEECTIM,WTEEWEBU:      
                             WTEEUDAT,WTEEUTIM,WTEEARDT,WTEEMANU,WTEEPTWT:      
                             WTEESGID,WTEERADT,WTEETCMP,WTEESPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTESE2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WATESEA2;WTEEUNIQ,WTEEEDAT,WTEEURNO,WTEEADAT,WTEEDEST:      
                             WTEEINSD,WTEEPLOS,WTEEPROC,WTEEPDES,WTEERREM:      
                             WTEERDAT,WTEEREMD,WTEESREF,WTEESSPC,WTEEPREV:      
                             WTEEREFR,WTEEWEBC,WTEECDAT,WTEECTIM,WTEEWEBU:      
                             WTEEUDAT,WTEEUTIM,WTEEARDT,WTEEMANU,WTEEPTWT:      
                             WTEESGID,WTEERADT,WTEETCMP,WTEESPAR                
          RETURN
.
WRWTESE2  RESET     KEY17                                                       
          WRITE     WATESEA2,KEY17;WTEEUNIQ,WTEEEDAT,WTEEURNO,WTEEADAT,WTEEDEST:
                                   WTEEINSD,WTEEPLOS,WTEEPROC,WTEEPDES,WTEERREM:
                                   WTEERDAT,WTEEREMD,WTEESREF,WTEESSPC,WTEEPREV:
                                   WTEEREFR,WTEEWEBC,WTEECDAT,WTEECTIM,WTEEWEBU:
                                   WTEEUDAT,WTEEUTIM,WTEEARDT,WTEEMANU,WTEEPTWT:
                                   WTEESGID,WTEERADT,WTEETCMP,WTEESPAR          
          RETURN
.
DEWTESE2  RESET     KEY17                                                       
          DELETE    WATESEA2,KEY17                                              
          RETURN
.
