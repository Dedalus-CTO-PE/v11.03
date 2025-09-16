.
. PMSCHIIO    
. --------
. Filename     : pmschiaf.dat
.
RSPMCHI1  RESET     KEY27                                                       
          READ      PMSCHIA1,KEY27;;                                            
          RETURN
.
RAPMCHI1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCHIA1,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCHI1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCHIA1,KEY27;PMHIURNO,PMHIDATE,PMHITIME,PMHICTYP,PMHICNUM:
                                   PMHICEXP,PMHICCOL,PMHIATYP,PMHIREAS,PMHIPEXP:
                                   PMHIPCOL,PMHIAUID,PMHISPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMCHI1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSCHIA1;PMHIURNO,PMHIDATE,PMHITIME,PMHICTYP,PMHICNUM:      
                             PMHICEXP,PMHICCOL,PMHIATYP,PMHIREAS,PMHIPEXP:      
                             PMHIPCOL,PMHIAUID,PMHISPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMCHI1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSCHIA1;PMHIURNO,PMHIDATE,PMHITIME,PMHICTYP,PMHICNUM:      
                             PMHICEXP,PMHICCOL,PMHIATYP,PMHIREAS,PMHIPEXP:      
                             PMHIPCOL,PMHIAUID,PMHISPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMCHI1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSCHIA1;PMHIURNO,PMHIDATE,PMHITIME,PMHICTYP,PMHICNUM:      
                             PMHICEXP,PMHICCOL,PMHIATYP,PMHIREAS,PMHIPEXP:      
                             PMHIPCOL,PMHIAUID,PMHISPAR                         
          RETURN
.
WRPMCHI1  RESET     KEY27                                                       
          WRITE     PMSCHIA1,KEY27;PMHIURNO,PMHIDATE,PMHITIME,PMHICTYP,PMHICNUM:
                                   PMHICEXP,PMHICCOL,PMHIATYP,PMHIREAS,PMHIPEXP:
                                   PMHIPCOL,PMHIAUID,PMHISPAR                   
          RETURN
.
DEPMCHI1  RESET     KEY27                                                       
          DELETE    PMSCHIA1,KEY27                                              
          RETURN
.
