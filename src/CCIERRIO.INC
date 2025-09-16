.
. CCIERRIO.INC
. ------------
. Filename       :  ccierraf.dat
. Description    :  CCI Error Record File I/O Subroutines
. Variables      :  OVRCD     FORM      1
.                   KEY23     DIM       23
. Modifications  :
.
RACCERR1     MOVE        ZERO,OVRCD
             RESET       KEY23
             READ        CCIERRA1,KEY23;ANS
             GOTO        OVERCOND IF OVER
             RETURN
.
RSCCERR1     RESET       KEY23
             READ        CCIERRA1,KEY23;;
             RETURN
.
RDCCERR1     MOVE        ZERO,OVRCD
             RESET       KEY23
             READ        CCIERRA1,KEY23;CCERDATE,CCERDEPT,CCERURNO,CCERPTYP:
                                        CCERFSYR,CCERFSPR,CCERECNU:
                                        CCERRTYP,CCERSPAR
             GOTO        OVERCOND IF OVER
             RETURN
.
RKCCERR1     MOVE        ZERO,OVRCD
             READKS      CCIERRA1;CCERDATE,CCERDEPT,CCERURNO,CCERPTYP:
                                  CCERFSYR,CCERFSPR,CCERECNU:
                                  CCERRTYP,CCERSPAR
             GOTO        OVERCOND IF OVER
             RETURN
.
WRCCERR1     RESET       KEY23
             WRITE       CCIERRA1,KEY23;KEY23:
                                        CCERFSYR,CCERFSPR,CCERECNU:
                                        CCERRTYP,CCERSPAR
             RETURN
.
UPCCERR1     UPDATE      CCIERRA1;CCERDATE,CCERDEPT,CCERURNO,CCERPTYP:
                                  CCERFSYR,CCERFSPR,CCERECNU:
                                  CCERRTYP,CCERSPAR
             RETURN
.
DECCERR1     RESET       KEY23
             DELETE      CCIERRA1,KEY23
             RETURN
.
.            2nd Index
.
RACCERR2     MOVE        ZERO,OVRCD
             RESET       KEY23
             READ        CCIERRA2,KEY23;ANS
             GOTO        OVERCOND IF OVER
             RETURN
.
RSCCERR2     RESET       KEY23
             READ        CCIERRA2,KEY23;;
             RETURN
.
RDCCERR2     MOVE        ZERO,OVRCD
             RESET       KEY23
             READ        CCIERRA2,KEY23;CCERDATE,CCERDEPT,CCERURNO,CCERPTYP:
                                        CCERFSYR,CCERFSPR,CCERECNU:
                                        CCERRTYP,CCERSPAR
             GOTO        OVERCOND IF OVER
             RETURN
.
RKCCERR2     MOVE        ZERO,OVRCD
             READKS      CCIERRA2;CCERDATE,CCERDEPT,CCERURNO,CCERPTYP:
                                  CCERFSYR,CCERFSPR,CCERECNU:
                                  CCERRTYP,CCERSPAR
             GOTO        OVERCOND IF OVER
             RETURN
