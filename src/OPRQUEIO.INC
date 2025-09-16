.*****************************************************************************
.*        OPRQUEFD.INC                                                       *
.*                                                                           *
.*   V11.03.01 26/07/2023  Ebon Clements    TSK 0935527                      *
.*             Added OPDAHOSP which is stored in the spare OPDASPAR          *
.*             Clear OPDASPAR so it doesn't populate the spare in OPRDEAFD   *
.*****************************************************************************
.
RSOPQUE1  RESET     KEY20
          READ      OPRQUEA1,KEY20;;
          RETURN
.
RAOPQUE1  RESET     KEY20
          MOVE      ZERO,OVRCD
          READ      OPRQUEA1,KEY20;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPQUE1  RESET     KEY20
          MOVE      ZERO,OVRCD
          READ      OPRQUEA1,KEY20;DOPQUMES,OPDADATE,OPDATIME,OPDACLIN:
                                   OPDASTAT,OPDACASE,OPDAADMN,OPDAUNIQ:
                                   OPDAEXPS,OPDAEXPD,OPDAANAE,OPDATYPE:
                                   OPDATRAN,OPDAUSR1,OPDAUSR2,OPDAUSR3:
                                   OPDAUSR4,OPDAWAIT,OPDAPROV,OPDAPRV2:
                                   OPDAPRV3,OPDADES1,OPDADES2,OPDADES3:
                                   OPDACOMM,OPDACANC,OPDATHET,OPDAPRE1:
                                   OPDAPRE2,OPDAPRE3,OPDAPRE4,OPDAPRE5:
                                   OPDAPOS1,OPDAPOS2,OPDAPOS3,OPDAPOS4:
                                   OPDATDUR,OPDAKNOW,OPDACDAT,OPDAEQR1:
                                   OPDAEQR2,OPDALEQR,OPDAEQR3,OPDAUNIT:
                                   OPDAURNO,OPDAPROC,OPDACONT,OPDAASRC:
                                   OPDACSST,OPDACSDT,OPDACRDT,OPDACTIM:
                                   OPDAWEBC,OPDAUDAT,OPDAUTIM,OPDAWEBU:
                                   OPDAPCOM,OPDAVUN1,OPDAVUN2,OPDAPHMN:
                                   OPDAREQN,OPDADES4,OPDADES5,OPDADES6:
                                   OPDAFAST,OPDAAPRC,OPDAACPD,OPDARICM:
                                   OPDAMHRC,OPDAPOWD,OPDAPOBD,OPDACTYP:
                                   OPDAATYP,OPDADTFF,OPDADTFL,OPDAPRV4:
                                   OPDAPRV5,OPDAPRV6,OPDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPQUMES,OPQUMESI
          UNPACK    OPDASPAR,OPDAHOSP
          MOVE      SP70,OPDASPAR
          RETURN
.
RKOPQUE1  MOVE      ZERO,OVRCD
          READKS    OPRQUEA1;DOPQUMES,OPDADATE,OPDATIME,OPDACLIN:
                             OPDASTAT,OPDACASE,OPDAADMN,OPDAUNIQ:
                             OPDAEXPS,OPDAEXPD,OPDAANAE,OPDATYPE:
                             OPDATRAN,OPDAUSR1,OPDAUSR2,OPDAUSR3:
                             OPDAUSR4,OPDAWAIT,OPDAPROV,OPDAPRV2:
                             OPDAPRV3,OPDADES1,OPDADES2,OPDADES3:
                             OPDACOMM,OPDACANC,OPDATHET,OPDAPRE1:
                             OPDAPRE2,OPDAPRE3,OPDAPRE4,OPDAPRE5:
                             OPDAPOS1,OPDAPOS2,OPDAPOS3,OPDAPOS4:
                             OPDATDUR,OPDAKNOW,OPDACDAT,OPDAEQR1:
                             OPDAEQR2,OPDALEQR,OPDAEQR3,OPDAUNIT:
                             OPDAURNO,OPDAPROC,OPDACONT,OPDAASRC:
                             OPDACSST,OPDACSDT,OPDACRDT,OPDACTIM:
                             OPDAWEBC,OPDAUDAT,OPDAUTIM,OPDAWEBU:
                             OPDAPCOM,OPDAVUN1,OPDAVUN2,OPDAPHMN:
                             OPDAREQN,OPDADES4,OPDADES5,OPDADES6:
                             OPDAFAST,OPDAAPRC,OPDAACPD,OPDARICM:
                             OPDAMHRC,OPDAPOWD,OPDAPOBD,OPDACTYP:
                             OPDAATYP,OPDADTFF,OPDADTFL,OPDAPRV4:
                             OPDAPRV5,OPDAPRV6,OPDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPQUMES,OPQUMESI
          UNPACK    OPDASPAR,OPDAHOSP
          MOVE      SP70,OPDASPAR
          RETURN
