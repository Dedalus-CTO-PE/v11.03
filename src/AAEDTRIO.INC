.
.         INC       AAEDTRIO.PBL
.
.         FILE  I/O REQUESTS FOR DEBTORS TRANSACTION FILE
.
.OVRCD  FORM            1             0=NOT OVER
.                                     1= OVER
.KEY22   DIM           22             KEY FOR AAEDTRE1
.KEY31   DIM           21             KEY FOR AAEDTRE2
.KEY31   DIM           31             KEY FOR AAEDTRE3
.KEY23   DIM           23             KEY FOR AAEDTRE4
.KEY40   DIM           40             KEY FOR AAEDTRE5
.KEY40   DIM           40             KEY FOR AAEDTRE6
.KEY38   DIM           38             KEY FOR AAEDTRE7
.
.         NOTE:-
.                  RDAAAX  IS AAE READ CALL ON FILE AAEAAAX
.                  RDKAAAX  IS AAE READKS CALL
.                  WRAAAX  IS AAE WRITE CALL
.                  UPAAAX  IS AAE UPDATE CALL
.                  DEAAAX  IS AAE DELETE CALL
. 
.         NOTE  OVRCD=1   RECORD DOSENT EXIST
.                     2   RECORD IS LOCKED
.
RDADTRE1 RESET     KEY22
         MOVE      ZERO,OVRCD
         READ      AAEDTRE1,KEY22;ANS
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDSDTRE1 RESET     KEY22
         READ      AAEDTRE1,KEY22;;
         RETURN  
.
RDDTRE1  MOVE      ZERO,OVRCD
         RESET     KEY22
         READ      AAEDTRE1,KEY22;DATNUMB,ATINVNO,DATTRANS,ATDDESC,ATPATAMT:
                                  ATDDATE,ATITEMNO,ATTYPE,ATPAYTYP,ATRECEPT:
                                  ATINVPRT,DATRECTY,ATCHGDTE,ATCHGTIM:
                                  ATMISGRP,ATDEPTYP,ATBATCHN:
                                  ATPATPOR,ATREBPOR,DATNINVS,ATSERVS:
                                  ATDTEFFD,ATSPARE1,ATSPARE2:
                                  ATDTGSTA,ATDTGSTC,ATDTGSTM:
                                  ATDTCRST,ATDTBTCH,ATDTSUBN,ATDTEDAD:
                                  ATDTSVTM,ATDTSCHF,ATDTITYP,ATDTRBRS:
                                  ATDTPCOD,ATDTACOI,ATDTDSOV,ATDTSTXT:
                                  ATDTLSPN,ATDTMPOV,ATDTNMPT,ATDTSDCD:
                                  ATDTTDUR,ATDTROVR,ATSPARE
.
         GOTO      OVERCOND IF OVER
         MOVE      DATNUMB,ATNUMB
         MOVE      DATTRANS,ATTRANS
         MOVE      DATRECTY,ATRECTYP
         MOVE      ONE,ATNINVS
         MOVE      DATNINVS,ATNINVS
         RETURN  
.
RDKDTRE1 MOVE      ZERO,OVRCD
         READKS    AAEDTRE1;DATNUMB,ATINVNO,DATTRANS,ATDDESC,ATPATAMT:
                            ATDDATE,ATITEMNO,ATTYPE,ATPAYTYP,ATRECEPT:
                            ATINVPRT,DATRECTY,ATCHGDTE,ATCHGTIM:
                            ATMISGRP,ATDEPTYP,ATBATCHN:
                            ATPATPOR,ATREBPOR,DATNINVS,ATSERVS:
                            ATDTEFFD,ATSPARE1,ATSPARE2:
                            ATDTGSTA,ATDTGSTC,ATDTGSTM:
                            ATDTCRST,ATDTBTCH,ATDTSUBN,ATDTEDAD:
                            ATDTSVTM,ATDTSCHF,ATDTITYP,ATDTRBRS:
                            ATDTPCOD,ATDTACOI,ATDTDSOV,ATDTSTXT:
                            ATDTLSPN,ATDTMPOV,ATDTNMPT,ATDTSDCD:
                            ATDTTDUR,ATDTROVR,ATSPARE
.
         GOTO      OVERCOND IF OVER
         MOVE      DATNUMB,ATNUMB
         MOVE      DATTRANS,ATTRANS
         MOVE      DATRECTY,ATRECTYP
         MOVE      ONE,ATNINVS
         MOVE      DATNINVS,ATNINVS
         RETURN  
.
WRDTRE1  RESET     KEY22
.
         MOVE      ATNUMB,DATNUMB
         MOVE      ATTRANS,DATTRANS
         MOVE      ATRECTYP,DATRECTY
         MOVE      ATNINVS,DATNINVS
