.
. ********************************************************************
. *       Mods:                                                      *
. *       V5.08.01 15/08/2000  Caleb Sharman                         *
. *                Changed Health Fund variables to be 8 chars       *
. *                                                                  *
. ********************************************************************
.         INC       PATADHIO.INC
.
.         FILE  I/O REQUESTS FOR ALL PATIENT HEALTH FUND AUDIT FILES
.
.OVRCD  FORM            1             0=NOT OVER
.                                     1= OVER
.
.         NOTE:-
.                  UPAAAX  IS THE WRITE CALL
.                  RDAAAX  IS THE READ CALL
.                  RDSAAAX  IS THE READ SECTOR 0 CALL
.                  WRSAAAX  IS THE WRITE ONE TO SECTOR 0 CALL
.
RDSHAUD  
        READ       PATHAUD,ZERO;SECTOR
        RETURN
.
CRHAUD  CLOSE      PATHAUD
        PREP       PATHAUD,"pathaud"
        CLOSE      PATHAUD
        PREP       PATHAUD,"pathaud"
        WRITE      PATHAUD,ZERO;SEC1
        WEOF       PATHAUD,SEC1
        RETURN
.
RDHAUD  READ       PATHAUD,SECTOR;ADD,AMM,ACC,AYY,TIMEIS,ACTION,OPERCODE:
                           SHCODE,SHFTABL,SHFNAME:
                           SHFADD1,SHFADD2,SHFTELE,SHFBAND,SHFHDP,SHFFAXN:
                           SHFBCAT,SHFHGRP:
                           SHFHCPE,SHFACTV,SHFGRPV,STHFUMTD
        RETURN
.
WRHAUD  CLOCK      TIME,TIMEIS
        READ       PATHAUD,ZERO;SECTOR
.
        WRITE      PATHAUD,SECTOR;CDD,CMM,CCC,CYY,TIMEIS,ACTION,PASSCODE:
                           SHCODE,SHFTABL,SHFNAME:
                           SHFADD1,SHFADD2,SHFTELE,SHFBAND,SHFHDP,SHFFAXN:
                           SHFBCAT,SHFHGRP:
                           SHFHCPE,SHFACTV,SHFGRPV,STHFUMTD
        ADD        ONE,SECTOR
        WEOF       PATHAUD,SECTOR
        WRITE      PATHAUD,ZERO;SECTOR
        RETURN
.
