.
. PMSAPGIO    
. --------
. Filename     : pmsapgaf.dat
.
RSPMAPG1  RESET     KEY31                                                       
          READ      PMSAPGA1,KEY31;;                                            
          RETURN
.
RAPMAPG1  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSAPGA1,KEY31;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMAPG1  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSAPGA1,KEY31;PMAGURNO,PMAGATYP,PMAGCLAM,PMAGFUND,PMAGTABT:
                                   PMAGEDAT,PMAGPCDE,PMAGICDE,PMAGVERS,PMAGSNAP:
                                   PMAGMEST,PMAGMEEN,PMAGFADM,PMAGTIMP,PMAGDADM:
                                   PMAGTOCC,PMAGEMOR,PMAGCMR1,PMAGCMR2,PMAGCMR3:
                                   PMAGCMR4,PMAGCMP1,PMAGCMP2,PMAGCMP3,PMAGCMP4:
                                   PMAGASSO,PMAGACPA,PMAGACPD,PMAGLSPA,PMAGLSPD:
                                   PMAGEMST,PMAGRFDT,PMAGDART,PMAGSRPD,PMAGSRPS:
                                   PMAGSRPN,PMAGSRPA,PMAGSRPP,PMAGSRPM,PMAGSRPG:
                                   PMAGSRPT,PMAGSRPC,PMAGDRAE,PMAGEMSA,PMAGDCRD:
                                   PMAGSRAD,PMAGSRAS,PMAGSRAN,PMAGSRAA,PMAGSRAP:
                                   PMAGSRAM,PMAGSRAG,PMAGSRAT,PMAGSRAC,PMAGDEFP:
                                   PMAGCAMN,PMAGESAS,PMAGESSC,PMAGEESC,PMAGVDEE:
                                   PMAGEEAS,PMAGDRCA,PMAGPACS,PMAGDWPC,PMAGPPPC:
                                   PMAGAPPC,PMAGPACE,PMAGPROS,PMAGDFPF,PMAGRDIF:
                                   PMAGDTUG,PMAGD06M,PMAGD10M,PMAGFRAI,PMAGPITD:
                                   PMAGF12M,PMAGWL12,PMAGDCRC,PMAGIDES,PMAGUDT1:
                                   PMAGUDT2,PMAGUDT3,PMAGUCT1,PMAGUCT2,PMAGUCT3:
                                   PMAGUCT4,PMAGUCT5,PMAGUYN1,PMAGUYN2,PMAGUYN3:
                                   PMAGUYN4,PMAGUYN5,PMAGCDAT,PMAGCTIM,PMAGCUID:
                                   PMAGUDAT,PMAGUTIM,PMAGUUID,PMAGDUGO,PMAGDWLK:
                                   PMAGSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMAPG1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSAPGA1;PMAGURNO,PMAGATYP,PMAGCLAM,PMAGFUND,PMAGTABT:      
                             PMAGEDAT,PMAGPCDE,PMAGICDE,PMAGVERS,PMAGSNAP:      
                             PMAGMEST,PMAGMEEN,PMAGFADM,PMAGTIMP,PMAGDADM:      
                             PMAGTOCC,PMAGEMOR,PMAGCMR1,PMAGCMR2,PMAGCMR3:      
                             PMAGCMR4,PMAGCMP1,PMAGCMP2,PMAGCMP3,PMAGCMP4:      
                             PMAGASSO,PMAGACPA,PMAGACPD,PMAGLSPA,PMAGLSPD:      
                             PMAGEMST,PMAGRFDT,PMAGDART,PMAGSRPD,PMAGSRPS:      
                             PMAGSRPN,PMAGSRPA,PMAGSRPP,PMAGSRPM,PMAGSRPG:      
                             PMAGSRPT,PMAGSRPC,PMAGDRAE,PMAGEMSA,PMAGDCRD:      
                             PMAGSRAD,PMAGSRAS,PMAGSRAN,PMAGSRAA,PMAGSRAP:      
                             PMAGSRAM,PMAGSRAG,PMAGSRAT,PMAGSRAC,PMAGDEFP:      
                             PMAGCAMN,PMAGESAS,PMAGESSC,PMAGEESC,PMAGVDEE:      
                             PMAGEEAS,PMAGDRCA,PMAGPACS,PMAGDWPC,PMAGPPPC:      
                             PMAGAPPC,PMAGPACE,PMAGPROS,PMAGDFPF,PMAGRDIF:      
                             PMAGDTUG,PMAGD06M,PMAGD10M,PMAGFRAI,PMAGPITD:      
                             PMAGF12M,PMAGWL12,PMAGDCRC,PMAGIDES,PMAGUDT1:      
                             PMAGUDT2,PMAGUDT3,PMAGUCT1,PMAGUCT2,PMAGUCT3:      
                             PMAGUCT4,PMAGUCT5,PMAGUYN1,PMAGUYN2,PMAGUYN3:      
                             PMAGUYN4,PMAGUYN5,PMAGCDAT,PMAGCTIM,PMAGCUID:      
                             PMAGUDAT,PMAGUTIM,PMAGUUID,PMAGDUGO,PMAGDWLK:      
                             PMAGSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMAPG1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSAPGA1;PMAGURNO,PMAGATYP,PMAGCLAM,PMAGFUND,PMAGTABT:      
                             PMAGEDAT,PMAGPCDE,PMAGICDE,PMAGVERS,PMAGSNAP:      
                             PMAGMEST,PMAGMEEN,PMAGFADM,PMAGTIMP,PMAGDADM:      
                             PMAGTOCC,PMAGEMOR,PMAGCMR1,PMAGCMR2,PMAGCMR3:      
                             PMAGCMR4,PMAGCMP1,PMAGCMP2,PMAGCMP3,PMAGCMP4:      
                             PMAGASSO,PMAGACPA,PMAGACPD,PMAGLSPA,PMAGLSPD:      
                             PMAGEMST,PMAGRFDT,PMAGDART,PMAGSRPD,PMAGSRPS:      
                             PMAGSRPN,PMAGSRPA,PMAGSRPP,PMAGSRPM,PMAGSRPG:      
                             PMAGSRPT,PMAGSRPC,PMAGDRAE,PMAGEMSA,PMAGDCRD:      
                             PMAGSRAD,PMAGSRAS,PMAGSRAN,PMAGSRAA,PMAGSRAP:      
                             PMAGSRAM,PMAGSRAG,PMAGSRAT,PMAGSRAC,PMAGDEFP:      
                             PMAGCAMN,PMAGESAS,PMAGESSC,PMAGEESC,PMAGVDEE:      
                             PMAGEEAS,PMAGDRCA,PMAGPACS,PMAGDWPC,PMAGPPPC:      
                             PMAGAPPC,PMAGPACE,PMAGPROS,PMAGDFPF,PMAGRDIF:      
                             PMAGDTUG,PMAGD06M,PMAGD10M,PMAGFRAI,PMAGPITD:      
                             PMAGF12M,PMAGWL12,PMAGDCRC,PMAGIDES,PMAGUDT1:      
                             PMAGUDT2,PMAGUDT3,PMAGUCT1,PMAGUCT2,PMAGUCT3:      
                             PMAGUCT4,PMAGUCT5,PMAGUYN1,PMAGUYN2,PMAGUYN3:      
                             PMAGUYN4,PMAGUYN5,PMAGCDAT,PMAGCTIM,PMAGCUID:      
                             PMAGUDAT,PMAGUTIM,PMAGUUID,PMAGDUGO,PMAGDWLK:      
                             PMAGSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMAPG1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSAPGA1;PMAGURNO,PMAGATYP,PMAGCLAM,PMAGFUND,PMAGTABT:      
                             PMAGEDAT,PMAGPCDE,PMAGICDE,PMAGVERS,PMAGSNAP:      
                             PMAGMEST,PMAGMEEN,PMAGFADM,PMAGTIMP,PMAGDADM:      
                             PMAGTOCC,PMAGEMOR,PMAGCMR1,PMAGCMR2,PMAGCMR3:      
                             PMAGCMR4,PMAGCMP1,PMAGCMP2,PMAGCMP3,PMAGCMP4:      
                             PMAGASSO,PMAGACPA,PMAGACPD,PMAGLSPA,PMAGLSPD:      
                             PMAGEMST,PMAGRFDT,PMAGDART,PMAGSRPD,PMAGSRPS:      
                             PMAGSRPN,PMAGSRPA,PMAGSRPP,PMAGSRPM,PMAGSRPG:      
                             PMAGSRPT,PMAGSRPC,PMAGDRAE,PMAGEMSA,PMAGDCRD:      
                             PMAGSRAD,PMAGSRAS,PMAGSRAN,PMAGSRAA,PMAGSRAP:      
                             PMAGSRAM,PMAGSRAG,PMAGSRAT,PMAGSRAC,PMAGDEFP:      
                             PMAGCAMN,PMAGESAS,PMAGESSC,PMAGEESC,PMAGVDEE:      
                             PMAGEEAS,PMAGDRCA,PMAGPACS,PMAGDWPC,PMAGPPPC:      
                             PMAGAPPC,PMAGPACE,PMAGPROS,PMAGDFPF,PMAGRDIF:      
                             PMAGDTUG,PMAGD06M,PMAGD10M,PMAGFRAI,PMAGPITD:      
                             PMAGF12M,PMAGWL12,PMAGDCRC,PMAGIDES,PMAGUDT1:      
                             PMAGUDT2,PMAGUDT3,PMAGUCT1,PMAGUCT2,PMAGUCT3:      
                             PMAGUCT4,PMAGUCT5,PMAGUYN1,PMAGUYN2,PMAGUYN3:      
                             PMAGUYN4,PMAGUYN5,PMAGCDAT,PMAGCTIM,PMAGCUID:      
                             PMAGUDAT,PMAGUTIM,PMAGUUID,PMAGDUGO,PMAGDWLK:      
                             PMAGSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMAPG1  RESET     KEY31                                                       
          WRITE     PMSAPGA1,KEY31;PMAGURNO,PMAGATYP,PMAGCLAM,PMAGFUND,PMAGTABT:
                                   PMAGEDAT,PMAGPCDE,PMAGICDE,PMAGVERS,PMAGSNAP:
                                   PMAGMEST,PMAGMEEN,PMAGFADM,PMAGTIMP,PMAGDADM:
                                   PMAGTOCC,PMAGEMOR,PMAGCMR1,PMAGCMR2,PMAGCMR3:
                                   PMAGCMR4,PMAGCMP1,PMAGCMP2,PMAGCMP3,PMAGCMP4:
                                   PMAGASSO,PMAGACPA,PMAGACPD,PMAGLSPA,PMAGLSPD:
                                   PMAGEMST,PMAGRFDT,PMAGDART,PMAGSRPD,PMAGSRPS:
                                   PMAGSRPN,PMAGSRPA,PMAGSRPP,PMAGSRPM,PMAGSRPG:
                                   PMAGSRPT,PMAGSRPC,PMAGDRAE,PMAGEMSA,PMAGDCRD:
                                   PMAGSRAD,PMAGSRAS,PMAGSRAN,PMAGSRAA,PMAGSRAP:
                                   PMAGSRAM,PMAGSRAG,PMAGSRAT,PMAGSRAC,PMAGDEFP:
                                   PMAGCAMN,PMAGESAS,PMAGESSC,PMAGEESC,PMAGVDEE:
                                   PMAGEEAS,PMAGDRCA,PMAGPACS,PMAGDWPC,PMAGPPPC:
                                   PMAGAPPC,PMAGPACE,PMAGPROS,PMAGDFPF,PMAGRDIF:
                                   PMAGDTUG,PMAGD06M,PMAGD10M,PMAGFRAI,PMAGPITD:
                                   PMAGF12M,PMAGWL12,PMAGDCRC,PMAGIDES,PMAGUDT1:
                                   PMAGUDT2,PMAGUDT3,PMAGUCT1,PMAGUCT2,PMAGUCT3:
                                   PMAGUCT4,PMAGUCT5,PMAGUYN1,PMAGUYN2,PMAGUYN3:
                                   PMAGUYN4,PMAGUYN5,PMAGCDAT,PMAGCTIM,PMAGCUID:
                                   PMAGUDAT,PMAGUTIM,PMAGUUID,PMAGDUGO,PMAGDWLK:
                                   PMAGSPAR                                     
          RETURN
