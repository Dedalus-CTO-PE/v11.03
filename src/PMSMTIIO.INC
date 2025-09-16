.
. PMSMTIIO    
. --------
. Filename     : pmsmtiaf.dat
.
RSPMMTI1  RESET     KEY14                                                       
          READ      PMSMTIA1,KEY14;;                                            
          RETURN
.
RAPMMTI1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMTIA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMMTI1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMTIA1,KEY14;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:
                                   PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:
                                   PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:
                                   PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:
                                   PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:
                                   PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:
                                   PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:
                                   PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:
                                   PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:
                                   PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:
                                   PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:
                                   PMMIHOSI,PMMISPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMMTI1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSMTIA1;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                             PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:      
                             PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:      
                             PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:      
                             PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:      
                             PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:      
                             PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:      
                             PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:      
                             PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:      
                             PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:      
                             PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:      
                             PMMIHOSI,PMMISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMMTI1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSMTIA1;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                             PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:      
                             PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:      
                             PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:      
                             PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:      
                             PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:      
                             PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:      
                             PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:      
                             PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:      
                             PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:      
                             PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:      
                             PMMIHOSI,PMMISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMMTI1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSMTIA1;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                             PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:      
                             PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:      
                             PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:      
                             PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:      
                             PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:      
                             PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:      
                             PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:      
                             PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:      
                             PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:      
                             PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:      
                             PMMIHOSI,PMMISPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMMTI1  RESET     KEY14                                                       
          WRITE     PMSMTIA1,KEY14;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:
                                   PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:
                                   PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:
                                   PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:
                                   PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:
                                   PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:
                                   PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:
                                   PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:
                                   PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:
                                   PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:
                                   PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:
                                   PMMIHOSI,PMMISPAR                            
          RETURN
.
DEPMMTI1  RESET     KEY14                                                       
          DELETE    PMSMTIA1,KEY14                                              
          RETURN
.
RLPMMTI1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READL     PMSMTIA1,KEY14;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:
                                   PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:
                                   PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:
                                   PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:
                                   PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:
                                   PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:
                                   PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:
                                   PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:
                                   PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:
                                   PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:
                                   PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:
                                   PMMIHOSI,PMMISPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMMTI1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSMTIA1;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                             PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:      
                             PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:      
                             PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:      
                             PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:      
                             PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:      
                             PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:      
                             PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:      
                             PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:      
                             PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:      
                             PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:      
                             PMMIHOSI,PMMISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMMTI1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSMTIA1;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                             PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:      
                             PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:      
                             PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:      
                             PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:      
                             PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:      
                             PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:      
                             PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:      
                             PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:      
                             PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:      
                             PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:      
                             PMMIHOSI,PMMISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMMTI1  RESET     KEY14                                                       
          UNLOCK    PMSMTIA1                                                    
          RETURN
.
RSPMMTI2  RESET     KEY15                                                       
          READ      PMSMTIA2,KEY15;;                                            
          RETURN
.
RAPMMTI2  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMTIA2,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMMTI2  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMTIA2,KEY15;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:
                                   PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:
                                   PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:
                                   PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:
                                   PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:
                                   PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:
                                   PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:
                                   PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:
                                   PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:
                                   PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:
                                   PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:
                                   PMMIHOSI,PMMISPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMMTI2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSMTIA2;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                             PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:      
                             PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:      
                             PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:      
                             PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:      
                             PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:      
                             PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:      
                             PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:      
                             PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:      
                             PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:      
                             PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:      
                             PMMIHOSI,PMMISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMMTI2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSMTIA2;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                             PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:      
                             PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:      
                             PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:      
                             PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:      
                             PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:      
                             PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:      
                             PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:      
                             PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:      
                             PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:      
                             PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:      
                             PMMIHOSI,PMMISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMMTI2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSMTIA2;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                             PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:      
                             PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:      
                             PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:      
                             PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:      
                             PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:      
                             PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:      
                             PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:      
                             PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:      
                             PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:      
                             PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:      
                             PMMIHOSI,PMMISPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMMTI2  RESET     KEY15                                                       
          WRITE     PMSMTIA2,KEY15;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:
                                   PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:
                                   PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:
                                   PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:
                                   PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:
                                   PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:
                                   PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:
                                   PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:
                                   PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:
                                   PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:
                                   PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:
                                   PMMIHOSI,PMMISPAR                            
          RETURN
