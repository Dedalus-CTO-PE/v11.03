RSFMDF1   RESET     KEY23
          READ      FMSDSFA1,KEY23;;
          RETURN
.
RAFMDF1   RESET     KEY23
          MOVE      ZERO,OVRCD
          READ      FMSDSFA1,KEY23;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMDF1   RESET     KEY23
          MOVE      ZERO,OVRCD
          READ      FMSDSFA1,KEY23;FMDFLEDG,FMDFACCT,FMDFDISS,FMDFRESP:
                                  FMDFBF,FMDF01,FMDF02,FMDF03,FMDF04:
                                  FMDF05,FMDF06,FMDF07,FMDF08,FMDF09:
                                  FMDF10,FMDF11,FMDF12,FMDF13,FMDFSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMDF1   MOVE      ZERO,OVRCD
          READKS    FMSDSFA1;FMDFLEDG,FMDFACCT,FMDFDISS,FMDFRESP:
                                  FMDFBF,FMDF01,FMDF02,FMDF03,FMDF04:
                                  FMDF05,FMDF06,FMDF07,FMDF08,FMDF09:
                                  FMDF10,FMDF11,FMDF12,FMDF13,FMDFSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMDF1   MOVE      ZERO,OVRCD
          READKP    FMSDSFA1;FMDFLEDG,FMDFACCT,FMDFDISS,FMDFRESP:
                                  FMDFBF,FMDF01,FMDF02,FMDF03,FMDF04:
                                  FMDF05,FMDF06,FMDF07,FMDF08,FMDF09:
                                  FMDF10,FMDF11,FMDF12,FMDF13,FMDFSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMDF1   UPDATE    FMSDSFA1;FMDFLEDG,FMDFACCT,FMDFDISS,FMDFRESP:
                                  FMDFBF,FMDF01,FMDF02,FMDF03,FMDF04:
                                  FMDF05,FMDF06,FMDF07,FMDF08,FMDF09:
                                  FMDF10,FMDF11,FMDF12,FMDF13,FMDFSPAR
          RETURN
.
WRFMDF1   RESET     KEY23
          WRITE     FMSDSFA1,KEY23;FMDFLEDG,FMDFACCT,FMDFDISS,FMDFRESP:
                                  FMDFBF,FMDF01,FMDF02,FMDF03,FMDF04:
                                  FMDF05,FMDF06,FMDF07,FMDF08,FMDF09:
                                  FMDF10,FMDF11,FMDF12,FMDF13,FMDFSPAR
          RETURN
.
DEFMDF1   RESET     KEY23
          DELETE    FMSDSFA1,KEY23
          RETURN
.
RSFMDF2   RESET     KEY23
          READ      FMSDSFA2,KEY23;;
          RETURN
.
RAFMDF2   RESET     KEY23
          MOVE      ZERO,OVRCD
          READ      FMSDSFA2,KEY23;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMDF2   RESET     KEY23
          MOVE      ZERO,OVRCD
          READ      FMSDSFA2,KEY23;FMDFLEDG,FMDFACCT,FMDFDISS,FMDFRESP:
                                  FMDFBF,FMDF01,FMDF02,FMDF03,FMDF04:
                                  FMDF05,FMDF06,FMDF07,FMDF08,FMDF09:
                                  FMDF10,FMDF11,FMDF12,FMDF13,FMDFSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMDF2   MOVE      ZERO,OVRCD
          READKS    FMSDSFA2;FMDFLEDG,FMDFACCT,FMDFDISS,FMDFRESP:
                                  FMDFBF,FMDF01,FMDF02,FMDF03,FMDF04:
                                  FMDF05,FMDF06,FMDF07,FMDF08,FMDF09:
                                  FMDF10,FMDF11,FMDF12,FMDF13,FMDFSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMDF2   MOVE      ZERO,OVRCD
          READKP    FMSDSFA2;FMDFLEDG,FMDFACCT,FMDFDISS,FMDFRESP:
                                  FMDFBF,FMDF01,FMDF02,FMDF03,FMDF04:
                                  FMDF05,FMDF06,FMDF07,FMDF08,FMDF09:
                                  FMDF10,FMDF11,FMDF12,FMDF13,FMDFSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMDF2   UPDATE    FMSDSFA2;FMDFLEDG,FMDFACCT,FMDFDISS,FMDFRESP:
                                  FMDFBF,FMDF01,FMDF02,FMDF03,FMDF04:
                                  FMDF05,FMDF06,FMDF07,FMDF08,FMDF09:
                                  FMDF10,FMDF11,FMDF12,FMDF13,FMDFSPAR
          RETURN
.
WRFMDF2   RESET     KEY23
          WRITE     FMSDSFA2,KEY23;FMDFLEDG,FMDFACCT,FMDFDISS,FMDFRESP:
                                  FMDFBF,FMDF01,FMDF02,FMDF03,FMDF04:
                                  FMDF05,FMDF06,FMDF07,FMDF08,FMDF09:
                                  FMDF10,FMDF11,FMDF12,FMDF13,FMDFSPAR
          RETURN
.
DEFMDF2   RESET     KEY23
          DELETE    FMSDSFA2,KEY23
          RETURN
.
