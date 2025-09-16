.
. PMSARQIO    
. --------
. Filename     : pmsarqaf.dat
.
RSPMARQ1  RESET     KEY10                                                       
          READ      PMSARQA1,KEY10;;                                            
          RETURN
.
RAPMARQ1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PMSARQA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMARQ1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PMSARQA1,KEY10;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:
                                   PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:
                                   PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:
                                   PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:
                                   PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:
                                   PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:
                                   PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:
                                   PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:
                                   PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:
                                   PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:
                                   PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:
                                   PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:
                                   PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:
                                   PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:
                                   PMARSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMARQ1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSARQA1;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:      
                             PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:      
                             PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:      
                             PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:      
                             PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:      
                             PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:      
                             PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:      
                             PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:      
                             PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:      
                             PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:      
                             PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:      
                             PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:      
                             PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:      
                             PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:      
                             PMARSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMARQ1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSARQA1;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:      
                             PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:      
                             PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:      
                             PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:      
                             PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:      
                             PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:      
                             PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:      
                             PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:      
                             PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:      
                             PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:      
                             PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:      
                             PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:      
                             PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:      
                             PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:      
                             PMARSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMARQ1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSARQA1;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:      
                             PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:      
                             PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:      
                             PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:      
                             PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:      
                             PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:      
                             PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:      
                             PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:      
                             PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:      
                             PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:      
                             PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:      
                             PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:      
                             PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:      
                             PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:      
                             PMARSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMARQ1  RESET     KEY10                                                       
          WRITE     PMSARQA1,KEY10;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:
                                   PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:
                                   PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:
                                   PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:
                                   PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:
                                   PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:
                                   PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:
                                   PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:
                                   PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:
                                   PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:
                                   PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:
                                   PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:
                                   PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:
                                   PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:
                                   PMARSPAR                                     
          RETURN
.
DEPMARQ1  RESET     KEY10                                                       
          DELETE    PMSARQA1,KEY10                                              
          RETURN
.
RLPMARQ1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     PMSARQA1,KEY10;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:
                                   PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:
                                   PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:
                                   PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:
                                   PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:
                                   PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:
                                   PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:
                                   PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:
                                   PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:
                                   PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:
                                   PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:
                                   PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:
                                   PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:
                                   PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:
                                   PMARSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMARQ1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSARQA1;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:      
                             PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:      
                             PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:      
                             PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:      
                             PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:      
                             PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:      
                             PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:      
                             PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:      
                             PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:      
                             PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:      
                             PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:      
                             PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:      
                             PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:      
                             PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:      
                             PMARSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMARQ1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSARQA1;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:      
                             PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:      
                             PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:      
                             PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:      
                             PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:      
                             PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:      
                             PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:      
                             PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:      
                             PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:      
                             PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:      
                             PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:      
                             PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:      
                             PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:      
                             PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:      
                             PMARSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMARQ1  RESET     KEY10                                                       
          UNLOCK    PMSARQA1                                                    
          RETURN
.
RSPMARQ2  RESET     KEY18                                                       
          READ      PMSARQA2,KEY18;;                                            
          RETURN
.
RAPMARQ2  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PMSARQA2,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMARQ2  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PMSARQA2,KEY18;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:
                                   PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:
                                   PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:
                                   PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:
                                   PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:
                                   PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:
                                   PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:
                                   PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:
                                   PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:
                                   PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:
                                   PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:
                                   PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:
                                   PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:
                                   PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:
                                   PMARSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMARQ2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSARQA2;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:      
                             PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:      
                             PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:      
                             PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:      
                             PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:      
                             PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:      
                             PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:      
                             PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:      
                             PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:      
                             PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:      
                             PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:      
                             PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:      
                             PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:      
                             PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:      
                             PMARSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMARQ2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSARQA2;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:      
                             PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:      
                             PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:      
                             PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:      
                             PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:      
                             PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:      
                             PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:      
                             PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:      
                             PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:      
                             PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:      
                             PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:      
                             PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:      
                             PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:      
                             PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:      
                             PMARSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMARQ2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSARQA2;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:      
                             PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:      
                             PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:      
                             PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:      
                             PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:      
                             PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:      
                             PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:      
                             PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:      
                             PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:      
                             PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:      
                             PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:      
                             PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:      
                             PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:      
                             PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:      
                             PMARSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMARQ2  RESET     KEY18                                                       
          WRITE     PMSARQA2,KEY18;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:
                                   PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:
                                   PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:
                                   PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:
                                   PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:
                                   PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:
                                   PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:
                                   PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:
                                   PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:
                                   PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:
                                   PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:
                                   PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:
                                   PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:
                                   PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:
                                   PMARSPAR                                     
          RETURN
