.
. TMPMTIIO    
. --------
. Filename     : tmpmtiaf.dat
.
RSTMMTI1  RESET     KEY22                                                       
          READ      TMPMTIA1,KEY22;;                                            
          RETURN
.
RATMMTI1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      TMPMTIA1,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDTMMTI1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      TMPMTIA1,KEY22;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:
                        PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN,PMMIAMTT:  
                        PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT,PMMITDOC,PMMISERV:  
                        PMMIODOC,PMMISESS,PMMIMGRP,PMMIBTCH,PMMIINVN,PMMIGSTA:  
                        PMMIGSTC,PMMIGSTM,PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR:  
                        PMMIUNIQ,PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:  
                        PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIMBCH,PMMISPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKTMMTI1                                                                        
          MOVE      ZERO,OVRCD
          READKS    TMPMTIA1;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                        PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN,PMMIAMTT:  
                        PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT,PMMITDOC,PMMISERV:  
                        PMMIODOC,PMMISESS,PMMIMGRP,PMMIBTCH,PMMIINVN,PMMIGSTA:  
                        PMMIGSTC,PMMIGSTM,PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR:  
                        PMMIUNIQ,PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:  
                        PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIMBCH,PMMISPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPTMMTI1                                                                        
          MOVE      ZERO,OVRCD
          READKP    TMPMTIA1;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                        PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN,PMMIAMTT:  
                        PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT,PMMITDOC,PMMISERV:  
                        PMMIODOC,PMMISESS,PMMIMGRP,PMMIBTCH,PMMIINVN,PMMIGSTA:  
                        PMMIGSTC,PMMIGSTM,PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR:  
                        PMMIUNIQ,PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:  
                        PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIMBCH,PMMISPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPTMMTI1                                                                        
          UPDATE    TMPMTIA1;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                        PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN,PMMIAMTT:  
                        PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT,PMMITDOC,PMMISERV:  
                        PMMIODOC,PMMISESS,PMMIMGRP,PMMIBTCH,PMMIINVN,PMMIGSTA:  
                        PMMIGSTC,PMMIGSTM,PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR:  
                        PMMIUNIQ,PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:  
                        PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIMBCH,PMMISPAR 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRTMMTI1  RESET     KEY22                                                       
          WRITE     TMPMTIA1,KEY22;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:
                        PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN,PMMIAMTT:  
                        PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT,PMMITDOC,PMMISERV:  
                        PMMIODOC,PMMISESS,PMMIMGRP,PMMIBTCH,PMMIINVN,PMMIGSTA:  
                        PMMIGSTC,PMMIGSTM,PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR:  
                        PMMIUNIQ,PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:  
                        PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIMBCH,PMMISPAR            
          RETURN
.
DETMMTI1  RESET     KEY22                                                       
          DELETE    TMPMTIA1,KEY22                                              
          RETURN
.
RLTMMTI1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READL     TMPMTIA1,KEY22;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:
                        PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN,PMMIAMTT:  
                        PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT,PMMITDOC,PMMISERV:  
                        PMMIODOC,PMMISESS,PMMIMGRP,PMMIBTCH,PMMIINVN,PMMIGSTA:  
                        PMMIGSTC,PMMIGSTM,PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR:  
                        PMMIUNIQ,PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:  
                        PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIMBCH,PMMISPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLTMMTI1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   TMPMTIA1;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                        PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN,PMMIAMTT:  
                        PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT,PMMITDOC,PMMISERV:  
                        PMMIODOC,PMMISESS,PMMIMGRP,PMMIBTCH,PMMIINVN,PMMIGSTA:  
                        PMMIGSTC,PMMIGSTM,PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR:  
                        PMMIUNIQ,PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:  
                        PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIMBCH,PMMISPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLTMMTI1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   TMPMTIA1;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                        PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN,PMMIAMTT:  
                        PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT,PMMITDOC,PMMISERV:  
                        PMMIODOC,PMMISESS,PMMIMGRP,PMMIBTCH,PMMIINVN,PMMIGSTA:  
                        PMMIGSTC,PMMIGSTM,PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR:  
                        PMMIUNIQ,PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:  
                        PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIMBCH,PMMISPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUTMMTI1  RESET     KEY22                                                       
          UNLOCK    TMPMTIA1                                                    
          RETURN
.
