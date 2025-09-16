.
. PMSUPOIO    
. --------
. Filename     : pmsupoaf.dat
.
RSPMUPO1  RESET     KEY34                                                       
          READ      PMSUPOA1,KEY34;;                                            
          RETURN
.
RAPMUPO1  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      PMSUPOA1,KEY34;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMUPO1  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      PMSUPOA1,KEY34;PMUOURNO,PMUOATYP,PMUOCLAM,PMUOFUND,PMUOTABT:
                        PMUOEDAT,PMUOVTYP,PMUOMAXO,PMUOWARO,PMUOMANO,PMUOCDAT:  
                        PMUOCTIM,PMUOCUID,PMUOUDAT,PMUOUTIM,PMUOUUID,PMUOSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMUPO1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSUPOA1;PMUOURNO,PMUOATYP,PMUOCLAM,PMUOFUND,PMUOTABT:      
                        PMUOEDAT,PMUOVTYP,PMUOMAXO,PMUOWARO,PMUOMANO,PMUOCDAT:  
                        PMUOCTIM,PMUOCUID,PMUOUDAT,PMUOUTIM,PMUOUUID,PMUOSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMUPO1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSUPOA1;PMUOURNO,PMUOATYP,PMUOCLAM,PMUOFUND,PMUOTABT:      
                        PMUOEDAT,PMUOVTYP,PMUOMAXO,PMUOWARO,PMUOMANO,PMUOCDAT:  
                        PMUOCTIM,PMUOCUID,PMUOUDAT,PMUOUTIM,PMUOUUID,PMUOSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMUPO1                                                                        
          UPDATE    PMSUPOA1;PMUOURNO,PMUOATYP,PMUOCLAM,PMUOFUND,PMUOTABT:      
                        PMUOEDAT,PMUOVTYP,PMUOMAXO,PMUOWARO,PMUOMANO,PMUOCDAT:  
                        PMUOCTIM,PMUOCUID,PMUOUDAT,PMUOUTIM,PMUOUUID,PMUOSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMUPO1  RESET     KEY34                                                       
          WRITE     PMSUPOA1,KEY34;PMUOURNO,PMUOATYP,PMUOCLAM,PMUOFUND,PMUOTABT:
                        PMUOEDAT,PMUOVTYP,PMUOMAXO,PMUOWARO,PMUOMANO,PMUOCDAT:  
                        PMUOCTIM,PMUOCUID,PMUOUDAT,PMUOUTIM,PMUOUUID,PMUOSPAR   
          RETURN
.
DEPMUPO1  RESET     KEY34                                                       
          DELETE    PMSUPOA1,KEY34                                              
          RETURN
.
RLPMUPO1  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READL     PMSUPOA1,KEY34;PMUOURNO,PMUOATYP,PMUOCLAM,PMUOFUND,PMUOTABT:
                        PMUOEDAT,PMUOVTYP,PMUOMAXO,PMUOWARO,PMUOMANO,PMUOCDAT:  
                        PMUOCTIM,PMUOCUID,PMUOUDAT,PMUOUTIM,PMUOUUID,PMUOSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMUPO1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSUPOA1;PMUOURNO,PMUOATYP,PMUOCLAM,PMUOFUND,PMUOTABT:      
                        PMUOEDAT,PMUOVTYP,PMUOMAXO,PMUOWARO,PMUOMANO,PMUOCDAT:  
                        PMUOCTIM,PMUOCUID,PMUOUDAT,PMUOUTIM,PMUOUUID,PMUOSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMUPO1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSUPOA1;PMUOURNO,PMUOATYP,PMUOCLAM,PMUOFUND,PMUOTABT:      
                        PMUOEDAT,PMUOVTYP,PMUOMAXO,PMUOWARO,PMUOMANO,PMUOCDAT:  
                        PMUOCTIM,PMUOCUID,PMUOUDAT,PMUOUTIM,PMUOUUID,PMUOSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMUPO1  RESET     KEY34                                                       
          UNLOCK    PMSUPOA1                                                    
          RETURN
.
