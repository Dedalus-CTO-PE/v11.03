.
. OPRDEAIO.INC
. ------------
. Filename       :  oprdetaf.dat
. Description    :  Operation Usage Detail - File I/O Subroutines
. Variables      :  OVRCD     FORM      1
.                   KEY26     DIM      26    * Index 1
.                   KEY31     DIM      31    * Index 2
.                   KEY10     DIM      10    * Index 3
.                   KEY29     DIM      10    * Index 4
.                   KEY26     DIM      10    * Index 5
.                   KEY26     DIM      26    * Index 6
.                   KEY19     DIM      19    * audits
.
.------------------------------------------------------------------------------
. V11.03.02   22/03/2023    Ebon Clements    TSK 0909393
.                           Added Index 6                                
. V11.03.01   09/02/2023    Ebon Clements    TSK 0909393
.                           Added OPDAHOSP to file. Added OPDAHOSP to 
.                           index 1 and 5 (Prior to OPDADATE)
. V11.02.01   15/03/2022    Thanh T          TSK 0904278
.                           Added OPDAPRV4, OPDAPRV5 and OPDAPRV6 fields  
.------------------------------------------------------------------------------
. V10.12.02   05/04/2018    Steve Armstrong  TSK 0845588
.                           Added OPDADTFF & OPDADTFL.
. V10.12.01   23/03/2018    Steve Armstrong  TSK 0831714
.                           Added OPDAPOWD to OPDAATYP.
. V10.08.01   31/03/2016    Steve Armstrong  TSK 0313944
.                           Added OPDAMHRC.
.                           Also fixed OPDAACPD & OPDARICM to not use
.                           the OTDASPAR variable.
. V10.06.01   16/04/2015    Don Nguyen     CAR 299117
.                           Added OPDAACPD & OPDARICM to spare
. V10.04.01   18/02/2014    Peter Vela     CAR 218689
.                           Added OPDAREQN
. V10.02.01   21/06/2011    Ebon Clements  CAR 244975
.                           Added OPDAPCOM to OPDAPHMN
. V9.04.01    27/09/2005    Mike Laming   CAR 65745
.                           Add OPDACSST & OPDACSDT
. V9.02.01    12.11.2001    Ashwin
.                           Add OPDACDAT,OPDAEQR1,OPDAEQR2,OPDALEQR variables
. V9.02.02    26.11.2001    Ashwin
.                           Add OPDAEQR3
.------------------------------------------------------------------------------
.
RAOPDEA1  MOVE      ZERO,OVRCD
          RESET     KEY26
          READ      OPRDETA1,KEY26;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSOPDEA1  RESET     KEY26
          READ      OPRDETA1,KEY26;;
          RETURN  
.
RDOPDEA1  MOVE      ZERO,OVRCD
          RESET     KEY26
          READ      OPRDETA1,KEY26;OPDADATE,OPDATIME,OPDACLIN,DOPDASTA,OPDACASE:
                                   OPDAADMN,OPDAUNIQ,OPDAEXPS,OPDAEXPD:
                                   OPDAANAE,OPDATYPE,OPDATRAN,OPDAUSR1:
                                   OPDAUSR2,OPDAUSR3,OPDAUSR4,OPDAWAIT:
                                   OPDAPROV,OPDAPRV2,OPDAPRV3,OPDADES1:
                                   OPDADES2,OPDADES3,OPDACOMM,OPDACANC:
                                   OPDATHET,OPDAPRE1,OPDAPRE2,OPDAPRE3:
                                   OPDAPRE4,OPDAPRE5,OPDAPOS1,OPDAPOS2:
                                   OPDAPOS3,OPDAPOS4,OPDATDUR,OPDAKNOW:
                                   OPDACDAT,OPDAEQR1,OPDAEQR2,OPDALEQR:
                                   OPDAEQR3,OPDAUNIT,OPDAURNO,OPDAPROC:
                                   OPDACONT,OPDAASRC,OPDACSST,OPDACSDT:
                                   OPDACRDT,OPDACTIM,OPDAWEBC,OPDAUDAT:
                                   OPDAUTIM,OPDAWEBU,OPDAPCOM,OPDAVUN1:
                                   OPDAVUN2,OPDAPHMN,OPDAREQN,OPDADES4:
                                   OPDADES5,OPDADES6,OPDAFAST,OPDAAPRC:
                                   OPDAACPD,OPDARICM,OPDAMHRC,OPDAPOWD:
                                   OPDAPOBD,OPDACTYP,OPDAATYP,OPDADTFF:
                                   OPDADTFL,OPDAPRV4,OPDAPRV5,OPDAPRV6:
                                   OPDAHOSP,OPDASPAR

          GOTO      OVERCOND IF OVER
          MOVE      DOPDASTA,OPDASTAT
          RETURN  
.
RKOPDEA1  MOVE      ZERO,OVRCD
          READKS    OPRDETA1;OPDADATE,OPDATIME,OPDACLIN,DOPDASTA,OPDACASE:
                                   OPDAADMN,OPDAUNIQ,OPDAEXPS,OPDAEXPD:
                                   OPDAANAE,OPDATYPE,OPDATRAN,OPDAUSR1:
                                   OPDAUSR2,OPDAUSR3,OPDAUSR4,OPDAWAIT:
                                   OPDAPROV,OPDAPRV2,OPDAPRV3,OPDADES1:
                                   OPDADES2,OPDADES3,OPDACOMM,OPDACANC:
                                   OPDATHET,OPDAPRE1,OPDAPRE2,OPDAPRE3:
                                   OPDAPRE4,OPDAPRE5,OPDAPOS1,OPDAPOS2:
                                   OPDAPOS3,OPDAPOS4,OPDATDUR,OPDAKNOW:
                                   OPDACDAT,OPDAEQR1,OPDAEQR2,OPDALEQR:
                                   OPDAEQR3,OPDAUNIT,OPDAURNO,OPDAPROC:
                                   OPDACONT,OPDAASRC,OPDACSST,OPDACSDT:
                                   OPDACRDT,OPDACTIM,OPDAWEBC,OPDAUDAT:
                                   OPDAUTIM,OPDAWEBU,OPDAPCOM,OPDAVUN1:
                                   OPDAVUN2,OPDAPHMN,OPDAREQN,OPDADES4:
                                   OPDADES5,OPDADES6,OPDAFAST,OPDAAPRC:
                                   OPDAACPD,OPDARICM,OPDAMHRC,OPDAPOWD:
                                   OPDAPOBD,OPDACTYP,OPDAATYP,OPDADTFF:
                                   OPDADTFL,OPDAPRV4,OPDAPRV5,OPDAPRV6:
                                   OPDAHOSP,OPDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPDASTA,OPDASTAT
          RETURN  
.
RPOPDEA1  MOVE      ZERO,OVRCD
          READKP    OPRDETA1;OPDADATE,OPDATIME,OPDACLIN,DOPDASTA,OPDACASE:
                                   OPDAADMN,OPDAUNIQ,OPDAEXPS,OPDAEXPD:
                                   OPDAANAE,OPDATYPE,OPDATRAN,OPDAUSR1:
                                   OPDAUSR2,OPDAUSR3,OPDAUSR4,OPDAWAIT:
                                   OPDAPROV,OPDAPRV2,OPDAPRV3,OPDADES1:
                                   OPDADES2,OPDADES3,OPDACOMM,OPDACANC:
                                   OPDATHET,OPDAPRE1,OPDAPRE2,OPDAPRE3:
                                   OPDAPRE4,OPDAPRE5,OPDAPOS1,OPDAPOS2:
                                   OPDAPOS3,OPDAPOS4,OPDATDUR,OPDAKNOW:
                                   OPDACDAT,OPDAEQR1,OPDAEQR2,OPDALEQR:
                                   OPDAEQR3,OPDAUNIT,OPDAURNO,OPDAPROC:
                                   OPDACONT,OPDAASRC,OPDACSST,OPDACSDT:
                                   OPDACRDT,OPDACTIM,OPDAWEBC,OPDAUDAT:
                                   OPDAUTIM,OPDAWEBU,OPDAPCOM,OPDAVUN1:
                                   OPDAVUN2,OPDAPHMN,OPDAREQN,OPDADES4:
                                   OPDADES5,OPDADES6,OPDAFAST,OPDAAPRC:
                                   OPDAACPD,OPDARICM,OPDAMHRC,OPDAPOWD:
                                   OPDAPOBD,OPDACTYP,OPDAATYP,OPDADTFF:
                                   OPDADTFL,OPDAPRV4,OPDAPRV5,OPDAPRV6:
                                   OPDAHOSP,OPDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPDASTA,OPDASTAT
          RETURN  
