.
. RESDECIO    
. --------
. Filename     : resdecaf.dat
.
RSREDC1   RESET     KEY24                                                       
          READ      RESDECA1,KEY24;;                                            
          RETURN
.
RAREDC1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      RESDECA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDREDC1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      RESDECA1,KEY24;REDCRDT,REDCRTM,REDCRUN,REDCSID,REDCLNO:     
                        REDCTXT,REDCSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKREDC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    RESDECA1;REDCRDT,REDCRTM,REDCRUN,REDCSID,REDCLNO:           
                        REDCTXT,REDCSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPREDC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    RESDECA1;REDCRDT,REDCRTM,REDCRUN,REDCSID,REDCLNO:           
                        REDCTXT,REDCSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPREDC1                                                                         
          UPDATE    RESDECA1;REDCRDT,REDCRTM,REDCRUN,REDCSID,REDCLNO:           
                        REDCTXT,REDCSPA                                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRREDC1   RESET     KEY24                                                       
          WRITE     RESDECA1,KEY24;REDCRDT,REDCRTM,REDCRUN,REDCSID,REDCLNO:     
                        REDCTXT,REDCSPA                                         
          RETURN
.
DEREDC1   RESET     KEY24                                                       
          DELETE    RESDECA1,KEY24                                              
          RETURN
.
RLREDC1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     RESDECA1,KEY24;REDCRDT,REDCRTM,REDCRUN,REDCSID,REDCLNO:     
                        REDCTXT,REDCSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLREDC1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   RESDECA1;REDCRDT,REDCRTM,REDCRUN,REDCSID,REDCLNO:           
                        REDCTXT,REDCSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLREDC1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   RESDECA1;REDCRDT,REDCRTM,REDCRUN,REDCSID,REDCLNO:           
                        REDCTXT,REDCSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUREDC1   RESET     KEY24                                                       
          UNLOCK    RESDECA1                                                    
          RETURN
.
