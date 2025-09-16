.
. EMRECHIO    
. --------
. Filename     : emrechaf.dat
.
RSEMECH1  RESET     KEY19                                                       
          READ      EMRECHA1,KEY19;;                                            
          RETURN
.
RAEMECH1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      EMRECHA1,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMECH1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      EMRECHA1,KEY19;EMEHUNIQ,EMEHTYPE,EMEHNOTE,EMEHCDAT,EMEHCTIM:
                                   EMEHCUID,EMEHOCCG,EMEHDELT,EMEHDDAT,EMEHDTIM:
                                   EMEHDUID,EMEHDOCC,EMEHSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMECH1  MOVE      ZERO,OVRCD                                                  
          READKS    EMRECHA1;EMEHUNIQ,EMEHTYPE,EMEHNOTE,EMEHCDAT,EMEHCTIM:      
                             EMEHCUID,EMEHOCCG,EMEHDELT,EMEHDDAT,EMEHDTIM:      
                             EMEHDUID,EMEHDOCC,EMEHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMECH1  MOVE      ZERO,OVRCD                                                  
          READKP    EMRECHA1;EMEHUNIQ,EMEHTYPE,EMEHNOTE,EMEHCDAT,EMEHCTIM:      
                             EMEHCUID,EMEHOCCG,EMEHDELT,EMEHDDAT,EMEHDTIM:      
                             EMEHDUID,EMEHDOCC,EMEHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMECH1  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRECHA1;EMEHUNIQ,EMEHTYPE,EMEHNOTE,EMEHCDAT,EMEHCTIM:      
                             EMEHCUID,EMEHOCCG,EMEHDELT,EMEHDDAT,EMEHDTIM:      
                             EMEHDUID,EMEHDOCC,EMEHSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMECH1  RESET     KEY19                                                       
          WRITE     EMRECHA1,KEY19;EMEHUNIQ,EMEHTYPE,EMEHNOTE,EMEHCDAT,EMEHCTIM:
                                   EMEHCUID,EMEHOCCG,EMEHDELT,EMEHDDAT,EMEHDTIM:
                                   EMEHDUID,EMEHDOCC,EMEHSPAR                   
          RETURN
.
DEEMECH1  RESET     KEY19                                                       
          DELETE    EMRECHA1,KEY19                                              
          RETURN
.
RLEMECH1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READL     EMRECHA1,KEY19;EMEHUNIQ,EMEHTYPE,EMEHNOTE,EMEHCDAT,EMEHCTIM:
                                   EMEHCUID,EMEHOCCG,EMEHDELT,EMEHDDAT,EMEHDTIM:
                                   EMEHDUID,EMEHDOCC,EMEHSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMECH1  MOVE      ZERO,OVRCD                                                  
          READLKS   EMRECHA1;EMEHUNIQ,EMEHTYPE,EMEHNOTE,EMEHCDAT,EMEHCTIM:      
                             EMEHCUID,EMEHOCCG,EMEHDELT,EMEHDDAT,EMEHDTIM:      
                             EMEHDUID,EMEHDOCC,EMEHSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMECH1  MOVE      ZERO,OVRCD                                                  
          READLKP   EMRECHA1;EMEHUNIQ,EMEHTYPE,EMEHNOTE,EMEHCDAT,EMEHCTIM:      
                             EMEHCUID,EMEHOCCG,EMEHDELT,EMEHDDAT,EMEHDTIM:      
                             EMEHDUID,EMEHDOCC,EMEHSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMECH1  RESET     KEY19                                                       
          UNLOCK    EMRECHA1                                                    
          RETURN
.
