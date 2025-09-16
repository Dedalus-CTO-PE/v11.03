.
.         INC       PATITMIO.INC
.
. Modifications :
.         V11.01.01 24/02/2020  J.Tan            TSK 0838262
.                   Added PTITEFDT,PTITETDT,PTITCDAT,PTITCTIM,PTITCCUID etc..
.         V10.08.01 24/03/2016  Steve Armstrong  TSK 0813090
.                   Added PTITTACB
.         V10.01.01 28/02/2011  Steve Armstrong  CAR 228299
.                   Added PTITECEQ, PTITECTS & PTITLWRD to I/O statements
.         V10.00.02 27/08/2010  Steve Armstrong  CAR 228299
.                   Added PTITLWRD (for Eclipse)
.         V10.00.01 22/06/2010  Steve Armstrong  CAR 206701
.                   Added PTITECEQ & PTITECTS (for Eclipse)
.         V9.11.02  05/01/2009 Ebon Clements CAR 183976
.                   Added PTITSERV - DVA Service Code
.         V9.11.01  21/11/2008 Ebon Clements CAR 183976
.                   Added PTITTCCD - Theatre Category Code
.         V9.08.03  18/04/2007 Peter Vela CAR 135210
.                   Added PTITMSCH - Misc Service Charge Indicator
.         V9.08.02  16/11/2006 Peter Vela CAR 124538
.                   Added PTITTCER - Type of Certificate
.         V9.08.01  15/11/2006 J.Tan    CAR 120003
.                   Added PTITDESC - Long item description
.         V9.02.01  18/01/2002 J.Tan
.                   Added PTITDCSC - Daycase suggested classification
.         V9.02.00  24/10/2001 J.Tan
.                   Remove moving IAMT to QIAMT before writing and updating
.         V5.08.00  28/01/2000  J Habasque
.                   Added PTITGSTA & PTITGSTC
.         V6.03.B00 22/12/1994  Greg Horvat      New Release 6.03
.                   Added PTITEXCL - Exclusion list item
.
.         FILE  I/O REQUESTS FOR ITEM MASTER FILE
.
.OVRCD  FORM            1             0=NOT OVER
.                                     1= OVER
.KEY17  DIM             17            KEY FOR PATITEM1
.KEY23  DIM             23            KEY FOR PATITEM2
.KEY57  DIM             57            KEY FOR PATITEM3
.
.         NOTE:-
.                  RDAAAX  IS THE READ CALL ON FILE PATAAAX
.                  RDKAAAX  IS THE READKS CALL
.                  WRAAAX  IS THE WRITE CALL
.                  UPAAAX  IS THE UPDATE CALL
.                  DEAAAX  IS THE DELETE CALL
.
.
RDAITEM1  MOVE      ZERO,OVRCD
          RESET     KEY17
          READ      PATITEM1,KEY17;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDITEM1   MOVE      ZERO,OVRCD
          RESET     KEY17
          READ      PATITEM1,KEY17;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
                                  ICLSS,IBAND1,IBAND2,IBAND3,IBAND4:
                                  IBAND5,IBAND6,IBAND7,IBAND8:
                                  IBAND9,IBAND10,IBAND11,IBAND12:
                                  IBAND13,IBAND14,IBAND15,IBAND16:
                                  PTITACTV,PTITLINK,PTITEXCL,PTITIWRN:
                                  PTITGSTA,PTITGSTC,PTITDCSC,PTITDESC:
                                  PTITTCER,PTITMSCH,PTITTCCD,PTITSERV:
                                  PTITECEQ,PTITECTS,PTITLWRD,PTITTACB:
                                  PTITEFDT,PTITETDT,PTITCDAT,PTITCTIM:
                                  PTITCUID,PTITUDAT,PTITUTIM,PTITUUID,PTITSPAR
          GOTO      OVERCOND IF OVER
          MOVE      QIAMT,IAMT
          MOVE      IALPHA,SIALPHA  *** FOR SECOND KEY
          RETURN  
