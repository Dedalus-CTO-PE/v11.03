.
. OUTLADIO    
. --------
. Filename     : outladaf.dat
.
RSOTLAD1  RESET     KEY25                                                       
          READ      OUTLADA1,KEY25;;                                            
          RETURN
.
RAOTLAD1  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      OUTLADA1,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTLAD1  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      OUTLADA1,KEY25;OTLASEID,OTLAPCLS,OTLAOUTN,OTLAATTD,OTLAATDT:
                        OTLAATTM,OTLABDAT,OTLACTRY,OTLACTYP,OTLACOMP,OTLATDAY:  
                        OTLANAME,OTLAINSR,OTLAPCAT,OTLACLSS,OTLAPRTY,OTLAPSEX:  
                        OTLASREF,OTLAURNO,OTLASITE,OTLABKDT,OTLABTIM,OTLASLOT:  
                        OTLASTIM,OTLACLID,OTLACLDX,OTLADTIT,OTLADSNM,OTLADGNM:  
                        OTLADOCT,OTLASITC,OTLACLTY,OTLADATE,OTLASTRT,OTLARSHF:  
                        OTLADLST,OTLASPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTLAD1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OUTLADA1;OTLASEID,OTLAPCLS,OTLAOUTN,OTLAATTD,OTLAATDT:      
                        OTLAATTM,OTLABDAT,OTLACTRY,OTLACTYP,OTLACOMP,OTLATDAY:  
                        OTLANAME,OTLAINSR,OTLAPCAT,OTLACLSS,OTLAPRTY,OTLAPSEX:  
                        OTLASREF,OTLAURNO,OTLASITE,OTLABKDT,OTLABTIM,OTLASLOT:  
                        OTLASTIM,OTLACLID,OTLACLDX,OTLADTIT,OTLADSNM,OTLADGNM:  
                        OTLADOCT,OTLASITC,OTLACLTY,OTLADATE,OTLASTRT,OTLARSHF:  
                        OTLADLST,OTLASPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTLAD1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OUTLADA1;OTLASEID,OTLAPCLS,OTLAOUTN,OTLAATTD,OTLAATDT:      
                        OTLAATTM,OTLABDAT,OTLACTRY,OTLACTYP,OTLACOMP,OTLATDAY:  
                        OTLANAME,OTLAINSR,OTLAPCAT,OTLACLSS,OTLAPRTY,OTLAPSEX:  
                        OTLASREF,OTLAURNO,OTLASITE,OTLABKDT,OTLABTIM,OTLASLOT:  
                        OTLASTIM,OTLACLID,OTLACLDX,OTLADTIT,OTLADSNM,OTLADGNM:  
                        OTLADOCT,OTLASITC,OTLACLTY,OTLADATE,OTLASTRT,OTLARSHF:  
                        OTLADLST,OTLASPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTLAD1                                                                        
          UPDATE    OUTLADA1;OTLASEID,OTLAPCLS,OTLAOUTN,OTLAATTD,OTLAATDT:      
                        OTLAATTM,OTLABDAT,OTLACTRY,OTLACTYP,OTLACOMP,OTLATDAY:  
                        OTLANAME,OTLAINSR,OTLAPCAT,OTLACLSS,OTLAPRTY,OTLAPSEX:  
                        OTLASREF,OTLAURNO,OTLASITE,OTLABKDT,OTLABTIM,OTLASLOT:  
                        OTLASTIM,OTLACLID,OTLACLDX,OTLADTIT,OTLADSNM,OTLADGNM:  
                        OTLADOCT,OTLASITC,OTLACLTY,OTLADATE,OTLASTRT,OTLARSHF:  
                        OTLADLST,OTLASPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTLAD1  RESET     KEY25                                                       
          WRITE     OUTLADA1,KEY25;OTLASEID,OTLAPCLS,OTLAOUTN,OTLAATTD,OTLAATDT:
                        OTLAATTM,OTLABDAT,OTLACTRY,OTLACTYP,OTLACOMP,OTLATDAY:  
                        OTLANAME,OTLAINSR,OTLAPCAT,OTLACLSS,OTLAPRTY,OTLAPSEX:  
                        OTLASREF,OTLAURNO,OTLASITE,OTLABKDT,OTLABTIM,OTLASLOT:  
                        OTLASTIM,OTLACLID,OTLACLDX,OTLADTIT,OTLADSNM,OTLADGNM:  
                        OTLADOCT,OTLASITC,OTLACLTY,OTLADATE,OTLASTRT,OTLARSHF:  
                        OTLADLST,OTLASPAR                                       
          RETURN
.
DEOTLAD1  RESET     KEY25                                                       
          DELETE    OUTLADA1,KEY25                                              
          RETURN
.
RLOTLAD1  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READL     OUTLADA1,KEY25;OTLASEID,OTLAPCLS,OTLAOUTN,OTLAATTD,OTLAATDT:
                        OTLAATTM,OTLABDAT,OTLACTRY,OTLACTYP,OTLACOMP,OTLATDAY:  
                        OTLANAME,OTLAINSR,OTLAPCAT,OTLACLSS,OTLAPRTY,OTLAPSEX:  
                        OTLASREF,OTLAURNO,OTLASITE,OTLABKDT,OTLABTIM,OTLASLOT:  
                        OTLASTIM,OTLACLID,OTLACLDX,OTLADTIT,OTLADSNM,OTLADGNM:  
                        OTLADOCT,OTLASITC,OTLACLTY,OTLADATE,OTLASTRT,OTLARSHF:  
                        OTLADLST,OTLASPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOTLAD1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   OUTLADA1;OTLASEID,OTLAPCLS,OTLAOUTN,OTLAATTD,OTLAATDT:      
                        OTLAATTM,OTLABDAT,OTLACTRY,OTLACTYP,OTLACOMP,OTLATDAY:  
                        OTLANAME,OTLAINSR,OTLAPCAT,OTLACLSS,OTLAPRTY,OTLAPSEX:  
                        OTLASREF,OTLAURNO,OTLASITE,OTLABKDT,OTLABTIM,OTLASLOT:  
                        OTLASTIM,OTLACLID,OTLACLDX,OTLADTIT,OTLADSNM,OTLADGNM:  
                        OTLADOCT,OTLASITC,OTLACLTY,OTLADATE,OTLASTRT,OTLARSHF:  
                        OTLADLST,OTLASPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOTLAD1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   OUTLADA1;OTLASEID,OTLAPCLS,OTLAOUTN,OTLAATTD,OTLAATDT:      
                        OTLAATTM,OTLABDAT,OTLACTRY,OTLACTYP,OTLACOMP,OTLATDAY:  
                        OTLANAME,OTLAINSR,OTLAPCAT,OTLACLSS,OTLAPRTY,OTLAPSEX:  
                        OTLASREF,OTLAURNO,OTLASITE,OTLABKDT,OTLABTIM,OTLASLOT:  
                        OTLASTIM,OTLACLID,OTLACLDX,OTLADTIT,OTLADSNM,OTLADGNM:  
                        OTLADOCT,OTLASITC,OTLACLTY,OTLADATE,OTLASTRT,OTLARSHF:  
                        OTLADLST,OTLASPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOTLAD1  RESET     KEY25                                                       
          UNLOCK    OUTLADA1                                                    
          RETURN
.