.
UPOPDEA1  MOVE      OPDASTAT,DOPDASTA
          UPDATE    OPRDETA1;OPDADATE,OPDATIME,OPDACLIN,DOPDASTA,OPDACASE:
                                   OPDAADMN,OPDAUNIQ,OPDAEXPS,OPDAEXPD:
                                   OPDAANAE,OPDATYPE,OPDATRAN,OPDAUSR1:
                                   OPDAUSR2,OPDAUSR3,OPDAUSR4,OPDAWAIT:
                                   OPDAPROV,OPDAPRV2,OPDAPRV3,OPDADES1:
                                   OPDADES2,OPDADES3,OPDACOMM,OPDACANC:
                                   OPDATHET,OPDAPRE1,OPDAPRE2,OPDAPRE3:
                                   OPDAPRE4,OPDAPRE5,OPDAPOS1,OPDAPOS2:
                                   OPDAPOS3,OPDAPOS4,OPDATDUR,OPDAKNOW:
                                   OPDACDAT,OPDAEQR1,OPDAEQR2,OPDALEQR:
                                   OPDAEQR3,OPDAUNIT,OPDAURNO,OPDAPROC:
                                   OPDACONT,OPDAASRC,OPDACSST,OPDACSDT:
                                   OPDACRDT,OPDACTIM,OPDAWEBC,OPDAUDAT:
                                   OPDAUTIM,OPDAWEBU,OPDAPCOM,OPDAVUN1:
                                   OPDAVUN2,OPDAPHMN,OPDAREQN,OPDADES4:
                                   OPDADES5,OPDADES6,OPDAFAST,OPDAAPRC:
                                   OPDAACPD,OPDARICM,OPDAMHRC,OPDAPOWD:
                                   OPDAPOBD,OPDACTYP,OPDAATYP,OPDADTFF:
                                   OPDADTFL,OPDAPRV4,OPDAPRV5,OPDAPRV6:
                                   OPDAHOSP,OPDASPAR
          RETURN
.
WROPDEA1  RESET     KEY26
          MOVE      OPDASTAT,DOPDASTA
          WRITE     OPRDETA1,KEY26;OPDADATE,OPDATIME,OPDACLIN,DOPDASTA:
                                   OPDACASE,OPDAADMN,OPDAUNIQ:
                                   OPDAEXPS,OPDAEXPD:
                                   OPDAANAE,OPDATYPE,OPDATRAN,OPDAUSR1:
                                   OPDAUSR2,OPDAUSR3,OPDAUSR4,OPDAWAIT:
                                   OPDAPROV,OPDAPRV2,OPDAPRV3,OPDADES1:
                                   OPDADES2,OPDADES3,OPDACOMM,OPDACANC:
                                   OPDATHET,OPDAPRE1,OPDAPRE2,OPDAPRE3:
                                   OPDAPRE4,OPDAPRE5,OPDAPOS1,OPDAPOS2:
                                   OPDAPOS3,OPDAPOS4,OPDATDUR,OPDAKNOW:
                                   OPDACDAT,OPDAEQR1,OPDAEQR2,OPDALEQR:
                                   OPDAEQR3,OPDAUNIT,OPDAURNO,OPDAPROC:
                                   OPDACONT,OPDAASRC,OPDACSST,OPDACSDT:
                                   OPDACRDT,OPDACTIM,OPDAWEBC,OPDAUDAT:
                                   OPDAUTIM,OPDAWEBU,OPDAPCOM,OPDAVUN1:
                                   OPDAVUN2,OPDAPHMN,OPDAREQN,OPDADES4:
                                   OPDADES5,OPDADES6,OPDAFAST,OPDAAPRC:
                                   OPDAACPD,OPDARICM,OPDAMHRC,OPDAPOWD:
                                   OPDAPOBD,OPDACTYP,OPDAATYP,OPDADTFF:
                                   OPDADTFL,OPDAPRV4,OPDAPRV5,OPDAPRV6:
                                   OPDAHOSP,OPDASPAR
          RETURN  
.
DEOPDEA1  RESET     KEY26
          DELETE    OPRDETA1,KEY26
          RETURN
.
.         I/O routines for 2nd index
.
RAOPDEA2  MOVE      ZERO,OVRCD
          RESET     KEY31
          READ      OPRDETA2,KEY31;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSOPDEA2  RESET     KEY31
          READ      OPRDETA2,KEY31;;
          RETURN  
.
RDOPDEA2  MOVE      ZERO,OVRCD
          RESET     KEY31
          READ      OPRDETA2,KEY31;OPDADATE,OPDATIME,OPDACLIN,DOPDASTA,OPDACASE:
                                   OPDAADMN,OPDAUNIQ,OPDAEXPS,OPDAEXPD:
                                   OPDAANAE,OPDATYPE,OPDATRAN,OPDAUSR1:
                                   OPDAUSR2,OPDAUSR3,OPDAUSR4,OPDAWAIT:
                                   OPDAPROV,OPDAPRV2,OPDAPRV3,OPDADES1:
                                   OPDADES2,OPDADES3,OPDACOMM,OPDACANC:
                                   OPDATHET,OPDAPRE1,OPDAPRE2,OPDAPRE3:
                                   OPDAPRE4,OPDAPRE5,OPDAPOS1,OPDAPOS2:
                                   OPDAPOS3,OPDAPOS4,OPDATDUR,OPDAKNOW:
                                   OPDACDAT,OPDAEQR1,OPDAEQR2,OPDALEQR:
                                   OPDAEQR3,OPDAUNIT,OPDAURNO,OPDAPROC:
                                   OPDACONT,OPDAASRC,OPDACSST,OPDACSDT:
                                   OPDACRDT,OPDACTIM,OPDAWEBC,OPDAUDAT:
                                   OPDAUTIM,OPDAWEBU,OPDAPCOM,OPDAVUN1:
                                   OPDAVUN2,OPDAPHMN,OPDAREQN,OPDADES4:
                                   OPDADES5,OPDADES6,OPDAFAST,OPDAAPRC:
                                   OPDAACPD,OPDARICM,OPDAMHRC,OPDAPOWD:
                                   OPDAPOBD,OPDACTYP,OPDAATYP,OPDADTFF:
                                   OPDADTFL,OPDAPRV4,OPDAPRV5,OPDAPRV6:
                                   OPDAHOSP,OPDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPDASTA,OPDASTAT
          RETURN  
.
RKOPDEA2  MOVE      ZERO,OVRCD
          READKS    OPRDETA2;OPDADATE,OPDATIME,OPDACLIN,DOPDASTA,OPDACASE:
                                   OPDAADMN,OPDAUNIQ,OPDAEXPS,OPDAEXPD:
                                   OPDAANAE,OPDATYPE,OPDATRAN,OPDAUSR1:
                                   OPDAUSR2,OPDAUSR3,OPDAUSR4,OPDAWAIT:
                                   OPDAPROV,OPDAPRV2,OPDAPRV3,OPDADES1:
                                   OPDADES2,OPDADES3,OPDACOMM,OPDACANC:
                                   OPDATHET,OPDAPRE1,OPDAPRE2,OPDAPRE3:
                                   OPDAPRE4,OPDAPRE5,OPDAPOS1,OPDAPOS2:
                                   OPDAPOS3,OPDAPOS4,OPDATDUR,OPDAKNOW:
                                   OPDACDAT,OPDAEQR1,OPDAEQR2,OPDALEQR:
                                   OPDAEQR3,OPDAUNIT,OPDAURNO,OPDAPROC:
                                   OPDACONT,OPDAASRC,OPDACSST,OPDACSDT:
                                   OPDACRDT,OPDACTIM,OPDAWEBC,OPDAUDAT:
                                   OPDAUTIM,OPDAWEBU,OPDAPCOM,OPDAVUN1:
                                   OPDAVUN2,OPDAPHMN,OPDAREQN,OPDADES4:
                                   OPDADES5,OPDADES6,OPDAFAST,OPDAAPRC:
                                   OPDAACPD,OPDARICM,OPDAMHRC,OPDAPOWD:
                                   OPDAPOBD,OPDACTYP,OPDAATYP,OPDADTFF:
                                   OPDADTFL,OPDAPRV4,OPDAPRV5,OPDAPRV6:
                                   OPDAHOSP,OPDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPDASTA,OPDASTAT
          RETURN  
