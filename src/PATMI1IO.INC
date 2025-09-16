. *****************************************************************************
. *                                                                           *
. *  Include Name :  PATMI1FD                                                 *
. *                                                                           *
. *  Function     :  I/O for patmi1af file                                    *
. *                                                                           *
. *  Mods         :                                                           *
. *      V10.03.01  11/11/2011 Mike Laming        CAR 251645                  *
. *                 Moved PTMILSDN & PTMIOGNO out of Spare                    *
. *      V10.02.01  13/10/2011 Mike Laming        CAR 251645                  *
. *                 Added "Linked Stat Disch No." & "Orig Admn No." in Spare  *
. *                 PTMILSDN & PTMIOGNO                                       *
. *      V10.01.02  11/01/2011 Jill Parkinson     CAR 233269                  *
. *                 Added PTMI3BDY and PTMI3BAD                               *
. *      V10.01.01  24/11/2010 Jill Parkinson     CAR 233154                  *
. *                 Added PTMICONB and created/updated fields                 *
. *      V9.08.02   28/11/2006 Ebon Clements      CAR 120011                  *
. *                 Added PTMIFINV                                            *
. *      V9.02.03   22/11/2002 Sandra Barcham     SRF 33570                   *
. *                 Added index 8                                             *
. *      V9.02.02   24/10/2002 Tracey Nguyen      SRF 20135 HOSClaims Phase#1 *
. *                 Added PTMIDFAS
. *      V9.02.01   18.10.01 Jill Habasque                                    *
. *                 Added expected bed                                        *
. *                 V5.08.01 15/08/2000  Caleb Sharman                        *
. *                          Changed Health Fund variables to be 8 chars      *
. *                  24/01/2000  J Habasque                                   *
. *                  Added index 7                                            *
. *                  02/07/1999  Katie Nelson                                 *
. *                  Added OPPTMIS5 OPPTMIS6                                  *
. *                  28/06/1999  Nicole Harrington                            *
. *                  Added RETURN to UPLMISS4                                 *
. *****************************************************************************
.
.       FIRST ADMISSION  I/O
.
RAPTMIS1
RDAMISS1 RESET     KEY8
         MOVE      ZERO,OVRCD
         READ      PATMI1A1,KEY8;ANS
         GOTO      OVERCOND IF OVER
         RETURN  
.
RSPTMIS1
RDSMISS1 RESET     KEY8
         READ      PATMI1A1,KEY8;;
         RETURN  
.
RDPTMIS1
RDMISS1  MOVE      ZERO,OVRCD
         RESET     KEY8
         READ      PATMI1A1,KEY8;DAADMNO,AURNO,ADATE,ATIME:
                                 DASTAT,APORT,ATRANNO,AINVPRT,ALACDTE:
                                 ACANCEL,AWARD,ABED,ADOCTR,ADOCTA:
                                 ADOCTL,ASRCE,ATYPE,ACLSS,ACARE,AFUNDH:
                                 AFNDTB,AFNDMM,AELIG,AVISIT,AALERG:
                                 AILLN,ADIAG1,ADIAG2,ADISC,ADOCTT,ACLSSFT:
                                 AALLOW,AMBS,ACLAIM,ADIET,APLOCCR,ASTAY:
                                 ADYHOSP,AMEMB,AMEMBNO:
                                 ACOMM1,ACOMM2,APLUR,APURGE,AUSR1:
                                 AUSR2,AUSR3,AUSR4,AUSR5,AUSR6,AUSR7:
                                 ADSCHI,ARDRNAM,AFNDYY,AFNDCG:
                                 AOCCDTE,ACODDTE,ARETDTE,AMUMADM,DPTMIPVI:
                                 ABWGHT:
                                 PTMSRFGP,PTMSGPPC,PTMSFHAN,PTMSECRA:
                                 PTMSMGIN,DPTMIDDI,PTMIGPPT,PTMIDOFR:
                                 PTMIREFD,PTMIDFCN,PTMIPHPU,PTMIAGNC:
                                 PTMIESSF,PTMIUSR8,PTMIUSR9,PTMIUSR0:
                                 PTMIPDRG,PTMIOPER,PTMIXWRD,PTMIADOC:
                                 PTMIREGS,PTMIUYN1,PTMIUYN2,PTMIPANO:
                                 PTMIPADT,PTMIPCMX,PTMIGSTA,PTMICMXP:
                                 PTMIEBED,PTMIDMOV,PTMIDFAS,PTMICRCD:
                                 PTMIFINV,PTMICONB,PTMIDATC,PTMITIMC:
                                 PTMIWEBC,PTMIDATU,PTMITIMU,PTMIWEBU:
                                 PTMI3BDY,PTMI3BAD,PTMILSDN,PTMIOGNO:
                                 PTMSSPAR
.
         GOTO      OVERCOND IF OVER
         MOVE      DAADMNO,AADMNO
         MOVE      DASTAT,ASTAT
         MOVE      DPTMIPVI,PTMIPVIS
         MOVE      DPTMIDDI,PTMIDDIG
         MOVE      AADMNO,SSAADMNO
         MOVE      ASTAT,SSASTAT
         MOVE      ADATE,SSADATE
.
         CALL      RDPMVX11
         GOTO      OVERCOND IF OVER
         RETURN  
.
.
UUPTMIS1 UNLOCK    PATMI1A1
         RETURN  
.
.
RLPTMIS1 MOVE      ZERO,OVRCD
         RESET     KEY8
         READL     PATMI1A1,KEY8;DAADMNO,AURNO,ADATE,ATIME:
                                 DASTAT,APORT,ATRANNO,AINVPRT,ALACDTE:
                                 ACANCEL,AWARD,ABED,ADOCTR,ADOCTA:
                                 ADOCTL,ASRCE,ATYPE,ACLSS,ACARE,AFUNDH:
                                 AFNDTB,AFNDMM,AELIG,AVISIT,AALERG:
                                 AILLN,ADIAG1,ADIAG2,ADISC,ADOCTT,ACLSSFT:
                                 AALLOW,AMBS,ACLAIM,ADIET,APLOCCR,ASTAY:
                                 ADYHOSP,AMEMB,AMEMBNO:
                                 ACOMM1,ACOMM2,APLUR,APURGE,AUSR1:
                                 AUSR2,AUSR3,AUSR4,AUSR5,AUSR6,AUSR7:
                                 ADSCHI,ARDRNAM,AFNDYY,AFNDCG:
                                 AOCCDTE,ACODDTE,ARETDTE,AMUMADM,DPTMIPVI:
                                 ABWGHT:
                                 PTMSRFGP,PTMSGPPC,PTMSFHAN,PTMSECRA:
                                 PTMSMGIN,DPTMIDDI,PTMIGPPT,PTMIDOFR:
                                 PTMIREFD,PTMIDFCN,PTMIPHPU,PTMIAGNC:
                                 PTMIESSF,PTMIUSR8,PTMIUSR9,PTMIUSR0:
                                 PTMIPDRG,PTMIOPER,PTMIXWRD,PTMIADOC:
                                 PTMIREGS,PTMIUYN1,PTMIUYN2,PTMIPANO:
                                 PTMIPADT,PTMIPCMX,PTMIGSTA,PTMICMXP:
                                 PTMIEBED,PTMIDMOV,PTMIDFAS,PTMICRCD:
                                 PTMIFINV,PTMICONB,PTMIDATC,PTMITIMC:
                                 PTMIWEBC,PTMIDATU,PTMITIMU,PTMIWEBU:
                                 PTMI3BDY,PTMI3BAD,PTMILSDN,PTMIOGNO:
                                 PTMSSPAR
         GOTO      OVERCOND IF OVER
         GOTO      OVERLOCK IF LOCKED
         MOVE      DAADMNO,AADMNO
         MOVE      DASTAT,ASTAT
         MOVE      DPTMIPVI,PTMIPVIS
         MOVE      DPTMIDDI,PTMIDDIG
         MOVE      AADMNO,SSAADMNO
         MOVE      ASTAT,SSASTAT
         MOVE      ADATE,SSADATE
.
         CALL      RDPMVX11
         GOTO      OVERCOND IF OVER
.
         RETURN  
.
RKPTMIS1
RDKMISS1 MOVE      ZERO,OVRCD
         READKS    PATMI1A1;DAADMNO,AURNO,ADATE,ATIME:
                                 DASTAT,APORT,ATRANNO,AINVPRT,ALACDTE:
                                 ACANCEL,AWARD,ABED,ADOCTR,ADOCTA:
                                 ADOCTL,ASRCE,ATYPE,ACLSS,ACARE,AFUNDH:
                                 AFNDTB,AFNDMM,AELIG,AVISIT,AALERG:
                                 AILLN,ADIAG1,ADIAG2,ADISC,ADOCTT,ACLSSFT:
                                 AALLOW,AMBS,ACLAIM,ADIET,APLOCCR,ASTAY:
                                 ADYHOSP,AMEMB,AMEMBNO:
                                 ACOMM1,ACOMM2,APLUR,APURGE,AUSR1:
                                 AUSR2,AUSR3,AUSR4,AUSR5,AUSR6,AUSR7:
                                 ADSCHI,ARDRNAM,AFNDYY,AFNDCG:
                                 AOCCDTE,ACODDTE,ARETDTE,AMUMADM,DPTMIPVI:
                                 ABWGHT:        
                                 PTMSRFGP,PTMSGPPC,PTMSFHAN,PTMSECRA:
                                 PTMSMGIN,DPTMIDDI,PTMIGPPT,PTMIDOFR:        
                                 PTMIREFD,PTMIDFCN,PTMIPHPU,PTMIAGNC:
                                 PTMIESSF,PTMIUSR8,PTMIUSR9,PTMIUSR0:
                                 PTMIPDRG,PTMIOPER,PTMIXWRD,PTMIADOC:
                                 PTMIREGS,PTMIUYN1,PTMIUYN2,PTMIPANO:
                                 PTMIPADT,PTMIPCMX,PTMIGSTA,PTMICMXP:
                                 PTMIEBED,PTMIDMOV,PTMIDFAS,PTMICRCD:
                                 PTMIFINV,PTMICONB,PTMIDATC,PTMITIMC:
                                 PTMIWEBC,PTMIDATU,PTMITIMU,PTMIWEBU:
                                 PTMI3BDY,PTMI3BAD,PTMILSDN,PTMIOGNO:
                                 PTMSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DAADMNO,AADMNO
         MOVE      DASTAT,ASTAT
         MOVE      DPTMIPVI,PTMIPVIS
         MOVE      DPTMIDDI,PTMIDDIG
         MOVE      AADMNO,SSAADMNO
         MOVE      ASTAT,SSASTAT
         MOVE      ADATE,SSADATE