.
RDKITEM1  MOVE      ZERO,OVRCD
          READKS    PATITEM1;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
                             ICLSS,IBAND1,IBAND2,IBAND3,IBAND4:
                             IBAND5,IBAND6,IBAND7,IBAND8:
                             IBAND9,IBAND10,IBAND11,IBAND12:
                             IBAND13,IBAND14,IBAND15,IBAND16:
                             PTITACTV,PTITLINK,PTITEXCL,PTITIWRN:
                             PTITGSTA,PTITGSTC,PTITDCSC,PTITDESC:
                             PTITTCER,PTITMSCH,PTITTCCD,PTITSERV:
                             PTITECEQ,PTITECTS,PTITLWRD,PTITTACB:
                             PTITEFDT,PTITETDT,PTITCDAT,PTITCTIM:
                             PTITCUID,PTITUDAT,PTITUTIM,PTITUUID,PTITSPAR
          GOTO      OVERCOND IF OVER
          MOVE      QIAMT,IAMT
          MOVE      IALPHA,SIALPHA  *** FOR SECOND KEY
          RETURN  
.
RDPITEM1  MOVE      ZERO,OVRCD
          READKP    PATITEM1;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
                             ICLSS,IBAND1,IBAND2,IBAND3,IBAND4:
                             IBAND5,IBAND6,IBAND7,IBAND8:
                             IBAND9,IBAND10,IBAND11,IBAND12:
                             IBAND13,IBAND14,IBAND15,IBAND16:
                             PTITACTV,PTITLINK,PTITEXCL,PTITIWRN:
                             PTITGSTA,PTITGSTC,PTITDCSC,PTITDESC:
                             PTITTCER,PTITMSCH,PTITTCCD,PTITSERV:
                             PTITECEQ,PTITECTS,PTITLWRD,PTITTACB:
                             PTITEFDT,PTITETDT,PTITCDAT,PTITCTIM:
                             PTITCUID,PTITUDAT,PTITUTIM,PTITUUID,PTITSPAR
          GOTO      OVERCOND IF OVER
          MOVE      QIAMT,IAMT
          MOVE      IALPHA,SIALPHA  *** FOR SECOND KEY
          RETURN  
.
WRITEM1   RESET     KEY17
          WRITE     PATITEM1,KEY17;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
                                  ICLSS,IBAND1,IBAND2,IBAND3,IBAND4:
                                  IBAND5,IBAND6,IBAND7,IBAND8:
                                  IBAND9,IBAND10,IBAND11,IBAND12:
                                  IBAND13,IBAND14,IBAND15,IBAND16:
                                  PTITACTV,PTITLINK,PTITEXCL,PTITIWRN:
                                  PTITGSTA,PTITGSTC,PTITDCSC,PTITDESC:
                                  PTITTCER,PTITMSCH,PTITTCCD,PTITSERV:
                                  PTITECEQ,PTITECTS,PTITLWRD,PTITTACB:
                                  PTITEFDT,PTITETDT,PTITCDAT,PTITCTIM:
                                  PTITCUID,PTITUDAT,PTITUTIM,PTITUUID,PTITSPAR
.
          RETURN  
.
UPITEM1   UPDATE    PATITEM1;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
                             ICLSS,IBAND1,IBAND2,IBAND3,IBAND4:
                             IBAND5,IBAND6,IBAND7,IBAND8:
                             IBAND9,IBAND10,IBAND11,IBAND12:
                             IBAND13,IBAND14,IBAND15,IBAND16:
                             PTITACTV,PTITLINK,PTITEXCL,PTITIWRN:
                             PTITGSTA,PTITGSTC,PTITDCSC,PTITDESC:
                             PTITTCER,PTITMSCH,PTITTCCD,PTITSERV:
                             PTITECEQ,PTITECTS,PTITLWRD,PTITTACB:
                             PTITEFDT,PTITETDT,PTITCDAT,PTITCTIM:
                             PTITCUID,PTITUDAT,PTITUTIM,PTITUUID,PTITSPAR
.
          RETURN  
.
DEITEM1   RESET     KEY17
          DELETE    PATITEM1,KEY17
.
          RETURN
.
RDSITEM1  RESET     KEY17
          READ      PATITEM1,KEY17;;
          RETURN  
