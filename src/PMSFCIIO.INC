.
. PMSFCIIO    
. --------
. Filename     : pmsfciaf.dat
.
RSPMFCI1  RESET     KEY30                                                       
          READ      PMSFCIA1,KEY30;;                                            
          RETURN
.
RAPMFCI1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      PMSFCIA1,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMFCI1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      PMSFCIA1,KEY30;PMFCVISN,PMFCINVN,PMFCTRAN,PMFCSYST,PMFCCRNO:
                        PMFCCRDA,PMFCAMTT,PMFCAMTG,PMFCAMTH,PMFCAMTI,PMFCAMTP:  
                        PMFCRBAT,PMFCCAMT,PMFCTDAT,PMFCADAT,PMFCITEM,PMFCDESC:  
                        PMFCDES2,PMFCRTYP,PMFCNDAY,PMFCCLAI,PMFCTDOC,PMFCSERV:  
                        PMFCODOC,PMFCSESS,PMFCMGRP,PMFCWARD,PMFCCTYP,PMFCATYP:  
                        PMFCBTCH,PMFCNINV,PMFCPTLS,PMFCRBLS,PMFCDTYP,PMFCADDC:  
                        PMFCGSTA,PMFCGSTC,PMFCGSTM,PMFCCGST,PMFCGSTL,PMFCATFI:  
                        PMFCDUPD,PMFCTUPD,PMFCWUSR,PMFCSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMFCI1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSFCIA1;PMFCVISN,PMFCINVN,PMFCTRAN,PMFCSYST,PMFCCRNO:      
                        PMFCCRDA,PMFCAMTT,PMFCAMTG,PMFCAMTH,PMFCAMTI,PMFCAMTP:  
                        PMFCRBAT,PMFCCAMT,PMFCTDAT,PMFCADAT,PMFCITEM,PMFCDESC:  
                        PMFCDES2,PMFCRTYP,PMFCNDAY,PMFCCLAI,PMFCTDOC,PMFCSERV:  
                        PMFCODOC,PMFCSESS,PMFCMGRP,PMFCWARD,PMFCCTYP,PMFCATYP:  
                        PMFCBTCH,PMFCNINV,PMFCPTLS,PMFCRBLS,PMFCDTYP,PMFCADDC:  
                        PMFCGSTA,PMFCGSTC,PMFCGSTM,PMFCCGST,PMFCGSTL,PMFCATFI:  
                        PMFCDUPD,PMFCTUPD,PMFCWUSR,PMFCSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMFCI1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSFCIA1;PMFCVISN,PMFCINVN,PMFCTRAN,PMFCSYST,PMFCCRNO:      
                        PMFCCRDA,PMFCAMTT,PMFCAMTG,PMFCAMTH,PMFCAMTI,PMFCAMTP:  
                        PMFCRBAT,PMFCCAMT,PMFCTDAT,PMFCADAT,PMFCITEM,PMFCDESC:  
                        PMFCDES2,PMFCRTYP,PMFCNDAY,PMFCCLAI,PMFCTDOC,PMFCSERV:  
                        PMFCODOC,PMFCSESS,PMFCMGRP,PMFCWARD,PMFCCTYP,PMFCATYP:  
                        PMFCBTCH,PMFCNINV,PMFCPTLS,PMFCRBLS,PMFCDTYP,PMFCADDC:  
                        PMFCGSTA,PMFCGSTC,PMFCGSTM,PMFCCGST,PMFCGSTL,PMFCATFI:  
                        PMFCDUPD,PMFCTUPD,PMFCWUSR,PMFCSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMFCI1  PACK      PMFCDUPD,CCC,CYY,CMM,CDD
          REP       " 0",PMFCDUPD
          CLOCK     TIME,PMFCTUPD