.
         PACK      KEY8,DAADMNO,SP70
         CALL      RDPMVX11
         GOTO      OVERCOND IF OVER
.
         RETURN
.
RPPTMIS1
RDPMISS1 MOVE      ZERO,OVRCD
         READKP    PATMI1A1;DAADMNO,AURNO,ADATE,ATIME:
                                 DASTAT,APORT,ATRANNO,AINVPRT,ALACDTE:
                                 ACANCEL,AWARD,ABED,ADOCTR,ADOCTA:
                                 ADOCTL,ASRCE,ATYPE,ACLSS,ACARE,AFUNDH:
                                 AFNDTB,AFNDMM,AELIG,AVISIT,AALERG:
                                 AILLN,ADIAG1,ADIAG2,ADISC,ADOCTT,ACLSSFT:
                                 AALLOW,AMBS,ACLAIM,ADIET,APLOCCR,ASTAY:
                                 ADYHOSP,AMEMB,AMEMBNO:
                                 ACOMM1,ACOMM2,APLUR,APURGE,AUSR1:
                                 AUSR2,AUSR3,AUSR4,AUSR5,AUSR6,AUSR7:
                                 ADSCHI,ARDRNAM,AFNDYY,AFNDCG:
                                 AOCCDTE,ACODDTE,ARETDTE,AMUMADM,DPTMIPVI:
                                 ABWGHT:         
                                 PTMSRFGP,PTMSGPPC,PTMSFHAN,PTMSECRA:
                                 PTMSMGIN,DPTMIDDI,PTMIGPPT,PTMIDOFR:        
                                 PTMIREFD,PTMIDFCN,PTMIPHPU,PTMIAGNC:
                                 PTMIESSF,PTMIUSR8,PTMIUSR9,PTMIUSR0:
                                 PTMIPDRG,PTMIOPER,PTMIXWRD,PTMIADOC:
                                 PTMIREGS,PTMIUYN1,PTMIUYN2,PTMIPANO:
                                 PTMIPADT,PTMIPCMX,PTMIGSTA,PTMICMXP:
                                 PTMIEBED,PTMIDMOV,PTMIDFAS,PTMICRCD:
                                 PTMIFINV,PTMICONB,PTMIDATC,PTMITIMC:
                                 PTMIWEBC,PTMIDATU,PTMITIMU,PTMIWEBU:
                                 PTMI3BDY,PTMI3BAD,PTMILSDN,PTMIOGNO:
                                 PTMSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DAADMNO,AADMNO
         MOVE      DASTAT,ASTAT
         MOVE      DPTMIPVI,PTMIPVIS
         MOVE      DPTMIDDI,PTMIDDIG
         MOVE      AADMNO,SSAADMNO
         MOVE      ASTAT,SSASTAT
         MOVE      ADATE,SSADATE
.
         PACK      KEY8,DAADMNO,SP70
         CALL      RDPMVX11
         GOTO      OVERCOND IF OVER
.
         RETURN
.
WRLMISS1 MOVE      PORT,APORT     ****** WRITE RECORD WITH LOCKING
         GOTO      WRMISS1A
.
WRMISS1  MOVE      SP2,APORT
.
WRMISS1A RESET     KEY8
         MOVE      ZERO,OVRCD
.
         MOVE      AADMNO,DAADMNO
         MOVE      ASTAT,DASTAT
         MOVE      PTMIPVIS,DPTMIPVI
         MOVE      PTMIDDIG,DPTMIDDI
         MOVE      PASSCODE,PTMIOPER
         PACK      PTMIDATC,CCC,CYY,CMM,CDD
         REP       " 0",PTMIDATC
         CLOCK     TIME,PTMITIMC
.
         WRITE     PATMI1A1,KEY8;KEY8,AURNO,ADATE,ATIME:
                                 DASTAT,APORT,ATRANNO,AINVPRT,ALACDTE:
                                 ACANCEL,AWARD,ABED,ADOCTR,ADOCTA:
                                 ADOCTL,ASRCE,ATYPE,ACLSS,ACARE,AFUNDH:
                                 AFNDTB,AFNDMM,AELIG,AVISIT,AALERG:
                                 AILLN,ADIAG1,ADIAG2,ADISC,ADOCTT,ACLSSFT:
                                 AALLOW,AMBS,ACLAIM,ADIET,APLOCCR,ASTAY:
                                 ADYHOSP,AMEMB,AMEMBNO:
                                 ACOMM1,ACOMM2,APLUR,APURGE,AUSR1:
                                 AUSR2,AUSR3,AUSR4,AUSR5,AUSR6,AUSR7:
                                 ADSCHI,ARDRNAM,AFNDYY,AFNDCG:
                                 AOCCDTE,ACODDTE,ARETDTE,AMUMADM,DPTMIPVI:
                                 ABWGHT:        
                                 PTMSRFGP,PTMSGPPC,PTMSFHAN,PTMSECRA:
                                 PTMSMGIN,DPTMIDDI,PTMIGPPT,PTMIDOFR:        
                                 PTMIREFD,PTMIDFCN,PTMIPHPU,PTMIAGNC:
                                 PTMIESSF,PTMIUSR8,PTMIUSR9,PTMIUSR0:
                                 PTMIPDRG,PTMIOPER,PTMIXWRD,PTMIADOC:
                                 PTMIREGS,PTMIUYN1,PTMIUYN2,PTMIPANO:
                                 PTMIPADT,PTMIPCMX,PTMIGSTA,PTMICMXP:
                                 PTMIEBED,PTMIDMOV,PTMIDFAS,PTMICRCD:
                                 PTMIFINV,PTMICONB,PTMIDATC,PTMITIMC:
                                 PTMIWEBC,PTMIDATU,PTMITIMU,PTMIWEBU:
                                 PTMI3BDY,PTMI3BAD,PTMILSDN,PTMIOGNO:
                                 PTMSSPAR
.
         RETURN  
.
.
UPPTMIS1
UPMISS1  MOVE      SP2,APORT       *******  RELEASE RECORD WITH UPDATE
.
UPLMISS1 MOVE      ZERO,OVRCD       *******  KEEP RECORD LOCK WITH UPDATE
.
         MOVE      AADMNO,DAADMNO
         MOVE      ASTAT,DASTAT
         MOVE      PTMIPVIS,DPTMIPVI
         MOVE      PTMIDDIG,DPTMIDDI
         PACK      PTMIDATU,CCC,CYY,CMM,CDD
         REP       " 0",PTMIDATU
         CLOCK     TIME,PTMITIMU
.
         UPDATE    PATMI1A1;DAADMNO,AURNO,ADATE,ATIME:
                                 DASTAT,APORT,ATRANNO,AINVPRT,ALACDTE:
                                 ACANCEL,AWARD,ABED,ADOCTR,ADOCTA:
                                 ADOCTL,ASRCE,ATYPE,ACLSS,ACARE,AFUNDH:
                                 AFNDTB,AFNDMM,AELIG,AVISIT,AALERG:
                                 AILLN,ADIAG1,ADIAG2,ADISC,ADOCTT,ACLSSFT:
                                 AALLOW,AMBS,ACLAIM,ADIET,APLOCCR,ASTAY:
                                 ADYHOSP,AMEMB,AMEMBNO:
                                 ACOMM1,ACOMM2,APLUR,APURGE,AUSR1:
                                 AUSR2,AUSR3,AUSR4,AUSR5,AUSR6,AUSR7:
                                 ADSCHI,ARDRNAM,AFNDYY,AFNDCG:
                                 AOCCDTE,ACODDTE,ARETDTE,AMUMADM,DPTMIPVI:
                                 ABWGHT:       
                                 PTMSRFGP,PTMSGPPC,PTMSFHAN,PTMSECRA:
                                 PTMSMGIN,DPTMIDDI,PTMIGPPT,PTMIDOFR:        
                                 PTMIREFD,PTMIDFCN,PTMIPHPU,PTMIAGNC:
                                 PTMIESSF,PTMIUSR8,PTMIUSR9,PTMIUSR0:
                                 PTMIPDRG,PTMIOPER,PTMIXWRD,PTMIADOC:
                                 PTMIREGS,PTMIUYN1,PTMIUYN2,PTMIPANO:
                                 PTMIPADT,PTMIPCMX,PTMIGSTA,PTMICMXP:
                                 PTMIEBED,PTMIDMOV,PTMIDFAS,PTMICRCD:
                                 PTMIFINV,PTMICONB,PTMIDATC,PTMITIMC:
                                 PTMIWEBC,PTMIDATU,PTMITIMU,PTMIWEBU:
                                 PTMI3BDY,PTMI3BAD,PTMILSDN,PTMIOGNO:
                                 PTMSSPAR
.
         RETURN
.
DEPTMIS1
DEMISS1  MOVE      ZERO,OVRCD
         RESET     KEY8
         DELETE    PATMI1A1,KEY8
.
         RETURN
.
.       SECOND ADMISSION  I/O
.
RDSMISS2 RESET     KEY9
         READ      PATMI1A2,KEY9;;
         RETURN  