.
DEPMAPG1  RESET     KEY31                                                       
          DELETE    PMSAPGA1,KEY31                                              
          RETURN
.
RLPMAPG1  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READL     PMSAPGA1,KEY31;PMAGURNO,PMAGATYP,PMAGCLAM,PMAGFUND,PMAGTABT:
                                   PMAGEDAT,PMAGPCDE,PMAGICDE,PMAGVERS,PMAGSNAP:
                                   PMAGMEST,PMAGMEEN,PMAGFADM,PMAGTIMP,PMAGDADM:
                                   PMAGTOCC,PMAGEMOR,PMAGCMR1,PMAGCMR2,PMAGCMR3:
                                   PMAGCMR4,PMAGCMP1,PMAGCMP2,PMAGCMP3,PMAGCMP4:
                                   PMAGASSO,PMAGACPA,PMAGACPD,PMAGLSPA,PMAGLSPD:
                                   PMAGEMST,PMAGRFDT,PMAGDART,PMAGSRPD,PMAGSRPS:
                                   PMAGSRPN,PMAGSRPA,PMAGSRPP,PMAGSRPM,PMAGSRPG:
                                   PMAGSRPT,PMAGSRPC,PMAGDRAE,PMAGEMSA,PMAGDCRD:
                                   PMAGSRAD,PMAGSRAS,PMAGSRAN,PMAGSRAA,PMAGSRAP:
                                   PMAGSRAM,PMAGSRAG,PMAGSRAT,PMAGSRAC,PMAGDEFP:
                                   PMAGCAMN,PMAGESAS,PMAGESSC,PMAGEESC,PMAGVDEE:
                                   PMAGEEAS,PMAGDRCA,PMAGPACS,PMAGDWPC,PMAGPPPC:
                                   PMAGAPPC,PMAGPACE,PMAGPROS,PMAGDFPF,PMAGRDIF:
                                   PMAGDTUG,PMAGD06M,PMAGD10M,PMAGFRAI,PMAGPITD:
                                   PMAGF12M,PMAGWL12,PMAGDCRC,PMAGIDES,PMAGUDT1:
                                   PMAGUDT2,PMAGUDT3,PMAGUCT1,PMAGUCT2,PMAGUCT3:
                                   PMAGUCT4,PMAGUCT5,PMAGUYN1,PMAGUYN2,PMAGUYN3:
                                   PMAGUYN4,PMAGUYN5,PMAGCDAT,PMAGCTIM,PMAGCUID:
                                   PMAGUDAT,PMAGUTIM,PMAGUUID,PMAGDUGO,PMAGDWLK:
                                   PMAGSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMAPG1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSAPGA1;PMAGURNO,PMAGATYP,PMAGCLAM,PMAGFUND,PMAGTABT:      
                             PMAGEDAT,PMAGPCDE,PMAGICDE,PMAGVERS,PMAGSNAP:      
                             PMAGMEST,PMAGMEEN,PMAGFADM,PMAGTIMP,PMAGDADM:      
                             PMAGTOCC,PMAGEMOR,PMAGCMR1,PMAGCMR2,PMAGCMR3:      
                             PMAGCMR4,PMAGCMP1,PMAGCMP2,PMAGCMP3,PMAGCMP4:      
                             PMAGASSO,PMAGACPA,PMAGACPD,PMAGLSPA,PMAGLSPD:      
                             PMAGEMST,PMAGRFDT,PMAGDART,PMAGSRPD,PMAGSRPS:      
                             PMAGSRPN,PMAGSRPA,PMAGSRPP,PMAGSRPM,PMAGSRPG:      
                             PMAGSRPT,PMAGSRPC,PMAGDRAE,PMAGEMSA,PMAGDCRD:      
                             PMAGSRAD,PMAGSRAS,PMAGSRAN,PMAGSRAA,PMAGSRAP:      
                             PMAGSRAM,PMAGSRAG,PMAGSRAT,PMAGSRAC,PMAGDEFP:      
                             PMAGCAMN,PMAGESAS,PMAGESSC,PMAGEESC,PMAGVDEE:      
                             PMAGEEAS,PMAGDRCA,PMAGPACS,PMAGDWPC,PMAGPPPC:      
                             PMAGAPPC,PMAGPACE,PMAGPROS,PMAGDFPF,PMAGRDIF:      
                             PMAGDTUG,PMAGD06M,PMAGD10M,PMAGFRAI,PMAGPITD:      
                             PMAGF12M,PMAGWL12,PMAGDCRC,PMAGIDES,PMAGUDT1:      
                             PMAGUDT2,PMAGUDT3,PMAGUCT1,PMAGUCT2,PMAGUCT3:      
                             PMAGUCT4,PMAGUCT5,PMAGUYN1,PMAGUYN2,PMAGUYN3:      
                             PMAGUYN4,PMAGUYN5,PMAGCDAT,PMAGCTIM,PMAGCUID:      
                             PMAGUDAT,PMAGUTIM,PMAGUUID,PMAGDUGO,PMAGDWLK:      
                             PMAGSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMAPG1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSAPGA1;PMAGURNO,PMAGATYP,PMAGCLAM,PMAGFUND,PMAGTABT:      
                             PMAGEDAT,PMAGPCDE,PMAGICDE,PMAGVERS,PMAGSNAP:      
                             PMAGMEST,PMAGMEEN,PMAGFADM,PMAGTIMP,PMAGDADM:      
                             PMAGTOCC,PMAGEMOR,PMAGCMR1,PMAGCMR2,PMAGCMR3:      
                             PMAGCMR4,PMAGCMP1,PMAGCMP2,PMAGCMP3,PMAGCMP4:      
                             PMAGASSO,PMAGACPA,PMAGACPD,PMAGLSPA,PMAGLSPD:      
                             PMAGEMST,PMAGRFDT,PMAGDART,PMAGSRPD,PMAGSRPS:      
                             PMAGSRPN,PMAGSRPA,PMAGSRPP,PMAGSRPM,PMAGSRPG:      
                             PMAGSRPT,PMAGSRPC,PMAGDRAE,PMAGEMSA,PMAGDCRD:      
                             PMAGSRAD,PMAGSRAS,PMAGSRAN,PMAGSRAA,PMAGSRAP:      
                             PMAGSRAM,PMAGSRAG,PMAGSRAT,PMAGSRAC,PMAGDEFP:      
                             PMAGCAMN,PMAGESAS,PMAGESSC,PMAGEESC,PMAGVDEE:      
                             PMAGEEAS,PMAGDRCA,PMAGPACS,PMAGDWPC,PMAGPPPC:      
                             PMAGAPPC,PMAGPACE,PMAGPROS,PMAGDFPF,PMAGRDIF:      
                             PMAGDTUG,PMAGD06M,PMAGD10M,PMAGFRAI,PMAGPITD:      
                             PMAGF12M,PMAGWL12,PMAGDCRC,PMAGIDES,PMAGUDT1:      
                             PMAGUDT2,PMAGUDT3,PMAGUCT1,PMAGUCT2,PMAGUCT3:      
                             PMAGUCT4,PMAGUCT5,PMAGUYN1,PMAGUYN2,PMAGUYN3:      
                             PMAGUYN4,PMAGUYN5,PMAGCDAT,PMAGCTIM,PMAGCUID:      
                             PMAGUDAT,PMAGUTIM,PMAGUUID,PMAGDUGO,PMAGDWLK:      
                             PMAGSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMAPG1  RESET     KEY31                                                       
          UNLOCK    PMSAPGA1                                                    
          RETURN
.
