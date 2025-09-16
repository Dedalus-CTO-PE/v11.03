.
. DEBBILIO    
. --------
. Filename     : debbilaf.dat
.
RSDBBI1   RESET     KEY14                                                       
          READ      DEBBILA1,KEY14;;                                            
          RETURN
.
RADBBI1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      DEBBILA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBBI1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      DEBBILA1,KEY14;DBBIDEB,DBBIUNI,DBBISTA,DBBIDAT,DBBITIM:     
                        DBBIUID,DBBIITM,DBBISDAT,DBBIDREF,DBBIOREF,DBBIQTY:     
                        DBBIPRI,DBBITOT,DBBITRT,DBBITAX,DBBIUR1,DBBIUR2:        
                        DBBIUD1,DBBIUD2,DBBIUY1,DBBIUY2,DBBIUC1,DBBIUC2:        
                        DBBIUC3,DBBIUC4,DBBIGST,DBBISPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBBI1                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBBILA1;DBBIDEB,DBBIUNI,DBBISTA,DBBIDAT,DBBITIM:           
                        DBBIUID,DBBIITM,DBBISDAT,DBBIDREF,DBBIOREF,DBBIQTY:     
                        DBBIPRI,DBBITOT,DBBITRT,DBBITAX,DBBIUR1,DBBIUR2:        
                        DBBIUD1,DBBIUD2,DBBIUY1,DBBIUY2,DBBIUC1,DBBIUC2:        
                        DBBIUC3,DBBIUC4,DBBIGST,DBBISPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBBI1                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBBILA1;DBBIDEB,DBBIUNI,DBBISTA,DBBIDAT,DBBITIM:           
                        DBBIUID,DBBIITM,DBBISDAT,DBBIDREF,DBBIOREF,DBBIQTY:     
                        DBBIPRI,DBBITOT,DBBITRT,DBBITAX,DBBIUR1,DBBIUR2:        
                        DBBIUD1,DBBIUD2,DBBIUY1,DBBIUY2,DBBIUC1,DBBIUC2:        
                        DBBIUC3,DBBIUC4,DBBIGST,DBBISPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBBI1                                                                         
          UPDATE    DEBBILA1;DBBIDEB,DBBIUNI,DBBISTA,DBBIDAT,DBBITIM:           
                        DBBIUID,DBBIITM,DBBISDAT,DBBIDREF,DBBIOREF,DBBIQTY:     
                        DBBIPRI,DBBITOT,DBBITRT,DBBITAX,DBBIUR1,DBBIUR2:        
                        DBBIUD1,DBBIUD2,DBBIUY1,DBBIUY2,DBBIUC1,DBBIUC2:        
                        DBBIUC3,DBBIUC4,DBBIGST,DBBISPA                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBBI1   RESET     KEY14                                                       
          WRITE     DEBBILA1,KEY14;DBBIDEB,DBBIUNI,DBBISTA,DBBIDAT,DBBITIM:     
                        DBBIUID,DBBIITM,DBBISDAT,DBBIDREF,DBBIOREF,DBBIQTY:     
                        DBBIPRI,DBBITOT,DBBITRT,DBBITAX,DBBIUR1,DBBIUR2:        
                        DBBIUD1,DBBIUD2,DBBIUY1,DBBIUY2,DBBIUC1,DBBIUC2:        
                        DBBIUC3,DBBIUC4,DBBIGST,DBBISPA                         
          RETURN
.
DEDBBI1   RESET     KEY14                                                       
          DELETE    DEBBILA1,KEY14                                              
          RETURN
.
RLDBBI1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READL     DEBBILA1,KEY14;DBBIDEB,DBBIUNI,DBBISTA,DBBIDAT,DBBITIM:     
                        DBBIUID,DBBIITM,DBBISDAT,DBBIDREF,DBBIOREF,DBBIQTY:     
                        DBBIPRI,DBBITOT,DBBITRT,DBBITAX,DBBIUR1,DBBIUR2:        
                        DBBIUD1,DBBIUD2,DBBIUY1,DBBIUY2,DBBIUC1,DBBIUC2:        
                        DBBIUC3,DBBIUC4,DBBIGST,DBBISPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBBI1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBBILA1;DBBIDEB,DBBIUNI,DBBISTA,DBBIDAT,DBBITIM:           
                        DBBIUID,DBBIITM,DBBISDAT,DBBIDREF,DBBIOREF,DBBIQTY:     
                        DBBIPRI,DBBITOT,DBBITRT,DBBITAX,DBBIUR1,DBBIUR2:        
                        DBBIUD1,DBBIUD2,DBBIUY1,DBBIUY2,DBBIUC1,DBBIUC2:        
                        DBBIUC3,DBBIUC4,DBBIGST,DBBISPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBBI1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBBILA1;DBBIDEB,DBBIUNI,DBBISTA,DBBIDAT,DBBITIM:           
                        DBBIUID,DBBIITM,DBBISDAT,DBBIDREF,DBBIOREF,DBBIQTY:     
                        DBBIPRI,DBBITOT,DBBITRT,DBBITAX,DBBIUR1,DBBIUR2:        
                        DBBIUD1,DBBIUD2,DBBIUY1,DBBIUY2,DBBIUC1,DBBIUC2:        
                        DBBIUC3,DBBIUC4,DBBIGST,DBBISPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBBI1   RESET     KEY14                                                       
          UNLOCK    DEBBILA1                                                    
          RETURN