.
RPOPDEA2  MOVE      ZERO,OVRCD
          READKP    OPRDETA2;OPDADATE,OPDATIME,OPDACLIN,DOPDASTA,OPDACASE:
                                   OPDAADMN,OPDAUNIQ,OPDAEXPS,OPDAEXPD:
                                   OPDAANAE,OPDATYPE,OPDATRAN,OPDAUSR1:
                                   OPDAUSR2,OPDAUSR3,OPDAUSR4,OPDAWAIT:
                                   OPDAPROV,OPDAPRV2,OPDAPRV3,OPDADES1:
                                   OPDADES2,OPDADES3,OPDACOMM,OPDACANC:
                                   OPDATHET,OPDAPRE1,OPDAPRE2,OPDAPRE3:
                                   OPDAPRE4,OPDAPRE5,OPDAPOS1,OPDAPOS2:
                                   OPDAPOS3,OPDAPOS4,OPDATDUR,OPDAKNOW:
                                   OPDACDAT,OPDAEQR1,OPDAEQR2,OPDALEQR:
                                   OPDAEQR3,OPDAUNIT,OPDAURNO,OPDAPROC:
                                   OPDACONT,OPDAASRC,OPDACSST,OPDACSDT:
                                   OPDACRDT,OPDACTIM,OPDAWEBC,OPDAUDAT:
                                   OPDAUTIM,OPDAWEBU,OPDAPCOM,OPDAVUN1:
                                   OPDAVUN2,OPDAPHMN,OPDAREQN,OPDADES4:
                                   OPDADES5,OPDADES6,OPDAFAST,OPDAAPRC:
                                   OPDAACPD,OPDARICM,OPDAMHRC,OPDAPOWD:
                                   OPDAPOBD,OPDACTYP,OPDAATYP,OPDADTFF:
                                   OPDADTFL,OPDAPRV4,OPDAPRV5,OPDAPRV6:
                                   OPDAHOSP,OPDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPDASTA,OPDASTAT
          RETURN  
.
UPOPDEA2  MOVE      OPDASTAT,DOPDASTA
          UPDATE    OPRDETA2;OPDADATE,OPDATIME,OPDACLIN,DOPDASTA,OPDACASE:
                                   OPDAADMN,OPDAUNIQ,OPDAEXPS,OPDAEXPD:
                                   OPDAANAE,OPDATYPE,OPDATRAN,OPDAUSR1:
                                   OPDAUSR2,OPDAUSR3,OPDAUSR4,OPDAWAIT:
                                   OPDAPROV,OPDAPRV2,OPDAPRV3,OPDADES1:
                                   OPDADES2,OPDADES3,OPDACOMM,OPDACANC:
                                   OPDATHET,OPDAPRE1,OPDAPRE2,OPDAPRE3:
                                   OPDAPRE4,OPDAPRE5,OPDAPOS1,OPDAPOS2:
                                   OPDAPOS3,OPDAPOS4,OPDATDUR,OPDAKNOW:
                                   OPDACDAT,OPDAEQR1,OPDAEQR2,OPDALEQR:
                                   OPDAEQR3,OPDAUNIT,OPDAURNO,OPDAPROC:
                                   OPDACONT,OPDAASRC,OPDACSST,OPDACSDT:
                                   OPDACRDT,OPDACTIM,OPDAWEBC,OPDAUDAT:
                                   OPDAUTIM,OPDAWEBU,OPDAPCOM,OPDAVUN1:
                                   OPDAVUN2,OPDAPHMN,OPDAREQN,OPDADES4:
                                   OPDADES5,OPDADES6,OPDAFAST,OPDAAPRC:
                                   OPDAACPD,OPDARICM,OPDAMHRC,OPDAPOWD:
                                   OPDAPOBD,OPDACTYP,OPDAATYP,OPDADTFF:
                                   OPDADTFL,OPDAPRV4,OPDAPRV5,OPDAPRV6:
                                   OPDAHOSP,OPDASPAR
          RETURN
.
.
.         I/O routines for 3rd index
.
RAOPDEA3  MOVE      ZERO,OVRCD
          RESET     KEY10
          READ      OPRDETA3,KEY10;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSOPDEA3  RESET     KEY10
          READ      OPRDETA3,KEY10;;
          RETURN  
.
RDOPDEA3  MOVE      ZERO,OVRCD
          RESET     KEY10
          READ      OPRDETA3,KEY10;OPDADATE,OPDATIME,OPDACLIN,DOPDASTA,OPDACASE:
                                   OPDAADMN,OPDAUNIQ,OPDAEXPS,OPDAEXPD:
                                   OPDAANAE,OPDATYPE,OPDATRAN,OPDAUSR1:
                                   OPDAUSR2,OPDAUSR3,OPDAUSR4,OPDAWAIT:
                                   OPDAPROV,OPDAPRV2,OPDAPRV3,OPDADES1:
                                   OPDADES2,OPDADES3,OPDACOMM,OPDACANC:
                                   OPDATHET,OPDAPRE1,OPDAPRE2,OPDAPRE3:
                                   OPDAPRE4,OPDAPRE5,OPDAPOS1,OPDAPOS2:
                                   OPDAPOS3,OPDAPOS4,OPDATDUR,OPDAKNOW:
                                   OPDACDAT,OPDAEQR1,OPDAEQR2,OPDALEQR:
                                   OPDAEQR3,OPDAUNIT,OPDAURNO,OPDAPROC:
                                   OPDACONT,OPDAASRC,OPDACSST,OPDACSDT:
                                   OPDACRDT,OPDACTIM,OPDAWEBC,OPDAUDAT:
                                   OPDAUTIM,OPDAWEBU,OPDAPCOM,OPDAVUN1:
                                   OPDAVUN2,OPDAPHMN,OPDAREQN,OPDADES4:
                                   OPDADES5,OPDADES6,OPDAFAST,OPDAAPRC:
                                   OPDAACPD,OPDARICM,OPDAMHRC,OPDAPOWD:
                                   OPDAPOBD,OPDACTYP,OPDAATYP,OPDADTFF:
                                   OPDADTFL,OPDAPRV4,OPDAPRV5,OPDAPRV6:
                                   OPDAHOSP,OPDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPDASTA,OPDASTAT
          RETURN  
