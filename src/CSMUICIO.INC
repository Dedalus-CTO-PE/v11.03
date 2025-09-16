.
. CSMUICIO    
. --------
. Filename     : csmuicaf.dat
.
RSCSUC1   RESET     KEY30                                                       
          READ      CSMUICA1,KEY30;;                                            
          RETURN
.
RACSUC1   RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      CSMUICA1,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCSUC1   RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      CSMUICA1,KEY30;CSUCDBS,CSUCCAT,CSUCSUP,CSUCSUT,CSUCTYP:     
                        CSUCSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCSUC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CSMUICA1;CSUCDBS,CSUCCAT,CSUCSUP,CSUCSUT,CSUCTYP:           
                        CSUCSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCSUC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CSMUICA1;CSUCDBS,CSUCCAT,CSUCSUP,CSUCSUT,CSUCTYP:           
                        CSUCSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCSUC1                                                                         
          UPDATE    CSMUICA1;CSUCDBS,CSUCCAT,CSUCSUP,CSUCSUT,CSUCTYP:           
                        CSUCSPA                                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCSUC1   RESET     KEY30                                                       
          WRITE     CSMUICA1,KEY30;CSUCDBS,CSUCCAT,CSUCSUP,CSUCSUT,CSUCTYP:     
                        CSUCSPA                                                 
          RETURN
.
DECSUC1   RESET     KEY30                                                       
          DELETE    CSMUICA1,KEY30                                              
          RETURN
.
RLCSUC1   RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READL     CSMUICA1,KEY30;CSUCDBS,CSUCCAT,CSUCSUP,CSUCSUT,CSUCTYP:     
                        CSUCSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCSUC1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CSMUICA1;CSUCDBS,CSUCCAT,CSUCSUP,CSUCSUT,CSUCTYP:           
                        CSUCSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCSUC1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CSMUICA1;CSUCDBS,CSUCCAT,CSUCSUP,CSUCSUT,CSUCTYP:           
                        CSUCSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCSUC1   RESET     KEY30                                                       
          UNLOCK    CSMUICA1                                                    
          RETURN
.
