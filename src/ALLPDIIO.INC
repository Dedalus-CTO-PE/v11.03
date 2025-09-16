.
. ALLPDIIO    
. --------
. Filename     : allpdiaf.dat
.
RSALPDI1  RESET     KEY12                                                       
          READ      ALLPDIA1,KEY12;;                                            
          RETURN
.
RAALPDI1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      ALLPDIA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALPDI1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      ALLPDIA1,KEY12;ALPDRDEP,ALPDREAS,ALPDDESC,ALPDICD,ALPDACTV: 
                        ALPDCDAT,ALPDCTIM,ALPDCUID,ALPDUDAT,ALPDUTIM,ALPDUUID:  
                        ALPDSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALPDI1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLPDIA1;ALPDRDEP,ALPDREAS,ALPDDESC,ALPDICD,ALPDACTV:       
                        ALPDCDAT,ALPDCTIM,ALPDCUID,ALPDUDAT,ALPDUTIM,ALPDUUID:  
                        ALPDSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALPDI1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLPDIA1;ALPDRDEP,ALPDREAS,ALPDDESC,ALPDICD,ALPDACTV:       
                        ALPDCDAT,ALPDCTIM,ALPDCUID,ALPDUDAT,ALPDUTIM,ALPDUUID:  
                        ALPDSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALPDI1                                                                        
          UPDATE    ALLPDIA1;ALPDRDEP,ALPDREAS,ALPDDESC,ALPDICD,ALPDACTV:       
                        ALPDCDAT,ALPDCTIM,ALPDCUID,ALPDUDAT,ALPDUTIM,ALPDUUID:  
                        ALPDSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALPDI1  RESET     KEY12                                                       
          WRITE     ALLPDIA1,KEY12;ALPDRDEP,ALPDREAS,ALPDDESC,ALPDICD,ALPDACTV: 
                        ALPDCDAT,ALPDCTIM,ALPDCUID,ALPDUDAT,ALPDUTIM,ALPDUUID:  
                        ALPDSPAR                                                
          RETURN
.
DEALPDI1  RESET     KEY12                                                       
          DELETE    ALLPDIA1,KEY12                                              
          RETURN
.
RLALPDI1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READL     ALLPDIA1,KEY12;ALPDRDEP,ALPDREAS,ALPDDESC,ALPDICD,ALPDACTV: 
                        ALPDCDAT,ALPDCTIM,ALPDCUID,ALPDUDAT,ALPDUTIM,ALPDUUID:  
                        ALPDSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALPDI1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLPDIA1;ALPDRDEP,ALPDREAS,ALPDDESC,ALPDICD,ALPDACTV:       
                        ALPDCDAT,ALPDCTIM,ALPDCUID,ALPDUDAT,ALPDUTIM,ALPDUUID:  
                        ALPDSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALPDI1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLPDIA1;ALPDRDEP,ALPDREAS,ALPDDESC,ALPDICD,ALPDACTV:       
                        ALPDCDAT,ALPDCTIM,ALPDCUID,ALPDUDAT,ALPDUTIM,ALPDUUID:  
                        ALPDSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALPDI1  RESET     KEY12                                                       
          UNLOCK    ALLPDIA1                                                    
          RETURN
.
RSALPDI2  RESET     KEY52                                                       
          READ      ALLPDIA2,KEY52;;                                            
          RETURN
.
RAALPDI2  RESET     KEY52                                                       
          MOVE      ZERO,OVRCD
          READ      ALLPDIA2,KEY52;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALPDI2  RESET     KEY52                                                       
          MOVE      ZERO,OVRCD
          READ      ALLPDIA2,KEY52;ALPDRDEP,ALPDREAS,ALPDDESC,ALPDICD,ALPDACTV: 
                        ALPDCDAT,ALPDCTIM,ALPDCUID,ALPDUDAT,ALPDUTIM,ALPDUUID:  
                        ALPDSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALPDI2                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLPDIA2;ALPDRDEP,ALPDREAS,ALPDDESC,ALPDICD,ALPDACTV:       
                        ALPDCDAT,ALPDCTIM,ALPDCUID,ALPDUDAT,ALPDUTIM,ALPDUUID:  
                        ALPDSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALPDI2                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLPDIA2;ALPDRDEP,ALPDREAS,ALPDDESC,ALPDICD,ALPDACTV:       
                        ALPDCDAT,ALPDCTIM,ALPDCUID,ALPDUDAT,ALPDUTIM,ALPDUUID:  
                        ALPDSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALPDI2                                                                        
          UPDATE    ALLPDIA2;ALPDRDEP,ALPDREAS,ALPDDESC,ALPDICD,ALPDACTV:       
                        ALPDCDAT,ALPDCTIM,ALPDCUID,ALPDUDAT,ALPDUTIM,ALPDUUID:  
                        ALPDSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALPDI2  RESET     KEY52                                                       
          WRITE     ALLPDIA2,KEY52;ALPDRDEP,ALPDREAS,ALPDDESC,ALPDICD,ALPDACTV: 
                        ALPDCDAT,ALPDCTIM,ALPDCUID,ALPDUDAT,ALPDUTIM,ALPDUUID:  
                        ALPDSPAR                                                
          RETURN
.
DEALPDI2  RESET     KEY52                                                       
          DELETE    ALLPDIA2,KEY52                                              
          RETURN
.
RLALPDI2  RESET     KEY52                                                       
          MOVE      ZERO,OVRCD
          READL     ALLPDIA2,KEY52;ALPDRDEP,ALPDREAS,ALPDDESC,ALPDICD,ALPDACTV: 
                        ALPDCDAT,ALPDCTIM,ALPDCUID,ALPDUDAT,ALPDUTIM,ALPDUUID:  
                        ALPDSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALPDI2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLPDIA2;ALPDRDEP,ALPDREAS,ALPDDESC,ALPDICD,ALPDACTV:       
                        ALPDCDAT,ALPDCTIM,ALPDCUID,ALPDUDAT,ALPDUTIM,ALPDUUID:  
                        ALPDSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALPDI2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLPDIA2;ALPDRDEP,ALPDREAS,ALPDDESC,ALPDICD,ALPDACTV:       
                        ALPDCDAT,ALPDCTIM,ALPDCUID,ALPDUDAT,ALPDUTIM,ALPDUUID:  
                        ALPDSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALPDI2  RESET     KEY52                                                       
          UNLOCK    ALLPDIA2                                                    
          RETURN
.
