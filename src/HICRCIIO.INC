.*****************************************************************************
.*        HICRCEIO.INC                                                       *
.*****************************************************************************
.
RSHCRCI1  RESET     KEY26
          READ      HICRCIA1,KEY26;;
          RETURN
.
RAHCRCI1  RESET     KEY26
          MOVE      ZERO,OVRCD
          READ      HICRCIA1,KEY26;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCRCI1  RESET     KEY26
          MOVE      ZERO,OVRCD
          READ      HICRCIA1,KEY26;HCRIBTCH,HCRIVPOS,HCRIITMN,HCRIIDAT:
                                   HCRIICNT,HCRIMEDI,HCRICARD,HCRISURN,HCRIFNAM:
                                   HCRIBENA,HCRIBENP,HCRIBENR,HCRICLMN,HCRIVISN:
                                   HCRIREJR,HCRIREJD,HCRISPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCRCI1  MOVE      ZERO,OVRCD
          READKS    HICRCIA1;HCRIBTCH,HCRIVPOS,HCRIITMN,HCRIIDAT:
                             HCRIICNT,HCRIMEDI,HCRICARD,HCRISURN,HCRIFNAM:
                             HCRIBENA,HCRIBENP,HCRIBENR,HCRICLMN,HCRIVISN:
                             HCRIREJR,HCRIREJD,HCRISPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCRCI1  MOVE      ZERO,OVRCD
          READKP    HICRCIA1;HCRIBTCH,HCRIVPOS,HCRIITMN,HCRIIDAT:
                             HCRIICNT,HCRIMEDI,HCRICARD,HCRISURN,HCRIFNAM:
                             HCRIBENA,HCRIBENP,HCRIBENR,HCRICLMN,HCRIVISN:
                             HCRIREJR,HCRIREJD,HCRISPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCRCI1  UPDATE    HICRCIA1;HCRIBTCH,HCRIVPOS,HCRIITMN,HCRIIDAT:
                             HCRIICNT,HCRIMEDI,HCRICARD,HCRISURN,HCRIFNAM:
                             HCRIBENA,HCRIBENP,HCRIBENR,HCRICLMN,HCRIVISN:
                             HCRIREJR,HCRIREJD,HCRISPAR
          RETURN
.
WRHCRCI1  RESET     KEY26
          WRITE     HICRCIA1,KEY26;HCRIBTCH,HCRIVPOS,HCRIITMN,HCRIIDAT:
                                   HCRIICNT,HCRIMEDI,HCRICARD,HCRISURN,HCRIFNAM:
                                   HCRIBENA,HCRIBENP,HCRIBENR,HCRICLMN,HCRIVISN:
                                   HCRIREJR,HCRIREJD,HCRISPAR
          RETURN
.
DEHCRCI1  RESET     KEY26
          DELETE    HICRCIA1,KEY26
          RETURN
.
RSHCRCI2  RESET     KEY18
          READ      HICRCIA2,KEY18;;
          RETURN
.
RAHCRCI2  RESET     KEY18
          MOVE      ZERO,OVRCD
          READ      HICRCIA2,KEY18;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCRCI2  RESET     KEY18
          MOVE      ZERO,OVRCD
          READ      HICRCIA2,KEY18;HCRIBTCH,HCRIVPOS,HCRIITMN,HCRIIDAT:
                                   HCRIICNT,HCRIMEDI,HCRICARD,HCRISURN,HCRIFNAM:
                                   HCRIBENA,HCRIBENP,HCRIBENR,HCRICLMN,HCRIVISN:
                                   HCRIREJR,HCRIREJD,HCRISPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCRCI2  MOVE      ZERO,OVRCD
          READKS    HICRCIA2;HCRIBTCH,HCRIVPOS,HCRIITMN,HCRIIDAT:
                             HCRIICNT,HCRIMEDI,HCRICARD,HCRISURN,HCRIFNAM:
                             HCRIBENA,HCRIBENP,HCRIBENR,HCRICLMN,HCRIVISN:
                             HCRIREJR,HCRIREJD,HCRISPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCRCI2  MOVE      ZERO,OVRCD
          READKP    HICRCIA2;HCRIBTCH,HCRIVPOS,HCRIITMN,HCRIIDAT:
                             HCRIICNT,HCRIMEDI,HCRICARD,HCRISURN,HCRIFNAM:
                             HCRIBENA,HCRIBENP,HCRIBENR,HCRICLMN,HCRIVISN:
                             HCRIREJR,HCRIREJD,HCRISPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
