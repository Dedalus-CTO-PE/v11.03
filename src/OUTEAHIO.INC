.
. OUTEAHIO    
. --------
. Filename     : outeahaf.dat
.
RSOTEAH1  RESET     KEY33                                                       
          READ      OUTEAHA1,KEY33;;                                            
          RETURN
.
RAOTEAH1  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      OUTEAHA1,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTEAH1  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      OUTEAHA1,KEY33;OTEHCLID,OTEHRPTC,OTEHCLBP,OTEHCLCA,OTEHSDAT:
                                   OTEHSNAM,OTEHFNAM,OTEHMECF,OTEHMNUM,OTEHRNUM:
                                   OTEHSRVP,OTEHCTID,OTEHUDTE,OTEHUTIM,OTEHRKEY:
                                   OTEHSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTEAH1  MOVE      ZERO,OVRCD                                                  
          READKS    OUTEAHA1;OTEHCLID,OTEHRPTC,OTEHCLBP,OTEHCLCA,OTEHSDAT:      
                             OTEHSNAM,OTEHFNAM,OTEHMECF,OTEHMNUM,OTEHRNUM:      
                             OTEHSRVP,OTEHCTID,OTEHUDTE,OTEHUTIM,OTEHRKEY:      
                             OTEHSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTEAH1  MOVE      ZERO,OVRCD                                                  
          READKP    OUTEAHA1;OTEHCLID,OTEHRPTC,OTEHCLBP,OTEHCLCA,OTEHSDAT:      
                             OTEHSNAM,OTEHFNAM,OTEHMECF,OTEHMNUM,OTEHRNUM:      
                             OTEHSRVP,OTEHCTID,OTEHUDTE,OTEHUTIM,OTEHRKEY:      
                             OTEHSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTEAH1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTEAHA1;OTEHCLID,OTEHRPTC,OTEHCLBP,OTEHCLCA,OTEHSDAT:      
                             OTEHSNAM,OTEHFNAM,OTEHMECF,OTEHMNUM,OTEHRNUM:      
                             OTEHSRVP,OTEHCTID,OTEHUDTE,OTEHUTIM,OTEHRKEY:      
                             OTEHSPAR                                           
          RETURN
.
WROTEAH1  RESET     KEY33                                                       
          WRITE     OUTEAHA1,KEY33;OTEHCLID,OTEHRPTC,OTEHCLBP,OTEHCLCA,OTEHSDAT:
                                   OTEHSNAM,OTEHFNAM,OTEHMECF,OTEHMNUM,OTEHRNUM:
                                   OTEHSRVP,OTEHCTID,OTEHUDTE,OTEHUTIM,OTEHRKEY:
                                   OTEHSPAR                                     
          RETURN
.
DEOTEAH1  RESET     KEY33                                                       
          DELETE    OUTEAHA1,KEY33                                              
          RETURN
.
RSOTEAH2  RESET     KEY57                                                       
          READ      OUTEAHA2,KEY57;;                                            
          RETURN
.
RAOTEAH2  RESET     KEY57                                                       
          MOVE      ZERO,OVRCD
          READ      OUTEAHA2,KEY57;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTEAH2  RESET     KEY57                                                       
          MOVE      ZERO,OVRCD
          READ      OUTEAHA2,KEY57;OTEHCLID,OTEHRPTC,OTEHCLBP,OTEHCLCA,OTEHSDAT:
                                   OTEHSNAM,OTEHFNAM,OTEHMECF,OTEHMNUM,OTEHRNUM:
                                   OTEHSRVP,OTEHCTID,OTEHUDTE,OTEHUTIM,OTEHRKEY:
                                   OTEHSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTEAH2  MOVE      ZERO,OVRCD                                                  
          READKS    OUTEAHA2;OTEHCLID,OTEHRPTC,OTEHCLBP,OTEHCLCA,OTEHSDAT:      
                             OTEHSNAM,OTEHFNAM,OTEHMECF,OTEHMNUM,OTEHRNUM:      
                             OTEHSRVP,OTEHCTID,OTEHUDTE,OTEHUTIM,OTEHRKEY:      
                             OTEHSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTEAH2  MOVE      ZERO,OVRCD                                                  
          READKP    OUTEAHA2;OTEHCLID,OTEHRPTC,OTEHCLBP,OTEHCLCA,OTEHSDAT:      
                             OTEHSNAM,OTEHFNAM,OTEHMECF,OTEHMNUM,OTEHRNUM:      
                             OTEHSRVP,OTEHCTID,OTEHUDTE,OTEHUTIM,OTEHRKEY:      
                             OTEHSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTEAH2  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTEAHA2;OTEHCLID,OTEHRPTC,OTEHCLBP,OTEHCLCA,OTEHSDAT:      
                             OTEHSNAM,OTEHFNAM,OTEHMECF,OTEHMNUM,OTEHRNUM:      
                             OTEHSRVP,OTEHCTID,OTEHUDTE,OTEHUTIM,OTEHRKEY:      
                             OTEHSPAR                                           
          RETURN
.
WROTEAH2  RESET     KEY57                                                       
          WRITE     OUTEAHA2,KEY57;OTEHCLID,OTEHRPTC,OTEHCLBP,OTEHCLCA,OTEHSDAT:
                                   OTEHSNAM,OTEHFNAM,OTEHMECF,OTEHMNUM,OTEHRNUM:
                                   OTEHSRVP,OTEHCTID,OTEHUDTE,OTEHUTIM,OTEHRKEY:
                                   OTEHSPAR                                     
          RETURN
.
DEOTEAH2  RESET     KEY57                                                       
          DELETE    OUTEAHA2,KEY57                                              
          RETURN
.
