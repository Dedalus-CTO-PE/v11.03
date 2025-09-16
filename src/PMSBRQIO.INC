.
. PMSBRQIO    
. --------
. Filename     : pmsbrqaf.dat
.
RSPMBRQ1  RESET     KEY24                                                       
          READ      PMSBRQA1,KEY24;;                                            
          RETURN
.
RAPMBRQ1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBRQA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMBRQ1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBRQA1,KEY24;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:
                                   PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:
                                   PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:
                                   PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:
                                   PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:
                                   PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:
                                   PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:
                                   PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:
                                   PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMBRQ1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSBRQA1;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:      
                             PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:      
                             PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:      
                             PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:      
                             PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:      
                             PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:      
                             PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:      
                             PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:      
                             PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMBRQ1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSBRQA1;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:      
                             PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:      
                             PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:      
                             PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:      
                             PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:      
                             PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:      
                             PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:      
                             PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:      
                             PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMBRQ1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSBRQA1;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:      
                             PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:      
                             PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:      
                             PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:      
                             PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:      
                             PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:      
                             PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:      
                             PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:      
                             PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMBRQ1  RESET     KEY24                                                       
          WRITE     PMSBRQA1,KEY24;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:
                                   PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:
                                   PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:
                                   PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:
                                   PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:
                                   PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:
                                   PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:
                                   PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:
                                   PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR 
          RETURN
.
DEPMBRQ1  RESET     KEY24                                                       
          DELETE    PMSBRQA1,KEY24                                              
          RETURN
.
RLPMBRQ1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     PMSBRQA1,KEY24;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:
                                   PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:
                                   PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:
                                   PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:
                                   PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:
                                   PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:
                                   PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:
                                   PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:
                                   PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMBRQ1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSBRQA1;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:      
                             PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:      
                             PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:      
                             PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:      
                             PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:      
                             PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:      
                             PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:      
                             PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:      
                             PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMBRQ1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSBRQA1;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:      
                             PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:      
                             PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:      
                             PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:      
                             PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:      
                             PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:      
                             PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:      
                             PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:      
                             PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMBRQ1  RESET     KEY24                                                       
          UNLOCK    PMSBRQA1                                                    
          RETURN
.
RSPMBRQ2  RESET     KEY25                                                       
          READ      PMSBRQA2,KEY25;;                                            
          RETURN
.
RAPMBRQ2  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBRQA2,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMBRQ2  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBRQA2,KEY25;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:
                                   PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:
                                   PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:
                                   PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:
                                   PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:
                                   PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:
                                   PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:
                                   PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:
                                   PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMBRQ2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSBRQA2;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:      
                             PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:      
                             PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:      
                             PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:      
                             PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:      
                             PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:      
                             PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:      
                             PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:      
                             PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMBRQ2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSBRQA2;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:      
                             PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:      
                             PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:      
                             PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:      
                             PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:      
                             PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:      
                             PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:      
                             PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:      
                             PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMBRQ2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSBRQA2;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:      
                             PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:      
                             PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:      
                             PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:      
                             PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:      
                             PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:      
                             PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:      
                             PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:      
                             PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMBRQ2  RESET     KEY25                                                       
          WRITE     PMSBRQA2,KEY25;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:
                                   PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:
                                   PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:
                                   PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:
                                   PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:
                                   PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:
                                   PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:
                                   PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:
                                   PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR 
          RETURN
.
DEPMBRQ2  RESET     KEY25                                                       
          DELETE    PMSBRQA2,KEY25                                              
          RETURN
.
RLPMBRQ2  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READL     PMSBRQA2,KEY25;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:
                                   PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:
                                   PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:
                                   PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:
                                   PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:
                                   PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:
                                   PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:
                                   PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:
                                   PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMBRQ2  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSBRQA2;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:      
                             PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:      
                             PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:      
                             PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:      
                             PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:      
                             PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:      
                             PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:      
                             PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:      
                             PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMBRQ2  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSBRQA2;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:      
                             PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:      
                             PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:      
                             PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:      
                             PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:      
                             PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:      
                             PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:      
                             PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:      
                             PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMBRQ2  RESET     KEY25                                                       
          UNLOCK    PMSBRQA2                                                    
          RETURN
