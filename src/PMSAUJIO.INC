.
. PMSAUJIO    
. --------
. Filename     : pmsaujaf.dat
.
RSPMAUJ1  RESET     KEY26                                                       
          READ      PMSAUJA1,KEY26;;                                            
          RETURN
.
RAPMAUJ1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PMSAUJA1,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMAUJ1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PMSAUJA1,KEY26;PMAUADAT,PMAUATIM,PMAUATYP,PMAUCNTR,PMAUADJT:
                                   PMAUPVAL,PMAUCVAL,PMAUCUID,PMAUCDAT,PMAUCTIM:
                                   PMAUSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMAUJ1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSAUJA1;PMAUADAT,PMAUATIM,PMAUATYP,PMAUCNTR,PMAUADJT:      
                             PMAUPVAL,PMAUCVAL,PMAUCUID,PMAUCDAT,PMAUCTIM:      
                             PMAUSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMAUJ1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSAUJA1;PMAUADAT,PMAUATIM,PMAUATYP,PMAUCNTR,PMAUADJT:      
                             PMAUPVAL,PMAUCVAL,PMAUCUID,PMAUCDAT,PMAUCTIM:      
                             PMAUSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMAUJ1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSAUJA1;PMAUADAT,PMAUATIM,PMAUATYP,PMAUCNTR,PMAUADJT:      
                             PMAUPVAL,PMAUCVAL,PMAUCUID,PMAUCDAT,PMAUCTIM:      
                             PMAUSPAR                                           
          RETURN
.
WRPMAUJ1  RESET     KEY26                                                       
          WRITE     PMSAUJA1,KEY26;PMAUADAT,PMAUATIM,PMAUATYP,PMAUCNTR,PMAUADJT:
                                   PMAUPVAL,PMAUCVAL,PMAUCUID,PMAUCDAT,PMAUCTIM:
                                   PMAUSPAR                                     
          RETURN
.
DEPMAUJ1  RESET     KEY26                                                       
          DELETE    PMSAUJA1,KEY26                                              
          RETURN
.
RSPMAUJ2  RESET     KEY26                                                       
          READ      PMSAUJA2,KEY26;;                                            
          RETURN
.
RAPMAUJ2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PMSAUJA2,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMAUJ2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PMSAUJA2,KEY26;PMAUADAT,PMAUATIM,PMAUATYP,PMAUCNTR,PMAUADJT:
                                   PMAUPVAL,PMAUCVAL,PMAUCUID,PMAUCDAT,PMAUCTIM:
                                   PMAUSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMAUJ2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSAUJA2;PMAUADAT,PMAUATIM,PMAUATYP,PMAUCNTR,PMAUADJT:      
                             PMAUPVAL,PMAUCVAL,PMAUCUID,PMAUCDAT,PMAUCTIM:      
                             PMAUSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMAUJ2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSAUJA2;PMAUADAT,PMAUATIM,PMAUATYP,PMAUCNTR,PMAUADJT:      
                             PMAUPVAL,PMAUCVAL,PMAUCUID,PMAUCDAT,PMAUCTIM:      
                             PMAUSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMAUJ2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSAUJA2;PMAUADAT,PMAUATIM,PMAUATYP,PMAUCNTR,PMAUADJT:      
                             PMAUPVAL,PMAUCVAL,PMAUCUID,PMAUCDAT,PMAUCTIM:      
                             PMAUSPAR                                           
          RETURN
.
WRPMAUJ2  RESET     KEY26                                                       
          WRITE     PMSAUJA2,KEY26;PMAUADAT,PMAUATIM,PMAUATYP,PMAUCNTR,PMAUADJT:
                                   PMAUPVAL,PMAUCVAL,PMAUCUID,PMAUCDAT,PMAUCTIM:
                                   PMAUSPAR                                     
          RETURN
.
DEPMAUJ2  RESET     KEY26                                                       
          DELETE    PMSAUJA2,KEY26                                              
          RETURN
.
