.
. PMSUCHIO    
. --------
. Filename     : pmsuchaf.dat
.
RSPMUCH1  RESET     KEY17                                                       
          READ      PMSUCHA1,KEY17;;                                            
          RETURN
.
RAPMUCH1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      PMSUCHA1,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMUCH1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      PMSUCHA1,KEY17;PMUHURNO,PMUHCTYP,PMUHCNUM,PMUHCUID,PMUHCDAT:
                                   PMUHCTIM,PMUHOCCG,PMUHDELT,PMUHDUID,PMUHDDAT:
                                   PMUHDTIM,PMUHDOCG,PMUHSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMUCH1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSUCHA1;PMUHURNO,PMUHCTYP,PMUHCNUM,PMUHCUID,PMUHCDAT:      
                             PMUHCTIM,PMUHOCCG,PMUHDELT,PMUHDUID,PMUHDDAT:      
                             PMUHDTIM,PMUHDOCG,PMUHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMUCH1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSUCHA1;PMUHURNO,PMUHCTYP,PMUHCNUM,PMUHCUID,PMUHCDAT:      
                             PMUHCTIM,PMUHOCCG,PMUHDELT,PMUHDUID,PMUHDDAT:      
                             PMUHDTIM,PMUHDOCG,PMUHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMUCH1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSUCHA1;PMUHURNO,PMUHCTYP,PMUHCNUM,PMUHCUID,PMUHCDAT:      
                             PMUHCTIM,PMUHOCCG,PMUHDELT,PMUHDUID,PMUHDDAT:      
                             PMUHDTIM,PMUHDOCG,PMUHSPAR                         
          RETURN
.
WRPMUCH1  RESET     KEY17                                                       
          WRITE     PMSUCHA1,KEY17;PMUHURNO,PMUHCTYP,PMUHCNUM,PMUHCUID,PMUHCDAT:
                                   PMUHCTIM,PMUHOCCG,PMUHDELT,PMUHDUID,PMUHDDAT:
                                   PMUHDTIM,PMUHDOCG,PMUHSPAR                   
          RETURN
.
DEPMUCH1  RESET     KEY17                                                       
          DELETE    PMSUCHA1,KEY17                                              
          RETURN
.