.
RPOPQUE1  MOVE      ZERO,OVRCD
          READKP    OPRQUEA1;DOPQUMES,OPDADATE,OPDATIME,OPDACLIN:
                             OPDASTAT,OPDACASE,OPDAADMN,OPDAUNIQ:
                             OPDAEXPS,OPDAEXPD,OPDAANAE,OPDATYPE:
                             OPDATRAN,OPDAUSR1,OPDAUSR2,OPDAUSR3:
                             OPDAUSR4,OPDAWAIT,OPDAPROV,OPDAPRV2:
                             OPDAPRV3,OPDADES1,OPDADES2,OPDADES3:
                             OPDACOMM,OPDACANC,OPDATHET,OPDAPRE1:
                             OPDAPRE2,OPDAPRE3,OPDAPRE4,OPDAPRE5:
                             OPDAPOS1,OPDAPOS2,OPDAPOS3,OPDAPOS4:
                             OPDATDUR,OPDAKNOW,OPDACDAT,OPDAEQR1:
                             OPDAEQR2,OPDALEQR,OPDAEQR3,OPDAUNIT:
                             OPDAURNO,OPDAPROC,OPDACONT,OPDAASRC:
                             OPDACSST,OPDACSDT,OPDACRDT,OPDACTIM:
                             OPDAWEBC,OPDAUDAT,OPDAUTIM,OPDAWEBU:
                             OPDAPCOM,OPDAVUN1,OPDAVUN2,OPDAPHMN:
                             OPDAREQN,OPDADES4,OPDADES5,OPDADES6:
                             OPDAFAST,OPDAAPRC,OPDAACPD,OPDARICM:
                             OPDAMHRC,OPDAPOWD,OPDAPOBD,OPDACTYP:
                             OPDAATYP,OPDADTFF,OPDADTFL,OPDAPRV4:
                             OPDAPRV5,OPDAPRV6,OPDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPQUMES,OPQUMESI
          UNPACK    OPDASPAR,OPDAHOSP
          MOVE      SP70,OPDASPAR
          RETURN
.
UPOPQUE1  MOVE      OPQUMESI,DOPQUMES
          PACK      OPDASPAR,OPDAHOSP,SP70
          UPDATE    OPRQUEA1;DOPQUMES,OPDADATE,OPDATIME,OPDACLIN:
                             OPDASTAT,OPDACASE,OPDAADMN,OPDAUNIQ:
                             OPDAEXPS,OPDAEXPD,OPDAANAE,OPDATYPE:
                             OPDATRAN,OPDAUSR1,OPDAUSR2,OPDAUSR3:
                             OPDAUSR4,OPDAWAIT,OPDAPROV,OPDAPRV2:
                             OPDAPRV3,OPDADES1,OPDADES2,OPDADES3:
                             OPDACOMM,OPDACANC,OPDATHET,OPDAPRE1:
                             OPDAPRE2,OPDAPRE3,OPDAPRE4,OPDAPRE5:
                             OPDAPOS1,OPDAPOS2,OPDAPOS3,OPDAPOS4:
                             OPDATDUR,OPDAKNOW,OPDACDAT,OPDAEQR1:
                             OPDAEQR2,OPDALEQR,OPDAEQR3,OPDAUNIT:
                             OPDAURNO,OPDAPROC,OPDACONT,OPDAASRC:
                             OPDACSST,OPDACSDT,OPDACRDT,OPDACTIM:
                             OPDAWEBC,OPDAUDAT,OPDAUTIM,OPDAWEBU:
                             OPDAPCOM,OPDAVUN1,OPDAVUN2,OPDAPHMN:
                             OPDAREQN,OPDADES4,OPDADES5,OPDADES6:
                             OPDAFAST,OPDAAPRC,OPDAACPD,OPDARICM:
                             OPDAMHRC,OPDAPOWD,OPDAPOBD,OPDACTYP:
                             OPDAATYP,OPDADTFF,OPDADTFL,OPDAPRV4:
                             OPDAPRV5,OPDAPRV6,OPDASPAR
          MOVE      SP70,OPDASPAR
          RETURN
.
WROPQUE1  MOVE      OPQUMESI,DOPQUMES
          PACK      OPDASPAR,OPDAHOSP,SP70
          RESET     KEY20
          WRITE     OPRQUEA1,KEY20;DOPQUMES,OPDADATE,OPDATIME,OPDACLIN:
                                   OPDASTAT,OPDACASE,OPDAADMN,OPDAUNIQ:
                                   OPDAEXPS,OPDAEXPD,OPDAANAE,OPDATYPE:
                                   OPDATRAN,OPDAUSR1,OPDAUSR2,OPDAUSR3:
                                   OPDAUSR4,OPDAWAIT,OPDAPROV,OPDAPRV2:
                                   OPDAPRV3,OPDADES1,OPDADES2,OPDADES3:
                                   OPDACOMM,OPDACANC,OPDATHET,OPDAPRE1:
                                   OPDAPRE2,OPDAPRE3,OPDAPRE4,OPDAPRE5:
                                   OPDAPOS1,OPDAPOS2,OPDAPOS3,OPDAPOS4:
                                   OPDATDUR,OPDAKNOW,OPDACDAT,OPDAEQR1:
                                   OPDAEQR2,OPDALEQR,OPDAEQR3,OPDAUNIT:
                                   OPDAURNO,OPDAPROC,OPDACONT,OPDAASRC:
                                   OPDACSST,OPDACSDT,OPDACRDT,OPDACTIM:
                                   OPDAWEBC,OPDAUDAT,OPDAUTIM,OPDAWEBU:
                                   OPDAPCOM,OPDAVUN1,OPDAVUN2,OPDAPHMN:
                                   OPDAREQN,OPDADES4,OPDADES5,OPDADES6:
                                   OPDAFAST,OPDAAPRC,OPDAACPD,OPDARICM:
                                   OPDAMHRC,OPDAPOWD,OPDAPOBD,OPDACTYP:
                                   OPDAATYP,OPDADTFF,OPDADTFL,OPDAPRV4:
                                   OPDAPRV5,OPDAPRV6,OPDASPAR
          MOVE      SP70,OPDASPAR
          RETURN
.
DEOPQUE1  RESET     KEY20
          DELETE    OPRQUEA1,KEY20
          RETURN
+