.
RDMISS2  MOVE      ZERO,OVRCD
         RESET     KEY9
         READ      PATMI1A2,KEY9;DAADMNO,AURNO,ADATE,ATIME:
                                 DASTAT,APORT,ATRANNO,AINVPRT,ALACDTE:
                                 ACANCEL,AWARD,ABED,ADOCTR,ADOCTA:
                                 ADOCTL,ASRCE,ATYPE,ACLSS,ACARE,AFUNDH:
                                 AFNDTB,AFNDMM,AELIG,AVISIT,AALERG:
                                 AILLN,ADIAG1,ADIAG2,ADISC,ADOCTT,ACLSSFT:
                                 AALLOW,AMBS,ACLAIM,ADIET,APLOCCR,ASTAY:
                                 ADYHOSP,AMEMB,AMEMBNO:
                                 ACOMM1,ACOMM2,APLUR,APURGE,AUSR1:
                                 AUSR2,AUSR3,AUSR4,AUSR5,AUSR6,AUSR7:
                                 ADSCHI,ARDRNAM,AFNDYY,AFNDCG:
                                 AOCCDTE,ACODDTE,ARETDTE,AMUMADM,DPTMIPVI:
                                 ABWGHT:       
                                 PTMSRFGP,PTMSGPPC,PTMSFHAN,PTMSECRA:
                                 PTMSMGIN,DPTMIDDI,PTMIGPPT,PTMIDOFR:        
                                 PTMIREFD,PTMIDFCN,PTMIPHPU,PTMIAGNC:
                                 PTMIESSF,PTMIUSR8,PTMIUSR9,PTMIUSR0:
                                 PTMIPDRG,PTMIOPER,PTMIXWRD,PTMIADOC:
                                 PTMIREGS,PTMIUYN1,PTMIUYN2,PTMIPANO:
                                 PTMIPADT,PTMIPCMX,PTMIGSTA,PTMICMXP:
                                 PTMIEBED,PTMIDMOV,PTMIDFAS,PTMICRCD:
                                 PTMIFINV,PTMICONB,PTMIDATC,PTMITIMC:
                                 PTMIWEBC,PTMIDATU,PTMITIMU,PTMIWEBU:
                                 PTMI3BDY,PTMI3BAD,PTMILSDN,PTMIOGNO:
                                 PTMSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DAADMNO,AADMNO
         MOVE      DASTAT,ASTAT
         MOVE      DPTMIPVI,PTMIPVIS
         MOVE      DPTMIDDI,PTMIDDIG
.
         PACK      KEY8,DAADMNO,SP70
         CALL      RDPMVX11
         GOTO      OVERCOND IF OVER
.
         RETURN  
.
RDKMISS2 MOVE      ZERO,OVRCD
         READKS    PATMI1A2;DAADMNO,AURNO,ADATE,ATIME:
                                 DASTAT,APORT,ATRANNO,AINVPRT,ALACDTE:
                                 ACANCEL,AWARD,ABED,ADOCTR,ADOCTA:
                                 ADOCTL,ASRCE,ATYPE,ACLSS,ACARE,AFUNDH:
                                 AFNDTB,AFNDMM,AELIG,AVISIT,AALERG:
                                 AILLN,ADIAG1,ADIAG2,ADISC,ADOCTT,ACLSSFT:
                                 AALLOW,AMBS,ACLAIM,ADIET,APLOCCR,ASTAY:
                                 ADYHOSP,AMEMB,AMEMBNO:
                                 ACOMM1,ACOMM2,APLUR,APURGE,AUSR1:
                                 AUSR2,AUSR3,AUSR4,AUSR5,AUSR6,AUSR7:
                                 ADSCHI,ARDRNAM,AFNDYY,AFNDCG:
                                 AOCCDTE,ACODDTE,ARETDTE,AMUMADM,DPTMIPVI:
                                 ABWGHT:         
                                 PTMSRFGP,PTMSGPPC,PTMSFHAN,PTMSECRA:
                                 PTMSMGIN,DPTMIDDI,PTMIGPPT,PTMIDOFR:        
                                 PTMIREFD,PTMIDFCN,PTMIPHPU,PTMIAGNC:
                                 PTMIESSF,PTMIUSR8,PTMIUSR9,PTMIUSR0:
                                 PTMIPDRG,PTMIOPER,PTMIXWRD,PTMIADOC:
                                 PTMIREGS,PTMIUYN1,PTMIUYN2,PTMIPANO:
                                 PTMIPADT,PTMIPCMX,PTMIGSTA,PTMICMXP:
                                 PTMIEBED,PTMIDMOV,PTMIDFAS,PTMICRCD:
                                 PTMIFINV,PTMICONB,PTMIDATC,PTMITIMC:
                                 PTMIWEBC,PTMIDATU,PTMITIMU,PTMIWEBU:
                                 PTMI3BDY,PTMI3BAD,PTMILSDN,PTMIOGNO:
                                 PTMSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DAADMNO,AADMNO
         MOVE      DASTAT,ASTAT
         MOVE      DPTMIPVI,PTMIPVIS
         MOVE      DPTMIDDI,PTMIDDIG
.
         PACK      KEY8,DAADMNO,SP70
         CALL      RDPMVX11
         GOTO      OVERCOND IF OVER
.
         RETURN  
.
RDPMISS2 MOVE      ZERO,OVRCD
         READKP    PATMI1A2;DAADMNO,AURNO,ADATE,ATIME:
                                 DASTAT,APORT,ATRANNO,AINVPRT,ALACDTE:
                                 ACANCEL,AWARD,ABED,ADOCTR,ADOCTA:
                                 ADOCTL,ASRCE,ATYPE,ACLSS,ACARE,AFUNDH:
                                 AFNDTB,AFNDMM,AELIG,AVISIT,AALERG:
                                 AILLN,ADIAG1,ADIAG2,ADISC,ADOCTT,ACLSSFT:
                                 AALLOW,AMBS,ACLAIM,ADIET,APLOCCR,ASTAY:
                                 ADYHOSP,AMEMB,AMEMBNO:
                                 ACOMM1,ACOMM2,APLUR,APURGE,AUSR1:
                                 AUSR2,AUSR3,AUSR4,AUSR5,AUSR6,AUSR7:
                                 ADSCHI,ARDRNAM,AFNDYY,AFNDCG:
                                 AOCCDTE,ACODDTE,ARETDTE,AMUMADM,DPTMIPVI:
                                 ABWGHT:       
                                 PTMSRFGP,PTMSGPPC,PTMSFHAN,PTMSECRA:
                                 PTMSMGIN,DPTMIDDI,PTMIGPPT,PTMIDOFR:        
                                 PTMIREFD,PTMIDFCN,PTMIPHPU,PTMIAGNC:
                                 PTMIESSF,PTMIUSR8,PTMIUSR9,PTMIUSR0:
                                 PTMIPDRG,PTMIOPER,PTMIXWRD,PTMIADOC:
                                 PTMIREGS,PTMIUYN1,PTMIUYN2,PTMIPANO:
                                 PTMIPADT,PTMIPCMX,PTMIGSTA,PTMICMXP:
                                 PTMIEBED,PTMIDMOV,PTMIDFAS,PTMICRCD:
                                 PTMIFINV,PTMICONB,PTMIDATC,PTMITIMC:
                                 PTMIWEBC,PTMIDATU,PTMITIMU,PTMIWEBU:
                                 PTMI3BDY,PTMI3BAD,PTMILSDN,PTMIOGNO:
                                 PTMSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DAADMNO,AADMNO
         MOVE      DASTAT,ASTAT
         MOVE      DPTMIPVI,PTMIPVIS
         MOVE      DPTMIDDI,PTMIDDIG
.
         PACK      KEY8,DAADMNO,SP70
         CALL      RDPMVX11
         GOTO      OVERCOND IF OVER
.
         RETURN  
+
.
.       THIRD CATELOG I/O
.
RDSMISS3 RESET     KEY16
         READ      PATMI1A3,KEY16;;
         RETURN
.
RDMISS3  MOVE      ZERO,OVRCD
         RESET     KEY16
         READ      PATMI1A3,KEY16;DAADMNO,AURNO,ADATE,ATIME:
                                 DASTAT,APORT,ATRANNO,AINVPRT,ALACDTE:
                                 ACANCEL,AWARD,ABED,ADOCTR,ADOCTA:
                                 ADOCTL,ASRCE,ATYPE,ACLSS,ACARE,AFUNDH:
                                 AFNDTB,AFNDMM,AELIG,AVISIT,AALERG:
                                 AILLN,ADIAG1,ADIAG2,ADISC,ADOCTT,ACLSSFT:
                                 AALLOW,AMBS,ACLAIM,ADIET,APLOCCR,ASTAY:
                                 ADYHOSP,AMEMB,AMEMBNO:
                                 ACOMM1,ACOMM2,APLUR,APURGE,AUSR1:
                                 AUSR2,AUSR3,AUSR4,AUSR5,AUSR6,AUSR7:
                                 ADSCHI,ARDRNAM,AFNDYY,AFNDCG:
                                 AOCCDTE,ACODDTE,ARETDTE,AMUMADM,DPTMIPVI:
                                 ABWGHT:         
                                 PTMSRFGP,PTMSGPPC,PTMSFHAN,PTMSECRA:
                                 PTMSMGIN,DPTMIDDI,PTMIGPPT,PTMIDOFR:        
                                 PTMIREFD,PTMIDFCN,PTMIPHPU,PTMIAGNC:
                                 PTMIESSF,PTMIUSR8,PTMIUSR9,PTMIUSR0:
                                 PTMIPDRG,PTMIOPER,PTMIXWRD,PTMIADOC:
                                 PTMIREGS,PTMIUYN1,PTMIUYN2,PTMIPANO:
                                 PTMIPADT,PTMIPCMX,PTMIGSTA,PTMICMXP:
                                 PTMIEBED,PTMIDMOV,PTMIDFAS,PTMICRCD:
                                 PTMIFINV,PTMICONB,PTMIDATC,PTMITIMC:
                                 PTMIWEBC,PTMIDATU,PTMITIMU,PTMIWEBU:
                                 PTMI3BDY,PTMI3BAD,PTMILSDN,PTMIOGNO:
                                 PTMSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DAADMNO,AADMNO
         MOVE      DASTAT,ASTAT
         MOVE      DPTMIPVI,PTMIPVIS
         MOVE      DPTMIDDI,PTMIDDIG
