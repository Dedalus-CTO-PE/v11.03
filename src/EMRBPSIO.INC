.
. EMRBPSIO    
. --------
. Filename     : emrbpsaf.dat
.
RSEMBPS1  RESET     KEY20                                                       
          READ      EMRBPSA1,KEY20;;                                            
          RETURN
.
RAEMBPS1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      EMRBPSA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMBPS1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      EMRBPSA1,KEY20;EMBPSTCD,EMBPPTYP,EMBPONDT,EMBPONTM,EMBPRSON:
                        EMBPOFDT,EMBPOFTM,EMBPFFL1,EMBPFFL2,EMBPFFL3,EMBPFFL4:  
                        EMBPFFL5,EMBPNAMB,EMBPUSCR,EMBPDTRC,EMBPTMRC,EMBPUSUR:  
                        EMBPDTRU,EMBPTMRU,EMBPAHCP,EMBPFFNA,EMBPFFCA,EMBPSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMBPS1  MOVE      ZERO,OVRCD                                                  
          READKS    EMRBPSA1;EMBPSTCD,EMBPPTYP,EMBPONDT,EMBPONTM,EMBPRSON:      
                        EMBPOFDT,EMBPOFTM,EMBPFFL1,EMBPFFL2,EMBPFFL3,EMBPFFL4:  
                        EMBPFFL5,EMBPNAMB,EMBPUSCR,EMBPDTRC,EMBPTMRC,EMBPUSUR:  
                        EMBPDTRU,EMBPTMRU,EMBPAHCP,EMBPFFNA,EMBPFFCA,EMBPSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMBPS1  MOVE      ZERO,OVRCD                                                  
          READKP    EMRBPSA1;EMBPSTCD,EMBPPTYP,EMBPONDT,EMBPONTM,EMBPRSON:      
                        EMBPOFDT,EMBPOFTM,EMBPFFL1,EMBPFFL2,EMBPFFL3,EMBPFFL4:  
                        EMBPFFL5,EMBPNAMB,EMBPUSCR,EMBPDTRC,EMBPTMRC,EMBPUSUR:  
                        EMBPDTRU,EMBPTMRU,EMBPAHCP,EMBPFFNA,EMBPFFCA,EMBPSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMBPS1  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRBPSA1;EMBPSTCD,EMBPPTYP,EMBPONDT,EMBPONTM,EMBPRSON:      
                        EMBPOFDT,EMBPOFTM,EMBPFFL1,EMBPFFL2,EMBPFFL3,EMBPFFL4:  
                        EMBPFFL5,EMBPNAMB,EMBPUSCR,EMBPDTRC,EMBPTMRC,EMBPUSUR:  
                        EMBPDTRU,EMBPTMRU,EMBPAHCP,EMBPFFNA,EMBPFFCA,EMBPSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMBPS1  RESET     KEY20                                                       
          WRITE     EMRBPSA1,KEY20;EMBPSTCD,EMBPPTYP,EMBPONDT,EMBPONTM,EMBPRSON:
                        EMBPOFDT,EMBPOFTM,EMBPFFL1,EMBPFFL2,EMBPFFL3,EMBPFFL4:  
                        EMBPFFL5,EMBPNAMB,EMBPUSCR,EMBPDTRC,EMBPTMRC,EMBPUSUR:  
                        EMBPDTRU,EMBPTMRU,EMBPAHCP,EMBPFFNA,EMBPFFCA,EMBPSPAR   
          RETURN
.
DEEMBPS1  RESET     KEY20                                                       
          DELETE    EMRBPSA1,KEY20                                              
          RETURN
.
RLEMBPS1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READL     EMRBPSA1,KEY20;EMBPSTCD,EMBPPTYP,EMBPONDT,EMBPONTM,EMBPRSON:
                        EMBPOFDT,EMBPOFTM,EMBPFFL1,EMBPFFL2,EMBPFFL3,EMBPFFL4:  
                        EMBPFFL5,EMBPNAMB,EMBPUSCR,EMBPDTRC,EMBPTMRC,EMBPUSUR:  
                        EMBPDTRU,EMBPTMRU,EMBPAHCP,EMBPFFNA,EMBPFFCA,EMBPSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMBPS1  MOVE      ZERO,OVRCD                                                  
          READLKS   EMRBPSA1;EMBPSTCD,EMBPPTYP,EMBPONDT,EMBPONTM,EMBPRSON:      
                        EMBPOFDT,EMBPOFTM,EMBPFFL1,EMBPFFL2,EMBPFFL3,EMBPFFL4:  
                        EMBPFFL5,EMBPNAMB,EMBPUSCR,EMBPDTRC,EMBPTMRC,EMBPUSUR:  
                        EMBPDTRU,EMBPTMRU,EMBPAHCP,EMBPFFNA,EMBPFFCA,EMBPSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMBPS1  MOVE      ZERO,OVRCD                                                  
          READLKP   EMRBPSA1;EMBPSTCD,EMBPPTYP,EMBPONDT,EMBPONTM,EMBPRSON:      
                        EMBPOFDT,EMBPOFTM,EMBPFFL1,EMBPFFL2,EMBPFFL3,EMBPFFL4:  
                        EMBPFFL5,EMBPNAMB,EMBPUSCR,EMBPDTRC,EMBPTMRC,EMBPUSUR:  
                        EMBPDTRU,EMBPTMRU,EMBPAHCP,EMBPFFNA,EMBPFFCA,EMBPSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMBPS1  RESET     KEY20                                                       
          UNLOCK    EMRBPSA1                                                    
          RETURN
