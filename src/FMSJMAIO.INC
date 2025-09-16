RSFMJM1   RESET     KEY7
          READ      FMSJMAA1,KEY7;;
          RETURN
.
RAFMJM1   RESET     KEY7
          MOVE      ZERO,OVRCD
          READ      FMSJMAA1,KEY7;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMJM1   RESET     KEY7
          MOVE      ZERO,OVRCD
          READ      FMSJMAA1,KEY7;FMJMJTY,FMJMJID,FMJMDESC,FMJMDENT:
                                  FMJMLEDG,FMJMSTAT,FMJMCASH,FMJMREV,FMJMRPOS:
                                  FMJMCPOS,FMJMPPOS,FMJMPDAT,FMJMPBAT,FMJMRDAT:
                                  FMJMRBAT,FMJMSPER,FMJMFPER,FMJMLPER,FMJMPROF:
                                  FMJMSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMJM1   MOVE      ZERO,OVRCD
          READKS    FMSJMAA1;FMJMJTY,FMJMJID,FMJMDESC,FMJMDENT:
                                  FMJMLEDG,FMJMSTAT,FMJMCASH,FMJMREV,FMJMRPOS:
                                  FMJMCPOS,FMJMPPOS,FMJMPDAT,FMJMPBAT,FMJMRDAT:
                                  FMJMRBAT,FMJMSPER,FMJMFPER,FMJMLPER,FMJMPROF:
                                  FMJMSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMJM1   MOVE      ZERO,OVRCD
          READKP    FMSJMAA1;FMJMJTY,FMJMJID,FMJMDESC,FMJMDENT:
                                  FMJMLEDG,FMJMSTAT,FMJMCASH,FMJMREV,FMJMRPOS:
                                  FMJMCPOS,FMJMPPOS,FMJMPDAT,FMJMPBAT,FMJMRDAT:
                                  FMJMRBAT,FMJMSPER,FMJMFPER,FMJMLPER,FMJMPROF:
                                  FMJMSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMJM1   UPDATE    FMSJMAA1;FMJMJTY,FMJMJID,FMJMDESC,FMJMDENT:
                                  FMJMLEDG,FMJMSTAT,FMJMCASH,FMJMREV,FMJMRPOS:
                                  FMJMCPOS,FMJMPPOS,FMJMPDAT,FMJMPBAT,FMJMRDAT:
                                  FMJMRBAT,FMJMSPER,FMJMFPER,FMJMLPER,FMJMPROF:
                                  FMJMSPAR
          RETURN
.
WRFMJM1   RESET     KEY7
          WRITE     FMSJMAA1,KEY7;KEY7,FMJMDESC,FMJMDENT:
                                  FMJMLEDG,FMJMSTAT,FMJMCASH,FMJMREV,FMJMRPOS:
                                  FMJMCPOS,FMJMPPOS,FMJMPDAT,FMJMPBAT,FMJMRDAT:
                                  FMJMRBAT,FMJMSPER,FMJMFPER,FMJMLPER,FMJMPROF:
                                  FMJMSPAR
          RETURN
.
DEFMJM1   RESET     KEY7
          DELETE    FMSJMAA1,KEY7
          RETURN
.
RSFMJM2   RESET     KEY8
          READ      FMSJMAA2,KEY8;;
          RETURN
.
RAFMJM2   RESET     KEY8
          MOVE      ZERO,OVRCD
          READ      FMSJMAA2,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMJM2   RESET     KEY8
          MOVE      ZERO,OVRCD
          READ      FMSJMAA2,KEY8;FMJMJTY,FMJMJID,FMJMDESC,FMJMDENT:
                                  FMJMLEDG,FMJMSTAT,FMJMCASH,FMJMREV,FMJMRPOS:
                                  FMJMCPOS,FMJMPPOS,FMJMPDAT,FMJMPBAT,FMJMRDAT:
                                  FMJMRBAT,FMJMSPER,FMJMFPER,FMJMLPER,FMJMPROF:
                                  FMJMSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMJM2   MOVE      ZERO,OVRCD
          READKS    FMSJMAA2;FMJMJTY,FMJMJID,FMJMDESC,FMJMDENT:
                                  FMJMLEDG,FMJMSTAT,FMJMCASH,FMJMREV,FMJMRPOS:
                                  FMJMCPOS,FMJMPPOS,FMJMPDAT,FMJMPBAT,FMJMRDAT:
                                  FMJMRBAT,FMJMSPER,FMJMFPER,FMJMLPER,FMJMPROF:
                                  FMJMSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMJM2   MOVE      ZERO,OVRCD
          READKP    FMSJMAA2;FMJMJTY,FMJMJID,FMJMDESC,FMJMDENT:
                                  FMJMLEDG,FMJMSTAT,FMJMCASH,FMJMREV,FMJMRPOS:
                                  FMJMCPOS,FMJMPPOS,FMJMPDAT,FMJMPBAT,FMJMRDAT:
                                  FMJMRBAT,FMJMSPER,FMJMFPER,FMJMLPER,FMJMPROF:
                                  FMJMSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMJM2   UPDATE    FMSJMAA2;FMJMJTY,FMJMJID,FMJMDESC,FMJMDENT:
                                  FMJMLEDG,FMJMSTAT,FMJMCASH,FMJMREV,FMJMRPOS:
                                  FMJMCPOS,FMJMPPOS,FMJMPDAT,FMJMPBAT,FMJMRDAT:
                                  FMJMRBAT,FMJMSPER,FMJMFPER,FMJMLPER,FMJMPROF:
                                  FMJMSPAR
          RETURN
