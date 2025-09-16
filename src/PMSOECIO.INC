.*****************************************************************************
.*        PMSOECIO.INC                                                       *
.*****************************************************************************
.
.         Index 1
.
RSPMOEC1  RESET     KEY11
          READ      PMSOECA1,KEY11;;
          RETURN
.
RAPMOEC1  RESET     KEY11
          MOVE      ZERO,OVRCD
          READ      PMSOECA1,KEY11;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMOEC1  RESET     KEY11
          MOVE      ZERO,OVRCD
          READ      PMSOECA1,KEY11;PMOEVISN,PMOECNTR,PMOESTAT,PMOEURNO:
                                   PMOEARID,PMOETRID,PMOERQDT,PMOEETYP,PMOEERRC:
                                   PMOEERRD,PMOECDTE,PMOECTIM,PMOEUDTE,PMOEUTIM:
                                   PMOEHOSP,PMOEELEG,PMOESPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMOEC1  MOVE      ZERO,OVRCD
          READKS    PMSOECA1;PMOEVISN,PMOECNTR,PMOESTAT,PMOEURNO:
                             PMOEARID,PMOETRID,PMOERQDT,PMOEETYP,PMOEERRC:
                             PMOEERRD,PMOECDTE,PMOECTIM,PMOEUDTE,PMOEUTIM:
                             PMOEHOSP,PMOEELEG,PMOESPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMOEC1  MOVE      ZERO,OVRCD
          READKP    PMSOECA1;PMOEVISN,PMOECNTR,PMOESTAT,PMOEURNO:
                             PMOEARID,PMOETRID,PMOERQDT,PMOEETYP,PMOEERRC:
                             PMOEERRD,PMOECDTE,PMOECTIM,PMOEUDTE,PMOEUTIM:
                             PMOEHOSP,PMOEELEG,PMOESPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMOEC1  UPDATE    PMSOECA1;PMOEVISN,PMOECNTR,PMOESTAT,PMOEURNO:
                             PMOEARID,PMOETRID,PMOERQDT,PMOEETYP,PMOEERRC:
                             PMOEERRD,PMOECDTE,PMOECTIM,PMOEUDTE,PMOEUTIM:
                             PMOEHOSP,PMOEELEG,PMOESPAR
          RETURN
.
WRPMOEC1  RESET     KEY11
          WRITE     PMSOECA1,KEY11;PMOEVISN,PMOECNTR,PMOESTAT,PMOEURNO:
                                   PMOEARID,PMOETRID,PMOERQDT,PMOEETYP,PMOEERRC:
                                   PMOEERRD,PMOECDTE,PMOECTIM,PMOEUDTE,PMOEUTIM:
                                   PMOEHOSP,PMOEELEG,PMOESPAR
          RETURN
.
DEPMOEC1  RESET     KEY11
          DELETE    PMSOECA1,KEY11
          RETURN
.
.         Index 2
.
RSPMOEC2  RESET     KEY16
          READ      PMSOECA2,KEY16;;
          RETURN
.
RAPMOEC2  RESET     KEY16
          MOVE      ZERO,OVRCD
          READ      PMSOECA2,KEY16;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMOEC2  RESET     KEY16
          MOVE      ZERO,OVRCD
          READ      PMSOECA2,KEY16;PMOEVISN,PMOECNTR,PMOESTAT,PMOEURNO:
                             PMOEARID,PMOETRID,PMOERQDT,PMOEETYP,PMOEERRC:
                             PMOEERRD,PMOECDTE,PMOECTIM,PMOEUDTE,PMOEUTIM:
                             PMOEHOSP,PMOEELEG,PMOESPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMOEC2  MOVE      ZERO,OVRCD
          READKS    PMSOECA2;PMOEVISN,PMOECNTR,PMOESTAT,PMOEURNO:
                             PMOEARID,PMOETRID,PMOERQDT,PMOEETYP,PMOEERRC:
                             PMOEERRD,PMOECDTE,PMOECTIM,PMOEUDTE,PMOEUTIM:
                             PMOEHOSP,PMOEELEG,PMOESPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMOEC2  MOVE      ZERO,OVRCD
          READKP    PMSOECA2;PMOEVISN,PMOECNTR,PMOESTAT,PMOEURNO:
                             PMOEARID,PMOETRID,PMOERQDT,PMOEETYP,PMOEERRC:
                             PMOEERRD,PMOECDTE,PMOECTIM,PMOEUDTE,PMOEUTIM:
                             PMOEHOSP,PMOEELEG,PMOESPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMOEC2  UPDATE    PMSOECA2;PMOEVISN,PMOECNTR,PMOESTAT,PMOEURNO:
                             PMOEARID,PMOETRID,PMOERQDT,PMOEETYP,PMOEERRC:
                             PMOEERRD,PMOECDTE,PMOECTIM,PMOEUDTE,PMOEUTIM:
                             PMOEHOSP,PMOEELEG,PMOESPAR
          RETURN
.
