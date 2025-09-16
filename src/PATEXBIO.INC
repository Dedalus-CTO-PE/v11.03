.
. PATEXBIO.INC
. ------------
. Filename     : patexbNN
. Description  : File I/O requests for Extraction File B for Management 
.                Analysis Generation
. Variables    : OVRCD    FORM    1
.                KEY17    DIM    17
.
RAPTEXB1  MOVE      ZERO,OVRCD
          RESET     KEY17
          READ      PATEXTB1,KEY17;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPTEXB1  MOVE      ZERO,OVRCD
          RESET     KEY17
          READ      PATEXTB1,KEY17;;
          RETURN
.
RDPTEXB1  MOVE      ZERO,OVRCD
          RESET     KEY17
          READ      PATEXTB1,KEY17;DPTXBADM,PTXBTDAT,PTXBTYPE,PTXBNDAY:
                                   PTXBTWRD,PTXBTBED,PTXBTTYP,PTXBTCRE:
                                   PTXBTDPT,PTXBTADC,PTXBTADT,PTXBACCM:
                                   PTXBACCP,PTXBACCR,PTXBDISC,PTXBALLW:
                                   PTXBTHET,PTXBTHTP,PTXBTHTR,PTXBMISC:
                                   PTXBMISP,PTXBMISR,PTXBLSPT,PTXBLSRB:
                                   PTXBSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTXBADM,PTXBADMN
          RETURN
.
RKPTEXB1  MOVE      ZERO,OVRCD
          RESET     KEY17
          READKS    PATEXTB1;DPTXBADM,PTXBTDAT,PTXBTYPE,PTXBNDAY:
                             PTXBTWRD,PTXBTBED,PTXBTTYP,PTXBTCRE:
                             PTXBTDPT,PTXBTADC,PTXBTADT,PTXBACCM:
                             PTXBACCP,PTXBACCR,PTXBDISC,PTXBALLW:
                             PTXBTHET,PTXBTHTP,PTXBTHTR,PTXBMISC:
                             PTXBMISP,PTXBMISR,PTXBLSPT,PTXBLSRB:
                             PTXBSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTXBADM,PTXBADMN
          RETURN
.
RPPTEXB1  MOVE      ZERO,OVRCD
          RESET     KEY17
          READKP    PATEXTB1;DPTXBADM,PTXBTDAT,PTXBTYPE,PTXBNDAY:
                             PTXBTWRD,PTXBTBED,PTXBTTYP,PTXBTCRE:
                             PTXBTDPT,PTXBTADC,PTXBTADT,PTXBACCM:
                             PTXBACCP,PTXBACCR,PTXBDISC,PTXBALLW:
                             PTXBTHET,PTXBTHTP,PTXBTHTR,PTXBMISC:
                             PTXBMISP,PTXBMISR,PTXBLSPT,PTXBLSRB:
                             PTXBSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTXBADM,PTXBADMN
          RETURN
.
WRPTEXB1  MOVE      ZERO,OVRCD
          RESET     KEY17
          WRITE     PATEXTB1,KEY17;KEY17,PTXBNDAY,PTXBTWRD,PTXBTBED,PTXBTTYP:
                                   PTXBTCRE,PTXBTDPT,PTXBTADC,PTXBTADT:
                                   PTXBACCM,PTXBACCP,PTXBACCR,PTXBDISC:
                                   PTXBALLW,PTXBTHET,PTXBTHTP,PTXBTHTR:
                                   PTXBMISC,PTXBMISP,PTXBMISR,PTXBLSPT,PTXBLSRB:
                                   PTXBSPAR
          RETURN
.
UPPTEXB1  MOVE      PTXBADMN,DPTXBADM
          UPDATE    PATEXTB1;DPTXBADM,PTXBTDAT,PTXBTYPE,PTXBNDAY:
                             PTXBTWRD,PTXBTBED,PTXBTTYP,PTXBTCRE:
                             PTXBTDPT,PTXBTADC,PTXBTADT,PTXBACCM:
                             PTXBACCP,PTXBACCR,PTXBDISC,PTXBALLW:
                             PTXBTHET,PTXBTHTP,PTXBTHTR,PTXBMISC:
                             PTXBMISP,PTXBMISR,PTXBLSPT,PTXBLSRB:
                             PTXBSPAR
          RETURN
.
DEPTEXB1  RESET     KEY17
          DELETE    PATEXTB1,KEY17
          RETURN
.