.
RKOPDEA3  MOVE      ZERO,OVRCD
          READKS    OPRDETA3;OPDADATE,OPDATIME,OPDACLIN,DOPDASTA,OPDACASE:
                                   OPDAADMN,OPDAUNIQ,OPDAEXPS,OPDAEXPD:
                                   OPDAANAE,OPDATYPE,OPDATRAN,OPDAUSR1:
                                   OPDAUSR2,OPDAUSR3,OPDAUSR4,OPDAWAIT:
                                   OPDAPROV,OPDAPRV2,OPDAPRV3,OPDADES1:
                                   OPDADES2,OPDADES3,OPDACOMM,OPDACANC:
                                   OPDATHET,OPDAPRE1,OPDAPRE2,OPDAPRE3:
                                   OPDAPRE4,OPDAPRE5,OPDAPOS1,OPDAPOS2:
                                   OPDAPOS3,OPDAPOS4,OPDATDUR,OPDAKNOW:
                                   OPDACDAT,OPDAEQR1,OPDAEQR2,OPDALEQR:
                                   OPDAEQR3,OPDAUNIT,OPDAURNO,OPDAPROC:
                                   OPDACONT,OPDAASRC,OPDACSST,OPDACSDT:
                                   OPDACRDT,OPDACTIM,OPDAWEBC,OPDAUDAT:
                                   OPDAUTIM,OPDAWEBU,OPDAPCOM,OPDAVUN1:
                                   OPDAVUN2,OPDAPHMN,OPDAREQN,OPDADES4:
                                   OPDADES5,OPDADES6,OPDAFAST,OPDAAPRC:
                                   OPDAACPD,OPDARICM,OPDAMHRC,OPDAPOWD:
                                   OPDAPOBD,OPDACTYP,OPDAATYP,OPDADTFF:
                                   OPDADTFL,OPDAPRV4,OPDAPRV5,OPDAPRV6:
                                   OPDAHOSP,OPDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPDASTA,OPDASTAT
          RETURN  
.
RPOPDEA3  MOVE      ZERO,OVRCD
          READKP    OPRDETA3;OPDADATE,OPDATIME,OPDACLIN,DOPDASTA,OPDACASE:
                                   OPDAADMN,OPDAUNIQ,OPDAEXPS,OPDAEXPD:
                                   OPDAANAE,OPDATYPE,OPDATRAN,OPDAUSR1:
                                   OPDAUSR2,OPDAUSR3,OPDAUSR4,OPDAWAIT:
                                   OPDAPROV,OPDAPRV2,OPDAPRV3,OPDADES1:
                                   OPDADES2,OPDADES3,OPDACOMM,OPDACANC:
                                   OPDATHET,OPDAPRE1,OPDAPRE2,OPDAPRE3:
                                   OPDAPRE4,OPDAPRE5,OPDAPOS1,OPDAPOS2:
                                   OPDAPOS3,OPDAPOS4,OPDATDUR,OPDAKNOW:
                                   OPDACDAT,OPDAEQR1,OPDAEQR2,OPDALEQR:
                                   OPDAEQR3,OPDAUNIT,OPDAURNO,OPDAPROC:
                                   OPDACONT,OPDAASRC,OPDACSST,OPDACSDT:
                                   OPDACRDT,OPDACTIM,OPDAWEBC,OPDAUDAT:
                                   OPDAUTIM,OPDAWEBU,OPDAPCOM,OPDAVUN1:
                                   OPDAVUN2,OPDAPHMN,OPDAREQN,OPDADES4:
                                   OPDADES5,OPDADES6,OPDAFAST,OPDAAPRC:
                                   OPDAACPD,OPDARICM,OPDAMHRC,OPDAPOWD:
                                   OPDAPOBD,OPDACTYP,OPDAATYP,OPDADTFF:
                                   OPDADTFL,OPDAPRV4,OPDAPRV5,OPDAPRV6:
                                   OPDAHOSP,OPDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPDASTA,OPDASTAT
          RETURN  
.
UPOPDEA3  MOVE      OPDASTAT,DOPDASTA
          UPDATE    OPRDETA3;OPDADATE,OPDATIME,OPDACLIN,DOPDASTA,OPDACASE:
                                   OPDAADMN,OPDAUNIQ,OPDAEXPS,OPDAEXPD:
                                   OPDAANAE,OPDATYPE,OPDATRAN,OPDAUSR1:
                                   OPDAUSR2,OPDAUSR3,OPDAUSR4,OPDAWAIT:
                                   OPDAPROV,OPDAPRV2,OPDAPRV3,OPDADES1:
                                   OPDADES2,OPDADES3,OPDACOMM,OPDACANC:
                                   OPDATHET,OPDAPRE1,OPDAPRE2,OPDAPRE3:
                                   OPDAPRE4,OPDAPRE5,OPDAPOS1,OPDAPOS2:
                                   OPDAPOS3,OPDAPOS4,OPDATDUR,OPDAKNOW:
                                   OPDACDAT,OPDAEQR1,OPDAEQR2,OPDALEQR:
                                   OPDAEQR3,OPDAUNIT,OPDAURNO,OPDAPROC:
                                   OPDACONT,OPDAASRC,OPDACSST,OPDACSDT:
                                   OPDACRDT,OPDACTIM,OPDAWEBC,OPDAUDAT:
                                   OPDAUTIM,OPDAWEBU,OPDAPCOM,OPDAVUN1:
                                   OPDAVUN2,OPDAPHMN,OPDAREQN,OPDADES4:
                                   OPDADES5,OPDADES6,OPDAFAST,OPDAAPRC:
                                   OPDAACPD,OPDARICM,OPDAMHRC,OPDAPOWD:
                                   OPDAPOBD,OPDACTYP,OPDAATYP,OPDADTFF:
                                   OPDADTFL,OPDAPRV4,OPDAPRV5,OPDAPRV6:
                                   OPDAHOSP,OPDASPAR
          RETURN
.
.
.         I/O routines for 4th index
.
RAOPDEA4  MOVE      ZERO,OVRCD
          RESET     KEY29
          READ      OPRDETA4,KEY29;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSOPDEA4  RESET     KEY29
          READ      OPRDETA4,KEY29;;
          RETURN
.
RDOPDEA4  MOVE      ZERO,OVRCD
          RESET     KEY10
          READ      OPRDETA4,KEY29;OPDADATE,OPDATIME,OPDACLIN,DOPDASTA,OPDACASE:
                                   OPDAADMN,OPDAUNIQ,OPDAEXPS,OPDAEXPD:
                                   OPDAANAE,OPDATYPE,OPDATRAN,OPDAUSR1:
                                   OPDAUSR2,OPDAUSR3,OPDAUSR4,OPDAWAIT:
                                   OPDAPROV,OPDAPRV2,OPDAPRV3,OPDADES1:
                                   OPDADES2,OPDADES3,OPDACOMM,OPDACANC:
                                   OPDATHET,OPDAPRE1,OPDAPRE2,OPDAPRE3:
                                   OPDAPRE4,OPDAPRE5,OPDAPOS1,OPDAPOS2:
                                   OPDAPOS3,OPDAPOS4,OPDATDUR,OPDAKNOW:
                                   OPDACDAT,OPDAEQR1,OPDAEQR2,OPDALEQR:
                                   OPDAEQR3,OPDAUNIT,OPDAURNO,OPDAPROC:
                                   OPDACONT,OPDAASRC,OPDACSST,OPDACSDT:
                                   OPDACRDT,OPDACTIM,OPDAWEBC,OPDAUDAT:
                                   OPDAUTIM,OPDAWEBU,OPDAPCOM,OPDAVUN1:
                                   OPDAVUN2,OPDAPHMN,OPDAREQN,OPDADES4:
                                   OPDADES5,OPDADES6,OPDAFAST,OPDAAPRC:
                                   OPDAACPD,OPDARICM,OPDAMHRC,OPDAPOWD:
                                   OPDAPOBD,OPDACTYP,OPDAATYP,OPDADTFF:
                                   OPDADTFL,OPDAPRV4,OPDAPRV5,OPDAPRV6:
                                   OPDAHOSP,OPDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPDASTA,OPDASTAT
          RETURN
