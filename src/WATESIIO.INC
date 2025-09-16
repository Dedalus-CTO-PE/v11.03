.
. WATESIIO    
. --------
. Filename     : watesiaf.dat
.
RSWTESI1  RESET     KEY16                                                       
          READ      WATESIA1,KEY16;;                                            
          RETURN
.
RAWTESI1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WATESIA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTESI1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WATESIA1,KEY16;WTEIUNIQ,WTEIDATE,WTEIURNO,WTEIMEDC,WTEIMEDS:
                        WTEIWTNO,WTEIDOB,WTEISEX,WTEIPSTC,WTEILOCA,WTEIPROC:    
                        WTEISRGS,WTEICLCT,WTEIILOS,WTEIDTRG,WTEISRCR,WTEIREFH:  
                        WTEICLDT,WTEIDTIN,WTEICLCD,WTEILTST,WTEIPSDT,WTEIRFCS:  
                        WTEIBKDT,WTEIBKNO,WTEIREBK,WTEISCDT,WTEIDTRM,WTEIRREM:  
                        WTEIINSD,WTEITRND,WTEINRFC,WTEINRRE,WTEINRLC,WTEIHOSP:  
                        WTEISPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTESI1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATESIA1;WTEIUNIQ,WTEIDATE,WTEIURNO,WTEIMEDC,WTEIMEDS:      
                        WTEIWTNO,WTEIDOB,WTEISEX,WTEIPSTC,WTEILOCA,WTEIPROC:    
                        WTEISRGS,WTEICLCT,WTEIILOS,WTEIDTRG,WTEISRCR,WTEIREFH:  
                        WTEICLDT,WTEIDTIN,WTEICLCD,WTEILTST,WTEIPSDT,WTEIRFCS:  
                        WTEIBKDT,WTEIBKNO,WTEIREBK,WTEISCDT,WTEIDTRM,WTEIRREM:  
                        WTEIINSD,WTEITRND,WTEINRFC,WTEINRRE,WTEINRLC,WTEIHOSP:  
                        WTEISPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTESI1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATESIA1;WTEIUNIQ,WTEIDATE,WTEIURNO,WTEIMEDC,WTEIMEDS:      
                        WTEIWTNO,WTEIDOB,WTEISEX,WTEIPSTC,WTEILOCA,WTEIPROC:    
                        WTEISRGS,WTEICLCT,WTEIILOS,WTEIDTRG,WTEISRCR,WTEIREFH:  
                        WTEICLDT,WTEIDTIN,WTEICLCD,WTEILTST,WTEIPSDT,WTEIRFCS:  
                        WTEIBKDT,WTEIBKNO,WTEIREBK,WTEISCDT,WTEIDTRM,WTEIRREM:  
                        WTEIINSD,WTEITRND,WTEINRFC,WTEINRRE,WTEINRLC,WTEIHOSP:  
                        WTEISPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTESI1                                                                        
          UPDATE    WATESIA1;WTEIUNIQ,WTEIDATE,WTEIURNO,WTEIMEDC,WTEIMEDS:      
                        WTEIWTNO,WTEIDOB,WTEISEX,WTEIPSTC,WTEILOCA,WTEIPROC:    
                        WTEISRGS,WTEICLCT,WTEIILOS,WTEIDTRG,WTEISRCR,WTEIREFH:  
                        WTEICLDT,WTEIDTIN,WTEICLCD,WTEILTST,WTEIPSDT,WTEIRFCS:  
                        WTEIBKDT,WTEIBKNO,WTEIREBK,WTEISCDT,WTEIDTRM,WTEIRREM:  
                        WTEIINSD,WTEITRND,WTEINRFC,WTEINRRE,WTEINRLC,WTEIHOSP:  
                        WTEISPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTESI1  RESET     KEY16                                                       
          WRITE     WATESIA1,KEY16;WTEIUNIQ,WTEIDATE,WTEIURNO,WTEIMEDC,WTEIMEDS:
                        WTEIWTNO,WTEIDOB,WTEISEX,WTEIPSTC,WTEILOCA,WTEIPROC:    
                        WTEISRGS,WTEICLCT,WTEIILOS,WTEIDTRG,WTEISRCR,WTEIREFH:  
                        WTEICLDT,WTEIDTIN,WTEICLCD,WTEILTST,WTEIPSDT,WTEIRFCS:  
                        WTEIBKDT,WTEIBKNO,WTEIREBK,WTEISCDT,WTEIDTRM,WTEIRREM:  
                        WTEIINSD,WTEITRND,WTEINRFC,WTEINRRE,WTEINRLC,WTEIHOSP:  
                        WTEISPAR                                                
          RETURN
.
DEWTESI1  RESET     KEY16                                                       
          DELETE    WATESIA1,KEY16                                              
          RETURN