.
.
.
RDITEM2   MOVE      ZERO,OVRCD
          RESET     KEY23
          READ      PATITEM2,KEY23;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
                                   ICLSS,IBAND1,IBAND2,IBAND3,IBAND4:
                                   IBAND5,IBAND6,IBAND7,IBAND8:
                                   IBAND9,IBAND10,IBAND11,IBAND12:
                                   IBAND13,IBAND14,IBAND15,IBAND16:
                                   PTITACTV,PTITLINK,PTITEXCL,PTITIWRN:
                                   PTITGSTA,PTITGSTC,PTITDCSC,PTITDESC:
                                   PTITTCER,PTITMSCH,PTITTCCD,PTITSERV:
                                   PTITECEQ,PTITECTS,PTITLWRD,PTITTACB:
                                   PTITEFDT,PTITETDT,PTITCDAT,PTITCTIM:
                                   PTITCUID,PTITUDAT,PTITUTIM,PTITUUID,PTITSPAR
          GOTO      OVERCOND IF OVER
          MOVE      QIAMT,IAMT
          MOVE      IALPHA,SIALPHA  *** FOR SECOND KEY
          RETURN  
.
RDKITEM2  MOVE      ZERO,OVRCD
          READKS    PATITEM2;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
                             ICLSS,IBAND1,IBAND2,IBAND3,IBAND4:
                             IBAND5,IBAND6,IBAND7,IBAND8:
                             IBAND9,IBAND10,IBAND11,IBAND12:
                             IBAND13,IBAND14,IBAND15,IBAND16:
                             PTITACTV,PTITLINK,PTITEXCL,PTITIWRN:
                             PTITGSTA,PTITGSTC,PTITDCSC,PTITDESC:
                             PTITTCER,PTITMSCH,PTITTCCD,PTITSERV:
                             PTITECEQ,PTITECTS,PTITLWRD,PTITTACB:
                             PTITEFDT,PTITETDT,PTITCDAT,PTITCTIM:
                             PTITCUID,PTITUDAT,PTITUTIM,PTITUUID,PTITSPAR
          GOTO      OVERCOND IF OVER
          MOVE      QIAMT,IAMT
          MOVE      IALPHA,SIALPHA  *** FOR SECOND KEY
          RETURN  
.
RDPITEM2  MOVE      ZERO,OVRCD
          READKP    PATITEM2;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
                             ICLSS,IBAND1,IBAND2,IBAND3,IBAND4:
                             IBAND5,IBAND6,IBAND7,IBAND8:
                             IBAND9,IBAND10,IBAND11,IBAND12:
                             IBAND13,IBAND14,IBAND15,IBAND16:
                             PTITACTV,PTITLINK,PTITEXCL,PTITIWRN:
                             PTITGSTA,PTITGSTC,PTITDCSC,PTITDESC:
                             PTITTCER,PTITMSCH,PTITTCCD,PTITSERV:
                             PTITECEQ,PTITECTS,PTITLWRD,PTITTACB:
                             PTITEFDT,PTITETDT,PTITCDAT,PTITCTIM:
                             PTITCUID,PTITUDAT,PTITUTIM,PTITUUID,PTITSPAR
          GOTO      OVERCOND IF OVER
          MOVE      QIAMT,IAMT
          MOVE      IALPHA,SIALPHA  *** FOR SECOND KEY
          RETURN  
.
WRITEM2   RESET     KEY23
          WRITE     PATITEM2,KEY23;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
                                   ICLSS,IBAND1,IBAND2,IBAND3,IBAND4:
                                   IBAND5,IBAND6,IBAND7,IBAND8:
                                   IBAND9,IBAND10,IBAND11,IBAND12:
                                   IBAND13,IBAND14,IBAND15,IBAND16:
                                   PTITACTV,PTITLINK,PTITEXCL,PTITIWRN:
                                   PTITGSTA,PTITGSTC,PTITDCSC,PTITDESC:
                                   PTITTCER,PTITMSCH,PTITTCCD,PTITSERV:
                                   PTITECEQ,PTITECTS,PTITLWRD,PTITTACB:
                                   PTITEFDT,PTITETDT,PTITCDAT,PTITCTIM:
                                   PTITCUID,PTITUDAT,PTITUTIM,PTITUUID,PTITSPAR
          RETURN  
.
DEITEM2   RESET     KEY23
          DELETE    PATITEM2,KEY23
          RETURN
.
RDSITEM2  RESET     KEY23
          READ      PATITEM2,KEY23;;
          RETURN