.
          UPDATE    PMSFCIA1;PMFCVISN,PMFCINVN,PMFCTRAN,PMFCSYST,PMFCCRNO:      
                        PMFCCRDA,PMFCAMTT,PMFCAMTG,PMFCAMTH,PMFCAMTI,PMFCAMTP:  
                        PMFCRBAT,PMFCCAMT,PMFCTDAT,PMFCADAT,PMFCITEM,PMFCDESC:  
                        PMFCDES2,PMFCRTYP,PMFCNDAY,PMFCCLAI,PMFCTDOC,PMFCSERV:  
                        PMFCODOC,PMFCSESS,PMFCMGRP,PMFCWARD,PMFCCTYP,PMFCATYP:  
                        PMFCBTCH,PMFCNINV,PMFCPTLS,PMFCRBLS,PMFCDTYP,PMFCADDC:  
                        PMFCGSTA,PMFCGSTC,PMFCGSTM,PMFCCGST,PMFCGSTL,PMFCATFI:  
                        PMFCDUPD,PMFCTUPD,PMFCWUSR,PMFCSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMFCI1  PACK      PMFCDUPD,CCC,CYY,CMM,CDD
          REP       " 0",PMFCDUPD
          CLOCK     TIME,PMFCTUPD
          RESET     KEY30                                                       
          WRITE     PMSFCIA1,KEY30;PMFCVISN,PMFCINVN,PMFCTRAN,PMFCSYST,PMFCCRNO:
                        PMFCCRDA,PMFCAMTT,PMFCAMTG,PMFCAMTH,PMFCAMTI,PMFCAMTP:  
                        PMFCRBAT,PMFCCAMT,PMFCTDAT,PMFCADAT,PMFCITEM,PMFCDESC:  
                        PMFCDES2,PMFCRTYP,PMFCNDAY,PMFCCLAI,PMFCTDOC,PMFCSERV:  
                        PMFCODOC,PMFCSESS,PMFCMGRP,PMFCWARD,PMFCCTYP,PMFCATYP:  
                        PMFCBTCH,PMFCNINV,PMFCPTLS,PMFCRBLS,PMFCDTYP,PMFCADDC:  
                        PMFCGSTA,PMFCGSTC,PMFCGSTM,PMFCCGST,PMFCGSTL,PMFCATFI:  
                        PMFCDUPD,PMFCTUPD,PMFCWUSR,PMFCSPAR                     
          RETURN
.
DEPMFCI1  RESET     KEY30                                                       
          DELETE    PMSFCIA1,KEY30                                              
          RETURN
.
RLPMFCI1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READL     PMSFCIA1,KEY30;PMFCVISN,PMFCINVN,PMFCTRAN,PMFCSYST,PMFCCRNO:
                        PMFCCRDA,PMFCAMTT,PMFCAMTG,PMFCAMTH,PMFCAMTI,PMFCAMTP:  
                        PMFCRBAT,PMFCCAMT,PMFCTDAT,PMFCADAT,PMFCITEM,PMFCDESC:  
                        PMFCDES2,PMFCRTYP,PMFCNDAY,PMFCCLAI,PMFCTDOC,PMFCSERV:  
                        PMFCODOC,PMFCSESS,PMFCMGRP,PMFCWARD,PMFCCTYP,PMFCATYP:  
                        PMFCBTCH,PMFCNINV,PMFCPTLS,PMFCRBLS,PMFCDTYP,PMFCADDC:  
                        PMFCGSTA,PMFCGSTC,PMFCGSTM,PMFCCGST,PMFCGSTL,PMFCATFI:  
                        PMFCDUPD,PMFCTUPD,PMFCWUSR,PMFCSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMFCI1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSFCIA1;PMFCVISN,PMFCINVN,PMFCTRAN,PMFCSYST,PMFCCRNO:      
                        PMFCCRDA,PMFCAMTT,PMFCAMTG,PMFCAMTH,PMFCAMTI,PMFCAMTP:  
                        PMFCRBAT,PMFCCAMT,PMFCTDAT,PMFCADAT,PMFCITEM,PMFCDESC:  
                        PMFCDES2,PMFCRTYP,PMFCNDAY,PMFCCLAI,PMFCTDOC,PMFCSERV:  
                        PMFCODOC,PMFCSESS,PMFCMGRP,PMFCWARD,PMFCCTYP,PMFCATYP:  
                        PMFCBTCH,PMFCNINV,PMFCPTLS,PMFCRBLS,PMFCDTYP,PMFCADDC:  
                        PMFCGSTA,PMFCGSTC,PMFCGSTM,PMFCCGST,PMFCGSTL,PMFCATFI:  
                        PMFCDUPD,PMFCTUPD,PMFCWUSR,PMFCSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMFCI1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSFCIA1;PMFCVISN,PMFCINVN,PMFCTRAN,PMFCSYST,PMFCCRNO:      
                        PMFCCRDA,PMFCAMTT,PMFCAMTG,PMFCAMTH,PMFCAMTI,PMFCAMTP:  
                        PMFCRBAT,PMFCCAMT,PMFCTDAT,PMFCADAT,PMFCITEM,PMFCDESC:  
                        PMFCDES2,PMFCRTYP,PMFCNDAY,PMFCCLAI,PMFCTDOC,PMFCSERV:  
                        PMFCODOC,PMFCSESS,PMFCMGRP,PMFCWARD,PMFCCTYP,PMFCATYP:  
                        PMFCBTCH,PMFCNINV,PMFCPTLS,PMFCRBLS,PMFCDTYP,PMFCADDC:  
                        PMFCGSTA,PMFCGSTC,PMFCGSTM,PMFCCGST,PMFCGSTL,PMFCATFI:  
                        PMFCDUPD,PMFCTUPD,PMFCWUSR,PMFCSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMFCI1  RESET     KEY30                                                       
          UNLOCK    PMSFCIA1                                                    
          RETURN