.
DEPMMTI2  RESET     KEY15                                                       
          DELETE    PMSMTIA2,KEY15                                              
          RETURN
.
RLPMMTI2  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READL     PMSMTIA2,KEY15;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:
                                   PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:
                                   PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:
                                   PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:
                                   PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:
                                   PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:
                                   PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:
                                   PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:
                                   PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:
                                   PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:
                                   PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:
                                   PMMIHOSI,PMMISPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMMTI2  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSMTIA2;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                             PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:      
                             PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:      
                             PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:      
                             PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:      
                             PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:      
                             PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:      
                             PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:      
                             PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:      
                             PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:      
                             PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:      
                             PMMIHOSI,PMMISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMMTI2  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSMTIA2;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                             PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:      
                             PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:      
                             PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:      
                             PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:      
                             PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:      
                             PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:      
                             PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:      
                             PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:      
                             PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:      
                             PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:      
                             PMMIHOSI,PMMISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMMTI2  RESET     KEY15                                                       
          UNLOCK    PMSMTIA2                                                    
          RETURN
.
RSPMMTI3  RESET     KEY23                                                       
          READ      PMSMTIA3,KEY23;;                                            
          RETURN
.
RAPMMTI3  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMTIA3,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMMTI3  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMTIA3,KEY23;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:
                                   PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:
                                   PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:
                                   PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:
                                   PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:
                                   PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:
                                   PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:
                                   PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:
                                   PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:
                                   PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:
                                   PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:
                                   PMMIHOSI,PMMISPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMMTI3  MOVE      ZERO,OVRCD                                                  
          READKS    PMSMTIA3;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                             PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:      
                             PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:      
                             PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:      
                             PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:      
                             PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:      
                             PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:      
                             PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:      
                             PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:      
                             PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:      
                             PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:      
                             PMMIHOSI,PMMISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMMTI3  MOVE      ZERO,OVRCD                                                  
          READKP    PMSMTIA3;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                             PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:      
                             PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:      
                             PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:      
                             PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:      
                             PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:      
                             PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:      
                             PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:      
                             PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:      
                             PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:      
                             PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:      
                             PMMIHOSI,PMMISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMMTI3  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSMTIA3;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                             PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:      
                             PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:      
                             PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:      
                             PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:      
                             PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:      
                             PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:      
                             PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:      
                             PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:      
                             PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:      
                             PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:      
                             PMMIHOSI,PMMISPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMMTI3  RESET     KEY23                                                       
          WRITE     PMSMTIA3,KEY23;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:
                                   PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:
                                   PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:
                                   PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:
                                   PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:
                                   PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:
                                   PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:
                                   PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:
                                   PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:
                                   PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:
                                   PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:
                                   PMMIHOSI,PMMISPAR                            
          RETURN
.
DEPMMTI3  RESET     KEY23                                                       
          DELETE    PMSMTIA3,KEY23                                              
          RETURN
.
RLPMMTI3  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READL     PMSMTIA3,KEY23;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:
                                   PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:
                                   PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:
                                   PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:
                                   PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:
                                   PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:
                                   PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:
                                   PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:
                                   PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:
                                   PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:
                                   PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:
                                   PMMIHOSI,PMMISPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMMTI3  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSMTIA3;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                             PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:      
                             PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:      
                             PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:      
                             PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:      
                             PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:      
                             PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:      
                             PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:      
                             PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:      
                             PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:      
                             PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:      
                             PMMIHOSI,PMMISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMMTI3  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSMTIA3;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                             PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:      
                             PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:      
                             PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:      
                             PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:      
                             PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:      
                             PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:      
                             PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:      
                             PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:      
                             PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:      
                             PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:      
                             PMMIHOSI,PMMISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMMTI3  RESET     KEY23                                                       
          UNLOCK    PMSMTIA3                                                    
          RETURN
.
RSPMMTI4  RESET     KEY18                                                       
          READ      PMSMTIA4,KEY18;;                                            
          RETURN
