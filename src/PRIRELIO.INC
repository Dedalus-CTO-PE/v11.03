.
. PRIRELIO    
. --------
. Filename     : prirelaf.dat
.
RSPRREL1  RESET     KEY50                                                       
          READ      PRIRELA1,KEY50;;                                            
          RETURN
.
RAPRREL1  RESET     KEY50                                                       
          MOVE      ZERO,OVRCD
          READ      PRIRELA1,KEY50;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRREL1  RESET     KEY50                                                       
          MOVE      ZERO,OVRCD
          READ      PRIRELA1,KEY50;PRRLSEID,PRRLNAME,PRRLDEBT,PRRLIVNO,PRRLSCAN:
                        PRRLSTAT,PRRLSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPRREL1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PRIRELA1;PRRLSEID,PRRLNAME,PRRLDEBT,PRRLIVNO,PRRLSCAN:      
                        PRRLSTAT,PRRLSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPRREL1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PRIRELA1;PRRLSEID,PRRLNAME,PRRLDEBT,PRRLIVNO,PRRLSCAN:      
                        PRRLSTAT,PRRLSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPRREL1                                                                        
          UPDATE    PRIRELA1;PRRLSEID,PRRLNAME,PRRLDEBT,PRRLIVNO,PRRLSCAN:      
                        PRRLSTAT,PRRLSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPRREL1  RESET     KEY50                                                       
          WRITE     PRIRELA1,KEY50;PRRLSEID,PRRLNAME,PRRLDEBT,PRRLIVNO,PRRLSCAN:
                        PRRLSTAT,PRRLSPAR                                       
          RETURN
.
DEPRREL1  RESET     KEY50                                                       
          DELETE    PRIRELA1,KEY50                                              
          RETURN
.
RLPRREL1  RESET     KEY50                                                       
          MOVE      ZERO,OVRCD
          READL     PRIRELA1,KEY50;PRRLSEID,PRRLNAME,PRRLDEBT,PRRLIVNO,PRRLSCAN:
                        PRRLSTAT,PRRLSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPRREL1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PRIRELA1;PRRLSEID,PRRLNAME,PRRLDEBT,PRRLIVNO,PRRLSCAN:      
                        PRRLSTAT,PRRLSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPRREL1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PRIRELA1;PRRLSEID,PRRLNAME,PRRLDEBT,PRRLIVNO,PRRLSCAN:      
                        PRRLSTAT,PRRLSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPRREL1  RESET     KEY50                                                       
          UNLOCK    PRIRELA1                                                    
          RETURN
.