.
RSDBBI2   RESET     KEY15                                                       
          READ      DEBBILA2,KEY15;;                                            
          RETURN
.
RADBBI2   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      DEBBILA2,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBBI2   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      DEBBILA2,KEY15;DBBIDEB,DBBIUNI,DBBISTA,DBBIDAT,DBBITIM:     
                        DBBIUID,DBBIITM,DBBISDAT,DBBIDREF,DBBIOREF,DBBIQTY:     
                        DBBIPRI,DBBITOT,DBBITRT,DBBITAX,DBBIUR1,DBBIUR2:        
                        DBBIUD1,DBBIUD2,DBBIUY1,DBBIUY2,DBBIUC1,DBBIUC2:        
                        DBBIUC3,DBBIUC4,DBBIGST,DBBISPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBBI2                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBBILA2;DBBIDEB,DBBIUNI,DBBISTA,DBBIDAT,DBBITIM:           
                        DBBIUID,DBBIITM,DBBISDAT,DBBIDREF,DBBIOREF,DBBIQTY:     
                        DBBIPRI,DBBITOT,DBBITRT,DBBITAX,DBBIUR1,DBBIUR2:        
                        DBBIUD1,DBBIUD2,DBBIUY1,DBBIUY2,DBBIUC1,DBBIUC2:        
                        DBBIUC3,DBBIUC4,DBBIGST,DBBISPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBBI2                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBBILA2;DBBIDEB,DBBIUNI,DBBISTA,DBBIDAT,DBBITIM:           
                        DBBIUID,DBBIITM,DBBISDAT,DBBIDREF,DBBIOREF,DBBIQTY:     
                        DBBIPRI,DBBITOT,DBBITRT,DBBITAX,DBBIUR1,DBBIUR2:        
                        DBBIUD1,DBBIUD2,DBBIUY1,DBBIUY2,DBBIUC1,DBBIUC2:        
                        DBBIUC3,DBBIUC4,DBBIGST,DBBISPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBBI2                                                                         
          UPDATE    DEBBILA2;DBBIDEB,DBBIUNI,DBBISTA,DBBIDAT,DBBITIM:           
                        DBBIUID,DBBIITM,DBBISDAT,DBBIDREF,DBBIOREF,DBBIQTY:     
                        DBBIPRI,DBBITOT,DBBITRT,DBBITAX,DBBIUR1,DBBIUR2:        
                        DBBIUD1,DBBIUD2,DBBIUY1,DBBIUY2,DBBIUC1,DBBIUC2:        
                        DBBIUC3,DBBIUC4,DBBIGST,DBBISPA                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBBI2   RESET     KEY15                                                       
          WRITE     DEBBILA2,KEY15;DBBIDEB,DBBIUNI,DBBISTA,DBBIDAT,DBBITIM:     
                        DBBIUID,DBBIITM,DBBISDAT,DBBIDREF,DBBIOREF,DBBIQTY:     
                        DBBIPRI,DBBITOT,DBBITRT,DBBITAX,DBBIUR1,DBBIUR2:        
                        DBBIUD1,DBBIUD2,DBBIUY1,DBBIUY2,DBBIUC1,DBBIUC2:        
                        DBBIUC3,DBBIUC4,DBBIGST,DBBISPA                         
          RETURN
.
DEDBBI2   RESET     KEY15                                                       
          DELETE    DEBBILA2,KEY15                                              
          RETURN
.
RLDBBI2   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READL     DEBBILA2,KEY15;DBBIDEB,DBBIUNI,DBBISTA,DBBIDAT,DBBITIM:     
                        DBBIUID,DBBIITM,DBBISDAT,DBBIDREF,DBBIOREF,DBBIQTY:     
                        DBBIPRI,DBBITOT,DBBITRT,DBBITAX,DBBIUR1,DBBIUR2:        
                        DBBIUD1,DBBIUD2,DBBIUY1,DBBIUY2,DBBIUC1,DBBIUC2:        
                        DBBIUC3,DBBIUC4,DBBIGST,DBBISPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBBI2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBBILA2;DBBIDEB,DBBIUNI,DBBISTA,DBBIDAT,DBBITIM:           
                        DBBIUID,DBBIITM,DBBISDAT,DBBIDREF,DBBIOREF,DBBIQTY:     
                        DBBIPRI,DBBITOT,DBBITRT,DBBITAX,DBBIUR1,DBBIUR2:        
                        DBBIUD1,DBBIUD2,DBBIUY1,DBBIUY2,DBBIUC1,DBBIUC2:        
                        DBBIUC3,DBBIUC4,DBBIGST,DBBISPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBBI2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBBILA2;DBBIDEB,DBBIUNI,DBBISTA,DBBIDAT,DBBITIM:           
                        DBBIUID,DBBIITM,DBBISDAT,DBBIDREF,DBBIOREF,DBBIQTY:     
                        DBBIPRI,DBBITOT,DBBITRT,DBBITAX,DBBIUR1,DBBIUR2:        
                        DBBIUD1,DBBIUD2,DBBIUY1,DBBIUY2,DBBIUC1,DBBIUC2:        
                        DBBIUC3,DBBIUC4,DBBIGST,DBBISPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBBI2   RESET     KEY15                                                       
          UNLOCK    DEBBILA2                                                    
          RETURN
.
