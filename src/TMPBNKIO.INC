.
. TMPBNKIO    
. --------
. Filename     : tmpbnkaf.dat
.
RSTMBNK1  RESET     KEY12                                                       
          READ      TMPBNKA1,KEY12;;                                            
          RETURN
.
RATMBNK1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      TMPBNKA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDTMBNK1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      TMPBNKA1,KEY12;TMBNRECN,TMBNTDAT,TMBNTOTP,TMBNCDRW,TMBNMHOS:
                        TMBNMDHS,TMBNTTYP,TMBNRCOD,TMBNSTAT,TMBNBDAT,TMBNBTIM:  
                        TMBNRDAT,TMBNRTIM,TMBNCHQA,TMBNCDAT,TMBNCTIM,TMBNCUID:  
                        TMBNUDAT,TMBNUTIM,TMBNUUID,TMBNPRIN,TMBNPRNT,TMBNSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKTMBNK1                                                                        
          MOVE      ZERO,OVRCD
          READKS    TMPBNKA1;TMBNRECN,TMBNTDAT,TMBNTOTP,TMBNCDRW,TMBNMHOS:      
                        TMBNMDHS,TMBNTTYP,TMBNRCOD,TMBNSTAT,TMBNBDAT,TMBNBTIM:  
                        TMBNRDAT,TMBNRTIM,TMBNCHQA,TMBNCDAT,TMBNCTIM,TMBNCUID:  
                        TMBNUDAT,TMBNUTIM,TMBNUUID,TMBNPRIN,TMBNPRNT,TMBNSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPTMBNK1                                                                        
          MOVE      ZERO,OVRCD
          READKP    TMPBNKA1;TMBNRECN,TMBNTDAT,TMBNTOTP,TMBNCDRW,TMBNMHOS:      
                        TMBNMDHS,TMBNTTYP,TMBNRCOD,TMBNSTAT,TMBNBDAT,TMBNBTIM:  
                        TMBNRDAT,TMBNRTIM,TMBNCHQA,TMBNCDAT,TMBNCTIM,TMBNCUID:  
                        TMBNUDAT,TMBNUTIM,TMBNUUID,TMBNPRIN,TMBNPRNT,TMBNSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPTMBNK1                                                                        
          UPDATE    TMPBNKA1;TMBNRECN,TMBNTDAT,TMBNTOTP,TMBNCDRW,TMBNMHOS:      
                        TMBNMDHS,TMBNTTYP,TMBNRCOD,TMBNSTAT,TMBNBDAT,TMBNBTIM:  
                        TMBNRDAT,TMBNRTIM,TMBNCHQA,TMBNCDAT,TMBNCTIM,TMBNCUID:  
                        TMBNUDAT,TMBNUTIM,TMBNUUID,TMBNPRIN,TMBNPRNT,TMBNSPAR   
          RETURN
.
WRTMBNK1  RESET     KEY12                                                       
          WRITE     TMPBNKA1,KEY12;TMBNRECN,TMBNTDAT,TMBNTOTP,TMBNCDRW,TMBNMHOS:
                        TMBNMDHS,TMBNTTYP,TMBNRCOD,TMBNSTAT,TMBNBDAT,TMBNBTIM:  
                        TMBNRDAT,TMBNRTIM,TMBNCHQA,TMBNCDAT,TMBNCTIM,TMBNCUID:  
                        TMBNUDAT,TMBNUTIM,TMBNUUID,TMBNPRIN,TMBNPRNT,TMBNSPAR   
          RETURN
.
DETMBNK1  RESET     KEY12                                                       
          DELETE    TMPBNKA1,KEY12                                              
          RETURN
.
RSTMBNK2  RESET     KEY26                                                       
          READ      TMPBNKA2,KEY26;;                                            
          RETURN