.
RSPMBRQ3  RESET     KEY24                                                       
          READ      PMSBRQA3,KEY24;;                                            
          RETURN
.
RAPMBRQ3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBRQA3,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMBRQ3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBRQA3,KEY24;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:
                                   PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:
                                   PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:
                                   PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:
                                   PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:
                                   PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:
                                   PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:
                                   PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:
                                   PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMBRQ3  MOVE      ZERO,OVRCD                                                  
          READKS    PMSBRQA3;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:      
                             PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:      
                             PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:      
                             PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:      
                             PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:      
                             PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:      
                             PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:      
                             PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:      
                             PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMBRQ3  MOVE      ZERO,OVRCD                                                  
          READKP    PMSBRQA3;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:      
                             PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:      
                             PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:      
                             PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:      
                             PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:      
                             PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:      
                             PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:      
                             PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:      
                             PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMBRQ3  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSBRQA3;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:      
                             PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:      
                             PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:      
                             PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:      
                             PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:      
                             PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:      
                             PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:      
                             PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:      
                             PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMBRQ3  RESET     KEY24                                                       
          WRITE     PMSBRQA3,KEY24;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:
                                   PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:
                                   PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:
                                   PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:
                                   PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:
                                   PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:
                                   PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:
                                   PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:
                                   PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR 
          RETURN
.
DEPMBRQ3  RESET     KEY24                                                       
          DELETE    PMSBRQA3,KEY24                                              
          RETURN
.
RLPMBRQ3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     PMSBRQA3,KEY24;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:
                                   PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:
                                   PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:
                                   PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:
                                   PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:
                                   PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:
                                   PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:
                                   PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:
                                   PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMBRQ3  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSBRQA3;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:      
                             PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:      
                             PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:      
                             PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:      
                             PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:      
                             PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:      
                             PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:      
                             PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:      
                             PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMBRQ3  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSBRQA3;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:      
                             PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:      
                             PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:      
                             PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:      
                             PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:      
                             PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:      
                             PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:      
                             PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:      
                             PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMBRQ3  RESET     KEY24                                                       
          UNLOCK    PMSBRQA3                                                    
          RETURN
.
RSPMBRQ4  RESET     KEY39                                                       
          READ      PMSBRQA4,KEY39;;                                            
          RETURN
.
RAPMBRQ4  RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBRQA4,KEY39;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMBRQ4  RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBRQA4,KEY39;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:
                                   PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:
                                   PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:
                                   PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:
                                   PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:
                                   PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:
                                   PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:
                                   PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:
                                   PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMBRQ4  MOVE      ZERO,OVRCD                                                  
          READKS    PMSBRQA4;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:      
                             PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:      
                             PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:      
                             PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:      
                             PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:      
                             PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:      
                             PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:      
                             PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:      
                             PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMBRQ4  MOVE      ZERO,OVRCD                                                  
          READKP    PMSBRQA4;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:      
                             PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:      
                             PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:      
                             PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:      
                             PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:      
                             PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:      
                             PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:      
                             PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:      
                             PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMBRQ4  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSBRQA4;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:      
                             PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:      
                             PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:      
                             PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:      
                             PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:      
                             PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:      
                             PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:      
                             PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:      
                             PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMBRQ4  RESET     KEY39                                                       
          WRITE     PMSBRQA4,KEY39;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:
                                   PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:
                                   PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:
                                   PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:
                                   PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:
                                   PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:
                                   PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:
                                   PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:
                                   PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR 
          RETURN
