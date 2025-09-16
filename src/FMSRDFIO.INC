RSFMRD1   RESET     KEY3
          READ      FMSRDFA1,KEY3;;
          RETURN
.
RAFMRD1   RESET     KEY3
          MOVE      ZERO,OVRCD
          READ      FMSRDFA1,KEY3;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMRD1   RESET     KEY3
          MOVE      ZERO,OVRCD
          READ      FMSRDFA1,KEY3;FMRDCOD,FMRDDES,FMRDLED,FMRDREP:
                                  FMRDRS,FMRDPT,FMRDLEV,FMRDFPR,FMRDTPR:
                                  FMRDCAS,FMRDCBT,FMRDPBT,FMRDDOP,FMRDZER:
                                  FMRDPRJ,FMRDSTAT,FMRDSUPP,FMRDSHED,FMRDCRIN:
                                  FMRDSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMRD1   MOVE      ZERO,OVRCD
          READKS    FMSRDFA1;FMRDCOD,FMRDDES,FMRDLED,FMRDREP:
                                  FMRDRS,FMRDPT,FMRDLEV,FMRDFPR,FMRDTPR:
                                  FMRDCAS,FMRDCBT,FMRDPBT,FMRDDOP,FMRDZER:
                                  FMRDPRJ,FMRDSTAT,FMRDSUPP,FMRDSHED,FMRDCRIN:
                                  FMRDSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMRD1   MOVE      ZERO,OVRCD
          READKP    FMSRDFA1;FMRDCOD,FMRDDES,FMRDLED,FMRDREP:
                                  FMRDRS,FMRDPT,FMRDLEV,FMRDFPR,FMRDTPR:
                                  FMRDCAS,FMRDCBT,FMRDPBT,FMRDDOP,FMRDZER:
                                  FMRDPRJ,FMRDSTAT,FMRDSUPP,FMRDSHED,FMRDCRIN:
                                  FMRDSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMRD1   UPDATE    FMSRDFA1;FMRDCOD,FMRDDES,FMRDLED,FMRDREP:
                                  FMRDRS,FMRDPT,FMRDLEV,FMRDFPR,FMRDTPR:
                                  FMRDCAS,FMRDCBT,FMRDPBT,FMRDDOP,FMRDZER:
                                  FMRDPRJ,FMRDSTAT,FMRDSUPP,FMRDSHED,FMRDCRIN:
                                  FMRDSPAR
          RETURN
.
WRFMRD1   RESET     KEY3
          WRITE     FMSRDFA1,KEY3;FMRDCOD,FMRDDES,FMRDLED,FMRDREP:
                                  FMRDRS,FMRDPT,FMRDLEV,FMRDFPR,FMRDTPR:
                                  FMRDCAS,FMRDCBT,FMRDPBT,FMRDDOP,FMRDZER:
                                  FMRDPRJ,FMRDSTAT,FMRDSUPP,FMRDSHED,FMRDCRIN:
                                  FMRDSPAR
          RETURN
.
DEFMRD1   RESET     KEY3
          DELETE    FMSRDFA1,KEY3
          RETURN
.