.
RSPMFCI2  RESET     KEY31                                                       
          READ      PMSFCIA2,KEY31;;                                            
          RETURN
.
RAPMFCI2  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSFCIA2,KEY31;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMFCI2  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSFCIA2,KEY31;PMFCVISN,PMFCINVN,PMFCTRAN,PMFCSYST,PMFCCRNO:
                        PMFCCRDA,PMFCAMTT,PMFCAMTG,PMFCAMTH,PMFCAMTI,PMFCAMTP:  
                        PMFCRBAT,PMFCCAMT,PMFCTDAT,PMFCADAT,PMFCITEM,PMFCDESC:  
                        PMFCDES2,PMFCRTYP,PMFCNDAY,PMFCCLAI,PMFCTDOC,PMFCSERV:  
                        PMFCODOC,PMFCSESS,PMFCMGRP,PMFCWARD,PMFCCTYP,PMFCATYP:  
                        PMFCBTCH,PMFCNINV,PMFCPTLS,PMFCRBLS,PMFCDTYP,PMFCADDC:  
                        PMFCGSTA,PMFCGSTC,PMFCGSTM,PMFCCGST,PMFCGSTL,PMFCATFI:  
                        PMFCDUPD,PMFCTUPD,PMFCWUSR,PMFCSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMFCI2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSFCIA2;PMFCVISN,PMFCINVN,PMFCTRAN,PMFCSYST,PMFCCRNO:      
                        PMFCCRDA,PMFCAMTT,PMFCAMTG,PMFCAMTH,PMFCAMTI,PMFCAMTP:  
                        PMFCRBAT,PMFCCAMT,PMFCTDAT,PMFCADAT,PMFCITEM,PMFCDESC:  
                        PMFCDES2,PMFCRTYP,PMFCNDAY,PMFCCLAI,PMFCTDOC,PMFCSERV:  
                        PMFCODOC,PMFCSESS,PMFCMGRP,PMFCWARD,PMFCCTYP,PMFCATYP:  
                        PMFCBTCH,PMFCNINV,PMFCPTLS,PMFCRBLS,PMFCDTYP,PMFCADDC:  
                        PMFCGSTA,PMFCGSTC,PMFCGSTM,PMFCCGST,PMFCGSTL,PMFCATFI:  
                        PMFCDUPD,PMFCTUPD,PMFCWUSR,PMFCSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMFCI2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSFCIA2;PMFCVISN,PMFCINVN,PMFCTRAN,PMFCSYST,PMFCCRNO:      
                        PMFCCRDA,PMFCAMTT,PMFCAMTG,PMFCAMTH,PMFCAMTI,PMFCAMTP:  
                        PMFCRBAT,PMFCCAMT,PMFCTDAT,PMFCADAT,PMFCITEM,PMFCDESC:  
                        PMFCDES2,PMFCRTYP,PMFCNDAY,PMFCCLAI,PMFCTDOC,PMFCSERV:  
                        PMFCODOC,PMFCSESS,PMFCMGRP,PMFCWARD,PMFCCTYP,PMFCATYP:  
                        PMFCBTCH,PMFCNINV,PMFCPTLS,PMFCRBLS,PMFCDTYP,PMFCADDC:  
                        PMFCGSTA,PMFCGSTC,PMFCGSTM,PMFCCGST,PMFCGSTL,PMFCATFI:  
                        PMFCDUPD,PMFCTUPD,PMFCWUSR,PMFCSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMFCI2  PACK      PMFCDUPD,CCC,CYY,CMM,CDD
          REP       " 0",PMFCDUPD
          CLOCK     TIME,PMFCTUPD
          UPDATE    PMSFCIA2;PMFCVISN,PMFCINVN,PMFCTRAN,PMFCSYST,PMFCCRNO:      
                        PMFCCRDA,PMFCAMTT,PMFCAMTG,PMFCAMTH,PMFCAMTI,PMFCAMTP:  
                        PMFCRBAT,PMFCCAMT,PMFCTDAT,PMFCADAT,PMFCITEM,PMFCDESC:  
                        PMFCDES2,PMFCRTYP,PMFCNDAY,PMFCCLAI,PMFCTDOC,PMFCSERV:  
                        PMFCODOC,PMFCSESS,PMFCMGRP,PMFCWARD,PMFCCTYP,PMFCATYP:  
                        PMFCBTCH,PMFCNINV,PMFCPTLS,PMFCRBLS,PMFCDTYP,PMFCADDC:  
                        PMFCGSTA,PMFCGSTC,PMFCGSTM,PMFCCGST,PMFCGSTL,PMFCATFI:  
                        PMFCDUPD,PMFCTUPD,PMFCWUSR,PMFCSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMFCI2  PACK      PMFCDUPD,CCC,CYY,CMM,CDD
          REP       " 0",PMFCDUPD
          CLOCK     TIME,PMFCTUPD
          RESET     KEY31                                                       
          WRITE     PMSFCIA2,KEY31;PMFCVISN,PMFCINVN,PMFCTRAN,PMFCSYST,PMFCCRNO:
                        PMFCCRDA,PMFCAMTT,PMFCAMTG,PMFCAMTH,PMFCAMTI,PMFCAMTP:  
                        PMFCRBAT,PMFCCAMT,PMFCTDAT,PMFCADAT,PMFCITEM,PMFCDESC:  
                        PMFCDES2,PMFCRTYP,PMFCNDAY,PMFCCLAI,PMFCTDOC,PMFCSERV:  
                        PMFCODOC,PMFCSESS,PMFCMGRP,PMFCWARD,PMFCCTYP,PMFCATYP:  
                        PMFCBTCH,PMFCNINV,PMFCPTLS,PMFCRBLS,PMFCDTYP,PMFCADDC:  
                        PMFCGSTA,PMFCGSTC,PMFCGSTM,PMFCCGST,PMFCGSTL,PMFCATFI:  
                        PMFCDUPD,PMFCTUPD,PMFCWUSR,PMFCSPAR                     
          RETURN
