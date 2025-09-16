RSFMSS1   RESET     KEY14
          READ      FMSSMAA1,KEY14;;
          RETURN
.
RAFMSS1   RESET     KEY14
          MOVE      ZERO,OVRCD
          READ      FMSSMAA1,KEY14;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMSS1   RESET     KEY14
          MOVE      ZERO,OVRCD
          READ      FMSSMAA1,KEY14;FMSSLEDG,FMSSACCT,FMSSA1,FMSSA2:
                                  FMSSA3,FMSSA4,FMSSA5,FMSSA6,FMSSA7:
                                  FMSSA8,FMSSA9,FMSSA10,FMSSA11,FMSSA12:
                                  FMSSA13,FMSSC1,FMSSC2,FMSSC3,FMSSC4:
                                  FMSSC5,FMSSC6,FMSSC7,FMSSC8,FMSSC9:
                                  FMSSC10,FMSSC11,FMSSC12,FMSSC13,FMSSSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMSS1   MOVE      ZERO,OVRCD
          READKS    FMSSMAA1;FMSSLEDG,FMSSACCT,FMSSA1,FMSSA2:
                                  FMSSA3,FMSSA4,FMSSA5,FMSSA6,FMSSA7:
                                  FMSSA8,FMSSA9,FMSSA10,FMSSA11,FMSSA12:
                                  FMSSA13,FMSSC1,FMSSC2,FMSSC3,FMSSC4:
                                  FMSSC5,FMSSC6,FMSSC7,FMSSC8,FMSSC9:
                                  FMSSC10,FMSSC11,FMSSC12,FMSSC13,FMSSSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMSS1   MOVE      ZERO,OVRCD
          READKP    FMSSMAA1;FMSSLEDG,FMSSACCT,FMSSA1,FMSSA2:
                                  FMSSA3,FMSSA4,FMSSA5,FMSSA6,FMSSA7:
                                  FMSSA8,FMSSA9,FMSSA10,FMSSA11,FMSSA12:
                                  FMSSA13,FMSSC1,FMSSC2,FMSSC3,FMSSC4:
                                  FMSSC5,FMSSC6,FMSSC7,FMSSC8,FMSSC9:
                                  FMSSC10,FMSSC11,FMSSC12,FMSSC13,FMSSSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMSS1   UPDATE    FMSSMAA1;FMSSLEDG,FMSSACCT,FMSSA1,FMSSA2:
                                  FMSSA3,FMSSA4,FMSSA5,FMSSA6,FMSSA7:
                                  FMSSA8,FMSSA9,FMSSA10,FMSSA11,FMSSA12:
                                  FMSSA13,FMSSC1,FMSSC2,FMSSC3,FMSSC4:
                                  FMSSC5,FMSSC6,FMSSC7,FMSSC8,FMSSC9:
                                  FMSSC10,FMSSC11,FMSSC12,FMSSC13,FMSSSPAR
          RETURN
.
WRFMSS1   RESET     KEY14
          WRITE     FMSSMAA1,KEY14;FMSSLEDG,FMSSACCT,FMSSA1,FMSSA2:
                                  FMSSA3,FMSSA4,FMSSA5,FMSSA6,FMSSA7:
                                  FMSSA8,FMSSA9,FMSSA10,FMSSA11,FMSSA12:
                                  FMSSA13,FMSSC1,FMSSC2,FMSSC3,FMSSC4:
                                  FMSSC5,FMSSC6,FMSSC7,FMSSC8,FMSSC9:
                                  FMSSC10,FMSSC11,FMSSC12,FMSSC13,FMSSSPAR
          RETURN
.
DEFMSS1   RESET     KEY14
          DELETE    FMSSMAA1,KEY14
          RETURN
.
RSFMSS2   RESET     KEY14
          READ      FMSSMAA2,KEY14;;
          RETURN
.
RAFMSS2   RESET     KEY14
          MOVE      ZERO,OVRCD
          READ      FMSSMAA2,KEY14;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMSS2   RESET     KEY14
          MOVE      ZERO,OVRCD
          READ      FMSSMAA2,KEY14;FMSSLEDG,FMSSACCT,FMSSA1,FMSSA2:
                                  FMSSA3,FMSSA4,FMSSA5,FMSSA6,FMSSA7:
                                  FMSSA8,FMSSA9,FMSSA10,FMSSA11,FMSSA12:
                                  FMSSA13,FMSSC1,FMSSC2,FMSSC3,FMSSC4:
                                  FMSSC5,FMSSC6,FMSSC7,FMSSC8,FMSSC9:
                                  FMSSC10,FMSSC11,FMSSC12,FMSSC13,FMSSSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMSS2   MOVE      ZERO,OVRCD
          READKS    FMSSMAA2;FMSSLEDG,FMSSACCT,FMSSA1,FMSSA2:
                                  FMSSA3,FMSSA4,FMSSA5,FMSSA6,FMSSA7:
                                  FMSSA8,FMSSA9,FMSSA10,FMSSA11,FMSSA12:
                                  FMSSA13,FMSSC1,FMSSC2,FMSSC3,FMSSC4:
                                  FMSSC5,FMSSC6,FMSSC7,FMSSC8,FMSSC9:
                                  FMSSC10,FMSSC11,FMSSC12,FMSSC13,FMSSSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMSS2   MOVE      ZERO,OVRCD
          READKP    FMSSMAA2;FMSSLEDG,FMSSACCT,FMSSA1,FMSSA2:
                                  FMSSA3,FMSSA4,FMSSA5,FMSSA6,FMSSA7:
                                  FMSSA8,FMSSA9,FMSSA10,FMSSA11,FMSSA12:
                                  FMSSA13,FMSSC1,FMSSC2,FMSSC3,FMSSC4:
                                  FMSSC5,FMSSC6,FMSSC7,FMSSC8,FMSSC9:
                                  FMSSC10,FMSSC11,FMSSC12,FMSSC13,FMSSSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMSS2   UPDATE    FMSSMAA2;FMSSLEDG,FMSSACCT,FMSSA1,FMSSA2:
                                  FMSSA3,FMSSA4,FMSSA5,FMSSA6,FMSSA7:
                                  FMSSA8,FMSSA9,FMSSA10,FMSSA11,FMSSA12:
                                  FMSSA13,FMSSC1,FMSSC2,FMSSC3,FMSSC4:
                                  FMSSC5,FMSSC6,FMSSC7,FMSSC8,FMSSC9:
                                  FMSSC10,FMSSC11,FMSSC12,FMSSC13,FMSSSPAR
          RETURN
.
WRFMSS2   RESET     KEY14
          WRITE     FMSSMAA2,KEY14;FMSSLEDG,FMSSACCT,FMSSA1,FMSSA2:
                                  FMSSA3,FMSSA4,FMSSA5,FMSSA6,FMSSA7:
                                  FMSSA8,FMSSA9,FMSSA10,FMSSA11,FMSSA12:
                                  FMSSA13,FMSSC1,FMSSC2,FMSSC3,FMSSC4:
                                  FMSSC5,FMSSC6,FMSSC7,FMSSC8,FMSSC9:
                                  FMSSC10,FMSSC11,FMSSC12,FMSSC13,FMSSSPAR
          RETURN
.
DEFMSS2   RESET     KEY14
          DELETE    FMSSMAA2,KEY14
          RETURN
.