.
RDITEM3   MOVE      ZERO,OVRCD
          RESET     KEY57
          READ      PATITEM3,KEY57;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
                                   ICLSS,IBAND1,IBAND2,IBAND3,IBAND4:
                                   IBAND5,IBAND6,IBAND7,IBAND8:
                                   IBAND9,IBAND10,IBAND11,IBAND12:
                                   IBAND13,IBAND14,IBAND15,IBAND16:
                                   PTITACTV,PTITLINK,PTITEXCL,PTITIWRN:
                                   PTITGSTA,PTITGSTC,PTITDCSC,PTITDESC:
                                   PTITTCER,PTITMSCH,PTITTCCD,PTITSERV:
                                   PTITECEQ,PTITECTS,PTITLWRD,PTITTACB:
                                   PTITEFDT,PTITETDT,PTITCDAT,PTITCTIM:
                                   PTITCUID,PTITUDAT,PTITUTIM,PTITUUID,PTITSPAR
          GOTO      OVERCOND IF OVER
          MOVE      QIAMT,IAMT
          MOVE      IALPHA,SIALPHA  *** FOR SECOND KEY
          RETURN  
.
RDKITEM3  MOVE      ZERO,OVRCD
          READKS    PATITEM3;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
                             ICLSS,IBAND1,IBAND2,IBAND3,IBAND4:
                             IBAND5,IBAND6,IBAND7,IBAND8:
                             IBAND9,IBAND10,IBAND11,IBAND12:
                             IBAND13,IBAND14,IBAND15,IBAND16:
                             PTITACTV,PTITLINK,PTITEXCL,PTITIWRN:
                             PTITGSTA,PTITGSTC,PTITDCSC,PTITDESC:
                             PTITTCER,PTITMSCH,PTITTCCD,PTITSERV:
                             PTITECEQ,PTITECTS,PTITLWRD,PTITTACB:
                             PTITEFDT,PTITETDT,PTITCDAT,PTITCTIM:
                             PTITCUID,PTITUDAT,PTITUTIM,PTITUUID,PTITSPAR
          GOTO      OVERCOND IF OVER
          MOVE      QIAMT,IAMT
          MOVE      IALPHA,SIALPHA  *** FOR SECOND KEY
          RETURN  
.
RDPITEM3  MOVE      ZERO,OVRCD
          READKP    PATITEM3;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
                             ICLSS,IBAND1,IBAND2,IBAND3,IBAND4:
                             IBAND5,IBAND6,IBAND7,IBAND8:
                             IBAND9,IBAND10,IBAND11,IBAND12:
                             IBAND13,IBAND14,IBAND15,IBAND16:
                             PTITACTV,PTITLINK,PTITEXCL,PTITIWRN:
                             PTITGSTA,PTITGSTC,PTITDCSC,PTITDESC:
                             PTITTCER,PTITMSCH,PTITTCCD,PTITSERV:
                             PTITECEQ,PTITECTS,PTITLWRD,PTITTACB:
                             PTITEFDT,PTITETDT,PTITCDAT,PTITCTIM:
                             PTITCUID,PTITUDAT,PTITUTIM,PTITUUID,PTITSPAR
          GOTO      OVERCOND IF OVER
          MOVE      QIAMT,IAMT
          MOVE      IALPHA,SIALPHA  *** FOR SECOND KEY
          RETURN  
.
WRITEM3   RESET     KEY57
          WRITE     PATITEM3,KEY57;ITEMNO,IALPHA,IDESC,QIAMT,IMISGRP:
                                   ICLSS,IBAND1,IBAND2,IBAND3,IBAND4:
                                   IBAND5,IBAND6,IBAND7,IBAND8:
                                   IBAND9,IBAND10,IBAND11,IBAND12:
                                   IBAND13,IBAND14,IBAND15,IBAND16:
                                   PTITACTV,PTITLINK,PTITEXCL,PTITIWRN:
                                   PTITGSTA,PTITGSTC,PTITDCSC,PTITDESC:
                                   PTITTCER,PTITMSCH,PTITTCCD,PTITSERV:
                                   PTITECEQ,PTITECTS,PTITLWRD,PTITTACB:
                                   PTITEFDT,PTITETDT,PTITCDAT,PTITCTIM:
                                   PTITCUID,PTITUDAT,PTITUTIM,PTITUUID,PTITSPAR
          RETURN  
.
DEITEM3   RESET     KEY57
          DELETE    PATITEM3,KEY57
          RETURN
.
RDSITEM3  RESET     KEY57
          READ      PATITEM3,KEY57;;
          RETURN
.