.
RKOPDEA4  MOVE      ZERO,OVRCD
          READKS    OPRDETA4;OPDADATE,OPDATIME,OPDACLIN,DOPDASTA,OPDACASE:
                                   OPDAADMN,OPDAUNIQ,OPDAEXPS,OPDAEXPD:
                                   OPDAANAE,OPDATYPE,OPDATRAN,OPDAUSR1:
                                   OPDAUSR2,OPDAUSR3,OPDAUSR4,OPDAWAIT:
                                   OPDAPROV,OPDAPRV2,OPDAPRV3,OPDADES1:
                                   OPDADES2,OPDADES3,OPDACOMM,OPDACANC:
                                   OPDATHET,OPDAPRE1,OPDAPRE2,OPDAPRE3:
                                   OPDAPRE4,OPDAPRE5,OPDAPOS1,OPDAPOS2:
                                   OPDAPOS3,OPDAPOS4,OPDATDUR,OPDAKNOW:
                                   OPDACDAT,OPDAEQR1,OPDAEQR2,OPDALEQR:
                                   OPDAEQR3,OPDAUNIT,OPDAURNO,OPDAPROC:
                                   OPDACONT,OPDAASRC,OPDACSST,OPDACSDT:
                                   OPDACRDT,OPDACTIM,OPDAWEBC,OPDAUDAT:
                                   OPDAUTIM,OPDAWEBU,OPDAPCOM,OPDAVUN1:
                                   OPDAVUN2,OPDAPHMN,OPDAREQN,OPDADES4:
                                   OPDADES5,OPDADES6,OPDAFAST,OPDAAPRC:
                                   OPDAACPD,OPDARICM,OPDAMHRC,OPDAPOWD:
                                   OPDAPOBD,OPDACTYP,OPDAATYP,OPDADTFF:
                                   OPDADTFL,OPDAPRV4,OPDAPRV5,OPDAPRV6:
                                   OPDAHOSP,OPDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPDASTA,OPDASTAT
          RETURN
.
RPOPDEA4  MOVE      ZERO,OVRCD
          READKP    OPRDETA4;OPDADATE,OPDATIME,OPDACLIN,DOPDASTA,OPDACASE:
                                   OPDAADMN,OPDAUNIQ,OPDAEXPS,OPDAEXPD:
                                   OPDAANAE,OPDATYPE,OPDATRAN,OPDAUSR1:
                                   OPDAUSR2,OPDAUSR3,OPDAUSR4,OPDAWAIT:
                                   OPDAPROV,OPDAPRV2,OPDAPRV3,OPDADES1:
                                   OPDADES2,OPDADES3,OPDACOMM,OPDACANC:
                                   OPDATHET,OPDAPRE1,OPDAPRE2,OPDAPRE3:
                                   OPDAPRE4,OPDAPRE5,OPDAPOS1,OPDAPOS2:
                                   OPDAPOS3,OPDAPOS4,OPDATDUR,OPDAKNOW:
                                   OPDACDAT,OPDAEQR1,OPDAEQR2,OPDALEQR:
                                   OPDAEQR3,OPDAUNIT,OPDAURNO,OPDAPROC:
                                   OPDACONT,OPDAASRC,OPDACSST,OPDACSDT:
                                   OPDACRDT,OPDACTIM,OPDAWEBC,OPDAUDAT:
                                   OPDAUTIM,OPDAWEBU,OPDAPCOM,OPDAVUN1:
                                   OPDAVUN2,OPDAPHMN,OPDAREQN,OPDADES4:
                                   OPDADES5,OPDADES6,OPDAFAST,OPDAAPRC:
                                   OPDAACPD,OPDARICM,OPDAMHRC,OPDAPOWD:
                                   OPDAPOBD,OPDACTYP,OPDAATYP,OPDADTFF:
                                   OPDADTFL,OPDAPRV4,OPDAPRV5,OPDAPRV6:
                                   OPDAHOSP,OPDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPDASTA,OPDASTAT
          RETURN
.
UPOPDEA4  MOVE      OPDASTAT,DOPDASTA
          UPDATE    OPRDETA4;OPDADATE,OPDATIME,OPDACLIN,DOPDASTA,OPDACASE:
                                   OPDAADMN,OPDAUNIQ,OPDAEXPS,OPDAEXPD:
                                   OPDAANAE,OPDATYPE,OPDATRAN,OPDAUSR1:
                                   OPDAUSR2,OPDAUSR3,OPDAUSR4,OPDAWAIT:
                                   OPDAPROV,OPDAPRV2,OPDAPRV3,OPDADES1:
                                   OPDADES2,OPDADES3,OPDACOMM,OPDACANC:
                                   OPDATHET,OPDAPRE1,OPDAPRE2,OPDAPRE3:
                                   OPDAPRE4,OPDAPRE5,OPDAPOS1,OPDAPOS2:
                                   OPDAPOS3,OPDAPOS4,OPDATDUR,OPDAKNOW:
                                   OPDACDAT,OPDAEQR1,OPDAEQR2,OPDALEQR:
                                   OPDAEQR3,OPDAUNIT,OPDAURNO,OPDAPROC:
                                   OPDACONT,OPDAASRC,OPDACSST,OPDACSDT:
                                   OPDACRDT,OPDACTIM,OPDAWEBC,OPDAUDAT:
                                   OPDAUTIM,OPDAWEBU,OPDAPCOM,OPDAVUN1:
                                   OPDAVUN2,OPDAPHMN,OPDAREQN,OPDADES4:
                                   OPDADES5,OPDADES6,OPDAFAST,OPDAAPRC:
                                   OPDAACPD,OPDARICM,OPDAMHRC,OPDAPOWD:
                                   OPDAPOBD,OPDACTYP,OPDAATYP,OPDADTFF:
                                   OPDADTFL,OPDAPRV4,OPDAPRV5,OPDAPRV6:
                                   OPDAHOSP,OPDASPAR
          RETURN
.
.
RAOPDEA5  MOVE      ZERO,OVRCD
          RESET     KEY26
          READ      OPRDETA5,KEY26;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSOPDEA5  RESET     KEY26
          READ      OPRDETA5,KEY26;;
          RETURN
.
RDOPDEA5  MOVE      ZERO,OVRCD
          RESET     KEY26
          READ      OPRDETA5,KEY26;OPDADATE,OPDATIME,OPDACLIN,DOPDASTA,OPDACASE:
                                   OPDAADMN,OPDAUNIQ,OPDAEXPS,OPDAEXPD:
                                   OPDAANAE,OPDATYPE,OPDATRAN,OPDAUSR1:
                                   OPDAUSR2,OPDAUSR3,OPDAUSR4,OPDAWAIT:
                                   OPDAPROV,OPDAPRV2,OPDAPRV3,OPDADES1:
                                   OPDADES2,OPDADES3,OPDACOMM,OPDACANC:
                                   OPDATHET,OPDAPRE1,OPDAPRE2,OPDAPRE3:
                                   OPDAPRE4,OPDAPRE5,OPDAPOS1,OPDAPOS2:
                                   OPDAPOS3,OPDAPOS4,OPDATDUR,OPDAKNOW:
                                   OPDACDAT,OPDAEQR1,OPDAEQR2,OPDALEQR:
                                   OPDAEQR3,OPDAUNIT,OPDAURNO,OPDAPROC:
                                   OPDACONT,OPDAASRC,OPDACSST,OPDACSDT:
                                   OPDACRDT,OPDACTIM,OPDAWEBC,OPDAUDAT:
                                   OPDAUTIM,OPDAWEBU,OPDAPCOM,OPDAVUN1:
                                   OPDAVUN2,OPDAPHMN,OPDAREQN,OPDADES4:
                                   OPDADES5,OPDADES6,OPDAFAST,OPDAAPRC:
                                   OPDAACPD,OPDARICM,OPDAMHRC,OPDAPOWD:
                                   OPDAPOBD,OPDACTYP,OPDAATYP,OPDADTFF:
                                   OPDADTFL,OPDAPRV4,OPDAPRV5,OPDAPRV6:
                                   OPDAHOSP,OPDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPDASTA,OPDASTAT
          RETURN
