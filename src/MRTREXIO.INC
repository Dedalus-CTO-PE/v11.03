.
. MRTREXIO    
. --------
. Filename     : mrtrexaf.dat
.
RSMRREX1  RESET     KEY4                                                        
          READ      MRTREXA1,KEY4;;                                             
          RETURN
.
RAMRREX1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      MRTREXA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRREX1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      MRTREXA1,KEY4;MRRXEXID,MRRXDESC,MRRXDIFR,MRRXDITO,MRRXVIFR: 
                        MRRXVITO,MRRXUNIT,MRRXWARD,MRRXDOCT,MRRXDECD,MRRXNOEX:  
                        MRRXPROG,MRRXDIA1,MRRXDIA2,MRRXDIA3,MRRXPRO1,MRRXPRO2:  
                        MRRXPRO3,MRRXPDRG,MRRXDISO,MRRXURFR,MRRXURTO,MRRXDTFR:  
                        MRRXDTTO,MRRXHLFR,MRRXHLTO,MRRXSMDY,MRRXCOFR,MRRXCOTO:  
                        MRRXSNAG,MRRXCDFR,MRRXCDTO,MRRXINCM,MRRXAAGE,MRRXGEND:  
                        MRRXPOST,MRRXCOB,MRRXINVT,MRRXIPRI,MRRXINV1,MRRXINV2:   
                        MRRXBLFR,MRRXBLTO,MRRXDGFR,MRRXDGTO,MRRXHOSP,MRRXHOSF:  
                        MRRXHOST,MRRXSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRREX1                                                                        
          MOVE      ZERO,OVRCD
          READKS    MRTREXA1;MRRXEXID,MRRXDESC,MRRXDIFR,MRRXDITO,MRRXVIFR:      
                        MRRXVITO,MRRXUNIT,MRRXWARD,MRRXDOCT,MRRXDECD,MRRXNOEX:  
                        MRRXPROG,MRRXDIA1,MRRXDIA2,MRRXDIA3,MRRXPRO1,MRRXPRO2:  
                        MRRXPRO3,MRRXPDRG,MRRXDISO,MRRXURFR,MRRXURTO,MRRXDTFR:  
                        MRRXDTTO,MRRXHLFR,MRRXHLTO,MRRXSMDY,MRRXCOFR,MRRXCOTO:  
                        MRRXSNAG,MRRXCDFR,MRRXCDTO,MRRXINCM,MRRXAAGE,MRRXGEND:  
                        MRRXPOST,MRRXCOB,MRRXINVT,MRRXIPRI,MRRXINV1,MRRXINV2:   
                        MRRXBLFR,MRRXBLTO,MRRXDGFR,MRRXDGTO,MRRXHOSP,MRRXHOSF:  
                        MRRXHOST,MRRXSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRREX1                                                                        
          MOVE      ZERO,OVRCD
          READKP    MRTREXA1;MRRXEXID,MRRXDESC,MRRXDIFR,MRRXDITO,MRRXVIFR:      
                        MRRXVITO,MRRXUNIT,MRRXWARD,MRRXDOCT,MRRXDECD,MRRXNOEX:  
                        MRRXPROG,MRRXDIA1,MRRXDIA2,MRRXDIA3,MRRXPRO1,MRRXPRO2:  
                        MRRXPRO3,MRRXPDRG,MRRXDISO,MRRXURFR,MRRXURTO,MRRXDTFR:  
                        MRRXDTTO,MRRXHLFR,MRRXHLTO,MRRXSMDY,MRRXCOFR,MRRXCOTO:  
                        MRRXSNAG,MRRXCDFR,MRRXCDTO,MRRXINCM,MRRXAAGE,MRRXGEND:  
                        MRRXPOST,MRRXCOB,MRRXINVT,MRRXIPRI,MRRXINV1,MRRXINV2:   
                        MRRXBLFR,MRRXBLTO,MRRXDGFR,MRRXDGTO,MRRXHOSP,MRRXHOSF:  
                        MRRXHOST,MRRXSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRREX1                                                                        
          UPDATE    MRTREXA1;MRRXEXID,MRRXDESC,MRRXDIFR,MRRXDITO,MRRXVIFR:      
                        MRRXVITO,MRRXUNIT,MRRXWARD,MRRXDOCT,MRRXDECD,MRRXNOEX:  
                        MRRXPROG,MRRXDIA1,MRRXDIA2,MRRXDIA3,MRRXPRO1,MRRXPRO2:  
                        MRRXPRO3,MRRXPDRG,MRRXDISO,MRRXURFR,MRRXURTO,MRRXDTFR:  
                        MRRXDTTO,MRRXHLFR,MRRXHLTO,MRRXSMDY,MRRXCOFR,MRRXCOTO:  
                        MRRXSNAG,MRRXCDFR,MRRXCDTO,MRRXINCM,MRRXAAGE,MRRXGEND:  
                        MRRXPOST,MRRXCOB,MRRXINVT,MRRXIPRI,MRRXINV1,MRRXINV2:   
                        MRRXBLFR,MRRXBLTO,MRRXDGFR,MRRXDGTO,MRRXHOSP,MRRXHOSF:  
                        MRRXHOST,MRRXSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMRREX1  RESET     KEY4                                                        
          WRITE     MRTREXA1,KEY4;MRRXEXID,MRRXDESC,MRRXDIFR,MRRXDITO,MRRXVIFR: 
                        MRRXVITO,MRRXUNIT,MRRXWARD,MRRXDOCT,MRRXDECD,MRRXNOEX:  
                        MRRXPROG,MRRXDIA1,MRRXDIA2,MRRXDIA3,MRRXPRO1,MRRXPRO2:  
                        MRRXPRO3,MRRXPDRG,MRRXDISO,MRRXURFR,MRRXURTO,MRRXDTFR:  
                        MRRXDTTO,MRRXHLFR,MRRXHLTO,MRRXSMDY,MRRXCOFR,MRRXCOTO:  
                        MRRXSNAG,MRRXCDFR,MRRXCDTO,MRRXINCM,MRRXAAGE,MRRXGEND:  
                        MRRXPOST,MRRXCOB,MRRXINVT,MRRXIPRI,MRRXINV1,MRRXINV2:   
                        MRRXBLFR,MRRXBLTO,MRRXDGFR,MRRXDGTO,MRRXHOSP,MRRXHOSF:  
                        MRRXHOST,MRRXSPAR                                       
          RETURN
