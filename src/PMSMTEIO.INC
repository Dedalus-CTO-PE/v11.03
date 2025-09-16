.
. PMSMTEIO    
. --------
. Filename     : pmsmteaf.dat
.
RSPMMTE1  RESET     KEY14                                                       
          READ      PMSMTEA1,KEY14;;                                            
          RETURN
.
RAPMMTE1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMTEA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMMTE1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMTEA1,KEY14;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:
                        PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN,PMMIAMTT:  
                        PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT,PMMITDOC,PMMISERV:  
                        PMMIODOC,PMMISESS,PMMIMGRP,PMMIBTCH,PMMIINVN,PMMIGSTA:  
                        PMMIGSTC,PMMIGSTM,PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR:  
                        PMMIUNIQ,PMMISPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMMTE1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSMTEA1;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                        PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN,PMMIAMTT:  
                        PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT,PMMITDOC,PMMISERV:  
                        PMMIODOC,PMMISESS,PMMIMGRP,PMMIBTCH,PMMIINVN,PMMIGSTA:  
                        PMMIGSTC,PMMIGSTM,PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR:  
                        PMMIUNIQ,PMMISPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMMTE1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSMTEA1;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                        PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN,PMMIAMTT:  
                        PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT,PMMITDOC,PMMISERV:  
                        PMMIODOC,PMMISESS,PMMIMGRP,PMMIBTCH,PMMIINVN,PMMIGSTA:  
                        PMMIGSTC,PMMIGSTM,PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR:  
                        PMMIUNIQ,PMMISPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMMTE1  PACK      PMMIDUPD WITH CCC,CYY,CMM,CDD
          REP       " 0",PMMIDUPD
          CLOCK     TIME,PMMITUPD
.
          UPDATE    PMSMTEA1;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                        PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN,PMMIAMTT:  
                        PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT,PMMITDOC,PMMISERV:  
                        PMMIODOC,PMMISESS,PMMIMGRP,PMMIBTCH,PMMIINVN,PMMIGSTA:  
                        PMMIGSTC,PMMIGSTM,PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR:  
                        PMMIUNIQ,PMMISPAR
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMMTE1  PACK      PMMIDUPD WITH CCC,CYY,CMM,CDD
          REP       " 0",PMMIDUPD
          CLOCK     TIME,PMMITUPD
.
          RESET     KEY14                                                       
          WRITE     PMSMTEA1,KEY14;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:
                        PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN,PMMIAMTT:  
                        PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT,PMMITDOC,PMMISERV:  
                        PMMIODOC,PMMISESS,PMMIMGRP,PMMIBTCH,PMMIINVN,PMMIGSTA:  
                        PMMIGSTC,PMMIGSTM,PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR:  
                        PMMIUNIQ,PMMISPAR
          RETURN
.
DEPMMTE1  RESET     KEY14                                                       
          DELETE    PMSMTEA1,KEY14                                              
          RETURN
.
RSPMMTE4  RESET     KEY18
          READ      PMSMTEA4,KEY18;;
          RETURN
.
RKPMMTE4
          MOVE      ZERO,OVRCD
          READKS    PMSMTEA4;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:
                        PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN,PMMIAMTT:
                        PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT,PMMITDOC,PMMISERV:
                        PMMIODOC,PMMISESS,PMMIMGRP,PMMIBTCH,PMMIINVN,PMMIGSTA:
                        PMMIGSTC,PMMIGSTM,PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR:
                        PMMIUNIQ,PMMISPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.
