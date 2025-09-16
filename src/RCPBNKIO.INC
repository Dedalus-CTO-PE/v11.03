.
. RCPBNKIO    
. --------
. Filename     : rcpbnkaf.dat
.
RSRCBNK1  RESET     KEY12                                                       
          READ      RCPBNKA1,KEY12;;                                            
          RETURN
.
RARCBNK1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      RCPBNKA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRCBNK1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      RCPBNKA1,KEY12;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRCBNK1                                                                        
          MOVE      ZERO,OVRCD
          READKS    RCPBNKA1;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:      
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRCBNK1                                                                        
          MOVE      ZERO,OVRCD
          READKP    RCPBNKA1;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:      
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRCBNK1                                                                        
          UPDATE    RCPBNKA1;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:      
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRRCBNK1  RESET     KEY12                                                       
          WRITE     RCPBNKA1,KEY12;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          RETURN
.
DERCBNK1  RESET     KEY12                                                       
          DELETE    RCPBNKA1,KEY12                                              
          RETURN
.
RLRCBNK1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READL     RCPBNKA1,KEY12;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLRCBNK1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   RCPBNKA1;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:      
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLRCBNK1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   RCPBNKA1;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:      
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UURCBNK1  RESET     KEY12                                                       
          UNLOCK    RCPBNKA1                                                    
          RETURN
.
RSRCBNK2  RESET     KEY26                                                       
          READ      RCPBNKA2,KEY26;;                                            
          RETURN
.
RARCBNK2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      RCPBNKA2,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRCBNK2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      RCPBNKA2,KEY26;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRCBNK2                                                                        
          MOVE      ZERO,OVRCD
          READKS    RCPBNKA2;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:      
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRCBNK2                                                                        
          MOVE      ZERO,OVRCD
          READKP    RCPBNKA2;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:      
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRCBNK2                                                                        
          UPDATE    RCPBNKA2;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:      
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRRCBNK2  RESET     KEY26                                                       
          WRITE     RCPBNKA2,KEY26;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          RETURN
.
DERCBNK2  RESET     KEY26                                                       
          DELETE    RCPBNKA2,KEY26                                              
          RETURN
.
RLRCBNK2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READL     RCPBNKA2,KEY26;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLRCBNK2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   RCPBNKA2;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:      
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLRCBNK2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   RCPBNKA2;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:      
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UURCBNK2  RESET     KEY26                                                       
          UNLOCK    RCPBNKA2                                                    
          RETURN
.
RSRCBNK3  RESET     KEY26                                                       
          READ      RCPBNKA3,KEY26;;                                            
          RETURN
.
RARCBNK3  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      RCPBNKA3,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRCBNK3  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      RCPBNKA3,KEY26;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRCBNK3                                                                        
          MOVE      ZERO,OVRCD
          READKS    RCPBNKA3;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:      
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRCBNK3                                                                        
          MOVE      ZERO,OVRCD
          READKP    RCPBNKA3;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:      
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRCBNK3                                                                        
          UPDATE    RCPBNKA3;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:      
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRRCBNK3  RESET     KEY26                                                       
          WRITE     RCPBNKA3,KEY26;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          RETURN
.
DERCBNK3  RESET     KEY26                                                       
          DELETE    RCPBNKA3,KEY26                                              
          RETURN
.
RLRCBNK3  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READL     RCPBNKA3,KEY26;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLRCBNK3                                                                        
          MOVE      ZERO,OVRCD
          READLKS   RCPBNKA3;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:      
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLRCBNK3                                                                        
          MOVE      ZERO,OVRCD
          READLKP   RCPBNKA3;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:      
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UURCBNK3  RESET     KEY26                                                       
          UNLOCK    RCPBNKA3                                                    
          RETURN
.
RSRCBNK4  RESET     KEY34                                                       
          READ      RCPBNKA4,KEY34;;                                            
          RETURN
.
RARCBNK4  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      RCPBNKA4,KEY34;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRCBNK4  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      RCPBNKA4,KEY34;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRCBNK4                                                                        
          MOVE      ZERO,OVRCD
          READKS    RCPBNKA4;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:      
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRCBNK4                                                                        
          MOVE      ZERO,OVRCD
          READKP    RCPBNKA4;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:      
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRCBNK4                                                                        
          UPDATE    RCPBNKA4;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:      
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRRCBNK4  RESET     KEY34                                                       
          WRITE     RCPBNKA4,KEY34;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          RETURN
.
DERCBNK4  RESET     KEY34                                                       
          DELETE    RCPBNKA4,KEY34                                              
          RETURN
.
RLRCBNK4  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READL     RCPBNKA4,KEY34;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLRCBNK4                                                                        
          MOVE      ZERO,OVRCD
          READLKS   RCPBNKA4;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:      
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLRCBNK4                                                                        
          MOVE      ZERO,OVRCD
          READLKP   RCPBNKA4;RCBNRECN,RCBNTDAT,RCBNTOTP,RCBNCDRW,RCBNMHOS:      
                        RCBNMDHS,RCBNTTYP,RCBNRCOD,RCBNSTAT,RCBNBDAT,RCBNBTIM:  
                        RCBNRDAT,RCBNRTIM,RCBNCHQA,RCBNCDAT,RCBNCTIM,RCBNCUID:  
                        RCBNUDAT,RCBNUTIM,RCBNUUID,RCBNSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UURCBNK4  RESET     KEY34                                                       
          UNLOCK    RCPBNKA4                                                    
          RETURN
.