.
DEMRREX1  RESET     KEY4                                                        
          DELETE    MRTREXA1,KEY4                                               
          RETURN
.
RLMRREX1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READL     MRTREXA1,KEY4;MRRXEXID,MRRXDESC,MRRXDIFR,MRRXDITO,MRRXVIFR: 
                        MRRXVITO,MRRXUNIT,MRRXWARD,MRRXDOCT,MRRXDECD,MRRXNOEX:  
                        MRRXPROG,MRRXDIA1,MRRXDIA2,MRRXDIA3,MRRXPRO1,MRRXPRO2:  
                        MRRXPRO3,MRRXPDRG,MRRXDISO,MRRXURFR,MRRXURTO,MRRXDTFR:  
                        MRRXDTTO,MRRXHLFR,MRRXHLTO,MRRXSMDY,MRRXCOFR,MRRXCOTO:  
                        MRRXSNAG,MRRXCDFR,MRRXCDTO,MRRXINCM,MRRXAAGE,MRRXGEND:  
                        MRRXPOST,MRRXCOB,MRRXINVT,MRRXIPRI,MRRXINV1,MRRXINV2:   
                        MRRXBLFR,MRRXBLTO,MRRXDGFR,MRRXDGTO,MRRXHOSP,MRRXHOSF:  
                        MRRXHOST,MRRXSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMRREX1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   MRTREXA1;MRRXEXID,MRRXDESC,MRRXDIFR,MRRXDITO,MRRXVIFR:      
                        MRRXVITO,MRRXUNIT,MRRXWARD,MRRXDOCT,MRRXDECD,MRRXNOEX:  
                        MRRXPROG,MRRXDIA1,MRRXDIA2,MRRXDIA3,MRRXPRO1,MRRXPRO2:  
                        MRRXPRO3,MRRXPDRG,MRRXDISO,MRRXURFR,MRRXURTO,MRRXDTFR:  
                        MRRXDTTO,MRRXHLFR,MRRXHLTO,MRRXSMDY,MRRXCOFR,MRRXCOTO:  
                        MRRXSNAG,MRRXCDFR,MRRXCDTO,MRRXINCM,MRRXAAGE,MRRXGEND:  
                        MRRXPOST,MRRXCOB,MRRXINVT,MRRXIPRI,MRRXINV1,MRRXINV2:   
                        MRRXBLFR,MRRXBLTO,MRRXDGFR,MRRXDGTO,MRRXHOSP,MRRXHOSF:  
                        MRRXHOST,MRRXSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMRREX1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   MRTREXA1;MRRXEXID,MRRXDESC,MRRXDIFR,MRRXDITO,MRRXVIFR:      
                        MRRXVITO,MRRXUNIT,MRRXWARD,MRRXDOCT,MRRXDECD,MRRXNOEX:  
                        MRRXPROG,MRRXDIA1,MRRXDIA2,MRRXDIA3,MRRXPRO1,MRRXPRO2:  
                        MRRXPRO3,MRRXPDRG,MRRXDISO,MRRXURFR,MRRXURTO,MRRXDTFR:  
                        MRRXDTTO,MRRXHLFR,MRRXHLTO,MRRXSMDY,MRRXCOFR,MRRXCOTO:  
                        MRRXSNAG,MRRXCDFR,MRRXCDTO,MRRXINCM,MRRXAAGE,MRRXGEND:  
                        MRRXPOST,MRRXCOB,MRRXINVT,MRRXIPRI,MRRXINV1,MRRXINV2:   
                        MRRXBLFR,MRRXBLTO,MRRXDGFR,MRRXDGTO,MRRXHOSP,MRRXHOSF:  
                        MRRXHOST,MRRXSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMRREX1  RESET     KEY4                                                        
          UNLOCK    MRTREXA1                                                    
          RETURN