.
DEPMFCI2  RESET     KEY31                                                       
          DELETE    PMSFCIA2,KEY31                                              
          RETURN
.
RLPMFCI2  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READL     PMSFCIA2,KEY31;PMFCVISN,PMFCINVN,PMFCTRAN,PMFCSYST,PMFCCRNO:
                        PMFCCRDA,PMFCAMTT,PMFCAMTG,PMFCAMTH,PMFCAMTI,PMFCAMTP:  
                        PMFCRBAT,PMFCCAMT,PMFCTDAT,PMFCADAT,PMFCITEM,PMFCDESC:  
                        PMFCDES2,PMFCRTYP,PMFCNDAY,PMFCCLAI,PMFCTDOC,PMFCSERV:  
                        PMFCODOC,PMFCSESS,PMFCMGRP,PMFCWARD,PMFCCTYP,PMFCATYP:  
                        PMFCBTCH,PMFCNINV,PMFCPTLS,PMFCRBLS,PMFCDTYP,PMFCADDC:  
                        PMFCGSTA,PMFCGSTC,PMFCGSTM,PMFCCGST,PMFCGSTL,PMFCATFI:  
                        PMFCDUPD,PMFCTUPD,PMFCWUSR,PMFCSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMFCI2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSFCIA2;PMFCVISN,PMFCINVN,PMFCTRAN,PMFCSYST,PMFCCRNO:      
                        PMFCCRDA,PMFCAMTT,PMFCAMTG,PMFCAMTH,PMFCAMTI,PMFCAMTP:  
                        PMFCRBAT,PMFCCAMT,PMFCTDAT,PMFCADAT,PMFCITEM,PMFCDESC:  
                        PMFCDES2,PMFCRTYP,PMFCNDAY,PMFCCLAI,PMFCTDOC,PMFCSERV:  
                        PMFCODOC,PMFCSESS,PMFCMGRP,PMFCWARD,PMFCCTYP,PMFCATYP:  
                        PMFCBTCH,PMFCNINV,PMFCPTLS,PMFCRBLS,PMFCDTYP,PMFCADDC:  
                        PMFCGSTA,PMFCGSTC,PMFCGSTM,PMFCCGST,PMFCGSTL,PMFCATFI:  
                        PMFCDUPD,PMFCTUPD,PMFCWUSR,PMFCSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMFCI2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSFCIA2;PMFCVISN,PMFCINVN,PMFCTRAN,PMFCSYST,PMFCCRNO:      
                        PMFCCRDA,PMFCAMTT,PMFCAMTG,PMFCAMTH,PMFCAMTI,PMFCAMTP:  
                        PMFCRBAT,PMFCCAMT,PMFCTDAT,PMFCADAT,PMFCITEM,PMFCDESC:  
                        PMFCDES2,PMFCRTYP,PMFCNDAY,PMFCCLAI,PMFCTDOC,PMFCSERV:  
                        PMFCODOC,PMFCSESS,PMFCMGRP,PMFCWARD,PMFCCTYP,PMFCATYP:  
                        PMFCBTCH,PMFCNINV,PMFCPTLS,PMFCRBLS,PMFCDTYP,PMFCADDC:  
                        PMFCGSTA,PMFCGSTC,PMFCGSTM,PMFCCGST,PMFCGSTL,PMFCATFI:  
                        PMFCDUPD,PMFCTUPD,PMFCWUSR,PMFCSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMFCI2  RESET     KEY31                                                       
          UNLOCK    PMSFCIA2                                                    
          RETURN
