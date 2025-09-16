.
.         INC       PATIT2IO.INC
.
. Modifications :
.
.         FILE  I/O REQUESTS FOR OLD ITEM MASTER FILE
.
.OVRCD  FORM            1             0=NOT OVER
.                                     1= OVER
.KEY9   DIM             9             KEY FOR PATIT2M1
.KEY15  DIM             15            KEY FOR PATIT2M2
.
.         NOTE:-
.                  RDAAAX  IS THE READ CALL ON FILE PATAAAX
.                  RDKAAAX  IS THE READKS CALL
.                  WRAAAX  IS THE WRITE CALL
.                  UPAAAX  IS THE UPDATE CALL
.                  DEAAAX  IS THE DELETE CALL
.
.
RDAIT2M1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATIT2M1,KEY9;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIT2M1  MOVE      ZERO,OVRCD
         RESET     KEY9
         READ      PATIT2M1,KEY9;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
                                 ICLSS,IBAND1,IBAND2,IBAND3,IBAND4:
                                 IBAND5,IBAND6,IBAND7,IBAND8:
                                 IBAND9,IBAND10,IBAND11,IBAND12:
                                 IBAND13,IBAND14,IBAND15,IBAND16:
                                 PTITACTV,PTITLINK,PTITEXCL,PTITIWRN:
                                 PTITGSTA,PTITGSTC,PTITDCSC,PTITDESC:
                                 PTITTCER,PTITMSCH,PTITTCCD,PTITSERV:
                                 PTITECEQ,PTITECTS,PTITLWRD,PTITTACB,PTITSPAR
         GOTO      OVERCOND IF OVER
         MOVE      QIAMT,IAMT
         MOVE      IALPHA,SIALPHA  *** FOR SECOND KEY
         RETURN  
.
RDKIT2M1 MOVE      ZERO,OVRCD
         READKS    PATIT2M1;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
                                  ICLSS,IBAND1,IBAND2,IBAND3,IBAND4:
                                  IBAND5,IBAND6,IBAND7,IBAND8:
                                  IBAND9,IBAND10,IBAND11,IBAND12:
                                  IBAND13,IBAND14,IBAND15,IBAND16:
                                  PTITACTV,PTITLINK,PTITEXCL,PTITIWRN:
                                  PTITGSTA,PTITGSTC,PTITDCSC,PTITDESC:
                                  PTITTCER,PTITMSCH,PTITTCCD,PTITSERV:
                                  PTITECEQ,PTITECTS,PTITLWRD,PTITTACB,PTITSPAR
         GOTO      OVERCOND IF OVER
         MOVE      QIAMT,IAMT
         MOVE      IALPHA,SIALPHA  *** FOR SECOND KEY
         RETURN  
.
RDPIT2M1  MOVE      ZERO,OVRCD
          READKP    PATIT2M1;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
                                  ICLSS,IBAND1,IBAND2,IBAND3,IBAND4:
                                  IBAND5,IBAND6,IBAND7,IBAND8:
                                  IBAND9,IBAND10,IBAND11,IBAND12:
                                  IBAND13,IBAND14,IBAND15,IBAND16:
                                  PTITACTV,PTITLINK,PTITEXCL,PTITIWRN:
                                  PTITGSTA,PTITGSTC,PTITDCSC,PTITDESC:
                                  PTITTCER,PTITMSCH,PTITTCCD,PTITSERV:
                                  PTITECEQ,PTITECTS,PTITLWRD,PTITTACB,PTITSPAR
          GOTO      OVERCOND IF OVER
          MOVE      QIAMT,IAMT
          MOVE      IALPHA,SIALPHA  *** FOR SECOND KEY
          RETURN  
.
WRIT2M1  RESET     KEY9
         WRITE     PATIT2M1,KEY9;KEY9,IALPHA,IDESC,QIAMT,IMISGRP:
                                  ICLSS,IBAND1,IBAND2,IBAND3,IBAND4:
                                  IBAND5,IBAND6,IBAND7,IBAND8:
                                  IBAND9,IBAND10,IBAND11,IBAND12:
                                  IBAND13,IBAND14,IBAND15,IBAND16:
                                  PTITACTV,PTITLINK,PTITEXCL,PTITIWRN:
                                  PTITGSTA,PTITGSTC,PTITDCSC,PTITDESC:
                                  PTITTCER,PTITMSCH,PTITTCCD,PTITSERV:
                                  PTITECEQ,PTITECTS,PTITLWRD,PTITTACB,PTITSPAR