.
RAPMMTI4  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMTIA4,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMMTI4  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMTIA4,KEY18;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:
                                   PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:
                                   PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:
                                   PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:
                                   PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:
                                   PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:
                                   PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:
                                   PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:
                                   PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:
                                   PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:
                                   PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:
                                   PMMIHOSI,PMMISPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMMTI4  MOVE      ZERO,OVRCD                                                  
          READKS    PMSMTIA4;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                             PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:      
                             PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:      
                             PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:      
                             PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:      
                             PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:      
                             PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:      
                             PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:      
                             PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:      
                             PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:      
                             PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:      
                             PMMIHOSI,PMMISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMMTI4  MOVE      ZERO,OVRCD                                                  
          READKP    PMSMTIA4;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                             PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:      
                             PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:      
                             PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:      
                             PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:      
                             PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:      
                             PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:      
                             PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:      
                             PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:      
                             PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:      
                             PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:      
                             PMMIHOSI,PMMISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMMTI4  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSMTIA4;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                             PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:      
                             PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:      
                             PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:      
                             PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:      
                             PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:      
                             PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:      
                             PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:      
                             PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:      
                             PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:      
                             PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:      
                             PMMIHOSI,PMMISPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMMTI4  RESET     KEY18                                                       
          WRITE     PMSMTIA4,KEY18;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:
                                   PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:
                                   PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:
                                   PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:
                                   PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:
                                   PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:
                                   PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:
                                   PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:
                                   PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:
                                   PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:
                                   PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:
                                   PMMIHOSI,PMMISPAR                            
          RETURN
.
DEPMMTI4  RESET     KEY18                                                       
          DELETE    PMSMTIA4,KEY18                                              
          RETURN
.
RLPMMTI4  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READL     PMSMTIA4,KEY18;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:
                                   PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:
                                   PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:
                                   PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:
                                   PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:
                                   PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:
                                   PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:
                                   PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:
                                   PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:
                                   PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:
                                   PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:
                                   PMMIHOSI,PMMISPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMMTI4  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSMTIA4;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                             PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:      
                             PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:      
                             PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:      
                             PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:      
                             PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:      
                             PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:      
                             PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:      
                             PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:      
                             PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:      
                             PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:      
                             PMMIHOSI,PMMISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMMTI4  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSMTIA4;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                             PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:      
                             PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:      
                             PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:      
                             PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:      
                             PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:      
                             PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:      
                             PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:      
                             PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:      
                             PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:      
                             PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:      
                             PMMIHOSI,PMMISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMMTI4  RESET     KEY18                                                       
          UNLOCK    PMSMTIA4                                                    
          RETURN
.
RSPMMTI5  RESET     KEY24                                                       
          READ      PMSMTIA5,KEY24;;                                            
          RETURN
.
RAPMMTI5  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMTIA5,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMMTI5  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMTIA5,KEY24;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:
                                   PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:
                                   PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:
                                   PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:
                                   PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:
                                   PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:
                                   PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:
                                   PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:
                                   PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:
                                   PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:
                                   PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:
                                   PMMIHOSI,PMMISPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMMTI5  MOVE      ZERO,OVRCD                                                  
          READKS    PMSMTIA5;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                             PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:      
                             PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:      
                             PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:      
                             PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:      
                             PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:      
                             PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:      
                             PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:      
                             PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:      
                             PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:      
                             PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:      
                             PMMIHOSI,PMMISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMMTI5  MOVE      ZERO,OVRCD                                                  
          READKP    PMSMTIA5;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                             PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:      
                             PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:      
                             PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:      
                             PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:      
                             PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:      
                             PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:      
                             PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:      
                             PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:      
                             PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:      
                             PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:      
                             PMMIHOSI,PMMISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMMTI5  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSMTIA5;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                             PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:      
                             PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:      
                             PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:      
                             PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:      
                             PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:      
                             PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:      
                             PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:      
                             PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:      
                             PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:      
                             PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:      
                             PMMIHOSI,PMMISPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMMTI5  RESET     KEY24                                                       
          WRITE     PMSMTIA5,KEY24;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:
                                   PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:
                                   PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:
                                   PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:
                                   PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:
                                   PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:
                                   PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:
                                   PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:
                                   PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:
                                   PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:
                                   PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:
                                   PMMIHOSI,PMMISPAR                            
          RETURN
.
DEPMMTI5  RESET     KEY24                                                       
          DELETE    PMSMTIA5,KEY24                                              
          RETURN