.
RSMRREX2  RESET     KEY39                                                       
          READ      MRTREXA2,KEY39;;                                            
          RETURN
.
RAMRREX2  RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      MRTREXA2,KEY39;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRREX2  RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      MRTREXA2,KEY39;MRRXEXID,MRRXDESC,MRRXDIFR,MRRXDITO,MRRXVIFR:
                        MRRXVITO,MRRXUNIT,MRRXWARD,MRRXDOCT,MRRXDECD,MRRXNOEX:  
                        MRRXPROG,MRRXDIA1,MRRXDIA2,MRRXDIA3,MRRXPRO1,MRRXPRO2:  
                        MRRXPRO3,MRRXPDRG,MRRXDISO,MRRXURFR,MRRXURTO,MRRXDTFR:  
                        MRRXDTTO,MRRXHLFR,MRRXHLTO,MRRXSMDY,MRRXCOFR,MRRXCOTO:  
                        MRRXSNAG,MRRXCDFR,MRRXCDTO,MRRXINCM,MRRXAAGE,MRRXGEND:  
                        MRRXPOST,MRRXCOB,MRRXINVT,MRRXIPRI,MRRXINV1,MRRXINV2:   
                        MRRXBLFR,MRRXBLTO,MRRXDGFR,MRRXDGTO,MRRXHOSP,MRRXHOSF:  
                        MRRXHOST,MRRXSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRREX2                                                                        
          MOVE      ZERO,OVRCD
          READKS    MRTREXA2;MRRXEXID,MRRXDESC,MRRXDIFR,MRRXDITO,MRRXVIFR:      
                        MRRXVITO,MRRXUNIT,MRRXWARD,MRRXDOCT,MRRXDECD,MRRXNOEX:  
                        MRRXPROG,MRRXDIA1,MRRXDIA2,MRRXDIA3,MRRXPRO1,MRRXPRO2:  
                        MRRXPRO3,MRRXPDRG,MRRXDISO,MRRXURFR,MRRXURTO,MRRXDTFR:  
                        MRRXDTTO,MRRXHLFR,MRRXHLTO,MRRXSMDY,MRRXCOFR,MRRXCOTO:  
                        MRRXSNAG,MRRXCDFR,MRRXCDTO,MRRXINCM,MRRXAAGE,MRRXGEND:  
                        MRRXPOST,MRRXCOB,MRRXINVT,MRRXIPRI,MRRXINV1,MRRXINV2:   
                        MRRXBLFR,MRRXBLTO,MRRXDGFR,MRRXDGTO,MRRXHOSP,MRRXHOSF:  
                        MRRXHOST,MRRXSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRREX2                                                                        
          MOVE      ZERO,OVRCD
          READKP    MRTREXA2;MRRXEXID,MRRXDESC,MRRXDIFR,MRRXDITO,MRRXVIFR:      
                        MRRXVITO,MRRXUNIT,MRRXWARD,MRRXDOCT,MRRXDECD,MRRXNOEX:  
                        MRRXPROG,MRRXDIA1,MRRXDIA2,MRRXDIA3,MRRXPRO1,MRRXPRO2:  
                        MRRXPRO3,MRRXPDRG,MRRXDISO,MRRXURFR,MRRXURTO,MRRXDTFR:  
                        MRRXDTTO,MRRXHLFR,MRRXHLTO,MRRXSMDY,MRRXCOFR,MRRXCOTO:  
                        MRRXSNAG,MRRXCDFR,MRRXCDTO,MRRXINCM,MRRXAAGE,MRRXGEND:  
                        MRRXPOST,MRRXCOB,MRRXINVT,MRRXIPRI,MRRXINV1,MRRXINV2:   
                        MRRXBLFR,MRRXBLTO,MRRXDGFR,MRRXDGTO,MRRXHOSP,MRRXHOSF:  
                        MRRXHOST,MRRXSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRREX2                                                                        
          UPDATE    MRTREXA2;MRRXEXID,MRRXDESC,MRRXDIFR,MRRXDITO,MRRXVIFR:      
                        MRRXVITO,MRRXUNIT,MRRXWARD,MRRXDOCT,MRRXDECD,MRRXNOEX:  
                        MRRXPROG,MRRXDIA1,MRRXDIA2,MRRXDIA3,MRRXPRO1,MRRXPRO2:  
                        MRRXPRO3,MRRXPDRG,MRRXDISO,MRRXURFR,MRRXURTO,MRRXDTFR:  
                        MRRXDTTO,MRRXHLFR,MRRXHLTO,MRRXSMDY,MRRXCOFR,MRRXCOTO:  
                        MRRXSNAG,MRRXCDFR,MRRXCDTO,MRRXINCM,MRRXAAGE,MRRXGEND:  
                        MRRXPOST,MRRXCOB,MRRXINVT,MRRXIPRI,MRRXINV1,MRRXINV2:   
                        MRRXBLFR,MRRXBLTO,MRRXDGFR,MRRXDGTO,MRRXHOSP,MRRXHOSF:  
                        MRRXHOST,MRRXSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMRREX2  RESET     KEY39                                                       
          WRITE     MRTREXA2,KEY39;MRRXEXID,MRRXDESC,MRRXDIFR,MRRXDITO,MRRXVIFR:
                        MRRXVITO,MRRXUNIT,MRRXWARD,MRRXDOCT,MRRXDECD,MRRXNOEX:  
                        MRRXPROG,MRRXDIA1,MRRXDIA2,MRRXDIA3,MRRXPRO1,MRRXPRO2:  
                        MRRXPRO3,MRRXPDRG,MRRXDISO,MRRXURFR,MRRXURTO,MRRXDTFR:  
                        MRRXDTTO,MRRXHLFR,MRRXHLTO,MRRXSMDY,MRRXCOFR,MRRXCOTO:  
                        MRRXSNAG,MRRXCDFR,MRRXCDTO,MRRXINCM,MRRXAAGE,MRRXGEND:  
                        MRRXPOST,MRRXCOB,MRRXINVT,MRRXIPRI,MRRXINV1,MRRXINV2:   
                        MRRXBLFR,MRRXBLTO,MRRXDGFR,MRRXDGTO,MRRXHOSP,MRRXHOSF:  
                        MRRXHOST,MRRXSPAR                                       
          RETURN
