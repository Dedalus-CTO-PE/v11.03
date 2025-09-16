.
. CEAPAAIO    
. --------
. Filename     : ceapaaaf.dat
.
RSCEPA1   RESET     KEY16                                                       
          READ      CEAPAAA1,KEY16;;                                            
          RETURN
.
RACEPA1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      CEAPAAA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCEPA1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      CEAPAAA1,KEY16;CEPASPC,CEPAPSC,CEPAYEAR,CEPAPER,CEPAQTY:    
                        CEPACST1,CEPACST2,CEPACST3,CEPACST4,CEPACST5,CEPASPA    
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCEPA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEAPAAA1;CEPASPC,CEPAPSC,CEPAYEAR,CEPAPER,CEPAQTY:          
                        CEPACST1,CEPACST2,CEPACST3,CEPACST4,CEPACST5,CEPASPA    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCEPA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEAPAAA1;CEPASPC,CEPAPSC,CEPAYEAR,CEPAPER,CEPAQTY:          
                        CEPACST1,CEPACST2,CEPACST3,CEPACST4,CEPACST5,CEPASPA    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCEPA1                                                                         
          UPDATE    CEAPAAA1;CEPASPC,CEPAPSC,CEPAYEAR,CEPAPER,CEPAQTY:          
                        CEPACST1,CEPACST2,CEPACST3,CEPACST4,CEPACST5,CEPASPA    
          RETURN
.
WRCEPA1   RESET     KEY16                                                       
          WRITE     CEAPAAA1,KEY16;CEPASPC,CEPAPSC,CEPAYEAR,CEPAPER,CEPAQTY:    
                        CEPACST1,CEPACST2,CEPACST3,CEPACST4,CEPACST5,CEPASPA    
          RETURN
.
DECEPA1   RESET     KEY16                                                       
          DELETE    CEAPAAA1,KEY16                                              
          RETURN
.