.
RLWTESI1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     WATESIA1,KEY16;WTEIUNIQ,WTEIDATE,WTEIURNO,WTEIMEDC,WTEIMEDS:
                        WTEIWTNO,WTEIDOB,WTEISEX,WTEIPSTC,WTEILOCA,WTEIPROC:    
                        WTEISRGS,WTEICLCT,WTEIILOS,WTEIDTRG,WTEISRCR,WTEIREFH:  
                        WTEICLDT,WTEIDTIN,WTEICLCD,WTEILTST,WTEIPSDT,WTEIRFCS:  
                        WTEIBKDT,WTEIBKNO,WTEIREBK,WTEISCDT,WTEIDTRM,WTEIRREM:  
                        WTEIINSD,WTEITRND,WTEINRFC,WTEINRRE,WTEINRLC,WTEIHOSP:  
                        WTEISPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTESI1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WATESIA1;WTEIUNIQ,WTEIDATE,WTEIURNO,WTEIMEDC,WTEIMEDS:      
                        WTEIWTNO,WTEIDOB,WTEISEX,WTEIPSTC,WTEILOCA,WTEIPROC:    
                        WTEISRGS,WTEICLCT,WTEIILOS,WTEIDTRG,WTEISRCR,WTEIREFH:  
                        WTEICLDT,WTEIDTIN,WTEICLCD,WTEILTST,WTEIPSDT,WTEIRFCS:  
                        WTEIBKDT,WTEIBKNO,WTEIREBK,WTEISCDT,WTEIDTRM,WTEIRREM:  
                        WTEIINSD,WTEITRND,WTEINRFC,WTEINRRE,WTEINRLC,WTEIHOSP:  
                        WTEISPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTESI1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WATESIA1;WTEIUNIQ,WTEIDATE,WTEIURNO,WTEIMEDC,WTEIMEDS:      
                        WTEIWTNO,WTEIDOB,WTEISEX,WTEIPSTC,WTEILOCA,WTEIPROC:    
                        WTEISRGS,WTEICLCT,WTEIILOS,WTEIDTRG,WTEISRCR,WTEIREFH:  
                        WTEICLDT,WTEIDTIN,WTEICLCD,WTEILTST,WTEIPSDT,WTEIRFCS:  
                        WTEIBKDT,WTEIBKNO,WTEIREBK,WTEISCDT,WTEIDTRM,WTEIRREM:  
                        WTEIINSD,WTEITRND,WTEINRFC,WTEINRRE,WTEINRLC,WTEIHOSP:  
                        WTEISPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTESI1  RESET     KEY16                                                       
          UNLOCK    WATESIA1                                                    
          RETURN
.
RSWTESI2  RESET     KEY16                                                       
          READ      WATESIA2,KEY16;;                                            
          RETURN
.
RAWTESI2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WATESIA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTESI2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WATESIA2,KEY16;WTEIUNIQ,WTEIDATE,WTEIURNO,WTEIMEDC,WTEIMEDS:
                        WTEIWTNO,WTEIDOB,WTEISEX,WTEIPSTC,WTEILOCA,WTEIPROC:    
                        WTEISRGS,WTEICLCT,WTEIILOS,WTEIDTRG,WTEISRCR,WTEIREFH:  
                        WTEICLDT,WTEIDTIN,WTEICLCD,WTEILTST,WTEIPSDT,WTEIRFCS:  
                        WTEIBKDT,WTEIBKNO,WTEIREBK,WTEISCDT,WTEIDTRM,WTEIRREM:  
                        WTEIINSD,WTEITRND,WTEINRFC,WTEINRRE,WTEINRLC,WTEIHOSP:  
                        WTEISPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTESI2                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATESIA2;WTEIUNIQ,WTEIDATE,WTEIURNO,WTEIMEDC,WTEIMEDS:      
                        WTEIWTNO,WTEIDOB,WTEISEX,WTEIPSTC,WTEILOCA,WTEIPROC:    
                        WTEISRGS,WTEICLCT,WTEIILOS,WTEIDTRG,WTEISRCR,WTEIREFH:  
                        WTEICLDT,WTEIDTIN,WTEICLCD,WTEILTST,WTEIPSDT,WTEIRFCS:  
                        WTEIBKDT,WTEIBKNO,WTEIREBK,WTEISCDT,WTEIDTRM,WTEIRREM:  
                        WTEIINSD,WTEITRND,WTEINRFC,WTEINRRE,WTEINRLC,WTEIHOSP:  
                        WTEISPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTESI2                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATESIA2;WTEIUNIQ,WTEIDATE,WTEIURNO,WTEIMEDC,WTEIMEDS:      
                        WTEIWTNO,WTEIDOB,WTEISEX,WTEIPSTC,WTEILOCA,WTEIPROC:    
                        WTEISRGS,WTEICLCT,WTEIILOS,WTEIDTRG,WTEISRCR,WTEIREFH:  
                        WTEICLDT,WTEIDTIN,WTEICLCD,WTEILTST,WTEIPSDT,WTEIRFCS:  
                        WTEIBKDT,WTEIBKNO,WTEIREBK,WTEISCDT,WTEIDTRM,WTEIRREM:  
                        WTEIINSD,WTEITRND,WTEINRFC,WTEINRRE,WTEINRLC,WTEIHOSP:  
                        WTEISPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTESI2                                                                        
          UPDATE    WATESIA2;WTEIUNIQ,WTEIDATE,WTEIURNO,WTEIMEDC,WTEIMEDS:      
                        WTEIWTNO,WTEIDOB,WTEISEX,WTEIPSTC,WTEILOCA,WTEIPROC:    
                        WTEISRGS,WTEICLCT,WTEIILOS,WTEIDTRG,WTEISRCR,WTEIREFH:  
                        WTEICLDT,WTEIDTIN,WTEICLCD,WTEILTST,WTEIPSDT,WTEIRFCS:  
                        WTEIBKDT,WTEIBKNO,WTEIREBK,WTEISCDT,WTEIDTRM,WTEIRREM:  
                        WTEIINSD,WTEITRND,WTEINRFC,WTEINRRE,WTEINRLC,WTEIHOSP:  
                        WTEISPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTESI2  RESET     KEY16                                                       
          WRITE     WATESIA2,KEY16;WTEIUNIQ,WTEIDATE,WTEIURNO,WTEIMEDC,WTEIMEDS:
                        WTEIWTNO,WTEIDOB,WTEISEX,WTEIPSTC,WTEILOCA,WTEIPROC:    
                        WTEISRGS,WTEICLCT,WTEIILOS,WTEIDTRG,WTEISRCR,WTEIREFH:  
                        WTEICLDT,WTEIDTIN,WTEICLCD,WTEILTST,WTEIPSDT,WTEIRFCS:  
                        WTEIBKDT,WTEIBKNO,WTEIREBK,WTEISCDT,WTEIDTRM,WTEIRREM:  
                        WTEIINSD,WTEITRND,WTEINRFC,WTEINRRE,WTEINRLC,WTEIHOSP:  
                        WTEISPAR                                                
          RETURN
