.
.         INC       PATIT1IO.INC
.
. Modifications :
.         V9.11.02  05/01/2009 Ebon Clements CAR 183976
.                   Added PTITSERV - DVA Service Code
.         V9.11.01  15/01/2009 J.Tan
.                   Added Theatre category code
.         V9.08.01  15/11/2006 J.Tan    CAR 120003   
.                   Added PTITDESC - Long item description
.         V9.03.01  25/06/2003 Lina Vo
.                   Made PATIT1IO.INC same as PATITMIO.INC
.                   Added PTITDCSC - Daycase suggested classification
.                   Remove moving IAMT to QIAMT before writing and updating
.
.         FILE  I/O REQUESTS FOR NEW ITEM MASTER FILE
.
.OVRCD  FORM            1             0=NOT OVER
.                                     1= OVER
.KEY9   DIM             9             KEY FOR PATIT1M1
.KEY15  DIM             15            KEY FOR PATIT1M2
.
.         NOTE:-
.                  RDAAAX  IS THE READ CALL ON FILE PATAAAX
.                  RDKAAAX  IS THE READKS CALL
.                  WRAAAX  IS THE WRITE CALL
.                  UPAAAX  IS THE UPDATE CALL
.                  DEAAAX  IS THE DELETE CALL
.
.
RDAIT1M1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATIT1M1,KEY9;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIT1M1  MOVE      ZERO,OVRCD
         RESET     KEY9
         READ      PATIT1M1,KEY9;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
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
RDKIT1M1 MOVE      ZERO,OVRCD
         READKS    PATIT1M1;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
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
RDPIT1M1  MOVE      ZERO,OVRCD
          READKP    PATIT1M1;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
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
WRIT1M1  RESET     KEY9
         WRITE     PATIT1M1,KEY9;KEY9,IALPHA,IDESC,QIAMT,IMISGRP:
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
UPIT1M1  UPDATE    PATIT1M1;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
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
DEIT1M1  RESET     KEY9
         DELETE    PATIT1M1,KEY9
.
         RETURN
.
RDSIT1M1 RESET     KEY9
         READ      PATIT1M1,KEY9;;
         RETURN  
.
.
.
RDIT1M2  MOVE      ZERO,OVRCD
         RESET     KEY15
         READ      PATIT1M2,KEY15;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
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
RDKIT1M2 MOVE      ZERO,OVRCD
         READKS    PATIT1M2;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
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
RDPIT1M2 MOVE      ZERO,OVRCD
         READKP    PATIT1M2;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
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
WRIT1M2  RESET     KEY15
         WRITE     PATIT1M2,KEY15;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
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
DEIT1M2  RESET     KEY15
         DELETE    PATIT1M2,KEY15
         RETURN
.
RDSIT1M2 RESET     KEY15
         READ      PATIT1M2,KEY15;;
         RETURN
.
RDIT1M3  MOVE      ZERO,OVRCD
         RESET     KEY49
         READ      PATIT1M3,KEY49;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
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
RDKIT1M3 MOVE      ZERO,OVRCD
         READKS    PATIT1M3;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
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
RDPIT1M3 MOVE      ZERO,OVRCD
         READKP    PATIT1M3;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
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
WRIT1M3  RESET     KEY49
         WRITE     PATIT1M3,KEY49;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
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
DEIT1M3  RESET     KEY49
         DELETE    PATIT1M3,KEY49
         RETURN
.
RDSIT1M3 RESET     KEY49
         READ      PATIT1M3,KEY49;;
         RETURN
.
