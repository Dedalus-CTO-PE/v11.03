.
. PMSAUAIO    
. --------
. Filename     : pmsauaaf.dat
.
RSPMAUA1  RESET     KEY32                                                       
          READ      PMSAUAA1,KEY32;;                                            
          RETURN
.
RAPMAUA1  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      PMSAUAA1,KEY32;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMAUA1  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      PMSAUAA1,KEY32;PMAAADAT,PMAAATIM,PMAAATYP,PMAACNTR,PMAAHACG:
                                   PMAAVALF,PMAAOVLT,PMAANVLT,PMAAOADJ,PMAANADJ:
                                   PMAACUID,PMAASPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMAUA1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSAUAA1;PMAAADAT,PMAAATIM,PMAAATYP,PMAACNTR,PMAAHACG:      
                             PMAAVALF,PMAAOVLT,PMAANVLT,PMAAOADJ,PMAANADJ:      
                             PMAACUID,PMAASPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMAUA1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSAUAA1;PMAAADAT,PMAAATIM,PMAAATYP,PMAACNTR,PMAAHACG:      
                             PMAAVALF,PMAAOVLT,PMAANVLT,PMAAOADJ,PMAANADJ:      
                             PMAACUID,PMAASPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMAUA1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSAUAA1;PMAAADAT,PMAAATIM,PMAAATYP,PMAACNTR,PMAAHACG:      
                             PMAAVALF,PMAAOVLT,PMAANVLT,PMAAOADJ,PMAANADJ:      
                             PMAACUID,PMAASPAR                                  
          RETURN
.
WRPMAUA1  RESET     KEY32                                                       
          WRITE     PMSAUAA1,KEY32;PMAAADAT,PMAAATIM,PMAAATYP,PMAACNTR,PMAAHACG:
                                   PMAAVALF,PMAAOVLT,PMAANVLT,PMAAOADJ,PMAANADJ:
                                   PMAACUID,PMAASPAR                            
          RETURN
.
DEPMAUA1  RESET     KEY32                                                       
          DELETE    PMSAUAA1,KEY32                                              
          RETURN
.
RSPMAUA2  RESET     KEY32                                                       
          READ      PMSAUAA2,KEY32;;                                            
          RETURN
.
RAPMAUA2  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      PMSAUAA2,KEY32;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMAUA2  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      PMSAUAA2,KEY32;PMAAADAT,PMAAATIM,PMAAATYP,PMAACNTR,PMAAHACG:
                                   PMAAVALF,PMAAOVLT,PMAANVLT,PMAAOADJ,PMAANADJ:
                                   PMAACUID,PMAASPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMAUA2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSAUAA2;PMAAADAT,PMAAATIM,PMAAATYP,PMAACNTR,PMAAHACG:      
                             PMAAVALF,PMAAOVLT,PMAANVLT,PMAAOADJ,PMAANADJ:      
                             PMAACUID,PMAASPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMAUA2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSAUAA2;PMAAADAT,PMAAATIM,PMAAATYP,PMAACNTR,PMAAHACG:      
                             PMAAVALF,PMAAOVLT,PMAANVLT,PMAAOADJ,PMAANADJ:      
                             PMAACUID,PMAASPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMAUA2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSAUAA2;PMAAADAT,PMAAATIM,PMAAATYP,PMAACNTR,PMAAHACG:      
                             PMAAVALF,PMAAOVLT,PMAANVLT,PMAAOADJ,PMAANADJ:      
                             PMAACUID,PMAASPAR                                  
          RETURN
.
WRPMAUA2  RESET     KEY32                                                       
          WRITE     PMSAUAA2,KEY32;PMAAADAT,PMAAATIM,PMAAATYP,PMAACNTR,PMAAHACG:
                                   PMAAVALF,PMAAOVLT,PMAANVLT,PMAAOADJ,PMAANADJ:
                                   PMAACUID,PMAASPAR                            
          RETURN
.
DEPMAUA2  RESET     KEY32                                                       
          DELETE    PMSAUAA2,KEY32                                              
          RETURN
.