.
RSEMBPS2  RESET     KEY20                                                       
          READ      EMRBPSA2,KEY20;;                                            
          RETURN
.
RAEMBPS2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      EMRBPSA2,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMBPS2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      EMRBPSA2,KEY20;EMBPSTCD,EMBPPTYP,EMBPONDT,EMBPONTM,EMBPRSON:
                        EMBPOFDT,EMBPOFTM,EMBPFFL1,EMBPFFL2,EMBPFFL3,EMBPFFL4:  
                        EMBPFFL5,EMBPNAMB,EMBPUSCR,EMBPDTRC,EMBPTMRC,EMBPUSUR:  
                        EMBPDTRU,EMBPTMRU,EMBPAHCP,EMBPFFNA,EMBPFFCA,EMBPSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMBPS2  MOVE      ZERO,OVRCD                                                  
          READKS    EMRBPSA2;EMBPSTCD,EMBPPTYP,EMBPONDT,EMBPONTM,EMBPRSON:      
                        EMBPOFDT,EMBPOFTM,EMBPFFL1,EMBPFFL2,EMBPFFL3,EMBPFFL4:  
                        EMBPFFL5,EMBPNAMB,EMBPUSCR,EMBPDTRC,EMBPTMRC,EMBPUSUR:  
                        EMBPDTRU,EMBPTMRU,EMBPAHCP,EMBPFFNA,EMBPFFCA,EMBPSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMBPS2  MOVE      ZERO,OVRCD                                                  
          READKP    EMRBPSA2;EMBPSTCD,EMBPPTYP,EMBPONDT,EMBPONTM,EMBPRSON:      
                        EMBPOFDT,EMBPOFTM,EMBPFFL1,EMBPFFL2,EMBPFFL3,EMBPFFL4:  
                        EMBPFFL5,EMBPNAMB,EMBPUSCR,EMBPDTRC,EMBPTMRC,EMBPUSUR:  
                        EMBPDTRU,EMBPTMRU,EMBPAHCP,EMBPFFNA,EMBPFFCA,EMBPSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMBPS2  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRBPSA2;EMBPSTCD,EMBPPTYP,EMBPONDT,EMBPONTM,EMBPRSON:      
                        EMBPOFDT,EMBPOFTM,EMBPFFL1,EMBPFFL2,EMBPFFL3,EMBPFFL4:  
                        EMBPFFL5,EMBPNAMB,EMBPUSCR,EMBPDTRC,EMBPTMRC,EMBPUSUR:  
                        EMBPDTRU,EMBPTMRU,EMBPAHCP,EMBPFFNA,EMBPFFCA,EMBPSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMBPS2  RESET     KEY20                                                       
          WRITE     EMRBPSA2,KEY20;EMBPSTCD,EMBPPTYP,EMBPONDT,EMBPONTM,EMBPRSON:
                        EMBPOFDT,EMBPOFTM,EMBPFFL1,EMBPFFL2,EMBPFFL3,EMBPFFL4:  
                        EMBPFFL5,EMBPNAMB,EMBPUSCR,EMBPDTRC,EMBPTMRC,EMBPUSUR:  
                        EMBPDTRU,EMBPTMRU,EMBPAHCP,EMBPFFNA,EMBPFFCA,EMBPSPAR   
          RETURN
.
DEEMBPS2  RESET     KEY20                                                       
          DELETE    EMRBPSA2,KEY20                                              
          RETURN
.
RLEMBPS2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READL     EMRBPSA2,KEY20;EMBPSTCD,EMBPPTYP,EMBPONDT,EMBPONTM,EMBPRSON:
                        EMBPOFDT,EMBPOFTM,EMBPFFL1,EMBPFFL2,EMBPFFL3,EMBPFFL4:  
                        EMBPFFL5,EMBPNAMB,EMBPUSCR,EMBPDTRC,EMBPTMRC,EMBPUSUR:  
                        EMBPDTRU,EMBPTMRU,EMBPAHCP,EMBPFFNA,EMBPFFCA,EMBPSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMBPS2  MOVE      ZERO,OVRCD                                                  
          READLKS   EMRBPSA2;EMBPSTCD,EMBPPTYP,EMBPONDT,EMBPONTM,EMBPRSON:      
                        EMBPOFDT,EMBPOFTM,EMBPFFL1,EMBPFFL2,EMBPFFL3,EMBPFFL4:  
                        EMBPFFL5,EMBPNAMB,EMBPUSCR,EMBPDTRC,EMBPTMRC,EMBPUSUR:  
                        EMBPDTRU,EMBPTMRU,EMBPAHCP,EMBPFFNA,EMBPFFCA,EMBPSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMBPS2  MOVE      ZERO,OVRCD                                                  
          READLKP   EMRBPSA2;EMBPSTCD,EMBPPTYP,EMBPONDT,EMBPONTM,EMBPRSON:      
                        EMBPOFDT,EMBPOFTM,EMBPFFL1,EMBPFFL2,EMBPFFL3,EMBPFFL4:  
                        EMBPFFL5,EMBPNAMB,EMBPUSCR,EMBPDTRC,EMBPTMRC,EMBPUSUR:  
                        EMBPDTRU,EMBPTMRU,EMBPAHCP,EMBPFFNA,EMBPFFCA,EMBPSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMBPS2  RESET     KEY20                                                       
          UNLOCK    EMRBPSA2                                                    
          RETURN
.