.
DEWTESI2  RESET     KEY16                                                       
          DELETE    WATESIA2,KEY16                                              
          RETURN
.
RLWTESI2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     WATESIA2,KEY16;WTEIUNIQ,WTEIDATE,WTEIURNO,WTEIMEDC,WTEIMEDS:
                        WTEIWTNO,WTEIDOB,WTEISEX,WTEIPSTC,WTEILOCA,WTEIPROC:    
                        WTEISRGS,WTEICLCT,WTEIILOS,WTEIDTRG,WTEISRCR,WTEIREFH:  
                        WTEICLDT,WTEIDTIN,WTEICLCD,WTEILTST,WTEIPSDT,WTEIRFCS:  
                        WTEIBKDT,WTEIBKNO,WTEIREBK,WTEISCDT,WTEIDTRM,WTEIRREM:  
                        WTEIINSD,WTEITRND,WTEINRFC,WTEINRRE,WTEINRLC,WTEIHOSP:  
                        WTEISPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTESI2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WATESIA2;WTEIUNIQ,WTEIDATE,WTEIURNO,WTEIMEDC,WTEIMEDS:      
                        WTEIWTNO,WTEIDOB,WTEISEX,WTEIPSTC,WTEILOCA,WTEIPROC:    
                        WTEISRGS,WTEICLCT,WTEIILOS,WTEIDTRG,WTEISRCR,WTEIREFH:  
                        WTEICLDT,WTEIDTIN,WTEICLCD,WTEILTST,WTEIPSDT,WTEIRFCS:  
                        WTEIBKDT,WTEIBKNO,WTEIREBK,WTEISCDT,WTEIDTRM,WTEIRREM:  
                        WTEIINSD,WTEITRND,WTEINRFC,WTEINRRE,WTEINRLC,WTEIHOSP:  
                        WTEISPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTESI2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WATESIA2;WTEIUNIQ,WTEIDATE,WTEIURNO,WTEIMEDC,WTEIMEDS:      
                        WTEIWTNO,WTEIDOB,WTEISEX,WTEIPSTC,WTEILOCA,WTEIPROC:    
                        WTEISRGS,WTEICLCT,WTEIILOS,WTEIDTRG,WTEISRCR,WTEIREFH:  
                        WTEICLDT,WTEIDTIN,WTEICLCD,WTEILTST,WTEIPSDT,WTEIRFCS:  
                        WTEIBKDT,WTEIBKNO,WTEIREBK,WTEISCDT,WTEIDTRM,WTEIRREM:  
                        WTEIINSD,WTEITRND,WTEINRFC,WTEINRRE,WTEINRLC,WTEIHOSP:  
                        WTEISPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTESI2  RESET     KEY16                                                       
          UNLOCK    WATESIA2                                                    
          RETURN
.