.
         CLOCK     TIME,ATCHGTIM
         PACK      ATCHGDTE,CCC,CYY,CMM,CDD
         REP       " 0",ATCHGDTE
.
         WRITE     AAEDTRE1,KEY22;DATNUMB,ATINVNO,DATTRANS,ATDDESC,ATPATAMT:
                                  ATDDATE,ATITEMNO,ATTYPE,ATPAYTYP,ATRECEPT:
                                  ATINVPRT,DATRECTY,ATCHGDTE,ATCHGTIM:
                                  ATMISGRP,ATDEPTYP,ATBATCHN:
                                  ATPATPOR,ATREBPOR,DATNINVS,ATSERVS:
                                  ATDTEFFD,ATSPARE1,ATSPARE2:
                                  ATDTGSTA,ATDTGSTC,ATDTGSTM:
                                  ATDTCRST,ATDTBTCH,ATDTSUBN,ATDTEDAD:
                                  ATDTSVTM,ATDTSCHF,ATDTITYP,ATDTRBRS:
                                  ATDTPCOD,ATDTACOI,ATDTDSOV,ATDTSTXT:
                                  ATDTLSPN,ATDTMPOV,ATDTNMPT,ATDTSDCD:
                                  ATDTTDUR,ATDTROVR,ATSPARE
         RETURN  
.
UPDTRE1  MOVE      ATNUMB,DATNUMB
         MOVE      ATTRANS,DATTRANS
         MOVE      ATRECTYP,DATRECTY
         MOVE      ATNINVS,DATNINVS
.
         CLOCK     TIME,ATCHGTIM
         PACK      ATCHGDTE,CCC,CYY,CMM,CDD
         REP       " 0",ATCHGDTE
.
         UPDATE    AAEDTRE1;DATNUMB,ATINVNO,DATTRANS,ATDDESC,ATPATAMT:
                            ATDDATE,ATITEMNO,ATTYPE,ATPAYTYP,ATRECEPT:
                            ATINVPRT,DATRECTY,ATCHGDTE,ATCHGTIM:
                            ATMISGRP,ATDEPTYP,ATBATCHN:
                            ATPATPOR,ATREBPOR,DATNINVS,ATSERVS:
                            ATDTEFFD,ATSPARE1,ATSPARE2:
                            ATDTGSTA,ATDTGSTC,ATDTGSTM:
                            ATDTCRST,ATDTBTCH,ATDTSUBN,ATDTEDAD:
                            ATDTSVTM,ATDTSCHF,ATDTITYP,ATDTRBRS:
                            ATDTPCOD,ATDTACOI,ATDTDSOV,ATDTSTXT:
                            ATDTLSPN,ATDTMPOV,ATDTNMPT,ATDTSDCD:
                            ATDTTDUR,ATDTROVR,ATSPARE
         RETURN  
.
DEDTRE1  RESET     KEY22
         DELETE    AAEDTRE1,KEY22
         RETURN
.
RDADTRE2 RESET     KEY31
         MOVE      ZERO,OVRCD
         READ      AAEDTRE2,KEY31;ANS
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDSDTRE2 RESET     KEY31
         READ      AAEDTRE2,KEY31;;
         RETURN  
.
RDKDTRE2 MOVE      ZERO,OVRCD
         READKS    AAEDTRE2;DATNUMB,ATINVNO,DATTRANS,ATDDESC,ATPATAMT:
                            ATDDATE,ATITEMNO,ATTYPE,ATPAYTYP,ATRECEPT:
                            ATINVPRT,DATRECTY,ATCHGDTE,ATCHGTIM:
                            ATMISGRP,ATDEPTYP,ATBATCHN:
                            ATPATPOR,ATREBPOR,DATNINVS,ATSERVS:
                            ATDTEFFD,ATSPARE1,ATSPARE2:
                            ATDTGSTA,ATDTGSTC,ATDTGSTM:
                            ATDTCRST,ATDTBTCH,ATDTSUBN,ATDTEDAD:
                            ATDTSVTM,ATDTSCHF,ATDTITYP,ATDTRBRS:
                            ATDTPCOD,ATDTACOI,ATDTDSOV,ATDTSTXT:
                            ATDTLSPN,ATDTMPOV,ATDTNMPT,ATDTSDCD:
                            ATDTTDUR,ATDTROVR,ATSPARE
.
         GOTO      OVERCOND IF OVER
         MOVE      DATNUMB,ATNUMB
         MOVE      DATTRANS,ATTRANS
         MOVE      DATRECTY,ATRECTYP
         MOVE      ONE,ATNINVS
         MOVE      DATNINVS,ATNINVS
         RETURN  
