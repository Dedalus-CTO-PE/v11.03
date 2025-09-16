.
. PMSCNOIO    
. --------
. Filename     : pmscnoaf.dat
.
RSPMCNO1  RESET     KEY8                                                        
          READ      PMSCNOA1,KEY8;;                                             
          RETURN
.
RAPMCNO1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSCNOA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCNO1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSCNOA1,KEY8;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST: 
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMCNO1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSCNOA1;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST:      
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMCNO1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSCNOA1;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST:      
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMCNO1                                                                        
          UPDATE    PMSCNOA1;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST:      
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMCNO1  RESET     KEY8                                                        
          WRITE     PMSCNOA1,KEY8;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST: 
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          RETURN
.
DEPMCNO1  RESET     KEY8                                                        
          DELETE    PMSCNOA1,KEY8                                               
          RETURN
.
RLPMCNO1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     PMSCNOA1,KEY8;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST: 
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMCNO1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSCNOA1;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST:      
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMCNO1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSCNOA1;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST:      
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMCNO1  RESET     KEY8                                                        
          UNLOCK    PMSCNOA1                                                    
          RETURN
.
RSPMCNO2  RESET     KEY16                                                       
          READ      PMSCNOA2,KEY16;;                                            
          RETURN
.
RAPMCNO2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCNOA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCNO2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCNOA2,KEY16;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST:
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMCNO2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSCNOA2;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST:      
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMCNO2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSCNOA2;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST:      
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMCNO2                                                                        
          UPDATE    PMSCNOA2;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST:      
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMCNO2  RESET     KEY16                                                       
          WRITE     PMSCNOA2,KEY16;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST:
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          RETURN
.
DEPMCNO2  RESET     KEY16                                                       
          DELETE    PMSCNOA2,KEY16                                              
          RETURN
.
RLPMCNO2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     PMSCNOA2,KEY16;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST:
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMCNO2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSCNOA2;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST:      
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMCNO2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSCNOA2;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST:      
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMCNO2  RESET     KEY16                                                       
          UNLOCK    PMSCNOA2                                                    
          RETURN
.
RSPMCNO3  RESET     KEY16                                                       
          READ      PMSCNOA3,KEY16;;                                            
          RETURN
.
RAPMCNO3  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCNOA3,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCNO3  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCNOA3,KEY16;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST:
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMCNO3                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSCNOA3;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST:      
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMCNO3                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSCNOA3;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST:      
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMCNO3                                                                        
          UPDATE    PMSCNOA3;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST:      
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMCNO3  RESET     KEY16                                                       
          WRITE     PMSCNOA3,KEY16;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST:
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          RETURN
.
DEPMCNO3  RESET     KEY16                                                       
          DELETE    PMSCNOA3,KEY16                                              
          RETURN
.
RLPMCNO3  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     PMSCNOA3,KEY16;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST:
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMCNO3                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSCNOA3;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST:      
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMCNO3                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSCNOA3;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST:      
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMCNO3  RESET     KEY16                                                       
          UNLOCK    PMSCNOA3                                                    
          RETURN
.
RSPMCNO4  RESET     KEY18                                                       
          READ      PMSCNOA4,KEY18;;                                            
          RETURN
.
RAPMCNO4  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCNOA4,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCNO4  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCNOA4,KEY18;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST:
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMCNO4                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSCNOA4;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST:      
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMCNO4                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSCNOA4;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST:      
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMCNO4                                                                        
          UPDATE    PMSCNOA4;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST:      
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMCNO4  RESET     KEY18                                                       
          WRITE     PMSCNOA4,KEY18;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST:
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          RETURN
.
DEPMCNO4  RESET     KEY18                                                       
          DELETE    PMSCNOA4,KEY18                                              
          RETURN
.
RLPMCNO4  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READL     PMSCNOA4,KEY18;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST:
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMCNO4                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSCNOA4;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST:      
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMCNO4                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSCNOA4;PMCNCRNO,PMCNDATE,PMCNVISN,PMCNINVN,PMCNSYST:      
                        PMCNSTAT,PMCNREAS,PMCNAMNT,PMCNGSTM,PMCNCDAT,PMCNCTIM:  
                        PMCNCUID,PMCNSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMCNO4  RESET     KEY18                                                       
          UNLOCK    PMSCNOA4                                                    
          RETURN
.