.
RKOPDEA5  MOVE      ZERO,OVRCD
          READKS    OPRDETA5;OPDADATE,OPDATIME,OPDACLIN,DOPDASTA,OPDACASE:
                                   OPDAADMN,OPDAUNIQ,OPDAEXPS,OPDAEXPD:
                                   OPDAANAE,OPDATYPE,OPDATRAN,OPDAUSR1:
                                   OPDAUSR2,OPDAUSR3,OPDAUSR4,OPDAWAIT:
                                   OPDAPROV,OPDAPRV2,OPDAPRV3,OPDADES1:
                                   OPDADES2,OPDADES3,OPDACOMM,OPDACANC:
                                   OPDATHET,OPDAPRE1,OPDAPRE2,OPDAPRE3:
                                   OPDAPRE4,OPDAPRE5,OPDAPOS1,OPDAPOS2:
                                   OPDAPOS3,OPDAPOS4,OPDATDUR,OPDAKNOW:
                                   OPDACDAT,OPDAEQR1,OPDAEQR2,OPDALEQR:
                                   OPDAEQR3,OPDAUNIT,OPDAURNO,OPDAPROC:
                                   OPDACONT,OPDAASRC,OPDACSST,OPDACSDT:
                                   OPDACRDT,OPDACTIM,OPDAWEBC,OPDAUDAT:
                                   OPDAUTIM,OPDAWEBU,OPDAPCOM,OPDAVUN1:
                                   OPDAVUN2,OPDAPHMN,OPDAREQN,OPDADES4:
                                   OPDADES5,OPDADES6,OPDAFAST,OPDAAPRC:
                                   OPDAACPD,OPDARICM,OPDAMHRC,OPDAPOWD:
                                   OPDAPOBD,OPDACTYP,OPDAATYP,OPDADTFF:
                                   OPDADTFL,OPDAPRV4,OPDAPRV5,OPDAPRV6:
                                   OPDAHOSP,OPDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPDASTA,OPDASTAT
          RETURN
.
RPOPDEA5  MOVE      ZERO,OVRCD
          READKP    OPRDETA5;OPDADATE,OPDATIME,OPDACLIN,DOPDASTA,OPDACASE:
                                   OPDAADMN,OPDAUNIQ,OPDAEXPS,OPDAEXPD:
                                   OPDAANAE,OPDATYPE,OPDATRAN,OPDAUSR1:
                                   OPDAUSR2,OPDAUSR3,OPDAUSR4,OPDAWAIT:
                                   OPDAPROV,OPDAPRV2,OPDAPRV3,OPDADES1:
                                   OPDADES2,OPDADES3,OPDACOMM,OPDACANC:
                                   OPDATHET,OPDAPRE1,OPDAPRE2,OPDAPRE3:
                                   OPDAPRE4,OPDAPRE5,OPDAPOS1,OPDAPOS2:
                                   OPDAPOS3,OPDAPOS4,OPDATDUR,OPDAKNOW:
                                   OPDACDAT,OPDAEQR1,OPDAEQR2,OPDALEQR:
                                   OPDAEQR3,OPDAUNIT,OPDAURNO,OPDAPROC:
                                   OPDACONT,OPDAASRC,OPDACSST,OPDACSDT:
                                   OPDACRDT,OPDACTIM,OPDAWEBC,OPDAUDAT:
                                   OPDAUTIM,OPDAWEBU,OPDAPCOM,OPDAVUN1:
                                   OPDAVUN2,OPDAPHMN,OPDAREQN,OPDADES4:
                                   OPDADES5,OPDADES6,OPDAFAST,OPDAAPRC:
                                   OPDAACPD,OPDARICM,OPDAMHRC,OPDAPOWD:
                                   OPDAPOBD,OPDACTYP,OPDAATYP,OPDADTFF:
                                   OPDADTFL,OPDAPRV4,OPDAPRV5,OPDAPRV6:
                                   OPDAHOSP,OPDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPDASTA,OPDASTAT
          RETURN
.
UPOPDEA5  MOVE      OPDASTAT,DOPDASTA
          UPDATE    OPRDETA5;OPDADATE,OPDATIME,OPDACLIN,DOPDASTA,OPDACASE:
                                   OPDAADMN,OPDAUNIQ,OPDAEXPS,OPDAEXPD:
                                   OPDAANAE,OPDATYPE,OPDATRAN,OPDAUSR1:
                                   OPDAUSR2,OPDAUSR3,OPDAUSR4,OPDAWAIT:
                                   OPDAPROV,OPDAPRV2,OPDAPRV3,OPDADES1:
                                   OPDADES2,OPDADES3,OPDACOMM,OPDACANC:
                                   OPDATHET,OPDAPRE1,OPDAPRE2,OPDAPRE3:
                                   OPDAPRE4,OPDAPRE5,OPDAPOS1,OPDAPOS2:
                                   OPDAPOS3,OPDAPOS4,OPDATDUR,OPDAKNOW:
                                   OPDACDAT,OPDAEQR1,OPDAEQR2,OPDALEQR:
                                   OPDAEQR3,OPDAUNIT,OPDAURNO,OPDAPROC:
                                   OPDACONT,OPDAASRC,OPDACSST,OPDACSDT:
                                   OPDACRDT,OPDACTIM,OPDAWEBC,OPDAUDAT:
                                   OPDAUTIM,OPDAWEBU,OPDAPCOM,OPDAVUN1:
                                   OPDAVUN2,OPDAPHMN,OPDAREQN,OPDADES4:
                                   OPDADES5,OPDADES6,OPDAFAST,OPDAAPRC:
                                   OPDAACPD,OPDARICM,OPDAMHRC,OPDAPOWD:
                                   OPDAPOBD,OPDACTYP,OPDAATYP,OPDADTFF:
                                   OPDADTFL,OPDAPRV4,OPDAPRV5,OPDAPRV6:
                                   OPDAHOSP,OPDASPAR
          RETURN
.
WROPDEA5  RESET     KEY26
          MOVE      OPDASTAT,DOPDASTA
          WRITE     OPRDETA5,KEY26;OPDADATE,OPDATIME,OPDACLIN,DOPDASTA:
                                   OPDAADMN,OPDAUNIQ:
                                   OPDAEXPS,OPDAEXPD:
                                   OPDAANAE,OPDATYPE,OPDATRAN,OPDAUSR1:
                                   OPDAUSR2,OPDAUSR3,OPDAUSR4,OPDAWAIT:
                                   OPDAPROV,OPDAPRV2,OPDAPRV3,OPDADES1:
                                   OPDADES2,OPDADES3,OPDACOMM,OPDACANC:
                                   OPDATHET,OPDAPRE1,OPDAPRE2,OPDAPRE3:
                                   OPDAPRE4,OPDAPRE5,OPDAPOS1,OPDAPOS2:
                                   OPDAPOS3,OPDAPOS4,OPDATDUR,OPDAKNOW:
                                   OPDACDAT,OPDAEQR1,OPDAEQR2,OPDALEQR:
                                   OPDAEQR3,OPDAUNIT,OPDAURNO,OPDAPROC:
                                   OPDACONT,OPDAASRC,OPDACSST,OPDACSDT:
                                   OPDACRDT,OPDACTIM,OPDAWEBC,OPDAUDAT:
                                   OPDAUTIM,OPDAWEBU,OPDAPCOM,OPDAVUN1:
                                   OPDAVUN2,OPDAPHMN,OPDAREQN,OPDADES4:
                                   OPDADES5,OPDADES6,OPDAFAST,OPDAAPRC:
                                   OPDAACPD,OPDARICM,OPDAMHRC,OPDAPOWD:
                                   OPDAPOBD,OPDACTYP,OPDAATYP,OPDADTFF:
                                   OPDADTFL,OPDAPRV4,OPDAPRV5,OPDAPRV6:
                                   OPDAHOSP,OPDASPAR
          RETURN
.
DEOPDEA5  RESET     KEY26
          DELETE    OPRDETA5,KEY26
          RETURN
.
RAOPDEA6  MOVE      ZERO,OVRCD
          RESET     KEY26
          READ      OPRDETA6,KEY26;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSOPDEA6  RESET     KEY26
          READ      OPRDETA6,KEY26;;
          RETURN