.
RATMBNK2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      TMPBNKA2,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDTMBNK2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      TMPBNKA2,KEY26;TMBNRECN,TMBNTDAT,TMBNTOTP,TMBNCDRW,TMBNMHOS:
                        TMBNMDHS,TMBNTTYP,TMBNRCOD,TMBNSTAT,TMBNBDAT,TMBNBTIM:  
                        TMBNRDAT,TMBNRTIM,TMBNCHQA,TMBNCDAT,TMBNCTIM,TMBNCUID:  
                        TMBNUDAT,TMBNUTIM,TMBNUUID,TMBNPRIN,TMBNPRNT,TMBNSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKTMBNK2                                                                        
          MOVE      ZERO,OVRCD
          READKS    TMPBNKA2;TMBNRECN,TMBNTDAT,TMBNTOTP,TMBNCDRW,TMBNMHOS:      
                        TMBNMDHS,TMBNTTYP,TMBNRCOD,TMBNSTAT,TMBNBDAT,TMBNBTIM:  
                        TMBNRDAT,TMBNRTIM,TMBNCHQA,TMBNCDAT,TMBNCTIM,TMBNCUID:  
                        TMBNUDAT,TMBNUTIM,TMBNUUID,TMBNPRIN,TMBNPRNT,TMBNSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPTMBNK2                                                                        
          MOVE      ZERO,OVRCD
          READKP    TMPBNKA2;TMBNRECN,TMBNTDAT,TMBNTOTP,TMBNCDRW,TMBNMHOS:      
                        TMBNMDHS,TMBNTTYP,TMBNRCOD,TMBNSTAT,TMBNBDAT,TMBNBTIM:  
                        TMBNRDAT,TMBNRTIM,TMBNCHQA,TMBNCDAT,TMBNCTIM,TMBNCUID:  
                        TMBNUDAT,TMBNUTIM,TMBNUUID,TMBNPRIN,TMBNPRNT,TMBNSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPTMBNK2                                                                        
          UPDATE    TMPBNKA2;TMBNRECN,TMBNTDAT,TMBNTOTP,TMBNCDRW,TMBNMHOS:      
                        TMBNMDHS,TMBNTTYP,TMBNRCOD,TMBNSTAT,TMBNBDAT,TMBNBTIM:  
                        TMBNRDAT,TMBNRTIM,TMBNCHQA,TMBNCDAT,TMBNCTIM,TMBNCUID:  
                        TMBNUDAT,TMBNUTIM,TMBNUUID,TMBNPRIN,TMBNPRNT,TMBNSPAR   
          RETURN
.
WRTMBNK2  RESET     KEY26                                                       
          WRITE     TMPBNKA2,KEY26;TMBNRECN,TMBNTDAT,TMBNTOTP,TMBNCDRW,TMBNMHOS:
                        TMBNMDHS,TMBNTTYP,TMBNRCOD,TMBNSTAT,TMBNBDAT,TMBNBTIM:  
                        TMBNRDAT,TMBNRTIM,TMBNCHQA,TMBNCDAT,TMBNCTIM,TMBNCUID:  
                        TMBNUDAT,TMBNUTIM,TMBNUUID,TMBNPRIN,TMBNPRNT,TMBNSPAR   
          RETURN
.
DETMBNK2  RESET     KEY26                                                       
          DELETE    TMPBNKA2,KEY26                                              
          RETURN
.
RSTMBNK3  RESET     KEY26                                                       
          READ      TMPBNKA3,KEY26;;                                            
          RETURN
.
RATMBNK3  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      TMPBNKA3,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDTMBNK3  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      TMPBNKA3,KEY26;TMBNRECN,TMBNTDAT,TMBNTOTP,TMBNCDRW,TMBNMHOS:
                        TMBNMDHS,TMBNTTYP,TMBNRCOD,TMBNSTAT,TMBNBDAT,TMBNBTIM:  
                        TMBNRDAT,TMBNRTIM,TMBNCHQA,TMBNCDAT,TMBNCTIM,TMBNCUID:  
                        TMBNUDAT,TMBNUTIM,TMBNUUID,TMBNPRIN,TMBNPRNT,TMBNSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKTMBNK3                                                                        
          MOVE      ZERO,OVRCD
          READKS    TMPBNKA3;TMBNRECN,TMBNTDAT,TMBNTOTP,TMBNCDRW,TMBNMHOS:      
                        TMBNMDHS,TMBNTTYP,TMBNRCOD,TMBNSTAT,TMBNBDAT,TMBNBTIM:  
                        TMBNRDAT,TMBNRTIM,TMBNCHQA,TMBNCDAT,TMBNCTIM,TMBNCUID:  
                        TMBNUDAT,TMBNUTIM,TMBNUUID,TMBNPRIN,TMBNPRNT,TMBNSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPTMBNK3                                                                        
          MOVE      ZERO,OVRCD
          READKP    TMPBNKA3;TMBNRECN,TMBNTDAT,TMBNTOTP,TMBNCDRW,TMBNMHOS:      
                        TMBNMDHS,TMBNTTYP,TMBNRCOD,TMBNSTAT,TMBNBDAT,TMBNBTIM:  
                        TMBNRDAT,TMBNRTIM,TMBNCHQA,TMBNCDAT,TMBNCTIM,TMBNCUID:  
                        TMBNUDAT,TMBNUTIM,TMBNUUID,TMBNPRIN,TMBNPRNT,TMBNSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPTMBNK3                                                                        
          UPDATE    TMPBNKA3;TMBNRECN,TMBNTDAT,TMBNTOTP,TMBNCDRW,TMBNMHOS:      
                        TMBNMDHS,TMBNTTYP,TMBNRCOD,TMBNSTAT,TMBNBDAT,TMBNBTIM:  
                        TMBNRDAT,TMBNRTIM,TMBNCHQA,TMBNCDAT,TMBNCTIM,TMBNCUID:  
                        TMBNUDAT,TMBNUTIM,TMBNUUID,TMBNPRIN,TMBNPRNT,TMBNSPAR   
          RETURN
