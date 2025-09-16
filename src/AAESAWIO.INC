.
. AAESAWIO.INC
. ------------
. Filenames       : aaesawio
. Description     : A&E School/Employer details file
.
. ******* INDEX ONE *******
.
RSAESAW1  RESET     KEY7
          READ      AAESAWA1,KEY7;;
          RETURN
.
RAAESAW1  RESET     KEY7
          MOVE      ZERO,OVRCD
          READ      AAESAWA1,KEY7;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAESAW1  RESET     KEY7
          MOVE      ZERO,OVRCD
          READ      AAESAWA1,KEY7;AESWTYPE,AESWCODE,AESWNAME,AESWADD1:
                                  AESWADD2,AESWADD3,AESWADD4,AESWPOST,AESWTELE:
                                  AESWCONT,AESWSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAESAW1  MOVE      ZERO,OVRCD
          READKS    AAESAWA1;AESWTYPE,AESWCODE,AESWNAME,AESWADD1:
                                  AESWADD2,AESWADD3,AESWADD4,AESWPOST,AESWTELE:
                                  AESWCONT,AESWSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAESAW1  MOVE      ZERO,OVRCD
          READKP    AAESAWA1;AESWTYPE,AESWCODE,AESWNAME,AESWADD1:
                                  AESWADD2,AESWADD3,AESWADD4,AESWPOST,AESWTELE:
                                  AESWCONT,AESWSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAESAW1  UPDATE    AAESAWA1;AESWTYPE,AESWCODE,AESWNAME,AESWADD1:
                                  AESWADD2,AESWADD3,AESWADD4,AESWPOST,AESWTELE:
                                  AESWCONT,AESWSPAR
          RETURN
.
WRAESAW1  RESET     KEY7
          WRITE     AAESAWA1,KEY7;AESWTYPE,AESWCODE,AESWNAME,AESWADD1:
                                  AESWADD2,AESWADD3,AESWADD4,AESWPOST,AESWTELE:
                                  AESWCONT,AESWSPAR
          RETURN
.
DEAESAW1  RESET     KEY7
          DELETE    AAESAWA1,KEY7
          RETURN
.
. ******* INDEX TWO *******
.
RSAESAW2  RESET     KEY37
          READ      AAESAWA2,KEY37;;
          RETURN
.
RAAESAW2  RESET     KEY37
          MOVE      ZERO,OVRCD
          READ      AAESAWA2,KEY37;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAESAW2  RESET     KEY37
          MOVE      ZERO,OVRCD
          READ      AAESAWA2,KEY37;AESWTYPE,AESWCODE,AESWNAME,AESWADD1:
                                  AESWADD2,AESWADD3,AESWADD4,AESWPOST,AESWTELE:
                                  AESWCONT,AESWSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAESAW2  MOVE      ZERO,OVRCD
          READKS    AAESAWA2;AESWTYPE,AESWCODE,AESWNAME,AESWADD1:
                                  AESWADD2,AESWADD3,AESWADD4,AESWPOST,AESWTELE:
                                  AESWCONT,AESWSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAESAW2  MOVE      ZERO,OVRCD
          READKP    AAESAWA2;AESWTYPE,AESWCODE,AESWNAME,AESWADD1:
                                  AESWADD2,AESWADD3,AESWADD4,AESWPOST,AESWTELE:
                                  AESWCONT,AESWSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAESAW2  UPDATE    AAESAWA2;AESWTYPE,AESWCODE,AESWNAME,AESWADD1:
                                  AESWADD2,AESWADD3,AESWADD4,AESWPOST,AESWTELE:
                                  AESWCONT,AESWSPAR
          RETURN
.
WRAESAW2  RESET     KEY37
          WRITE     AAESAWA2,KEY37;AESWTYPE,AESWCODE,AESWNAME,AESWADD1:
                                  AESWADD2,AESWADD3,AESWADD4,AESWPOST,AESWTELE:
                                  AESWCONT,AESWSPAR
          RETURN
.
DEAESAW2  RESET     KEY37
          DELETE    AAESAWA2,KEY37
          RETURN
.
