.
. CCSPAQIO    
. --------
. Filename     : ccspaqaf.dat
.
RSCCPA1   RESET     KEY10                                                       
          READ      CCSPAQA1,KEY10;;                                            
          RETURN
.
RACCPA1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPAQA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCPA1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPAQA1,KEY10;CCPAPORT,CCPAPCD,CCPADES,CCPANUM,CCPASTD:    
                        CCPAACT,CCPABUD,CCPASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCPA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSPAQA1;CCPAPORT,CCPAPCD,CCPADES,CCPANUM,CCPASTD:          
                        CCPAACT,CCPABUD,CCPASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCPA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSPAQA1;CCPAPORT,CCPAPCD,CCPADES,CCPANUM,CCPASTD:          
                        CCPAACT,CCPABUD,CCPASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCPA1                                                                         
          UPDATE    CCSPAQA1;CCPAPORT,CCPAPCD,CCPADES,CCPANUM,CCPASTD:          
                        CCPAACT,CCPABUD,CCPASPA                                 
          RETURN
.
WRCCPA1   RESET     KEY10                                                       
          WRITE     CCSPAQA1,KEY10;CCPAPORT,CCPAPCD,CCPADES,CCPANUM,CCPASTD:    
                        CCPAACT,CCPABUD,CCPASPA                                 
          RETURN
.
DECCPA1   RESET     KEY10                                                       
          DELETE    CCSPAQA1,KEY10                                              
          RETURN
.