.
RDOPDEA6  MOVE      ZERO,OVRCD
          RESET     KEY26
          READ      OPRDETA6,KEY26;OPDADATE,OPDATIME,OPDACLIN,DOPDASTA,OPDACASE:
                                   OPDAADMN,OPDAUNIQ,OPDAEXPS,OPDAEXPD:
                                   OPDAANAE,OPDATYPE,OPDATRAN,OPDAUSR1:
                                   OPDAUSR2,OPDAUSR3,OPDAUSR4,OPDAWAIT:
                                   OPDAPROV,OPDAPRV2,OPDAPRV3,OPDADES1:
                                   OPDADES2,OPDADES3,OPDACOMM,OPDACANC:
                                   OPDATHET,OPDAPRE1,OPDAPRE2,OPDAPRE3:
                                   OPDAPRE4,OPDAPRE5,OPDAPOS1,OPDAPOS2:
                                   OPDAPOS3,OPDAPOS4,OPDATDUR,OPDAKNOW:
                                   OPDACDAT,OPDAEQR1,OPDAEQR2,OPDALEQR:
                                   OPDAEQR3,OPDAUNIT,OPDAURNO,OPDAPROC:
                                   OPDACONT,OPDAASRC,OPDACSST,OPDACSDT:
                                   OPDACRDT,OPDACTIM,OPDAWEBC,OPDAUDAT:
                                   OPDAUTIM,OPDAWEBU,OPDAPCOM,OPDAVUN1:
                                   OPDAVUN2,OPDAPHMN,OPDAREQN,OPDADES4:
                                   OPDADES5,OPDADES6,OPDAFAST,OPDAAPRC:
                                   OPDAACPD,OPDARICM,OPDAMHRC,OPDAPOWD:
                                   OPDAPOBD,OPDACTYP,OPDAATYP,OPDADTFF:
                                   OPDADTFL,OPDAPRV4,OPDAPRV5,OPDAPRV6:
                                   OPDAHOSP,OPDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPDASTA,OPDASTAT
          RETURN
.
RKOPDEA6  MOVE      ZERO,OVRCD
          READKS    OPRDETA6;OPDADATE,OPDATIME,OPDACLIN,DOPDASTA,OPDACASE:
                                   OPDAADMN,OPDAUNIQ,OPDAEXPS,OPDAEXPD:
                                   OPDAANAE,OPDATYPE,OPDATRAN,OPDAUSR1:
                                   OPDAUSR2,OPDAUSR3,OPDAUSR4,OPDAWAIT:
                                   OPDAPROV,OPDAPRV2,OPDAPRV3,OPDADES1:
                                   OPDADES2,OPDADES3,OPDACOMM,OPDACANC:
                                   OPDATHET,OPDAPRE1,OPDAPRE2,OPDAPRE3:
                                   OPDAPRE4,OPDAPRE5,OPDAPOS1,OPDAPOS2:
                                   OPDAPOS3,OPDAPOS4,OPDATDUR,OPDAKNOW:
                                   OPDACDAT,OPDAEQR1,OPDAEQR2,OPDALEQR:
                                   OPDAEQR3,OPDAUNIT,OPDAURNO,OPDAPROC:
                                   OPDACONT,OPDAASRC,OPDACSST,OPDACSDT:
                                   OPDACRDT,OPDACTIM,OPDAWEBC,OPDAUDAT:
                                   OPDAUTIM,OPDAWEBU,OPDAPCOM,OPDAVUN1:
                                   OPDAVUN2,OPDAPHMN,OPDAREQN,OPDADES4:
                                   OPDADES5,OPDADES6,OPDAFAST,OPDAAPRC:
                                   OPDAACPD,OPDARICM,OPDAMHRC,OPDAPOWD:
                                   OPDAPOBD,OPDACTYP,OPDAATYP,OPDADTFF:
                                   OPDADTFL,OPDAPRV4,OPDAPRV5,OPDAPRV6:
                                   OPDAHOSP,OPDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPDASTA,OPDASTAT
          RETURN
.
RPOPDEA6  MOVE      ZERO,OVRCD
          READKP    OPRDETA6;OPDADATE,OPDATIME,OPDACLIN,DOPDASTA,OPDACASE:
                                   OPDAADMN,OPDAUNIQ,OPDAEXPS,OPDAEXPD:
                                   OPDAANAE,OPDATYPE,OPDATRAN,OPDAUSR1:
                                   OPDAUSR2,OPDAUSR3,OPDAUSR4,OPDAWAIT:
                                   OPDAPROV,OPDAPRV2,OPDAPRV3,OPDADES1:
                                   OPDADES2,OPDADES3,OPDACOMM,OPDACANC:
                                   OPDATHET,OPDAPRE1,OPDAPRE2,OPDAPRE3:
                                   OPDAPRE4,OPDAPRE5,OPDAPOS1,OPDAPOS2:
                                   OPDAPOS3,OPDAPOS4,OPDATDUR,OPDAKNOW:
                                   OPDACDAT,OPDAEQR1,OPDAEQR2,OPDALEQR:
                                   OPDAEQR3,OPDAUNIT,OPDAURNO,OPDAPROC:
                                   OPDACONT,OPDAASRC,OPDACSST,OPDACSDT:
                                   OPDACRDT,OPDACTIM,OPDAWEBC,OPDAUDAT:
                                   OPDAUTIM,OPDAWEBU,OPDAPCOM,OPDAVUN1:
                                   OPDAVUN2,OPDAPHMN,OPDAREQN,OPDADES4:
                                   OPDADES5,OPDADES6,OPDAFAST,OPDAAPRC:
                                   OPDAACPD,OPDARICM,OPDAMHRC,OPDAPOWD:
                                   OPDAPOBD,OPDACTYP,OPDAATYP,OPDADTFF:
                                   OPDADTFL,OPDAPRV4,OPDAPRV5,OPDAPRV6:
                                   OPDAHOSP,OPDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPDASTA,OPDASTAT
          RETURN
.
UPOPDEA6  MOVE      OPDASTAT,DOPDASTA
          UPDATE    OPRDETA6;OPDADATE,OPDATIME,OPDACLIN,DOPDASTA,OPDACASE:
                                   OPDAADMN,OPDAUNIQ,OPDAEXPS,OPDAEXPD:
                                   OPDAANAE,OPDATYPE,OPDATRAN,OPDAUSR1:
                                   OPDAUSR2,OPDAUSR3,OPDAUSR4,OPDAWAIT:
                                   OPDAPROV,OPDAPRV2,OPDAPRV3,OPDADES1:
                                   OPDADES2,OPDADES3,OPDACOMM,OPDACANC:
                                   OPDATHET,OPDAPRE1,OPDAPRE2,OPDAPRE3:
                                   OPDAPRE4,OPDAPRE5,OPDAPOS1,OPDAPOS2:
                                   OPDAPOS3,OPDAPOS4,OPDATDUR,OPDAKNOW:
                                   OPDACDAT,OPDAEQR1,OPDAEQR2,OPDALEQR:
                                   OPDAEQR3,OPDAUNIT,OPDAURNO,OPDAPROC:
                                   OPDACONT,OPDAASRC,OPDACSST,OPDACSDT:
                                   OPDACRDT,OPDACTIM,OPDAWEBC,OPDAUDAT:
                                   OPDAUTIM,OPDAWEBU,OPDAPCOM,OPDAVUN1:
                                   OPDAVUN2,OPDAPHMN,OPDAREQN,OPDADES4:
                                   OPDADES5,OPDADES6,OPDAFAST,OPDAAPRC:
                                   OPDAACPD,OPDARICM,OPDAMHRC,OPDAPOWD:
                                   OPDAPOBD,OPDACTYP,OPDAATYP,OPDADTFF:
                                   OPDADTFL,OPDAPRV4,OPDAPRV5,OPDAPRV6:
                                   OPDAHOSP,OPDASPAR
          RETURN
