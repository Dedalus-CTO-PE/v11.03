.
. EMRMTXIO    
. --------
. Filename     : emrmtxaf.dat
.
RSEMMX1   RESET     KEY10                                                       
          READ      EMRMTXA1,KEY10;;                                            
          RETURN
.
RAEMMX1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      EMRMTXA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMMX1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      EMRMTXA1,KEY10;EMMXNAT,EMMXBRG,EMMXPDG,EMMXSPA              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMMX1                                                                         
          MOVE      ZERO,OVRCD
          READKS    EMRMTXA1;EMMXNAT,EMMXBRG,EMMXPDG,EMMXSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMMX1                                                                         
          MOVE      ZERO,OVRCD
          READKP    EMRMTXA1;EMMXNAT,EMMXBRG,EMMXPDG,EMMXSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMMX1                                                                         
          UPDATE    EMRMTXA1;EMMXNAT,EMMXBRG,EMMXPDG,EMMXSPA                    
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMMX1   RESET     KEY10                                                       
          WRITE     EMRMTXA1,KEY10;EMMXNAT,EMMXBRG,EMMXPDG,EMMXSPA              
          RETURN
.
DEEMMX1   RESET     KEY10                                                       
          DELETE    EMRMTXA1,KEY10                                              
          RETURN
.
RLEMMX1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     EMRMTXA1,KEY10;EMMXNAT,EMMXBRG,EMMXPDG,EMMXSPA              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMMX1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   EMRMTXA1;EMMXNAT,EMMXBRG,EMMXPDG,EMMXSPA                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMMX1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   EMRMTXA1;EMMXNAT,EMMXBRG,EMMXPDG,EMMXSPA                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMMX1   RESET     KEY10                                                       
          UNLOCK    EMRMTXA1                                                    
          RETURN
.
RSEMMX2   RESET     KEY10                                                       
          READ      EMRMTXA2,KEY10;;                                            
          RETURN
.
RAEMMX2   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      EMRMTXA2,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMMX2   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      EMRMTXA2,KEY10;EMMXNAT,EMMXBRG,EMMXPDG,EMMXSPA              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMMX2                                                                         
          MOVE      ZERO,OVRCD
          READKS    EMRMTXA2;EMMXNAT,EMMXBRG,EMMXPDG,EMMXSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMMX2                                                                         
          MOVE      ZERO,OVRCD
          READKP    EMRMTXA2;EMMXNAT,EMMXBRG,EMMXPDG,EMMXSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMMX2                                                                         
          UPDATE    EMRMTXA2;EMMXNAT,EMMXBRG,EMMXPDG,EMMXSPA                    
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMMX2   RESET     KEY10                                                       
          WRITE     EMRMTXA2,KEY10;EMMXNAT,EMMXBRG,EMMXPDG,EMMXSPA              
          RETURN
.
DEEMMX2   RESET     KEY10                                                       
          DELETE    EMRMTXA2,KEY10                                              
          RETURN
.
RLEMMX2   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     EMRMTXA2,KEY10;EMMXNAT,EMMXBRG,EMMXPDG,EMMXSPA              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMMX2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   EMRMTXA2;EMMXNAT,EMMXBRG,EMMXPDG,EMMXSPA                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMMX2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   EMRMTXA2;EMMXNAT,EMMXBRG,EMMXPDG,EMMXSPA                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMMX2   RESET     KEY10                                                       
          UNLOCK    EMRMTXA2                                                    
          RETURN
.
RSEMMX3   RESET     KEY10                                                       
          READ      EMRMTXA3,KEY10;;                                            
          RETURN
.
RAEMMX3   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      EMRMTXA3,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMMX3   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      EMRMTXA3,KEY10;EMMXNAT,EMMXBRG,EMMXPDG,EMMXSPA              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMMX3                                                                         
          MOVE      ZERO,OVRCD
          READKS    EMRMTXA3;EMMXNAT,EMMXBRG,EMMXPDG,EMMXSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMMX3                                                                         
          MOVE      ZERO,OVRCD
          READKP    EMRMTXA3;EMMXNAT,EMMXBRG,EMMXPDG,EMMXSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMMX3                                                                         
          UPDATE    EMRMTXA3;EMMXNAT,EMMXBRG,EMMXPDG,EMMXSPA                    
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMMX3   RESET     KEY10                                                       
          WRITE     EMRMTXA3,KEY10;EMMXNAT,EMMXBRG,EMMXPDG,EMMXSPA              
          RETURN
.
DEEMMX3   RESET     KEY10                                                       
          DELETE    EMRMTXA3,KEY10                                              
          RETURN
.
RLEMMX3   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     EMRMTXA3,KEY10;EMMXNAT,EMMXBRG,EMMXPDG,EMMXSPA              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMMX3                                                                         
          MOVE      ZERO,OVRCD
          READLKS   EMRMTXA3;EMMXNAT,EMMXBRG,EMMXPDG,EMMXSPA                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMMX3                                                                         
          MOVE      ZERO,OVRCD
          READLKP   EMRMTXA3;EMMXNAT,EMMXBRG,EMMXPDG,EMMXSPA                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMMX3   RESET     KEY10                                                       
          UNLOCK    EMRMTXA3                                                    
          RETURN
.