.
         RETURN  
.
UPIT2M1  UPDATE    PATIT2M1;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
                                  ICLSS,IBAND1,IBAND2,IBAND3,IBAND4:
                                  IBAND5,IBAND6,IBAND7,IBAND8:
                                  IBAND9,IBAND10,IBAND11,IBAND12:
                                  IBAND13,IBAND14,IBAND15,IBAND16:
                                  PTITACTV,PTITLINK,PTITEXCL,PTITIWRN:
                                  PTITGSTA,PTITGSTC,PTITDCSC,PTITDESC:
                                  PTITTCER,PTITMSCH,PTITTCCD,PTITSERV:
                                  PTITECEQ,PTITECTS,PTITLWRD,PTITTACB,PTITSPAR
.
         RETURN  
.
DEIT2M1  RESET     KEY9
         DELETE    PATIT2M1,KEY9
.
         RETURN
.
RDSIT2M1 RESET     KEY9
         READ      PATIT2M1,KEY9;;
         RETURN  
.
.
.
RDIT2M2  MOVE      ZERO,OVRCD
         RESET     KEY15
         READ      PATIT2M2,KEY15;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
                                  ICLSS,IBAND1,IBAND2,IBAND3,IBAND4:
                                  IBAND5,IBAND6,IBAND7,IBAND8:
                                  IBAND9,IBAND10,IBAND11,IBAND12:
                                  IBAND13,IBAND14,IBAND15,IBAND16:
                                  PTITACTV,PTITLINK,PTITEXCL,PTITIWRN:
                                  PTITGSTA,PTITGSTC,PTITDCSC,PTITDESC:
                                  PTITTCER,PTITMSCH,PTITTCCD,PTITSERV:
                                  PTITECEQ,PTITECTS,PTITLWRD,PTITTACB,PTITSPAR
         GOTO      OVERCOND IF OVER
         MOVE      QIAMT,IAMT
         MOVE      IALPHA,SIALPHA  *** FOR SECOND KEY
         RETURN  
.
RDKIT2M2 MOVE      ZERO,OVRCD
         READKS    PATIT2M2;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
                                  ICLSS,IBAND1,IBAND2,IBAND3,IBAND4:
                                  IBAND5,IBAND6,IBAND7,IBAND8:
                                  IBAND9,IBAND10,IBAND11,IBAND12:
                                  IBAND13,IBAND14,IBAND15,IBAND16:
                                  PTITACTV,PTITLINK,PTITEXCL,PTITIWRN:
                                  PTITGSTA,PTITGSTC,PTITDCSC,PTITDESC:
                                  PTITTCER,PTITMSCH,PTITTCCD,PTITSERV:
                                  PTITECEQ,PTITECTS,PTITLWRD,PTITTACB,PTITSPAR
         GOTO      OVERCOND IF OVER
         MOVE      QIAMT,IAMT
         MOVE      IALPHA,SIALPHA  *** FOR SECOND KEY
         RETURN  
.
RDPIT2M2 MOVE      ZERO,OVRCD
         READKP    PATIT2M2;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
                                  ICLSS,IBAND1,IBAND2,IBAND3,IBAND4:
                                  IBAND5,IBAND6,IBAND7,IBAND8:
                                  IBAND9,IBAND10,IBAND11,IBAND12:
                                  IBAND13,IBAND14,IBAND15,IBAND16:
                                  PTITACTV,PTITLINK,PTITEXCL,PTITIWRN:
                                  PTITGSTA,PTITGSTC,PTITDCSC,PTITDESC:
                                  PTITTCER,PTITMSCH,PTITTCCD,PTITSERV:
                                  PTITECEQ,PTITECTS,PTITLWRD,PTITTACB,PTITSPAR
         GOTO      OVERCOND IF OVER
         MOVE      QIAMT,IAMT
         MOVE      IALPHA,SIALPHA  *** FOR SECOND KEY
         RETURN  
.
WRIT2M2  RESET     KEY15
         WRITE     PATIT2M2,KEY15;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
                                  ICLSS,IBAND1,IBAND2,IBAND3,IBAND4:
                                  IBAND5,IBAND6,IBAND7,IBAND8:
                                  IBAND9,IBAND10,IBAND11,IBAND12:
                                  IBAND13,IBAND14,IBAND15,IBAND16:
                                  PTITACTV,PTITLINK,PTITEXCL,PTITIWRN:
                                  PTITGSTA,PTITGSTC,PTITDCSC,PTITDESC:
                                  PTITTCER,PTITMSCH,PTITTCCD,PTITSERV:
                                  PTITECEQ,PTITECTS,PTITLWRD,PTITTACB,PTITSPAR
         RETURN  