.
RLPMMTI5  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     PMSMTIA5,KEY24;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:
                                   PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:
                                   PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:
                                   PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:
                                   PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:
                                   PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:
                                   PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:
                                   PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:
                                   PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:
                                   PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:
                                   PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:
                                   PMMIHOSI,PMMISPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMMTI5  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSMTIA5;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                             PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:      
                             PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:      
                             PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:      
                             PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:      
                             PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:      
                             PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:      
                             PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:      
                             PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:      
                             PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:      
                             PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:      
                             PMMIHOSI,PMMISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMMTI5  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSMTIA5;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                             PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:      
                             PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:      
                             PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:      
                             PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:      
                             PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:      
                             PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:      
                             PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:      
                             PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:      
                             PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:      
                             PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:      
                             PMMIHOSI,PMMISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMMTI5  RESET     KEY24                                                       
          UNLOCK    PMSMTIA5                                                    
          RETURN
.
RSPMMTI6  RESET     KEY24                                                       
          READ      PMSMTIA6,KEY24;;                                            
          RETURN
.
RAPMMTI6  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMTIA6,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMMTI6  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMTIA6,KEY24;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:
                                   PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:
                                   PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:
                                   PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:
                                   PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:
                                   PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:
                                   PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:
                                   PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:
                                   PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:
                                   PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:
                                   PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:
                                   PMMIHOSI,PMMISPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMMTI6  MOVE      ZERO,OVRCD                                                  
          READKS    PMSMTIA6;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                             PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:      
                             PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:      
                             PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:      
                             PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:      
                             PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:      
                             PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:      
                             PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:      
                             PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:      
                             PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:      
                             PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:      
                             PMMIHOSI,PMMISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMMTI6  MOVE      ZERO,OVRCD                                                  
          READKP    PMSMTIA6;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                             PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:      
                             PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:      
                             PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:      
                             PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:      
                             PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:      
                             PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:      
                             PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:      
                             PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:      
                             PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:      
                             PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:      
                             PMMIHOSI,PMMISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMMTI6  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSMTIA6;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                             PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:      
                             PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:      
                             PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:      
                             PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:      
                             PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:      
                             PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:      
                             PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:      
                             PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:      
                             PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:      
                             PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:      
                             PMMIHOSI,PMMISPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMMTI6  RESET     KEY24                                                       
          WRITE     PMSMTIA6,KEY24;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:
                                   PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:
                                   PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:
                                   PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:
                                   PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:
                                   PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:
                                   PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:
                                   PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:
                                   PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:
                                   PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:
                                   PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:
                                   PMMIHOSI,PMMISPAR                            
          RETURN
.
DEPMMTI6  RESET     KEY24                                                       
          DELETE    PMSMTIA6,KEY24                                              
          RETURN
.
RLPMMTI6  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     PMSMTIA6,KEY24;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:
                                   PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:
                                   PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:
                                   PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:
                                   PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:
                                   PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:
                                   PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:
                                   PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:
                                   PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:
                                   PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:
                                   PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:
                                   PMMIHOSI,PMMISPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMMTI6  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSMTIA6;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                             PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:      
                             PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:      
                             PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:      
                             PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:      
                             PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:      
                             PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:      
                             PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:      
                             PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:      
                             PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:      
                             PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:      
                             PMMIHOSI,PMMISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMMTI6  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSMTIA6;PMMIVISN,PMMITRAN,PMMIURNO,PMMISYST,PMMIITEM:      
                             PMMIDESC,PMMIDES2,PMMITDAT,PMMIRTYP,PMMIREFN:      
                             PMMIAMTT,PMMIAMTG,PMMIAMTH,PMMIAMTP,PMMIRBAT:      
                             PMMITDOC,PMMISERV,PMMIODOC,PMMISESS,PMMIMGRP:      
                             PMMIBTCH,PMMIINVN,PMMIGSTA,PMMIGSTC,PMMIGSTM:      
                             PMMIDUPD,PMMITUPD,PMMIWUSR,PMMIMVBR,PMMIUNIQ:      
                             PMMICNTR,PMMISUNQ,PMMIINCT,PMMISUBN,PMMIEDAD:      
                             PMMISVTM,PMMICCON,PMMISCHF,PMMIITYP,PMMIDTCR:      
                             PMMITMCR,PMMIIDCR,PMMITMNO,PMMIPMBS,PMMIRBRS:      
                             PMMICTYP,PMMIACOI,PMMIDSOV,PMMISTXT,PMMILSPN:      
                             PMMIMPOV,PMMINMPT,PMMISDCD,PMMITDUR,PMMIROVR:      
                             PMMIHOSI,PMMISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMMTI6  RESET     KEY24                                                       
          UNLOCK    PMSMTIA6                                                    
          RETURN
.
