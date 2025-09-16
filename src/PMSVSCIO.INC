.
. PMSVSCIO    
. --------
. Filename     : pmsvscaf.dat
.
RSPMVSC1  RESET     KEY33                                                       
          READ      PMSVSCA1,KEY33;;                                            
          RETURN
.
RAPMVSC1  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      PMSVSCA1,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMVSC1  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      PMSVSCA1,KEY33;PMVCVSID,PMVCCODE,PMVCPTRM,PMVCFNAM,PMVCACTV:
                                   PMVCSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMVSC1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSVSCA1;PMVCVSID,PMVCCODE,PMVCPTRM,PMVCFNAM,PMVCACTV:      
                             PMVCSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMVSC1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSVSCA1;PMVCVSID,PMVCCODE,PMVCPTRM,PMVCFNAM,PMVCACTV:      
                             PMVCSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMVSC1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSVSCA1;PMVCVSID,PMVCCODE,PMVCPTRM,PMVCFNAM,PMVCACTV:      
                             PMVCSPAR                                           
          RETURN
.
WRPMVSC1  RESET     KEY33                                                       
          WRITE     PMSVSCA1,KEY33;PMVCVSID,PMVCCODE,PMVCPTRM,PMVCFNAM,PMVCACTV:
                                   PMVCSPAR                                     
          RETURN
.
DEPMVSC1  RESET     KEY33                                                       
          DELETE    PMSVSCA1,KEY33                                              
          RETURN
.