.
DEPMBRQ4  RESET     KEY39                                                       
          DELETE    PMSBRQA4,KEY39                                              
          RETURN
.
RLPMBRQ4  RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READL     PMSBRQA4,KEY39;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:
                                   PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:
                                   PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:
                                   PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:
                                   PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:
                                   PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:
                                   PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:
                                   PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:
                                   PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMBRQ4  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSBRQA4;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:      
                             PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:      
                             PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:      
                             PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:      
                             PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:      
                             PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:      
                             PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:      
                             PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:      
                             PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMBRQ4  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSBRQA4;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:      
                             PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:      
                             PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:      
                             PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:      
                             PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:      
                             PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:      
                             PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:      
                             PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:      
                             PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMBRQ4  RESET     KEY39                                                       
          UNLOCK    PMSBRQA4                                                    
          RETURN
.
RSPMBRQ5  RESET     KEY31                                                       
          READ      PMSBRQA5,KEY31;;                                            
          RETURN
.
RAPMBRQ5  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBRQA5,KEY31;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMBRQ5  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBRQA5,KEY31;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:
                                   PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:
                                   PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:
                                   PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:
                                   PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:
                                   PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:
                                   PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:
                                   PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:
                                   PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMBRQ5  MOVE      ZERO,OVRCD                                                  
          READKS    PMSBRQA5;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:      
                             PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:      
                             PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:      
                             PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:      
                             PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:      
                             PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:      
                             PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:      
                             PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:      
                             PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMBRQ5  MOVE      ZERO,OVRCD                                                  
          READKP    PMSBRQA5;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:      
                             PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:      
                             PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:      
                             PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:      
                             PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:      
                             PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:      
                             PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:      
                             PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:      
                             PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMBRQ5  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSBRQA5;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:      
                             PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:      
                             PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:      
                             PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:      
                             PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:      
                             PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:      
                             PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:      
                             PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:      
                             PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMBRQ5  RESET     KEY31                                                       
          WRITE     PMSBRQA5,KEY31;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:
                                   PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:
                                   PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:
                                   PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:
                                   PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:
                                   PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:
                                   PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:
                                   PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:
                                   PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR 
          RETURN
.
DEPMBRQ5  RESET     KEY31                                                       
          DELETE    PMSBRQA5,KEY31                                              
          RETURN
.
RLPMBRQ5  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READL     PMSBRQA5,KEY31;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:
                                   PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:
                                   PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:
                                   PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:
                                   PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:
                                   PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:
                                   PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:
                                   PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:
                                   PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMBRQ5  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSBRQA5;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:      
                             PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:      
                             PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:      
                             PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:      
                             PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:      
                             PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:      
                             PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:      
                             PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:      
                             PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMBRQ5  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSBRQA5;PMBRVISN,PMBRREQD,PMBRREQT,PMBRUNIT,PMBRRHCP:      
                             PMBRTYPE,PMBRRSTA,PMBRDIAG,PMBREWRD,PMBREBED:      
                             PMBRADAT,PMBRATIM,PMBRAUID,PMBRCANR,PMBRCAND:      
                             PMBRCANT,PMBRCANU,PMBRCDAT,PMBRCTIM,PMBRCUID:      
                             PMBRUDAT,PMBRUTIM,PMBRUUID,PMBRRWRD,PMBRSBED:      
                             PMBRHOSP,PMBRFTXT,PMBRRDAT,PMBRRTIM,PMBRTEAM:      
                             PMBRPWRD,PMBRSFFR,PMBRSFEP,PMBRSFCI,PMBRSFCO:      
                             PMBRSFIS,PMBRSFTE,PMBRSFRC,PMBRSFOT,PMBRSFNR:      
                             PMBRSFMA,PMBRMASC,PMBRWDTR,PMBRCORC,PMBRSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMBRQ5  RESET     KEY31                                                       
          UNLOCK    PMSBRQA5                                                    
          RETURN
.