.
         PACK      KEY8,DAADMNO,SP70
         CALL      RDPMVX11
         GOTO      OVERCOND IF OVER
.
         RETURN  
.
RDKMISS3 MOVE      ZERO,OVRCD
         READKS    PATMI1A3;DAADMNO,AURNO,ADATE,ATIME:
                                 DASTAT,APORT,ATRANNO,AINVPRT,ALACDTE:
                                 ACANCEL,AWARD,ABED,ADOCTR,ADOCTA:
                                 ADOCTL,ASRCE,ATYPE,ACLSS,ACARE,AFUNDH:
                                 AFNDTB,AFNDMM,AELIG,AVISIT,AALERG:
                                 AILLN,ADIAG1,ADIAG2,ADISC,ADOCTT,ACLSSFT:
                                 AALLOW,AMBS,ACLAIM,ADIET,APLOCCR,ASTAY:
                                 ADYHOSP,AMEMB,AMEMBNO:
                                 ACOMM1,ACOMM2,APLUR,APURGE,AUSR1:
                                 AUSR2,AUSR3,AUSR4,AUSR5,AUSR6,AUSR7:
                                 ADSCHI,ARDRNAM,AFNDYY,AFNDCG:
                                 AOCCDTE,ACODDTE,ARETDTE,AMUMADM,DPTMIPVI:
                                 ABWGHT:        
                                 PTMSRFGP,PTMSGPPC,PTMSFHAN,PTMSECRA:
                                 PTMSMGIN,DPTMIDDI,PTMIGPPT,PTMIDOFR:        
                                 PTMIREFD,PTMIDFCN,PTMIPHPU,PTMIAGNC:
                                 PTMIESSF,PTMIUSR8,PTMIUSR9,PTMIUSR0:
                                 PTMIPDRG,PTMIOPER,PTMIXWRD,PTMIADOC:
                                 PTMIREGS,PTMIUYN1,PTMIUYN2,PTMIPANO:
                                 PTMIPADT,PTMIPCMX,PTMIGSTA,PTMICMXP:
                                 PTMIEBED,PTMIDMOV,PTMIDFAS,PTMICRCD:
                                 PTMIFINV,PTMICONB,PTMIDATC,PTMITIMC:
                                 PTMIWEBC,PTMIDATU,PTMITIMU,PTMIWEBU:
                                 PTMI3BDY,PTMI3BAD,PTMILSDN,PTMIOGNO:
                                 PTMSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DAADMNO,AADMNO
         MOVE      DASTAT,ASTAT
         MOVE      DPTMIPVI,PTMIPVIS
         MOVE      DPTMIDDI,PTMIDDIG
.
         PACK      KEY8,DAADMNO,SP70
         CALL      RDPMVX11
         GOTO      OVERCOND IF OVER
.
         RETURN  
.
RDPMISS3 MOVE      ZERO,OVRCD
         READKP    PATMI1A3;DAADMNO,AURNO,ADATE,ATIME:
                                 DASTAT,APORT,ATRANNO,AINVPRT,ALACDTE:
                                 ACANCEL,AWARD,ABED,ADOCTR,ADOCTA:
                                 ADOCTL,ASRCE,ATYPE,ACLSS,ACARE,AFUNDH:
                                 AFNDTB,AFNDMM,AELIG,AVISIT,AALERG:
                                 AILLN,ADIAG1,ADIAG2,ADISC,ADOCTT,ACLSSFT:
                                 AALLOW,AMBS,ACLAIM,ADIET,APLOCCR,ASTAY:
                                 ADYHOSP,AMEMB,AMEMBNO:
                                 ACOMM1,ACOMM2,APLUR,APURGE,AUSR1:
                                 AUSR2,AUSR3,AUSR4,AUSR5,AUSR6,AUSR7:
                                 ADSCHI,ARDRNAM,AFNDYY,AFNDCG:
                                 AOCCDTE,ACODDTE,ARETDTE,AMUMADM,DPTMIPVI:
                                 ABWGHT:        
                                 PTMSRFGP,PTMSGPPC,PTMSFHAN,PTMSECRA:
                                 PTMSMGIN,DPTMIDDI,PTMIGPPT,PTMIDOFR:        
                                 PTMIREFD,PTMIDFCN,PTMIPHPU,PTMIAGNC:
                                 PTMIESSF,PTMIUSR8,PTMIUSR9,PTMIUSR0:
                                 PTMIPDRG,PTMIOPER,PTMIXWRD,PTMIADOC:
                                 PTMIREGS,PTMIUYN1,PTMIUYN2,PTMIPANO:
                                 PTMIPADT,PTMIPCMX,PTMIGSTA,PTMICMXP:
                                 PTMIEBED,PTMIDMOV,PTMIDFAS,PTMICRCD:
                                 PTMIFINV,PTMICONB,PTMIDATC,PTMITIMC:
                                 PTMIWEBC,PTMIDATU,PTMITIMU,PTMIWEBU:
                                 PTMI3BDY,PTMI3BAD,PTMILSDN,PTMIOGNO:
                                 PTMSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DAADMNO,AADMNO
         MOVE      DASTAT,ASTAT
         MOVE      DPTMIPVI,PTMIPVIS
         MOVE      DPTMIDDI,PTMIDDIG
.
         PACK      KEY8,DAADMNO,SP70
         CALL      RDPMVX11
         GOTO      OVERCOND IF OVER
.
         RETURN  
.
.       FOURTH ADMISSION  I/O
.
RDAMISS4 RESET     KEY16
         MOVE      ZERO,OVRCD
         READ      PATMI1A4,KEY16;ANS
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDSMISS4 RESET     KEY16
         READ      PATMI1A4,KEY16;;
         RETURN  
.
RDMISS4  MOVE      ZERO,OVRCD
         RESET     KEY16
         READ      PATMI1A4,KEY16;DAADMNO,AURNO,ADATE,ATIME:
                                  DASTAT,APORT,ATRANNO,AINVPRT,ALACDTE:
                                  ACANCEL,AWARD,ABED,ADOCTR,ADOCTA:
                                  ADOCTL,ASRCE,ATYPE,ACLSS,ACARE,AFUNDH:
                                  AFNDTB,AFNDMM,AELIG,AVISIT,AALERG:
                                  AILLN,ADIAG1,ADIAG2,ADISC,ADOCTT,ACLSSFT:
                                  AALLOW,AMBS,ACLAIM,ADIET,APLOCCR,ASTAY:
                                  ADYHOSP,AMEMB,AMEMBNO:
                                  ACOMM1,ACOMM2,APLUR,APURGE,AUSR1:
                                  AUSR2,AUSR3,AUSR4,AUSR5,AUSR6,AUSR7:
                                  ADSCHI,ARDRNAM,AFNDYY,AFNDCG:
                                  AOCCDTE,ACODDTE,ARETDTE,AMUMADM,DPTMIPVI:
                                  ABWGHT:        
                                  PTMSRFGP,PTMSGPPC,PTMSFHAN,PTMSECRA:
                                  PTMSMGIN,DPTMIDDI,PTMIGPPT,PTMIDOFR:        
                                  PTMIREFD,PTMIDFCN,PTMIPHPU,PTMIAGNC:
                                  PTMIESSF,PTMIUSR8,PTMIUSR9,PTMIUSR0:
                                  PTMIPDRG,PTMIOPER,PTMIXWRD,PTMIADOC:
                                  PTMIREGS,PTMIUYN1,PTMIUYN2,PTMIPANO:
                                  PTMIPADT,PTMIPCMX,PTMIGSTA,PTMICMXP:
                                  PTMIEBED,PTMIDMOV,PTMIDFAS,PTMICRCD:
                                  PTMIFINV,PTMICONB,PTMIDATC,PTMITIMC:
                                  PTMIWEBC,PTMIDATU,PTMITIMU,PTMIWEBU:
                                  PTMI3BDY,PTMI3BAD,PTMILSDN,PTMIOGNO:
                                  PTMSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DAADMNO,AADMNO
         MOVE      DASTAT,ASTAT
         MOVE      DPTMIPVI,PTMIPVIS
         MOVE      DPTMIDDI,PTMIDDIG
         MOVE      AADMNO,SSAADMNO
         MOVE      ASTAT,SSASTAT
         MOVE      ADATE,SSADATE
.
         PACK      KEY8,DAADMNO,SP70
         CALL      RDPMVX11
         GOTO      OVERCOND IF OVER
.
         RETURN  
.
RDKMISS4 MOVE      ZERO,OVRCD
         READKS    PATMI1A4;DAADMNO,AURNO,ADATE,ATIME:
                            DASTAT,APORT,ATRANNO,AINVPRT,ALACDTE:
                            ACANCEL,AWARD,ABED,ADOCTR,ADOCTA:
                            ADOCTL,ASRCE,ATYPE,ACLSS,ACARE,AFUNDH:
                            AFNDTB,AFNDMM,AELIG,AVISIT,AALERG:
                            AILLN,ADIAG1,ADIAG2,ADISC,ADOCTT,ACLSSFT:
                            AALLOW,AMBS,ACLAIM,ADIET,APLOCCR,ASTAY:
                            ADYHOSP,AMEMB,AMEMBNO:
                            ACOMM1,ACOMM2,APLUR,APURGE,AUSR1:
                            AUSR2,AUSR3,AUSR4,AUSR5,AUSR6,AUSR7:
                            ADSCHI,ARDRNAM,AFNDYY,AFNDCG:
                            AOCCDTE,ACODDTE,ARETDTE,AMUMADM,DPTMIPVI:
                            ABWGHT:         
                            PTMSRFGP,PTMSGPPC,PTMSFHAN,PTMSECRA:
                            PTMSMGIN,DPTMIDDI,PTMIGPPT,PTMIDOFR:        
                            PTMIREFD,PTMIDFCN,PTMIPHPU,PTMIAGNC:
                            PTMIESSF,PTMIUSR8,PTMIUSR9,PTMIUSR0:
                            PTMIPDRG,PTMIOPER,PTMIXWRD,PTMIADOC:
                            PTMIREGS,PTMIUYN1,PTMIUYN2,PTMIPANO:
                            PTMIPADT,PTMIPCMX,PTMIGSTA,PTMICMXP:
                            PTMIEBED,PTMIDMOV,PTMIDFAS,PTMICRCD:
                            PTMIFINV,PTMICONB,PTMIDATC,PTMITIMC:
                            PTMIWEBC,PTMIDATU,PTMITIMU,PTMIWEBU:
                            PTMI3BDY,PTMI3BAD,PTMILSDN,PTMIOGNO:
                            PTMSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DAADMNO,AADMNO
         MOVE      DASTAT,ASTAT
         MOVE      DPTMIPVI,PTMIPVIS
         MOVE      DPTMIDDI,PTMIDDIG
         MOVE      AADMNO,SSAADMNO
         MOVE      ASTAT,SSASTAT
         MOVE      ADATE,SSADATE