.
DEMRREX2  RESET     KEY39                                                       
          DELETE    MRTREXA2,KEY39                                              
          RETURN
.
RLMRREX2  RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READL     MRTREXA2,KEY39;MRRXEXID,MRRXDESC,MRRXDIFR,MRRXDITO,MRRXVIFR:
                        MRRXVITO,MRRXUNIT,MRRXWARD,MRRXDOCT,MRRXDECD,MRRXNOEX:  
                        MRRXPROG,MRRXDIA1,MRRXDIA2,MRRXDIA3,MRRXPRO1,MRRXPRO2:  
                        MRRXPRO3,MRRXPDRG,MRRXDISO,MRRXURFR,MRRXURTO,MRRXDTFR:  
                        MRRXDTTO,MRRXHLFR,MRRXHLTO,MRRXSMDY,MRRXCOFR,MRRXCOTO:  
                        MRRXSNAG,MRRXCDFR,MRRXCDTO,MRRXINCM,MRRXAAGE,MRRXGEND:  
                        MRRXPOST,MRRXCOB,MRRXINVT,MRRXIPRI,MRRXINV1,MRRXINV2:   
                        MRRXBLFR,MRRXBLTO,MRRXDGFR,MRRXDGTO,MRRXHOSP,MRRXHOSF:  
                        MRRXHOST,MRRXSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMRREX2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   MRTREXA2;MRRXEXID,MRRXDESC,MRRXDIFR,MRRXDITO,MRRXVIFR:      
                        MRRXVITO,MRRXUNIT,MRRXWARD,MRRXDOCT,MRRXDECD,MRRXNOEX:  
                        MRRXPROG,MRRXDIA1,MRRXDIA2,MRRXDIA3,MRRXPRO1,MRRXPRO2:  
                        MRRXPRO3,MRRXPDRG,MRRXDISO,MRRXURFR,MRRXURTO,MRRXDTFR:  
                        MRRXDTTO,MRRXHLFR,MRRXHLTO,MRRXSMDY,MRRXCOFR,MRRXCOTO:  
                        MRRXSNAG,MRRXCDFR,MRRXCDTO,MRRXINCM,MRRXAAGE,MRRXGEND:  
                        MRRXPOST,MRRXCOB,MRRXINVT,MRRXIPRI,MRRXINV1,MRRXINV2:   
                        MRRXBLFR,MRRXBLTO,MRRXDGFR,MRRXDGTO,MRRXHOSP,MRRXHOSF:  
                        MRRXHOST,MRRXSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMRREX2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   MRTREXA2;MRRXEXID,MRRXDESC,MRRXDIFR,MRRXDITO,MRRXVIFR:      
                        MRRXVITO,MRRXUNIT,MRRXWARD,MRRXDOCT,MRRXDECD,MRRXNOEX:  
                        MRRXPROG,MRRXDIA1,MRRXDIA2,MRRXDIA3,MRRXPRO1,MRRXPRO2:  
                        MRRXPRO3,MRRXPDRG,MRRXDISO,MRRXURFR,MRRXURTO,MRRXDTFR:  
                        MRRXDTTO,MRRXHLFR,MRRXHLTO,MRRXSMDY,MRRXCOFR,MRRXCOTO:  
                        MRRXSNAG,MRRXCDFR,MRRXCDTO,MRRXINCM,MRRXAAGE,MRRXGEND:  
                        MRRXPOST,MRRXCOB,MRRXINVT,MRRXIPRI,MRRXINV1,MRRXINV2:   
                        MRRXBLFR,MRRXBLTO,MRRXDGFR,MRRXDGTO,MRRXHOSP,MRRXHOSF:  
                        MRRXHOST,MRRXSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMRREX2  RESET     KEY39                                                       
          UNLOCK    MRTREXA2                                                    
          RETURN
.
