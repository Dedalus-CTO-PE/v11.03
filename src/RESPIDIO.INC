.
. RESPIDIO    
. --------
. Filename     : respidaf.dat
.
RSREPI1   RESET     KEY16                                                       
          READ      RESPIDA1,KEY16;;                                            
          RETURN
.
RAREPI1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      RESPIDA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDREPI1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      RESPIDA1,KEY16;REPIPID,REPISNM,REPIGNM,REPIINT,REPIDOB:     
                        REPISEX,REPIAD1,REPIAD2,REPIAD3,REPIAD4,REPIPC:         
                        REPIPHH,REPIPHB,REPISPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKREPI1                                                                         
          MOVE      ZERO,OVRCD
          READKS    RESPIDA1;REPIPID,REPISNM,REPIGNM,REPIINT,REPIDOB:           
                        REPISEX,REPIAD1,REPIAD2,REPIAD3,REPIAD4,REPIPC:         
                        REPIPHH,REPIPHB,REPISPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPREPI1                                                                         
          MOVE      ZERO,OVRCD
          READKP    RESPIDA1;REPIPID,REPISNM,REPIGNM,REPIINT,REPIDOB:           
                        REPISEX,REPIAD1,REPIAD2,REPIAD3,REPIAD4,REPIPC:         
                        REPIPHH,REPIPHB,REPISPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPREPI1                                                                         
          UPDATE    RESPIDA1;REPIPID,REPISNM,REPIGNM,REPIINT,REPIDOB:           
                        REPISEX,REPIAD1,REPIAD2,REPIAD3,REPIAD4,REPIPC:         
                        REPIPHH,REPIPHB,REPISPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRREPI1   RESET     KEY16                                                       
          WRITE     RESPIDA1,KEY16;REPIPID,REPISNM,REPIGNM,REPIINT,REPIDOB:     
                        REPISEX,REPIAD1,REPIAD2,REPIAD3,REPIAD4,REPIPC:         
                        REPIPHH,REPIPHB,REPISPA                                 
          RETURN
.
DEREPI1   RESET     KEY16                                                       
          DELETE    RESPIDA1,KEY16                                              
          RETURN
.
RLREPI1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     RESPIDA1,KEY16;REPIPID,REPISNM,REPIGNM,REPIINT,REPIDOB:     
                        REPISEX,REPIAD1,REPIAD2,REPIAD3,REPIAD4,REPIPC:         
                        REPIPHH,REPIPHB,REPISPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLREPI1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   RESPIDA1;REPIPID,REPISNM,REPIGNM,REPIINT,REPIDOB:           
                        REPISEX,REPIAD1,REPIAD2,REPIAD3,REPIAD4,REPIPC:         
                        REPIPHH,REPIPHB,REPISPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLREPI1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   RESPIDA1;REPIPID,REPISNM,REPIGNM,REPIINT,REPIDOB:           
                        REPISEX,REPIAD1,REPIAD2,REPIAD3,REPIAD4,REPIPC:         
                        REPIPHH,REPIPHB,REPISPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUREPI1   RESET     KEY16                                                       
          UNLOCK    RESPIDA1                                                    
          RETURN
.