.
RDSDTRE3 RESET     KEY31
         READ      AAEDTRE3,KEY31;;
         RETURN  
.
RDKDTRE3 MOVE      ZERO,OVRCD
         READKS    AAEDTRE3;DATNUMB,ATINVNO,DATTRANS,ATDDESC,ATPATAMT:
                            ATDDATE,ATITEMNO,ATTYPE,ATPAYTYP,ATRECEPT:
                            ATINVPRT,DATRECTY,ATCHGDTE,ATCHGTIM:
                            ATMISGRP,ATDEPTYP,ATBATCHN:
                            ATPATPOR,ATREBPOR,DATNINVS,ATSERVS:
                            ATDTEFFD,ATSPARE1,ATSPARE2:
                            ATDTGSTA,ATDTGSTC,ATDTGSTM:
                            ATDTCRST,ATDTBTCH,ATDTSUBN,ATDTEDAD:
                            ATDTSVTM,ATDTSCHF,ATDTITYP,ATDTRBRS:
                            ATDTPCOD,ATDTACOI,ATDTDSOV,ATDTSTXT:
                            ATDTLSPN,ATDTMPOV,ATDTNMPT,ATDTSDCD:
                            ATDTTDUR,ATDTROVR,ATSPARE
.
         GOTO      OVERCOND IF OVER
         MOVE      DATNUMB,ATNUMB
         MOVE      DATTRANS,ATTRANS
         MOVE      DATRECTY,ATRECTYP
         MOVE      ONE,ATNINVS
         MOVE      DATNINVS,ATNINVS
         RETURN  
.
RDSDTRE4 RESET     KEY23
         READ      AAEDTRE4,KEY23;;
         RETURN  
.
RDKDTRE4 MOVE      ZERO,OVRCD
         READKS    AAEDTRE4;DATNUMB,ATINVNO,DATTRANS,ATDDESC,ATPATAMT:
                            ATDDATE,ATITEMNO,ATTYPE,ATPAYTYP,ATRECEPT:
                            ATINVPRT,DATRECTY,ATCHGDTE,ATCHGTIM:
                            ATMISGRP,ATDEPTYP,ATBATCHN:
                            ATPATPOR,ATREBPOR,DATNINVS,ATSERVS:
                            ATDTEFFD,ATSPARE1,ATSPARE2:
                            ATDTGSTA,ATDTGSTC,ATDTGSTM:
                            ATDTCRST,ATDTBTCH,ATDTSUBN,ATDTEDAD:
                            ATDTSVTM,ATDTSCHF,ATDTITYP,ATDTRBRS:
                            ATDTPCOD,ATDTACOI,ATDTDSOV,ATDTSTXT:
                            ATDTLSPN,ATDTMPOV,ATDTNMPT,ATDTSDCD:
                            ATDTTDUR,ATDTROVR,ATSPARE
.
         GOTO      OVERCOND IF OVER
         MOVE      DATNUMB,ATNUMB
         MOVE      DATTRANS,ATTRANS
         MOVE      DATRECTY,ATRECTYP
         MOVE      ONE,ATNINVS
         MOVE      DATNINVS,ATNINVS
         RETURN  
.
RDSDTRE5 RESET     KEY40
         READ      AAEDTRE5,KEY40;;
         RETURN
.
RDKDTRE5 MOVE      ZERO,OVRCD
         READKS    AAEDTRE5;DATNUMB,ATINVNO,DATTRANS,ATDDESC,ATPATAMT:
                            ATDDATE,ATITEMNO,ATTYPE,ATPAYTYP,ATRECEPT:
                            ATINVPRT,DATRECTY,ATCHGDTE,ATCHGTIM:
                            ATMISGRP,ATDEPTYP,ATBATCHN:
                            ATPATPOR,ATREBPOR,DATNINVS,ATSERVS:
                            ATDTEFFD,ATSPARE1,ATSPARE2:
                            ATDTGSTA,ATDTGSTC,ATDTGSTM:
                            ATDTCRST,ATDTBTCH,ATDTSUBN,ATDTEDAD:
                            ATDTSVTM,ATDTSCHF,ATDTITYP,ATDTRBRS:
                            ATDTPCOD,ATDTACOI,ATDTDSOV,ATDTSTXT:
                            ATDTLSPN,ATDTMPOV,ATDTNMPT,ATDTSDCD:
                            ATDTTDUR,ATDTROVR,ATSPARE
.
         GOTO      OVERCOND IF OVER
         MOVE      DATNUMB,ATNUMB
         MOVE      DATTRANS,ATTRANS
         MOVE      DATRECTY,ATRECTYP
         MOVE      ONE,ATNINVS
         MOVE      DATNINVS,ATNINVS
         RETURN