.
WRFMJM2   RESET     KEY8
          WRITE     FMSJMAA2,KEY8;FMJMJTY,FMJMJID,FMJMDESC,FMJMDENT:
                                  FMJMLEDG,FMJMSTAT,FMJMCASH,FMJMREV,FMJMRPOS:
                                  FMJMCPOS,FMJMPPOS,FMJMPDAT,FMJMPBAT,FMJMRDAT:
                                  FMJMRBAT,FMJMSPER,FMJMFPER,FMJMLPER,FMJMPROF:
                                  FMJMSPAR
          RETURN
.
DEFMJM2   RESET     KEY8
          DELETE    FMSJMAA2,KEY8
          RETURN
.
RSFMJM3   RESET     KEY15
          READ      FMSJMAA3,KEY15;;
          RETURN
.
RAFMJM3   RESET     KEY15
          MOVE      ZERO,OVRCD
          READ      FMSJMAA3,KEY15;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMJM3   RESET     KEY15
          MOVE      ZERO,OVRCD
          READ      FMSJMAA3,KEY15;FMJMJTY,FMJMJID,FMJMDESC,FMJMDENT:
                                  FMJMLEDG,FMJMSTAT,FMJMCASH,FMJMREV,FMJMRPOS:
                                  FMJMCPOS,FMJMPPOS,FMJMPDAT,FMJMPBAT,FMJMRDAT:
                                  FMJMRBAT,FMJMSPER,FMJMFPER,FMJMLPER,FMJMPROF:
                                  FMJMSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMJM3   MOVE      ZERO,OVRCD
          READKS    FMSJMAA3;FMJMJTY,FMJMJID,FMJMDESC,FMJMDENT:
                                  FMJMLEDG,FMJMSTAT,FMJMCASH,FMJMREV,FMJMRPOS:
                                  FMJMCPOS,FMJMPPOS,FMJMPDAT,FMJMPBAT,FMJMRDAT:
                                  FMJMRBAT,FMJMSPER,FMJMFPER,FMJMLPER,FMJMPROF:
                                  FMJMSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMJM3   MOVE      ZERO,OVRCD
          READKP    FMSJMAA3;FMJMJTY,FMJMJID,FMJMDESC,FMJMDENT:
                                  FMJMLEDG,FMJMSTAT,FMJMCASH,FMJMREV,FMJMRPOS:
                                  FMJMCPOS,FMJMPPOS,FMJMPDAT,FMJMPBAT,FMJMRDAT:
                                  FMJMRBAT,FMJMSPER,FMJMFPER,FMJMLPER,FMJMPROF:
                                  FMJMSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMJM3   UPDATE    FMSJMAA3;FMJMJTY,FMJMJID,FMJMDESC,FMJMDENT:
                                  FMJMLEDG,FMJMSTAT,FMJMCASH,FMJMREV,FMJMRPOS:
                                  FMJMCPOS,FMJMPPOS,FMJMPDAT,FMJMPBAT,FMJMRDAT:
                                  FMJMRBAT,FMJMSPER,FMJMFPER,FMJMLPER,FMJMPROF:
                                  FMJMSPAR
          RETURN
.
WRFMJM3   RESET     KEY15
          WRITE     FMSJMAA3,KEY15;FMJMJTY,FMJMJID,FMJMDESC,FMJMDENT:
                                  FMJMLEDG,FMJMSTAT,FMJMCASH,FMJMREV,FMJMRPOS:
                                  FMJMCPOS,FMJMPPOS,FMJMPDAT,FMJMPBAT,FMJMRDAT:
                                  FMJMRBAT,FMJMSPER,FMJMFPER,FMJMLPER,FMJMPROF:
                                  FMJMSPAR
          RETURN
.
DEFMJM3   RESET     KEY15
          DELETE    FMSJMAA3,KEY15
          RETURN
.
RLFMJM1   RESET     KEY7                                                       
          MOVE      ZERO,OVRCD
          READL     FMSJMAA1,KEY7;FMJMJTY,FMJMJID,FMJMDESC,FMJMDENT:
                                  FMJMLEDG,FMJMSTAT,FMJMCASH,FMJMREV,FMJMRPOS:
                                  FMJMCPOS,FMJMPPOS,FMJMPDAT,FMJMPBAT,FMJMRDAT:
                                  FMJMRBAT,FMJMSPER,FMJMFPER,FMJMLPER,FMJMPROF:
                                  FMJMSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLFMJM1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   FMSJMAA1;FMJMJTY,FMJMJID,FMJMDESC,FMJMDENT:
                                  FMJMLEDG,FMJMSTAT,FMJMCASH,FMJMREV,FMJMRPOS:
                                  FMJMCPOS,FMJMPPOS,FMJMPDAT,FMJMPBAT,FMJMRDAT:
                                  FMJMRBAT,FMJMSPER,FMJMFPER,FMJMLPER,FMJMPROF:
                                  FMJMSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLFMJM1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   FMSJMAA1;FMJMJTY,FMJMJID,FMJMDESC,FMJMDENT:
                                  FMJMLEDG,FMJMSTAT,FMJMCASH,FMJMREV,FMJMRPOS:
                                  FMJMCPOS,FMJMPPOS,FMJMPDAT,FMJMPBAT,FMJMRDAT:
                                  FMJMRBAT,FMJMSPER,FMJMFPER,FMJMLPER,FMJMPROF:
                                  FMJMSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUFMJM1   RESET     KEY7                                                       
          UNLOCK    FMSJMAA1                                                    
          RETURN
.