.
DEPMARQ2  RESET     KEY18                                                       
          DELETE    PMSARQA2,KEY18                                              
          RETURN
.
RLPMARQ2  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READL     PMSARQA2,KEY18;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:
                                   PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:
                                   PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:
                                   PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:
                                   PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:
                                   PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:
                                   PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:
                                   PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:
                                   PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:
                                   PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:
                                   PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:
                                   PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:
                                   PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:
                                   PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:
                                   PMARSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMARQ2  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSARQA2;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:      
                             PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:      
                             PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:      
                             PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:      
                             PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:      
                             PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:      
                             PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:      
                             PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:      
                             PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:      
                             PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:      
                             PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:      
                             PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:      
                             PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:      
                             PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:      
                             PMARSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMARQ2  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSARQA2;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:      
                             PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:      
                             PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:      
                             PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:      
                             PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:      
                             PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:      
                             PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:      
                             PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:      
                             PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:      
                             PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:      
                             PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:      
                             PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:      
                             PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:      
                             PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:      
                             PMARSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMARQ2  RESET     KEY18                                                       
          UNLOCK    PMSARQA2                                                    
          RETURN
.
RSPMARQ3  RESET     KEY29                                                       
          READ      PMSARQA3,KEY29;;                                            
          RETURN
.
RAPMARQ3  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      PMSARQA3,KEY29;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMARQ3  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      PMSARQA3,KEY29;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:
                                   PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:
                                   PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:
                                   PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:
                                   PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:
                                   PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:
                                   PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:
                                   PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:
                                   PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:
                                   PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:
                                   PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:
                                   PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:
                                   PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:
                                   PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:
                                   PMARSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMARQ3  MOVE      ZERO,OVRCD                                                  
          READKS    PMSARQA3;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:      
                             PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:      
                             PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:      
                             PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:      
                             PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:      
                             PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:      
                             PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:      
                             PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:      
                             PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:      
                             PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:      
                             PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:      
                             PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:      
                             PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:      
                             PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:      
                             PMARSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMARQ3  MOVE      ZERO,OVRCD                                                  
          READKP    PMSARQA3;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:      
                             PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:      
                             PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:      
                             PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:      
                             PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:      
                             PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:      
                             PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:      
                             PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:      
                             PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:      
                             PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:      
                             PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:      
                             PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:      
                             PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:      
                             PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:      
                             PMARSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMARQ3  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSARQA3;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:      
                             PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:      
                             PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:      
                             PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:      
                             PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:      
                             PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:      
                             PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:      
                             PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:      
                             PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:      
                             PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:      
                             PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:      
                             PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:      
                             PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:      
                             PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:      
                             PMARSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMARQ3  RESET     KEY29                                                       
          WRITE     PMSARQA3,KEY29;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:
                                   PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:
                                   PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:
                                   PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:
                                   PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:
                                   PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:
                                   PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:
                                   PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:
                                   PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:
                                   PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:
                                   PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:
                                   PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:
                                   PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:
                                   PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:
                                   PMARSPAR                                     
          RETURN
.
DEPMARQ3  RESET     KEY29                                                       
          DELETE    PMSARQA3,KEY29                                              
          RETURN