.
RDSDTRE6 RESET     KEY40
         READ      AAEDTRE6,KEY40;;
         RETURN
.
RDKDTRE6 MOVE      ZERO,OVRCD
         READKS    AAEDTRE6;DATNUMB,ATINVNO,DATTRANS,ATDDESC,ATPATAMT:
                            ATDDATE,ATITEMNO,ATTYPE,ATPAYTYP,ATRECEPT:
                            ATINVPRT,DATRECTY,ATCHGDTE,ATCHGTIM:
                            ATMISGRP,ATDEPTYP,ATBATCHN:
                            ATPATPOR,ATREBPOR,DATNINVS,ATSERVS:
                            ATDTEFFD,ATSPARE1,ATSPARE2:
                            ATDTGSTA,ATDTGSTC,ATDTGSTM:
                            ATDTCRST,ATDTBTCH,ATDTSUBN,ATDTEDAD:
                            ATDTSVTM,ATDTSCHF,ATDTITYP,ATDTRBRS:
                            ATDTPCOD,ATDTACOI,ATDTDSOV,ATDTSTXT:
                            ATDTLSPN,ATDTMPOV,ATDTNMPT,ATDTSDCD:
                            ATDTTDUR,ATDTROVR,ATSPARE
.
         GOTO      OVERCOND IF OVER
         MOVE      DATNUMB,ATNUMB
         MOVE      DATTRANS,ATTRANS
         MOVE      DATRECTY,ATRECTYP
         MOVE      ONE,ATNINVS
         MOVE      DATNINVS,ATNINVS
         RETURN
.
RDSDTRE7 RESET     KEY38
         READ      AAEDTRE7,KEY38;;
         RETURN
.
RDKDTRE7 MOVE      ZERO,OVRCD
         READKS    AAEDTRE7;DATNUMB,ATINVNO,DATTRANS,ATDDESC,ATPATAMT:
                            ATDDATE,ATITEMNO,ATTYPE,ATPAYTYP,ATRECEPT:
                            ATINVPRT,DATRECTY,ATCHGDTE,ATCHGTIM:
                            ATMISGRP,ATDEPTYP,ATBATCHN:
                            ATPATPOR,ATREBPOR,DATNINVS,ATSERVS:
                            ATDTEFFD,ATSPARE1,ATSPARE2:
                            ATDTGSTA,ATDTGSTC,ATDTGSTM:
                            ATDTCRST,ATDTBTCH,ATDTSUBN,ATDTEDAD:
                            ATDTSVTM,ATDTSCHF,ATDTITYP,ATDTRBRS:
                            ATDTPCOD,ATDTACOI,ATDTDSOV,ATDTSTXT:
                            ATDTLSPN,ATDTMPOV,ATDTNMPT,ATDTSDCD:
                            ATDTTDUR,ATDTROVR,ATSPARE
.
         GOTO      OVERCOND IF OVER
         MOVE      DATNUMB,ATNUMB
         MOVE      DATTRANS,ATTRANS
         MOVE      DATRECTY,ATRECTYP
         MOVE      ONE,ATNINVS
         MOVE      DATNINVS,ATNINVS
         RETURN
.
UPDTRE7  MOVE      ATNUMB,DATNUMB
         MOVE      ATTRANS,DATTRANS
         MOVE      ATRECTYP,DATRECTY
         MOVE      ATNINVS,DATNINVS
.
         CLOCK     TIME,ATCHGTIM
         PACK      ATCHGDTE,CCC,CYY,CMM,CDD
         REP       " 0",ATCHGDTE
.
         UPDATE    AAEDTRE7;DATNUMB,ATINVNO,DATTRANS,ATDDESC,ATPATAMT:
                            ATDDATE,ATITEMNO,ATTYPE,ATPAYTYP,ATRECEPT:
                            ATINVPRT,DATRECTY,ATCHGDTE,ATCHGTIM:
                            ATMISGRP,ATDEPTYP,ATBATCHN:
                            ATPATPOR,ATREBPOR,DATNINVS,ATSERVS:
                            ATDTEFFD,ATSPARE1,ATSPARE2:
                            ATDTGSTA,ATDTGSTC,ATDTGSTM:
                            ATDTCRST,ATDTBTCH,ATDTSUBN,ATDTEDAD:
                            ATDTSVTM,ATDTSCHF,ATDTITYP,ATDTRBRS:
                            ATDTPCOD,ATDTACOI,ATDTDSOV,ATDTSTXT:
                            ATDTLSPN,ATDTMPOV,ATDTNMPT,ATDTSDCD:
                            ATDTTDUR,ATDTROVR,ATSPARE
         RETURN