.
RSPMFCI3  RESET     KEY31                                                       
          READ      PMSFCIA3,KEY31;;                                            
          RETURN
.
RAPMFCI3  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSFCIA3,KEY31;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMFCI3  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSFCIA3,KEY31;PMFCVISN,PMFCINVN,PMFCTRAN,PMFCSYST,PMFCCRNO:
                        PMFCCRDA,PMFCAMTT,PMFCAMTG,PMFCAMTH,PMFCAMTI,PMFCAMTP:  
                        PMFCRBAT,PMFCCAMT,PMFCTDAT,PMFCADAT,PMFCITEM,PMFCDESC:  
                        PMFCDES2,PMFCRTYP,PMFCNDAY,PMFCCLAI,PMFCTDOC,PMFCSERV:  
                        PMFCODOC,PMFCSESS,PMFCMGRP,PMFCWARD,PMFCCTYP,PMFCATYP:  
                        PMFCBTCH,PMFCNINV,PMFCPTLS,PMFCRBLS,PMFCDTYP,PMFCADDC:  
                        PMFCGSTA,PMFCGSTC,PMFCGSTM,PMFCCGST,PMFCGSTL,PMFCATFI:  
                        PMFCDUPD,PMFCTUPD,PMFCWUSR,PMFCSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMFCI3                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSFCIA3;PMFCVISN,PMFCINVN,PMFCTRAN,PMFCSYST,PMFCCRNO:      
                        PMFCCRDA,PMFCAMTT,PMFCAMTG,PMFCAMTH,PMFCAMTI,PMFCAMTP:  
                        PMFCRBAT,PMFCCAMT,PMFCTDAT,PMFCADAT,PMFCITEM,PMFCDESC:  
                        PMFCDES2,PMFCRTYP,PMFCNDAY,PMFCCLAI,PMFCTDOC,PMFCSERV:  
                        PMFCODOC,PMFCSESS,PMFCMGRP,PMFCWARD,PMFCCTYP,PMFCATYP:  
                        PMFCBTCH,PMFCNINV,PMFCPTLS,PMFCRBLS,PMFCDTYP,PMFCADDC:  
                        PMFCGSTA,PMFCGSTC,PMFCGSTM,PMFCCGST,PMFCGSTL,PMFCATFI:  
                        PMFCDUPD,PMFCTUPD,PMFCWUSR,PMFCSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMFCI3                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSFCIA3;PMFCVISN,PMFCINVN,PMFCTRAN,PMFCSYST,PMFCCRNO:      
                        PMFCCRDA,PMFCAMTT,PMFCAMTG,PMFCAMTH,PMFCAMTI,PMFCAMTP:  
                        PMFCRBAT,PMFCCAMT,PMFCTDAT,PMFCADAT,PMFCITEM,PMFCDESC:  
                        PMFCDES2,PMFCRTYP,PMFCNDAY,PMFCCLAI,PMFCTDOC,PMFCSERV:  
                        PMFCODOC,PMFCSESS,PMFCMGRP,PMFCWARD,PMFCCTYP,PMFCATYP:  
                        PMFCBTCH,PMFCNINV,PMFCPTLS,PMFCRBLS,PMFCDTYP,PMFCADDC:  
                        PMFCGSTA,PMFCGSTC,PMFCGSTM,PMFCCGST,PMFCGSTL,PMFCATFI:  
                        PMFCDUPD,PMFCTUPD,PMFCWUSR,PMFCSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMFCI3  PACK      PMFCDUPD,CCC,CYY,CMM,CDD
          REP       " 0",PMFCDUPD
          CLOCK     TIME,PMFCTUPD
          UPDATE    PMSFCIA3;PMFCVISN,PMFCINVN,PMFCTRAN,PMFCSYST,PMFCCRNO:      
                        PMFCCRDA,PMFCAMTT,PMFCAMTG,PMFCAMTH,PMFCAMTI,PMFCAMTP:  
                        PMFCRBAT,PMFCCAMT,PMFCTDAT,PMFCADAT,PMFCITEM,PMFCDESC:  
                        PMFCDES2,PMFCRTYP,PMFCNDAY,PMFCCLAI,PMFCTDOC,PMFCSERV:  
                        PMFCODOC,PMFCSESS,PMFCMGRP,PMFCWARD,PMFCCTYP,PMFCATYP:  
                        PMFCBTCH,PMFCNINV,PMFCPTLS,PMFCRBLS,PMFCDTYP,PMFCADDC:  
                        PMFCGSTA,PMFCGSTC,PMFCGSTM,PMFCCGST,PMFCGSTL,PMFCATFI:  
                        PMFCDUPD,PMFCTUPD,PMFCWUSR,PMFCSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMFCI3  PACK      PMFCDUPD,CCC,CYY,CMM,CDD
          REP       " 0",PMFCDUPD
          CLOCK     TIME,PMFCTUPD
          RESET     KEY31                                                       
          WRITE     PMSFCIA3,KEY31;PMFCVISN,PMFCINVN,PMFCTRAN,PMFCSYST,PMFCCRNO:
                        PMFCCRDA,PMFCAMTT,PMFCAMTG,PMFCAMTH,PMFCAMTI,PMFCAMTP:  
                        PMFCRBAT,PMFCCAMT,PMFCTDAT,PMFCADAT,PMFCITEM,PMFCDESC:  
                        PMFCDES2,PMFCRTYP,PMFCNDAY,PMFCCLAI,PMFCTDOC,PMFCSERV:  
                        PMFCODOC,PMFCSESS,PMFCMGRP,PMFCWARD,PMFCCTYP,PMFCATYP:  
                        PMFCBTCH,PMFCNINV,PMFCPTLS,PMFCRBLS,PMFCDTYP,PMFCADDC:  
                        PMFCGSTA,PMFCGSTC,PMFCGSTM,PMFCCGST,PMFCGSTL,PMFCATFI:  
                        PMFCDUPD,PMFCTUPD,PMFCWUSR,PMFCSPAR                     
          RETURN
