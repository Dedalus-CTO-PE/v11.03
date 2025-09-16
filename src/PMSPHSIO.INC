.
. PMSPHSIO    
. --------
. Filename     : pmsphsaf.dat
.
RSPMPHS1  RESET     KEY29                                                       
          READ      PMSPHSA1,KEY29;;                                            
          RETURN
.
RAPMPHS1  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPHSA1,KEY29;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPHS1  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPHSA1,KEY29;PMPHADMN,PMPHPHOS,PMPHADAT,PMPHDDAT,PMPHLDAY:
                                   PMPHCUID,PMPHCDAT,PMPHCTIM,PMPHUUID,PMPHUDAT:
                                   PMPHUTIM,PMPHINCB,PMPHINCC,PMPHSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPHS1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSPHSA1;PMPHADMN,PMPHPHOS,PMPHADAT,PMPHDDAT,PMPHLDAY:      
                             PMPHCUID,PMPHCDAT,PMPHCTIM,PMPHUUID,PMPHUDAT:      
                             PMPHUTIM,PMPHINCB,PMPHINCC,PMPHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPHS1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSPHSA1;PMPHADMN,PMPHPHOS,PMPHADAT,PMPHDDAT,PMPHLDAY:      
                             PMPHCUID,PMPHCDAT,PMPHCTIM,PMPHUUID,PMPHUDAT:      
                             PMPHUTIM,PMPHINCB,PMPHINCC,PMPHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPHS1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSPHSA1;PMPHADMN,PMPHPHOS,PMPHADAT,PMPHDDAT,PMPHLDAY:      
                             PMPHCUID,PMPHCDAT,PMPHCTIM,PMPHUUID,PMPHUDAT:      
                             PMPHUTIM,PMPHINCB,PMPHINCC,PMPHSPAR                
          RETURN
.
WRPMPHS1  RESET     KEY29                                                       
          WRITE     PMSPHSA1,KEY29;PMPHADMN,PMPHPHOS,PMPHADAT,PMPHDDAT,PMPHLDAY:
                                   PMPHCUID,PMPHCDAT,PMPHCTIM,PMPHUUID,PMPHUDAT:
                                   PMPHUTIM,PMPHINCB,PMPHINCC,PMPHSPAR          
          RETURN
.
DEPMPHS1  RESET     KEY29                                                       
          DELETE    PMSPHSA1,KEY29                                              
          RETURN
.