.
         PACK      KEY8,DAADMNO,SP70
         CALL      RDPMVX11
         GOTO      OVERCOND IF OVER
.
         RETURN
.
RDPMISS4 MOVE      ZERO,OVRCD
         READKP    PATMI1A4;DAADMNO,AURNO,ADATE,ATIME:
                            DASTAT,APORT,ATRANNO,AINVPRT,ALACDTE:
                            ACANCEL,AWARD,ABED,ADOCTR,ADOCTA:
                            ADOCTL,ASRCE,ATYPE,ACLSS,ACARE,AFUNDH:
                            AFNDTB,AFNDMM,AELIG,AVISIT,AALERG:
                            AILLN,ADIAG1,ADIAG2,ADISC,ADOCTT,ACLSSFT:
                            AALLOW,AMBS,ACLAIM,ADIET,APLOCCR,ASTAY:
                            ADYHOSP,AMEMB,AMEMBNO:
                            ACOMM1,ACOMM2,APLUR,APURGE,AUSR1:
                            AUSR2,AUSR3,AUSR4,AUSR5,AUSR6,AUSR7:
                            ADSCHI,ARDRNAM,AFNDYY,AFNDCG:
                            AOCCDTE,ACODDTE,ARETDTE,AMUMADM,DPTMIPVI:
                            ABWGHT:
                            PTMSRFGP,PTMSGPPC,PTMSFHAN,PTMSECRA:
                            PTMSMGIN,DPTMIDDI,PTMIGPPT,PTMIDOFR:        
                            PTMIREFD,PTMIDFCN,PTMIPHPU,PTMIAGNC:
                            PTMIESSF,PTMIUSR8,PTMIUSR9,PTMIUSR0:
                            PTMIPDRG,PTMIOPER,PTMIXWRD,PTMIADOC:
                            PTMIREGS,PTMIUYN1,PTMIUYN2,PTMIPANO:
                            PTMIPADT,PTMIPCMX,PTMIGSTA,PTMICMXP:
                            PTMIEBED,PTMIDMOV,PTMIDFAS,PTMICRCD:
                            PTMIFINV,PTMICONB,PTMIDATC,PTMITIMC:
                            PTMIWEBC,PTMIDATU,PTMITIMU,PTMIWEBU:
                            PTMI3BDY,PTMI3BAD,PTMILSDN,PTMIOGNO:
                            PTMSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DAADMNO,AADMNO
         MOVE      DASTAT,ASTAT
         MOVE      DPTMIPVI,PTMIPVIS
         MOVE      DPTMIDDI,PTMIDDIG
         MOVE      AADMNO,SSAADMNO
         MOVE      ASTAT,SSASTAT
         MOVE      ADATE,SSADATE
.
         PACK      KEY8,DAADMNO,SP70
         CALL      RDPMVX11
         GOTO      OVERCOND IF OVER
.
         RETURN
.
UPMISS4  MOVE      SP2,APORT       *******  RELEASE RECORD WITH UPDATE
.
UPLMISS4 MOVE      ZERO,OVRCD       *******  KEEP RECORD LOCK WITH UPDATE
.
         MOVE      AADMNO,DAADMNO
         MOVE      ASTAT,DASTAT
         MOVE      PTMIPVIS,DPTMIPVI
         MOVE      PTMIDDIG,DPTMIDDI
         PACK      PTMIDATU,CCC,CYY,CMM,CDD
         REP       " 0",PTMIDATU
         CLOCK     TIME,PTMITIMU
.
         UPDATE    PATMI1A4;DAADMNO,AURNO,ADATE,ATIME:
                                 DASTAT,APORT,ATRANNO,AINVPRT,ALACDTE:
                                 ACANCEL,AWARD,ABED,ADOCTR,ADOCTA:
                                 ADOCTL,ASRCE,ATYPE,ACLSS,ACARE,AFUNDH:
                                 AFNDTB,AFNDMM,AELIG,AVISIT,AALERG:
                                 AILLN,ADIAG1,ADIAG2,ADISC,ADOCTT,ACLSSFT:
                                 AALLOW,AMBS,ACLAIM,ADIET,APLOCCR,ASTAY:
                                 ADYHOSP,AMEMB,AMEMBNO:
                                 ACOMM1,ACOMM2,APLUR,APURGE,AUSR1:
                                 AUSR2,AUSR3,AUSR4,AUSR5,AUSR6,AUSR7:
                                 ADSCHI,ARDRNAM,AFNDYY,AFNDCG:
                                 AOCCDTE,ACODDTE,ARETDTE,AMUMADM,DPTMIPVI:
                                 ABWGHT:       
                                 PTMSRFGP,PTMSGPPC,PTMSFHAN,PTMSECRA:
                                 PTMSMGIN,DPTMIDDI,PTMIGPPT,PTMIDOFR:        
                                 PTMIREFD,PTMIDFCN,PTMIPHPU,PTMIAGNC:
                                 PTMIESSF,PTMIUSR8,PTMIUSR9,PTMIUSR0:
                                 PTMIPDRG,PTMIOPER,PTMIXWRD,PTMIADOC:
                                 PTMIREGS,PTMIUYN1,PTMIUYN2,PTMIPANO:
                                 PTMIPADT,PTMIPCMX,PTMIGSTA,PTMICMXP:
                                 PTMIEBED,PTMIDMOV,PTMIDFAS,PTMICRCD:
                                 PTMIFINV,PTMICONB,PTMIDATC,PTMITIMC:
                                 PTMIWEBC,PTMIDATU,PTMITIMU,PTMIWEBU:
                                 PTMI3BDY,PTMI3BAD,PTMILSDN,PTMIOGNO:
                                 PTMSSPAR
          RETURN
.
.++
.
.       FIFTH ADMISSION  I/O
.
RDAMISS5 RESET     KEY21
         MOVE      ZERO,OVRCD
         READ      PATMI1A5,KEY21;ANS
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDSMISS5 RESET     KEY21
         READ      PATMI1A5,KEY21;;
         RETURN  
.
RDMISS5  MOVE      ZERO,OVRCD
         RESET     KEY21
         READ      PATMI1A5,KEY21;DAADMNO,AURNO,ADATE,ATIME:
                                  DASTAT,APORT,ATRANNO,AINVPRT,ALACDTE:
                                  ACANCEL,AWARD,ABED,ADOCTR,ADOCTA:
                                  ADOCTL,ASRCE,ATYPE,ACLSS,ACARE,AFUNDH:
                                  AFNDTB,AFNDMM,AELIG,AVISIT,AALERG:
                                  AILLN,ADIAG1,ADIAG2,ADISC,ADOCTT,ACLSSFT:
                                  AALLOW,AMBS,ACLAIM,ADIET,APLOCCR,ASTAY:
                                  ADYHOSP,AMEMB,AMEMBNO:
                                  ACOMM1,ACOMM2,APLUR,APURGE,AUSR1:
                                  AUSR2,AUSR3,AUSR4,AUSR5,AUSR6,AUSR7:
                                  ADSCHI,ARDRNAM,AFNDYY,AFNDCG:
                                  AOCCDTE,ACODDTE,ARETDTE,AMUMADM,DPTMIPVI:
                                  ABWGHT:        
                                  PTMSRFGP,PTMSGPPC,PTMSFHAN,PTMSECRA:
                                  PTMSMGIN,DPTMIDDI,PTMIGPPT,PTMIDOFR:        
                                  PTMIREFD,PTMIDFCN,PTMIPHPU,PTMIAGNC:
                                  PTMIESSF,PTMIUSR8,PTMIUSR9,PTMIUSR0:
                                  PTMIPDRG,PTMIOPER,PTMIXWRD,PTMIADOC:
                                  PTMIREGS,PTMIUYN1,PTMIUYN2,PTMIPANO:
                                  PTMIPADT,PTMIPCMX,PTMIGSTA,PTMICMXP:
                                  PTMIEBED,PTMIDMOV,PTMIDFAS,PTMICRCD:
                                  PTMIFINV,PTMICONB,PTMIDATC,PTMITIMC:
                                  PTMIWEBC,PTMIDATU,PTMITIMU,PTMIWEBU:
                                  PTMI3BDY,PTMI3BAD,PTMILSDN,PTMIOGNO:
                                  PTMSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DAADMNO,AADMNO
         MOVE      DASTAT,ASTAT
         MOVE      DPTMIPVI,PTMIPVIS
         MOVE      DPTMIDDI,PTMIDDIG
         MOVE      AADMNO,SSAADMNO
         MOVE      ASTAT,SSASTAT
         MOVE      ADATE,SSADATE
.
         PACK      KEY8,DAADMNO,SP70
         CALL      RDPMVX11
         GOTO      OVERCOND IF OVER
.
         RETURN  
