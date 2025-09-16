.
. WEBRDTIO    
. --------
. Filename     : webrdtaf.dat
.
RSWBRDT1  RESET     KEY16                                                       
          READ      WEBRDTA1,KEY16;;                                            
          RETURN
.
RAWBRDT1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WEBRDTA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBRDT1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WEBRDTA1,KEY16;WBRDGRID,WBRDPRID,WBRDTMID,WBRDSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBRDT1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WEBRDTA1;WBRDGRID,WBRDPRID,WBRDTMID,WBRDSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBRDT1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WEBRDTA1;WBRDGRID,WBRDPRID,WBRDTMID,WBRDSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBRDT1                                                                        
          UPDATE    WEBRDTA1;WBRDGRID,WBRDPRID,WBRDTMID,WBRDSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBRDT1  RESET     KEY16                                                       
          WRITE     WEBRDTA1,KEY16;WBRDGRID,WBRDPRID,WBRDTMID,WBRDSPAR          
          RETURN
.
DEWBRDT1  RESET     KEY16                                                       
          DELETE    WEBRDTA1,KEY16                                              
          RETURN
.
RLWBRDT1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     WEBRDTA1,KEY16;WBRDGRID,WBRDPRID,WBRDTMID,WBRDSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBRDT1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WEBRDTA1;WBRDGRID,WBRDPRID,WBRDTMID,WBRDSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBRDT1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WEBRDTA1;WBRDGRID,WBRDPRID,WBRDTMID,WBRDSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBRDT1  RESET     KEY16                                                       
          UNLOCK    WEBRDTA1                                                    
          RETURN
.
RSWBRDT2  RESET     KEY16                                                       
          READ      WEBRDTA2,KEY16;;                                            
          RETURN
.
RAWBRDT2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WEBRDTA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBRDT2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WEBRDTA2,KEY16;WBRDGRID,WBRDPRID,WBRDTMID,WBRDSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBRDT2                                                                        
          MOVE      ZERO,OVRCD
          READKS    WEBRDTA2;WBRDGRID,WBRDPRID,WBRDTMID,WBRDSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBRDT2                                                                        
          MOVE      ZERO,OVRCD
          READKP    WEBRDTA2;WBRDGRID,WBRDPRID,WBRDTMID,WBRDSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBRDT2                                                                        
          UPDATE    WEBRDTA2;WBRDGRID,WBRDPRID,WBRDTMID,WBRDSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBRDT2  RESET     KEY16                                                       
          WRITE     WEBRDTA2,KEY16;WBRDGRID,WBRDPRID,WBRDTMID,WBRDSPAR          
          RETURN
.
DEWBRDT2  RESET     KEY16                                                       
          DELETE    WEBRDTA2,KEY16                                              
          RETURN
.
RLWBRDT2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     WEBRDTA2,KEY16;WBRDGRID,WBRDPRID,WBRDTMID,WBRDSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBRDT2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WEBRDTA2;WBRDGRID,WBRDPRID,WBRDTMID,WBRDSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBRDT2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WEBRDTA2;WBRDGRID,WBRDPRID,WBRDTMID,WBRDSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBRDT2  RESET     KEY16                                                       
          UNLOCK    WEBRDTA2                                                    
          RETURN
.