.
DEIT2M2  RESET     KEY15
         DELETE    PATIT2M2,KEY15
         RETURN
.
RDSIT2M2 RESET     KEY15
         READ      PATIT2M2,KEY15;;
         RETURN
.
RDIT2M3  MOVE      ZERO,OVRCD
         RESET     KEY49
         READ      PATIT2M3,KEY49;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
                                  ICLSS,IBAND1,IBAND2,IBAND3,IBAND4:
                                  IBAND5,IBAND6,IBAND7,IBAND8:
                                  IBAND9,IBAND10,IBAND11,IBAND12:
                                  IBAND13,IBAND14,IBAND15,IBAND16:
                                  PTITACTV,PTITLINK,PTITEXCL,PTITIWRN:
                                  PTITGSTA,PTITGSTC,PTITDCSC,PTITDESC:
                                  PTITTCER,PTITMSCH,PTITTCCD,PTITSERV:
                                  PTITECEQ,PTITECTS,PTITLWRD,PTITTACB,PTITSPAR
         GOTO      OVERCOND IF OVER
         MOVE      QIAMT,IAMT
         MOVE      IALPHA,SIALPHA  *** FOR SECOND KEY
         RETURN  
.
RDKIT2M3 MOVE      ZERO,OVRCD
         READKS    PATIT2M3;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
                                  ICLSS,IBAND1,IBAND2,IBAND3,IBAND4:
                                  IBAND5,IBAND6,IBAND7,IBAND8:
                                  IBAND9,IBAND10,IBAND11,IBAND12:
                                  IBAND13,IBAND14,IBAND15,IBAND16:
                                  PTITACTV,PTITLINK,PTITEXCL,PTITIWRN:
                                  PTITGSTA,PTITGSTC,PTITDCSC,PTITDESC:
                                  PTITTCER,PTITMSCH,PTITTCCD,PTITSERV:
                                  PTITECEQ,PTITECTS,PTITLWRD,PTITTACB,PTITSPAR
         GOTO      OVERCOND IF OVER
         MOVE      QIAMT,IAMT
         MOVE      IALPHA,SIALPHA  *** FOR SECOND KEY
         RETURN  
.
RDPIT2M3 MOVE      ZERO,OVRCD
         READKP    PATIT2M3;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
                                  ICLSS,IBAND1,IBAND2,IBAND3,IBAND4:
                                  IBAND5,IBAND6,IBAND7,IBAND8:
                                  IBAND9,IBAND10,IBAND11,IBAND12:
                                  IBAND13,IBAND14,IBAND15,IBAND16:
                                  PTITACTV,PTITLINK,PTITEXCL,PTITIWRN:
                                  PTITGSTA,PTITGSTC,PTITDCSC,PTITDESC:
                                  PTITECEQ,PTITECTS,PTITLWRD,PTITTACB,PTITSPAR
         GOTO      OVERCOND IF OVER
         MOVE      QIAMT,IAMT
         MOVE      IALPHA,SIALPHA  *** FOR SECOND KEY
         RETURN  
.
WRIT2M3  RESET     KEY49
         WRITE     PATIT2M3,KEY49;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
                                  ICLSS,IBAND1,IBAND2,IBAND3,IBAND4:
                                  IBAND5,IBAND6,IBAND7,IBAND8:
                                  IBAND9,IBAND10,IBAND11,IBAND12:
                                  IBAND13,IBAND14,IBAND15,IBAND16:
                                  PTITACTV,PTITLINK,PTITEXCL,PTITIWRN:
                                  PTITGSTA,PTITGSTC,PTITDCSC,PTITDESC:
                                  PTITTCER,PTITMSCH,PTITTCCD,PTITSERV:
                                  PTITECEQ,PTITECTS,PTITLWRD,PTITTACB,PTITSPAR
         RETURN  
.
DEIT2M3  RESET     KEY49
         DELETE    PATIT2M3,KEY49
         RETURN
.
RDSIT2M3 RESET     KEY49
         READ      PATIT2M3,KEY49;;
         RETURN
.