.
RDKMISS5 MOVE      ZERO,OVRCD
         READKS    PATMI1A5;DAADMNO,AURNO,ADATE,ATIME:
                            DASTAT,APORT,ATRANNO,AINVPRT,ALACDTE:
                            ACANCEL,AWARD,ABED,ADOCTR,ADOCTA:
                            ADOCTL,ASRCE,ATYPE,ACLSS,ACARE,AFUNDH:
                            AFNDTB,AFNDMM,AELIG,AVISIT,AALERG:
                            AILLN,ADIAG1,ADIAG2,ADISC,ADOCTT,ACLSSFT:
                            AALLOW,AMBS,ACLAIM,ADIET,APLOCCR,ASTAY:
                            ADYHOSP,AMEMB,AMEMBNO:
                            ACOMM1,ACOMM2,APLUR,APURGE,AUSR1:
                            AUSR2,AUSR3,AUSR4,AUSR5,AUSR6,AUSR7:
                            ADSCHI,ARDRNAM,AFNDYY,AFNDCG:
                            AOCCDTE,ACODDTE,ARETDTE,AMUMADM,DPTMIPVI:
                            ABWGHT:         
                            PTMSRFGP,PTMSGPPC,PTMSFHAN,PTMSECRA:
                            PTMSMGIN,DPTMIDDI,PTMIGPPT,PTMIDOFR:        
                            PTMIREFD,PTMIDFCN,PTMIPHPU,PTMIAGNC:
                            PTMIESSF,PTMIUSR8,PTMIUSR9,PTMIUSR0:
                            PTMIPDRG,PTMIOPER,PTMIXWRD,PTMIADOC:
                            PTMIREGS,PTMIUYN1,PTMIUYN2,PTMIPANO:
                            PTMIPADT,PTMIPCMX,PTMIGSTA,PTMICMXP:
                            PTMIEBED,PTMIDMOV,PTMIDFAS,PTMICRCD:
                            PTMIFINV,PTMICONB,PTMIDATC,PTMITIMC:
                            PTMIWEBC,PTMIDATU,PTMITIMU,PTMIWEBU:
                            PTMI3BDY,PTMI3BAD,PTMILSDN,PTMIOGNO:
                            PTMSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DAADMNO,AADMNO
         MOVE      DASTAT,ASTAT
         MOVE      DPTMIPVI,PTMIPVIS
         MOVE      DPTMIDDI,PTMIDDIG
         MOVE      AADMNO,SSAADMNO
         MOVE      ASTAT,SSASTAT
         MOVE      ADATE,SSADATE
.
         PACK      KEY8,DAADMNO,SP70
         CALL      RDPMVX11
         GOTO      OVERCOND IF OVER
.
         RETURN
.
RDPMISS5 MOVE      ZERO,OVRCD
         READKP    PATMI1A5;DAADMNO,AURNO,ADATE,ATIME:
                            DASTAT,APORT,ATRANNO,AINVPRT,ALACDTE:
                            ACANCEL,AWARD,ABED,ADOCTR,ADOCTA:
                            ADOCTL,ASRCE,ATYPE,ACLSS,ACARE,AFUNDH:
                            AFNDTB,AFNDMM,AELIG,AVISIT,AALERG:
                            AILLN,ADIAG1,ADIAG2,ADISC,ADOCTT,ACLSSFT:
                            AALLOW,AMBS,ACLAIM,ADIET,APLOCCR,ASTAY:
                            ADYHOSP,AMEMB,AMEMBNO:
                            ACOMM1,ACOMM2,APLUR,APURGE,AUSR1:
                            AUSR2,AUSR3,AUSR4,AUSR5,AUSR6,AUSR7:
                            ADSCHI,ARDRNAM,AFNDYY,AFNDCG:
                            AOCCDTE,ACODDTE,ARETDTE,AMUMADM,DPTMIPVI:
                            ABWGHT:
                            PTMSRFGP,PTMSGPPC,PTMSFHAN,PTMSECRA:
                            PTMSMGIN,DPTMIDDI,PTMIGPPT,PTMIDOFR:        
                            PTMIREFD,PTMIDFCN,PTMIPHPU,PTMIAGNC:
                            PTMIESSF,PTMIUSR8,PTMIUSR9,PTMIUSR0:
                            PTMIPDRG,PTMIOPER,PTMIXWRD,PTMIADOC:
                            PTMIREGS,PTMIUYN1,PTMIUYN2,PTMIPANO:
                            PTMIPADT,PTMIPCMX,PTMIGSTA,PTMICMXP:
                            PTMIEBED,PTMIDMOV,PTMIDFAS,PTMICRCD:
                            PTMIFINV,PTMICONB,PTMIDATC,PTMITIMC:
                            PTMIWEBC,PTMIDATU,PTMITIMU,PTMIWEBU:
                            PTMI3BDY,PTMI3BAD,PTMILSDN,PTMIOGNO:
                            PTMSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DAADMNO,AADMNO
         MOVE      DASTAT,ASTAT
         MOVE      DPTMIPVI,PTMIPVIS
         MOVE      DPTMIDDI,PTMIDDIG
         MOVE      AADMNO,SSAADMNO
         MOVE      ASTAT,SSASTAT
         MOVE      ADATE,SSADATE
.
         PACK      KEY8,DAADMNO,SP70
         CALL      RDPMVX11
         GOTO      OVERCOND IF OVER
.
         RETURN
.++
.
.       SIXTH ADMISSION  I/O
.
RDAMISS6 RESET     KEY20
         MOVE      ZERO,OVRCD
         READ      PATMI1A6,KEY20;ANS
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDSMISS6 RESET     KEY20
         READ      PATMI1A6,KEY20;;
         RETURN  
.
RDMISS6  MOVE      ZERO,OVRCD
         RESET     KEY20
         READ      PATMI1A6,KEY20;DAADMNO,AURNO,ADATE,ATIME:
                                  DASTAT,APORT,ATRANNO,AINVPRT,ALACDTE:
                                  ACANCEL,AWARD,ABED,ADOCTR,ADOCTA:
                                  ADOCTL,ASRCE,ATYPE,ACLSS,ACARE,AFUNDH:
                                  AFNDTB,AFNDMM,AELIG,AVISIT,AALERG:
                                  AILLN,ADIAG1,ADIAG2,ADISC,ADOCTT,ACLSSFT:
                                  AALLOW,AMBS,ACLAIM,ADIET,APLOCCR,ASTAY:
                                  ADYHOSP,AMEMB,AMEMBNO:
                                  ACOMM1,ACOMM2,APLUR,APURGE,AUSR1:
                                  AUSR2,AUSR3,AUSR4,AUSR5,AUSR6,AUSR7:
                                  ADSCHI,ARDRNAM,AFNDYY,AFNDCG:
                                  AOCCDTE,ACODDTE,ARETDTE,AMUMADM,DPTMIPVI:
                                  ABWGHT:        
                                  PTMSRFGP,PTMSGPPC,PTMSFHAN,PTMSECRA:
                                  PTMSMGIN,DPTMIDDI,PTMIGPPT,PTMIDOFR:        
                                  PTMIREFD,PTMIDFCN,PTMIPHPU,PTMIAGNC:
                                  PTMIESSF,PTMIUSR8,PTMIUSR9,PTMIUSR0:
                                  PTMIPDRG,PTMIOPER,PTMIXWRD,PTMIADOC:
                                  PTMIREGS,PTMIUYN1,PTMIUYN2,PTMIPANO:
                                  PTMIPADT,PTMIPCMX,PTMIGSTA,PTMICMXP:
                                  PTMIEBED,PTMIDMOV,PTMIDFAS,PTMICRCD:
                                  PTMIFINV,PTMICONB,PTMIDATC,PTMITIMC:
                                  PTMIWEBC,PTMIDATU,PTMITIMU,PTMIWEBU:
                                  PTMI3BDY,PTMI3BAD,PTMILSDN,PTMIOGNO:
                                  PTMSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DAADMNO,AADMNO
         MOVE      DASTAT,ASTAT
         MOVE      DPTMIPVI,PTMIPVIS
         MOVE      DPTMIDDI,PTMIDDIG
         MOVE      AADMNO,SSAADMNO
         MOVE      ASTAT,SSASTAT
         MOVE      ADATE,SSADATE
.
         PACK      KEY8,DAADMNO,SP70
         CALL      RDPMVX11
         GOTO      OVERCOND IF OVER
.
         RETURN  
.
RDKMISS6 MOVE      ZERO,OVRCD
         READKS    PATMI1A6;DAADMNO,AURNO,ADATE,ATIME:
                            DASTAT,APORT,ATRANNO,AINVPRT,ALACDTE:
                            ACANCEL,AWARD,ABED,ADOCTR,ADOCTA:
                            ADOCTL,ASRCE,ATYPE,ACLSS,ACARE,AFUNDH:
                            AFNDTB,AFNDMM,AELIG,AVISIT,AALERG:
                            AILLN,ADIAG1,ADIAG2,ADISC,ADOCTT,ACLSSFT:
                            AALLOW,AMBS,ACLAIM,ADIET,APLOCCR,ASTAY:
                            ADYHOSP,AMEMB,AMEMBNO:
                            ACOMM1,ACOMM2,APLUR,APURGE,AUSR1:
                            AUSR2,AUSR3,AUSR4,AUSR5,AUSR6,AUSR7:
                            ADSCHI,ARDRNAM,AFNDYY,AFNDCG:
                            AOCCDTE,ACODDTE,ARETDTE,AMUMADM,DPTMIPVI:
                            ABWGHT:         
                            PTMSRFGP,PTMSGPPC,PTMSFHAN,PTMSECRA:
                            PTMSMGIN,DPTMIDDI,PTMIGPPT,PTMIDOFR:        
                            PTMIREFD,PTMIDFCN,PTMIPHPU,PTMIAGNC:
                            PTMIESSF,PTMIUSR8,PTMIUSR9,PTMIUSR0:
                            PTMIPDRG,PTMIOPER,PTMIXWRD,PTMIADOC:
                            PTMIREGS,PTMIUYN1,PTMIUYN2,PTMIPANO:
                            PTMIPADT,PTMIPCMX,PTMIGSTA,PTMICMXP:
                            PTMIEBED,PTMIDMOV,PTMIDFAS,PTMICRCD:
                            PTMIFINV,PTMICONB,PTMIDATC,PTMITIMC:
                            PTMIWEBC,PTMIDATU,PTMITIMU,PTMIWEBU:
                            PTMI3BDY,PTMI3BAD,PTMILSDN,PTMIOGNO:
                            PTMSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DAADMNO,AADMNO
         MOVE      DASTAT,ASTAT
         MOVE      DPTMIPVI,PTMIPVIS
         MOVE      DPTMIDDI,PTMIDDIG
         MOVE      AADMNO,SSAADMNO
         MOVE      ASTAT,SSASTAT
         MOVE      ADATE,SSADATE