.
RLPMARQ3  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READL     PMSARQA3,KEY29;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:
                                   PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:
                                   PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:
                                   PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:
                                   PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:
                                   PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:
                                   PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:
                                   PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:
                                   PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:
                                   PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:
                                   PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:
                                   PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:
                                   PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:
                                   PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:
                                   PMARSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMARQ3  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSARQA3;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:      
                             PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:      
                             PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:      
                             PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:      
                             PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:      
                             PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:      
                             PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:      
                             PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:      
                             PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:      
                             PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:      
                             PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:      
                             PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:      
                             PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:      
                             PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:      
                             PMARSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMARQ3  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSARQA3;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:      
                             PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:      
                             PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:      
                             PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:      
                             PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:      
                             PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:      
                             PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:      
                             PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:      
                             PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:      
                             PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:      
                             PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:      
                             PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:      
                             PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:      
                             PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:      
                             PMARSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMARQ3  RESET     KEY29                                                       
          UNLOCK    PMSARQA3                                                    
          RETURN
.
RSPMARQ4  RESET     KEY30                                                       
          READ      PMSARQA4,KEY30;;                                            
          RETURN
.
RAPMARQ4  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      PMSARQA4,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMARQ4  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      PMSARQA4,KEY30;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:
                                   PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:
                                   PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:
                                   PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:
                                   PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:
                                   PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:
                                   PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:
                                   PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:
                                   PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:
                                   PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:
                                   PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:
                                   PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:
                                   PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:
                                   PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:
                                   PMARSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMARQ4  MOVE      ZERO,OVRCD                                                  
          READKS    PMSARQA4;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:      
                             PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:      
                             PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:      
                             PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:      
                             PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:      
                             PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:      
                             PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:      
                             PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:      
                             PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:      
                             PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:      
                             PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:      
                             PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:      
                             PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:      
                             PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:      
                             PMARSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMARQ4  MOVE      ZERO,OVRCD                                                  
          READKP    PMSARQA4;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:      
                             PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:      
                             PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:      
                             PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:      
                             PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:      
                             PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:      
                             PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:      
                             PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:      
                             PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:      
                             PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:      
                             PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:      
                             PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:      
                             PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:      
                             PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:      
                             PMARSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMARQ4  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSARQA4;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:      
                             PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:      
                             PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:      
                             PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:      
                             PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:      
                             PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:      
                             PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:      
                             PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:      
                             PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:      
                             PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:      
                             PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:      
                             PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:      
                             PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:      
                             PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:      
                             PMARSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMARQ4  RESET     KEY30                                                       
          WRITE     PMSARQA4,KEY30;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:
                                   PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:
                                   PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:
                                   PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:
                                   PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:
                                   PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:
                                   PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:
                                   PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:
                                   PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:
                                   PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:
                                   PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:
                                   PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:
                                   PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:
                                   PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:
                                   PMARSPAR                                     
          RETURN
.
DEPMARQ4  RESET     KEY30                                                       
          DELETE    PMSARQA4,KEY30                                              
          RETURN
.
RLPMARQ4  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READL     PMSARQA4,KEY30;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:
                                   PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:
                                   PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:
                                   PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:
                                   PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:
                                   PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:
                                   PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:
                                   PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:
                                   PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:
                                   PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:
                                   PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:
                                   PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:
                                   PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:
                                   PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:
                                   PMARSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMARQ4  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSARQA4;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:      
                             PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:      
                             PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:      
                             PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:      
                             PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:      
                             PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:      
                             PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:      
                             PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:      
                             PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:      
                             PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:      
                             PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:      
                             PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:      
                             PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:      
                             PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:      
                             PMARSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMARQ4  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSARQA4;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:      
                             PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:      
                             PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:      
                             PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:      
                             PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:      
                             PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:      
                             PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:      
                             PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:      
                             PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:      
                             PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:      
                             PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:      
                             PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:      
                             PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:      
                             PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:      
                             PMARSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMARQ4  RESET     KEY30                                                       
          UNLOCK    PMSARQA4                                                    
          RETURN
.
RSPMARQ5  RESET     KEY33                                                       
          READ      PMSARQA5,KEY33;;                                            
          RETURN