.
DEPMFCI3  RESET     KEY31                                                       
          DELETE    PMSFCIA3,KEY31                                              
          RETURN
.
RLPMFCI3  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READL     PMSFCIA3,KEY31;PMFCVISN,PMFCINVN,PMFCTRAN,PMFCSYST,PMFCCRNO:
                        PMFCCRDA,PMFCAMTT,PMFCAMTG,PMFCAMTH,PMFCAMTI,PMFCAMTP:  
                        PMFCRBAT,PMFCCAMT,PMFCTDAT,PMFCADAT,PMFCITEM,PMFCDESC:  
                        PMFCDES2,PMFCRTYP,PMFCNDAY,PMFCCLAI,PMFCTDOC,PMFCSERV:  
                        PMFCODOC,PMFCSESS,PMFCMGRP,PMFCWARD,PMFCCTYP,PMFCATYP:  
                        PMFCBTCH,PMFCNINV,PMFCPTLS,PMFCRBLS,PMFCDTYP,PMFCADDC:  
                        PMFCGSTA,PMFCGSTC,PMFCGSTM,PMFCCGST,PMFCGSTL,PMFCATFI:  
                        PMFCDUPD,PMFCTUPD,PMFCWUSR,PMFCSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMFCI3                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSFCIA3;PMFCVISN,PMFCINVN,PMFCTRAN,PMFCSYST,PMFCCRNO:      
                        PMFCCRDA,PMFCAMTT,PMFCAMTG,PMFCAMTH,PMFCAMTI,PMFCAMTP:  
                        PMFCRBAT,PMFCCAMT,PMFCTDAT,PMFCADAT,PMFCITEM,PMFCDESC:  
                        PMFCDES2,PMFCRTYP,PMFCNDAY,PMFCCLAI,PMFCTDOC,PMFCSERV:  
                        PMFCODOC,PMFCSESS,PMFCMGRP,PMFCWARD,PMFCCTYP,PMFCATYP:  
                        PMFCBTCH,PMFCNINV,PMFCPTLS,PMFCRBLS,PMFCDTYP,PMFCADDC:  
                        PMFCGSTA,PMFCGSTC,PMFCGSTM,PMFCCGST,PMFCGSTL,PMFCATFI:  
                        PMFCDUPD,PMFCTUPD,PMFCWUSR,PMFCSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMFCI3                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSFCIA3;PMFCVISN,PMFCINVN,PMFCTRAN,PMFCSYST,PMFCCRNO:      
                        PMFCCRDA,PMFCAMTT,PMFCAMTG,PMFCAMTH,PMFCAMTI,PMFCAMTP:  
                        PMFCRBAT,PMFCCAMT,PMFCTDAT,PMFCADAT,PMFCITEM,PMFCDESC:  
                        PMFCDES2,PMFCRTYP,PMFCNDAY,PMFCCLAI,PMFCTDOC,PMFCSERV:  
                        PMFCODOC,PMFCSESS,PMFCMGRP,PMFCWARD,PMFCCTYP,PMFCATYP:  
                        PMFCBTCH,PMFCNINV,PMFCPTLS,PMFCRBLS,PMFCDTYP,PMFCADDC:  
                        PMFCGSTA,PMFCGSTC,PMFCGSTM,PMFCCGST,PMFCGSTL,PMFCATFI:  
                        PMFCDUPD,PMFCTUPD,PMFCWUSR,PMFCSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMFCI3  RESET     KEY31                                                       
          UNLOCK    PMSFCIA3                                                    
          RETURN
.