.
         PACK      KEY8,DAADMNO,SP70
         CALL      RDPMVX11
         GOTO      OVERCOND IF OVER
.
         RETURN
.
RDPMISS6 MOVE      ZERO,OVRCD
         READKP    PATMI1A6;DAADMNO,AURNO,ADATE,ATIME:
                            DASTAT,APORT,ATRANNO,AINVPRT,ALACDTE:
                            ACANCEL,AWARD,ABED,ADOCTR,ADOCTA:
                            ADOCTL,ASRCE,ATYPE,ACLSS,ACARE,AFUNDH:
                            AFNDTB,AFNDMM,AELIG,AVISIT,AALERG:
                            AILLN,ADIAG1,ADIAG2,ADISC,ADOCTT,ACLSSFT:
                            AALLOW,AMBS,ACLAIM,ADIET,APLOCCR,ASTAY:
                            ADYHOSP,AMEMB,AMEMBNO:
                            ACOMM1,ACOMM2,APLUR,APURGE,AUSR1:
                            AUSR2,AUSR3,AUSR4,AUSR5,AUSR6,AUSR7:
                            ADSCHI,ARDRNAM,AFNDYY,AFNDCG:
                            AOCCDTE,ACODDTE,ARETDTE,AMUMADM,DPTMIPVI:
                            ABWGHT:
                            PTMSRFGP,PTMSGPPC,PTMSFHAN,PTMSECRA:
                            PTMSMGIN,DPTMIDDI,PTMIGPPT,PTMIDOFR:        
                            PTMIREFD,PTMIDFCN,PTMIPHPU,PTMIAGNC:
                            PTMIESSF,PTMIUSR8,PTMIUSR9,PTMIUSR0:
                            PTMIPDRG,PTMIOPER,PTMIXWRD,PTMIADOC:
                            PTMIREGS,PTMIUYN1,PTMIUYN2,PTMIPANO:
                            PTMIPADT,PTMIPCMX,PTMIGSTA,PTMICMXP:
                            PTMIEBED,PTMIDMOV,PTMIDFAS,PTMICRCD:
                            PTMIFINV,PTMICONB,PTMIDATC,PTMITIMC:
                            PTMIWEBC,PTMIDATU,PTMITIMU,PTMIWEBU:
                            PTMI3BDY,PTMI3BAD,PTMILSDN,PTMIOGNO:
                            PTMSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DAADMNO,AADMNO
         MOVE      DASTAT,ASTAT
         MOVE      DPTMIPVI,PTMIPVIS
         MOVE      DPTMIDDI,PTMIDDIG
         MOVE      AADMNO,SSAADMNO
         MOVE      ASTAT,SSASTAT
         MOVE      ADATE,SSADATE
.
         PACK      KEY8,DAADMNO,SP70
         CALL      RDPMVX11
         GOTO      OVERCOND IF OVER
.
         RETURN
.
.       SEVENTH ADMISSION  I/O
.
RDAMISS7 RESET     KEY23
         MOVE      ZERO,OVRCD
         READ      PATMI1A7,KEY23;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RDSMISS7 RESET     KEY23
         READ      PATMI1A7,KEY23;;
         RETURN 
.
RDMISS7  MOVE      ZERO,OVRCD
         RESET     KEY23
         READ      PATMI1A7,KEY23;DAADMNO,AURNO,ADATE,ATIME:
                                  DASTAT,APORT,ATRANNO,AINVPRT,ALACDTE:
                                  ACANCEL,AWARD,ABED,ADOCTR,ADOCTA:
                                  ADOCTL,ASRCE,ATYPE,ACLSS,ACARE,AFUNDH:
                                  AFNDTB,AFNDMM,AELIG,AVISIT,AALERG:
                                  AILLN,ADIAG1,ADIAG2,ADISC,ADOCTT,ACLSSFT:
                                  AALLOW,AMBS,ACLAIM,ADIET,APLOCCR,ASTAY:
                                  ADYHOSP,AMEMB,AMEMBNO:
                                  ACOMM1,ACOMM2,APLUR,APURGE,AUSR1:
                                  AUSR2,AUSR3,AUSR4,AUSR5,AUSR6,AUSR7:
                                  ADSCHI,ARDRNAM,AFNDYY,AFNDCG:
                                  AOCCDTE,ACODDTE,ARETDTE,AMUMADM,DPTMIPVI:
                                  ABWGHT:
                                  PTMSRFGP,PTMSGPPC,PTMSFHAN,PTMSECRA:
                                  PTMSMGIN,DPTMIDDI,PTMIGPPT,PTMIDOFR:
                                  PTMIREFD,PTMIDFCN,PTMIPHPU,PTMIAGNC:
                                  PTMIESSF,PTMIUSR8,PTMIUSR9,PTMIUSR0:
                                  PTMIPDRG,PTMIOPER,PTMIXWRD,PTMIADOC:
                                  PTMIREGS,PTMIUYN1,PTMIUYN2,PTMIPANO:
                                  PTMIPADT,PTMIPCMX,PTMIGSTA,PTMICMXP:
                                  PTMIEBED,PTMIDMOV,PTMIDFAS,PTMICRCD:
                                  PTMIFINV,PTMICONB,PTMIDATC,PTMITIMC:
                                  PTMIWEBC,PTMIDATU,PTMITIMU,PTMIWEBU:
                                  PTMI3BDY,PTMI3BAD,PTMILSDN,PTMIOGNO:
                                  PTMSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DAADMNO,AADMNO
         MOVE      DASTAT,ASTAT
         MOVE      DPTMIPVI,PTMIPVIS
         MOVE      DPTMIDDI,PTMIDDIG
         MOVE      AADMNO,SSAADMNO
         MOVE      ASTAT,SSASTAT
         MOVE      ADATE,SSADATE
.
         PACK      KEY8,DAADMNO,SP70
         CALL      RDPMVX11
         GOTO      OVERCOND IF OVER
.
         RETURN 
.
RDKMISS7 MOVE      ZERO,OVRCD
         READKS    PATMI1A7;DAADMNO,AURNO,ADATE,ATIME:
                            DASTAT,APORT,ATRANNO,AINVPRT,ALACDTE:
                            ACANCEL,AWARD,ABED,ADOCTR,ADOCTA:
                            ADOCTL,ASRCE,ATYPE,ACLSS,ACARE,AFUNDH:
                            AFNDTB,AFNDMM,AELIG,AVISIT,AALERG:
                            AILLN,ADIAG1,ADIAG2,ADISC,ADOCTT,ACLSSFT:
                            AALLOW,AMBS,ACLAIM,ADIET,APLOCCR,ASTAY:
                            ADYHOSP,AMEMB,AMEMBNO:
                            ACOMM1,ACOMM2,APLUR,APURGE,AUSR1:
                            AUSR2,AUSR3,AUSR4,AUSR5,AUSR6,AUSR7:
                            ADSCHI,ARDRNAM,AFNDYY,AFNDCG:
                            AOCCDTE,ACODDTE,ARETDTE,AMUMADM,DPTMIPVI:
                            ABWGHT:
                            PTMSRFGP,PTMSGPPC,PTMSFHAN,PTMSECRA:
                            PTMSMGIN,DPTMIDDI,PTMIGPPT,PTMIDOFR:
                            PTMIREFD,PTMIDFCN,PTMIPHPU,PTMIAGNC:
                            PTMIESSF,PTMIUSR8,PTMIUSR9,PTMIUSR0:
                            PTMIPDRG,PTMIOPER,PTMIXWRD,PTMIADOC:
                            PTMIREGS,PTMIUYN1,PTMIUYN2,PTMIPANO:
                            PTMIPADT,PTMIPCMX,PTMIGSTA,PTMICMXP:
                            PTMIEBED,PTMIDMOV,PTMIDFAS,PTMICRCD:
                            PTMIFINV,PTMICONB,PTMIDATC,PTMITIMC:
                            PTMIWEBC,PTMIDATU,PTMITIMU,PTMIWEBU:
                            PTMI3BDY,PTMI3BAD,PTMILSDN,PTMIOGNO:
                            PTMSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DAADMNO,AADMNO
         MOVE      DASTAT,ASTAT
         MOVE      DPTMIPVI,PTMIPVIS
         MOVE      DPTMIDDI,PTMIDDIG
         MOVE      AADMNO,SSAADMNO
         MOVE      ASTAT,SSASTAT
         MOVE      ADATE,SSADATE
.
         PACK      KEY8,DAADMNO,SP70
         CALL      RDPMVX11
         GOTO      OVERCOND IF OVER
.
         RETURN