.
WROPDEA6  RESET     KEY26
          MOVE      OPDASTAT,DOPDASTA
          WRITE     OPRDETA6,KEY26;OPDADATE,OPDATIME,OPDACLIN,DOPDASTA:
                                   OPDAADMN,OPDAUNIQ:
                                   OPDAEXPS,OPDAEXPD:
                                   OPDAANAE,OPDATYPE,OPDATRAN,OPDAUSR1:
                                   OPDAUSR2,OPDAUSR3,OPDAUSR4,OPDAWAIT:
                                   OPDAPROV,OPDAPRV2,OPDAPRV3,OPDADES1:
                                   OPDADES2,OPDADES3,OPDACOMM,OPDACANC:
                                   OPDATHET,OPDAPRE1,OPDAPRE2,OPDAPRE3:
                                   OPDAPRE4,OPDAPRE5,OPDAPOS1,OPDAPOS2:
                                   OPDAPOS3,OPDAPOS4,OPDATDUR,OPDAKNOW:
                                   OPDACDAT,OPDAEQR1,OPDAEQR2,OPDALEQR:
                                   OPDAEQR3,OPDAUNIT,OPDAURNO,OPDAPROC:
                                   OPDACONT,OPDAASRC,OPDACSST,OPDACSDT:
                                   OPDACRDT,OPDACTIM,OPDAWEBC,OPDAUDAT:
                                   OPDAUTIM,OPDAWEBU,OPDAPCOM,OPDAVUN1:
                                   OPDAVUN2,OPDAPHMN,OPDAREQN,OPDADES4:
                                   OPDADES5,OPDADES6,OPDAFAST,OPDAAPRC:
                                   OPDAACPD,OPDARICM,OPDAMHRC,OPDAPOWD:
                                   OPDAPOBD,OPDACTYP,OPDAATYP,OPDADTFF:
                                   OPDADTFL,OPDAPRV4,OPDAPRV5,OPDAPRV6:
                                   OPDAHOSP,OPDASPAR
          RETURN
.
DEOPDEA6  RESET     KEY26
          DELETE    OPRDETA6,KEY26
          RETURN
.
.      Audits
.
ASOPDEA   MOVE      ZERO,OVRCD
          RESET     KEY19
          READ      OPRAUDDA,KEY19;;
          RETURN  
.
AKOPDEA   MOVE      ZERO,OVRCD
          READKS    OPRAUDDA;OPDAAUDD,OPDAAUDT,OPDAAUDP,OPDAAUDR,OPDAAUDS:
                             OPDAAUDO,OPDADATE,OPDATIME,OPDACLIN,DOPDASTA:
                                   OPDACASE,OPDAADMN,OPDAUNIQ,OPDAEXPS:
                                   OPDAEXPD,OPDAANAE,OPDATYPE,OPDATRAN:
                                   OPDAUSR1,OPDAUSR2,OPDAUSR3,OPDAUSR4:
                                   OPDAWAIT,OPDAPROV,OPDAPRV2,OPDAPRV3:
                                   OPDADES1,OPDADES2,OPDADES3,OPDACOMM:
                                   OPDACANC,OPDATHET,OPDAPRE1,OPDAPRE2:
                                   OPDAPRE3,OPDAPRE4,OPDAPRE5,OPDAPOS1:
                                   OPDAPOS2,OPDAPOS3,OPDAPOS4,OPDATDUR:
                                   OPDAKNOW,OPDACDAT,OPDAEQR1,OPDAEQR2:
                                   OPDALEQR,OPDAEQR3,OPDAUNIT,OPDAURNO:
                                   OPDAPROC,OPDACONT,OPDAASRC,OPDACSST:
                                   OPDACSDT,OPDACRDT,OPDACTIM,OPDAWEBC:
                                   OPDAUDAT,OPDAUTIM,OPDAWEBU,OPDAPCOM:
                                   OPDAVUN1,OPDAVUN2,OPDAPHMN,OPDAREQN:
                                   OPDADES4,OPDADES5,OPDADES6,OPDAFAST:
                                   OPDAAPRC,OPDAACPD,OPDARICM,OPDAMHRC:
                                   OPDAPOWD,OPDAPOBD,OPDACTYP,OPDAATYP:
                                   OPDADTFF,OPDADTFL,OPDAPRV4,OPDAPRV5:
                                   OPDAPRV6,OPDAHOSP,OPDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPDASTA,OPDASTAT
          RETURN  
.
AWOPDEA   RESET     KEY19
          MOVE      OPDASTAT,DOPDASTA
          WRITE     OPRAUDDA,KEY19;KEY19,OPDAAUDS,OPDAAUDO:
                                   OPDADATE,OPDATIME,OPDACLIN,DOPDASTA:
                                   OPDACASE,OPDAADMN,OPDAUNIQ,OPDAEXPS:
                                   OPDAEXPD,OPDAANAE,OPDATYPE,OPDATRAN:
                                   OPDAUSR1,OPDAUSR2,OPDAUSR3,OPDAUSR4:
                                   OPDAWAIT,OPDAPROV,OPDAPRV2,OPDAPRV3:
                                   OPDADES1,OPDADES2,OPDADES3,OPDACOMM:
                                   OPDACANC,OPDATHET,OPDAPRE1,OPDAPRE2:
                                   OPDAPRE3,OPDAPRE4,OPDAPRE5,OPDAPOS1:
                                   OPDAPOS2,OPDAPOS3,OPDAPOS4,OPDATDUR:
                                   OPDAKNOW,OPDACDAT,OPDAEQR1,OPDAEQR2:
                                   OPDALEQR,OPDAEQR3,OPDAUNIT,OPDAURNO:
                                   OPDAPROC,OPDACONT,OPDAASRC,OPDACSST:
                                   OPDACSDT,OPDACRDT,OPDACTIM,OPDAWEBC:
                                   OPDAUDAT,OPDAUTIM,OPDAWEBU,OPDAPCOM:
                                   OPDAVUN1,OPDAVUN2,OPDAPHMN,OPDAREQN:
                                   OPDADES4,OPDADES5,OPDADES6,OPDAFAST:
                                   OPDAAPRC,OPDAACPD,OPDARICM,OPDAMHRC:
                                   OPDAPOWD,OPDAPOBD,OPDACTYP,OPDAATYP:
                                   OPDADTFF,OPDADTFL,OPDAPRV4,OPDAPRV5:
                                   OPDAPRV6,OPDAHOSP,OPDASPAR
          RETURN  
.
AUOPDEA   MOVE      OPDASTAT,DOPDASTA
          UPDATE    OPRAUDDA;OPDAAUDD,OPDAAUDT,OPDAAUDP,OPDAAUDR,OPDAAUDS:
                             OPDAAUDO:
                                   OPDADATE,OPDATIME,OPDACLIN,DOPDASTA:
                                   OPDACASE,OPDAADMN,OPDAUNIQ,OPDAEXPS:
                                   OPDAEXPD,OPDAANAE,OPDATYPE,OPDATRAN:
                                   OPDAUSR1,OPDAUSR2,OPDAUSR3,OPDAUSR4:
                                   OPDAWAIT,OPDAPROV,OPDAPRV2,OPDAPRV3:
                                   OPDADES1,OPDADES2,OPDADES3,OPDACOMM:
                                   OPDACANC,OPDATHET,OPDAPRE1,OPDAPRE2:
                                   OPDAPRE3,OPDAPRE4,OPDAPRE5,OPDAPOS1:
                                   OPDAPOS2,OPDAPOS3,OPDAPOS4,OPDATDUR:
                                   OPDAKNOW,OPDACDAT,OPDAEQR1,OPDAEQR2:
                                   OPDALEQR,OPDAEQR3,OPDAUNIT,OPDAURNO:
                                   OPDAPROC,OPDACONT,OPDAASRC,OPDACSST:
                                   OPDACSDT,OPDACRDT,OPDACTIM,OPDAWEBC:
                                   OPDAUDAT,OPDAUTIM,OPDAWEBU,OPDAPCOM:
                                   OPDAVUN1,OPDAVUN2,OPDAPHMN,OPDAREQN:
                                   OPDADES4,OPDADES5,OPDADES6,OPDAFAST:
                                   OPDAAPRC,OPDAACPD,OPDARICM,OPDAMHRC:
                                   OPDAPOWD,OPDAPOBD,OPDACTYP,OPDAATYP:
                                   OPDADTFF,OPDADTFL,OPDAPRV4,OPDAPRV5:
                                   OPDAPRV6,OPDAHOSP,OPDASPAR
          RETURN  
.
ADOPDEA   RESET     KEY19
          DELETE    OPRAUDDA,KEY19
          RETURN