.
RAPMARQ5  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      PMSARQA5,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMARQ5  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      PMSARQA5,KEY33;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:
                                   PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:
                                   PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:
                                   PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:
                                   PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:
                                   PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:
                                   PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:
                                   PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:
                                   PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:
                                   PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:
                                   PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:
                                   PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:
                                   PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:
                                   PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:
                                   PMARSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMARQ5  MOVE      ZERO,OVRCD                                                  
          READKS    PMSARQA5;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:      
                             PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:      
                             PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:      
                             PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:      
                             PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:      
                             PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:      
                             PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:      
                             PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:      
                             PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:      
                             PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:      
                             PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:      
                             PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:      
                             PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:      
                             PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:      
                             PMARSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMARQ5  MOVE      ZERO,OVRCD                                                  
          READKP    PMSARQA5;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:      
                             PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:      
                             PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:      
                             PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:      
                             PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:      
                             PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:      
                             PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:      
                             PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:      
                             PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:      
                             PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:      
                             PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:      
                             PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:      
                             PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:      
                             PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:      
                             PMARSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMARQ5  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSARQA5;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:      
                             PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:      
                             PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:      
                             PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:      
                             PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:      
                             PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:      
                             PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:      
                             PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:      
                             PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:      
                             PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:      
                             PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:      
                             PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:      
                             PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:      
                             PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:      
                             PMARSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMARQ5  RESET     KEY33                                                       
          WRITE     PMSARQA5,KEY33;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:
                                   PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:
                                   PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:
                                   PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:
                                   PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:
                                   PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:
                                   PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:
                                   PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:
                                   PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:
                                   PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:
                                   PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:
                                   PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:
                                   PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:
                                   PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:
                                   PMARSPAR                                     
          RETURN
.
DEPMARQ5  RESET     KEY33                                                       
          DELETE    PMSARQA5,KEY33                                              
          RETURN
.
RLPMARQ5  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READL     PMSARQA5,KEY33;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:
                                   PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:
                                   PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:
                                   PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:
                                   PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:
                                   PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:
                                   PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:
                                   PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:
                                   PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:
                                   PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:
                                   PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:
                                   PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:
                                   PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:
                                   PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:
                                   PMARSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMARQ5  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSARQA5;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:      
                             PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:      
                             PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:      
                             PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:      
                             PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:      
                             PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:      
                             PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:      
                             PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:      
                             PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:      
                             PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:      
                             PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:      
                             PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:      
                             PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:      
                             PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:      
                             PMARSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMARQ5  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSARQA5;PMARREQN,PMARURNO,PMARVISN,PMARREQD,PMARREQT:      
                             PMARRTYP,PMARRESC,PMARUNIT,PMARTEAM,PMARPRTY:      
                             PMARDIAG,PMARPROC,PMARPROD,PMARPRO1,PMARPRO2:      
                             PMARSIDE,PMARCONO,PMARCONF,PMARPPBY,PMARIHOS:      
                             PMARPSAH,PMARPHOS,PMARPPAD,PMARBTYP,PMARANPR:      
                             PMARCCBR,PMARUDF1,PMARANTY,PMARODUR,PMARPARC:      
                             PMARCLTR,PMARHGHT,PMARWGHT,PMARCBMI,PMARCOAG:      
                             PMARRACG,PMARAPLT,PMARITCR,PMARINTR,PMARCLAM:      
                             PMARSRCR,PMARREFC,PMARPRAC,PMARPCNT,PMARLSTS:      
                             PMARINTS,PMARSHTN,PMARPLOS,PMARNWHC,PMARPRDT:      
                             PMARTHLC,PMARIMPR,PMARIMPD,PMARIMPO,PMARBNGR:      
                             PMAREXFX,PMARSTAT,PMARMAPR,PMARTHRQ,PMARRECC:      
                             PMARRRCL,PMARRREM,PMARTSRC,PMARCDAT,PMARCTIM:      
                             PMARCUID,PMARUDAT,PMARUTIM,PMARUUID,PMARAPRR:      
                             PMARSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMARQ5  RESET     KEY33                                                       
          UNLOCK    PMSARQA5                                                    
          RETURN
.