.
RDPMISS7 MOVE      ZERO,OVRCD
         READKP    PATMI1A7;DAADMNO,AURNO,ADATE,ATIME:
                            DASTAT,APORT,ATRANNO,AINVPRT,ALACDTE:
                            ACANCEL,AWARD,ABED,ADOCTR,ADOCTA:
                            ADOCTL,ASRCE,ATYPE,ACLSS,ACARE,AFUNDH:
                            AFNDTB,AFNDMM,AELIG,AVISIT,AALERG:
                            AILLN,ADIAG1,ADIAG2,ADISC,ADOCTT,ACLSSFT:
                            AALLOW,AMBS,ACLAIM,ADIET,APLOCCR,ASTAY:
                            ADYHOSP,AMEMB,AMEMBNO:
                            ACOMM1,ACOMM2,APLUR,APURGE,AUSR1:
                            AUSR2,AUSR3,AUSR4,AUSR5,AUSR6,AUSR7:
                            ADSCHI,ARDRNAM,AFNDYY,AFNDCG:
                            AOCCDTE,ACODDTE,ARETDTE,AMUMADM,DPTMIPVI:
                            ABWGHT:
                            PTMSRFGP,PTMSGPPC,PTMSFHAN,PTMSECRA:
                            PTMSMGIN,DPTMIDDI,PTMIGPPT,PTMIDOFR:
                            PTMIREFD,PTMIDFCN,PTMIPHPU,PTMIAGNC:
                            PTMIESSF,PTMIUSR8,PTMIUSR9,PTMIUSR0:
                            PTMIPDRG,PTMIOPER,PTMIXWRD,PTMIADOC:
                            PTMIREGS,PTMIUYN1,PTMIUYN2,PTMIPANO:
                            PTMIPADT,PTMIPCMX,PTMIGSTA,PTMICMXP:
                            PTMIEBED,PTMIDMOV,PTMIDFAS,PTMICRCD:
                            PTMIFINV,PTMICONB,PTMIDATC,PTMITIMC:
                            PTMIWEBC,PTMIDATU,PTMITIMU,PTMIWEBU:
                            PTMI3BDY,PTMI3BAD,PTMILSDN,PTMIOGNO:
                            PTMSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DAADMNO,AADMNO
         MOVE      DASTAT,ASTAT
         MOVE      DPTMIPVI,PTMIPVIS
         MOVE      DPTMIDDI,PTMIDDIG
         MOVE      AADMNO,SSAADMNO
         MOVE      ASTAT,SSASTAT
         MOVE      ADATE,SSADATE
.
         PACK      KEY8,DAADMNO,SP70
         CALL      RDPMVX11
         GOTO      OVERCOND IF OVER
.
         RETURN
.
.       EIGHTH ADMISSION  I/O
.
RAPTMI18 RESET     KEY17
         MOVE      ZERO,OVRCD
         READ      PATMI1A8,KEY17;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RSPTMI18 RESET     KEY17
         READ      PATMI1A8,KEY17;;
         RETURN 
.
RDPTMI18 MOVE      ZERO,OVRCD
         RESET     KEY17
         READ      PATMI1A8,KEY17;DAADMNO,AURNO,ADATE,ATIME:
                                  DASTAT,APORT,ATRANNO,AINVPRT,ALACDTE:
                                  ACANCEL,AWARD,ABED,ADOCTR,ADOCTA:
                                  ADOCTL,ASRCE,ATYPE,ACLSS,ACARE,AFUNDH:
                                  AFNDTB,AFNDMM,AELIG,AVISIT,AALERG:
                                  AILLN,ADIAG1,ADIAG2,ADISC,ADOCTT,ACLSSFT:
                                  AALLOW,AMBS,ACLAIM,ADIET,APLOCCR,ASTAY:
                                  ADYHOSP,AMEMB,AMEMBNO:
                                  ACOMM1,ACOMM2,APLUR,APURGE,AUSR1:
                                  AUSR2,AUSR3,AUSR4,AUSR5,AUSR6,AUSR7:
                                  ADSCHI,ARDRNAM,AFNDYY,AFNDCG:
                                  AOCCDTE,ACODDTE,ARETDTE,AMUMADM,DPTMIPVI:
                                  ABWGHT:
                                  PTMSRFGP,PTMSGPPC,PTMSFHAN,PTMSECRA:
                                  PTMSMGIN,DPTMIDDI,PTMIGPPT,PTMIDOFR:
                                  PTMIREFD,PTMIDFCN,PTMIPHPU,PTMIAGNC:
                                  PTMIESSF,PTMIUSR8,PTMIUSR9,PTMIUSR0:
                                  PTMIPDRG,PTMIOPER,PTMIXWRD,PTMIADOC:
                                  PTMIREGS,PTMIUYN1,PTMIUYN2,PTMIPANO:
                                  PTMIPADT,PTMIPCMX,PTMIGSTA,PTMICMXP:
                                  PTMIEBED,PTMIDMOV,PTMIDFAS,PTMICRCD:
                                  PTMIFINV,PTMICONB,PTMIDATC,PTMITIMC:
                                  PTMIWEBC,PTMIDATU,PTMITIMU,PTMIWEBU:
                                  PTMI3BDY,PTMI3BAD,PTMILSDN,PTMIOGNO:
                                  PTMSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DAADMNO,AADMNO
         MOVE      DASTAT,ASTAT
         MOVE      DPTMIPVI,PTMIPVIS
         MOVE      DPTMIDDI,PTMIDDIG
         MOVE      AADMNO,SSAADMNO
         MOVE      ASTAT,SSASTAT
         MOVE      ADATE,SSADATE
.
         PACK      KEY8,DAADMNO,SP70
         CALL      RDPMVX11
         GOTO      OVERCOND IF OVER
.
         RETURN 
.
RKPTMI18 MOVE      ZERO,OVRCD
         READKS    PATMI1A8;DAADMNO,AURNO,ADATE,ATIME:
                            DASTAT,APORT,ATRANNO,AINVPRT,ALACDTE:
                            ACANCEL,AWARD,ABED,ADOCTR,ADOCTA:
                            ADOCTL,ASRCE,ATYPE,ACLSS,ACARE,AFUNDH:
                            AFNDTB,AFNDMM,AELIG,AVISIT,AALERG:
                            AILLN,ADIAG1,ADIAG2,ADISC,ADOCTT,ACLSSFT:
                            AALLOW,AMBS,ACLAIM,ADIET,APLOCCR,ASTAY:
                            ADYHOSP,AMEMB,AMEMBNO:
                            ACOMM1,ACOMM2,APLUR,APURGE,AUSR1:
                            AUSR2,AUSR3,AUSR4,AUSR5,AUSR6,AUSR7:
                            ADSCHI,ARDRNAM,AFNDYY,AFNDCG:
                            AOCCDTE,ACODDTE,ARETDTE,AMUMADM,DPTMIPVI:
                            ABWGHT:
                            PTMSRFGP,PTMSGPPC,PTMSFHAN,PTMSECRA:
                            PTMSMGIN,DPTMIDDI,PTMIGPPT,PTMIDOFR:
                            PTMIREFD,PTMIDFCN,PTMIPHPU,PTMIAGNC:
                            PTMIESSF,PTMIUSR8,PTMIUSR9,PTMIUSR0:
                            PTMIPDRG,PTMIOPER,PTMIXWRD,PTMIADOC:
                            PTMIREGS,PTMIUYN1,PTMIUYN2,PTMIPANO:
                            PTMIPADT,PTMIPCMX,PTMIGSTA,PTMICMXP:
                            PTMIEBED,PTMIDMOV,PTMIDFAS,PTMICRCD:
                            PTMIFINV,PTMICONB,PTMIDATC,PTMITIMC:
                            PTMIWEBC,PTMIDATU,PTMITIMU,PTMIWEBU:
                            PTMI3BDY,PTMI3BAD,PTMILSDN,PTMIOGNO:
                            PTMSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DAADMNO,AADMNO
         MOVE      DASTAT,ASTAT
         MOVE      DPTMIPVI,PTMIPVIS
         MOVE      DPTMIDDI,PTMIDDIG
         MOVE      AADMNO,SSAADMNO
         MOVE      ASTAT,SSASTAT
         MOVE      ADATE,SSADATE
.
         PACK      KEY8,DAADMNO,SP70
         CALL      RDPMVX11
         GOTO      OVERCOND IF OVER
.
         RETURN
.
RPPTMI18 MOVE      ZERO,OVRCD
         READKP    PATMI1A8;DAADMNO,AURNO,ADATE,ATIME:
                            DASTAT,APORT,ATRANNO,AINVPRT,ALACDTE:
                            ACANCEL,AWARD,ABED,ADOCTR,ADOCTA:
                            ADOCTL,ASRCE,ATYPE,ACLSS,ACARE,AFUNDH:
                            AFNDTB,AFNDMM,AELIG,AVISIT,AALERG:
                            AILLN,ADIAG1,ADIAG2,ADISC,ADOCTT,ACLSSFT:
                            AALLOW,AMBS,ACLAIM,ADIET,APLOCCR,ASTAY:
                            ADYHOSP,AMEMB,AMEMBNO:
                            ACOMM1,ACOMM2,APLUR,APURGE,AUSR1:
                            AUSR2,AUSR3,AUSR4,AUSR5,AUSR6,AUSR7:
                            ADSCHI,ARDRNAM,AFNDYY,AFNDCG:
                            AOCCDTE,ACODDTE,ARETDTE,AMUMADM,DPTMIPVI:
                            ABWGHT:
                            PTMSRFGP,PTMSGPPC,PTMSFHAN,PTMSECRA:
                            PTMSMGIN,DPTMIDDI,PTMIGPPT,PTMIDOFR:
                            PTMIREFD,PTMIDFCN,PTMIPHPU,PTMIAGNC:
                            PTMIESSF,PTMIUSR8,PTMIUSR9,PTMIUSR0:
                            PTMIPDRG,PTMIOPER,PTMIXWRD,PTMIADOC:
                            PTMIREGS,PTMIUYN1,PTMIUYN2,PTMIPANO:
                            PTMIPADT,PTMIPCMX,PTMIGSTA,PTMICMXP:
                            PTMIEBED,PTMIDMOV,PTMIDFAS,PTMICRCD:
                            PTMIFINV,PTMICONB,PTMIDATC,PTMITIMC:
                            PTMIWEBC,PTMIDATU,PTMITIMU,PTMIWEBU:
                            PTMI3BDY,PTMI3BAD,PTMILSDN,PTMIOGNO:
                            PTMSSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DAADMNO,AADMNO
         MOVE      DASTAT,ASTAT
         MOVE      DPTMIPVI,PTMIPVIS
         MOVE      DPTMIDDI,PTMIDDIG
         MOVE      AADMNO,SSAADMNO
         MOVE      ASTAT,SSASTAT
         MOVE      ADATE,SSADATE
.
         PACK      KEY8,DAADMNO,SP70
         CALL      RDPMVX11
         GOTO      OVERCOND IF OVER
.
         RETURN