.
WRTMBNK3  RESET     KEY26                                                       
          WRITE     TMPBNKA3,KEY26;TMBNRECN,TMBNTDAT,TMBNTOTP,TMBNCDRW,TMBNMHOS:
                        TMBNMDHS,TMBNTTYP,TMBNRCOD,TMBNSTAT,TMBNBDAT,TMBNBTIM:  
                        TMBNRDAT,TMBNRTIM,TMBNCHQA,TMBNCDAT,TMBNCTIM,TMBNCUID:  
                        TMBNUDAT,TMBNUTIM,TMBNUUID,TMBNPRIN,TMBNPRNT,TMBNSPAR   
          RETURN
.
DETMBNK3  RESET     KEY26                                                       
          DELETE    TMPBNKA3,KEY26                                              
          RETURN
.
RSTMBNK4  RESET     KEY34                                                       
          READ      TMPBNKA4,KEY34;;                                            
          RETURN
.
RATMBNK4  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      TMPBNKA4,KEY34;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDTMBNK4  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      TMPBNKA4,KEY34;TMBNRECN,TMBNTDAT,TMBNTOTP,TMBNCDRW,TMBNMHOS:
                        TMBNMDHS,TMBNTTYP,TMBNRCOD,TMBNSTAT,TMBNBDAT,TMBNBTIM:  
                        TMBNRDAT,TMBNRTIM,TMBNCHQA,TMBNCDAT,TMBNCTIM,TMBNCUID:  
                        TMBNUDAT,TMBNUTIM,TMBNUUID,TMBNPRIN,TMBNPRNT,TMBNSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKTMBNK4                                                                        
          MOVE      ZERO,OVRCD
          READKS    TMPBNKA4;TMBNRECN,TMBNTDAT,TMBNTOTP,TMBNCDRW,TMBNMHOS:      
                        TMBNMDHS,TMBNTTYP,TMBNRCOD,TMBNSTAT,TMBNBDAT,TMBNBTIM:  
                        TMBNRDAT,TMBNRTIM,TMBNCHQA,TMBNCDAT,TMBNCTIM,TMBNCUID:  
                        TMBNUDAT,TMBNUTIM,TMBNUUID,TMBNPRIN,TMBNPRNT,TMBNSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPTMBNK4                                                                        
          MOVE      ZERO,OVRCD
          READKP    TMPBNKA4;TMBNRECN,TMBNTDAT,TMBNTOTP,TMBNCDRW,TMBNMHOS:      
                        TMBNMDHS,TMBNTTYP,TMBNRCOD,TMBNSTAT,TMBNBDAT,TMBNBTIM:  
                        TMBNRDAT,TMBNRTIM,TMBNCHQA,TMBNCDAT,TMBNCTIM,TMBNCUID:  
                        TMBNUDAT,TMBNUTIM,TMBNUUID,TMBNPRIN,TMBNPRNT,TMBNSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPTMBNK4                                                                        
          UPDATE    TMPBNKA4;TMBNRECN,TMBNTDAT,TMBNTOTP,TMBNCDRW,TMBNMHOS:      
                        TMBNMDHS,TMBNTTYP,TMBNRCOD,TMBNSTAT,TMBNBDAT,TMBNBTIM:  
                        TMBNRDAT,TMBNRTIM,TMBNCHQA,TMBNCDAT,TMBNCTIM,TMBNCUID:  
                        TMBNUDAT,TMBNUTIM,TMBNUUID,TMBNPRIN,TMBNPRNT,TMBNSPAR   
          RETURN
.
WRTMBNK4  RESET     KEY34                                                       
          WRITE     TMPBNKA4,KEY34;TMBNRECN,TMBNTDAT,TMBNTOTP,TMBNCDRW,TMBNMHOS:
                        TMBNMDHS,TMBNTTYP,TMBNRCOD,TMBNSTAT,TMBNBDAT,TMBNBTIM:  
                        TMBNRDAT,TMBNRTIM,TMBNCHQA,TMBNCDAT,TMBNCTIM,TMBNCUID:  
                        TMBNUDAT,TMBNUTIM,TMBNUUID,TMBNPRIN,TMBNPRNT,TMBNSPAR   
          RETURN
.
DETMBNK4  RESET     KEY34                                                       
          DELETE    TMPBNKA4,KEY34                                              
          RETURN
.
