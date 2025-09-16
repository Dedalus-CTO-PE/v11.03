.
.         INC       PATADIIO.INC
.
.         FILE  I/O REQUESTS FOR ALL ITEM AUDIT FILES
.
.         MODS:  V5.07.B01  19/11/1998  Nicole Harrington
.                           Added century
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
.
RDIAUD  READ       PATIAUD,SECTOR;ADD,AMM,ACC,AYY,TIMEIS,ACTION,OPERCODE:
                                 ITEMNO,IALPHA,IDESC,IAMT,IMISGRP,ICLSS
        RETURN
.
RDIAUDX READ       PATIAUD,SECTOR;ADD,AMM,ACC,AYY,TIMEIS,ACTION,OPERCODE:
                                 SITEMNO,SIALPHA,SIDESC,SIAMT,SIMISGRP,SICLSS
        RETURN
.
RDSIAUD READ       PATIAUD,ZERO;SECTOR
        RETURN
.
WRSIAUD CLOSE      PATIAUD
        PREP       PATIAUD,"patiaud"
        CLOSE      PATIAUD
        PREP       PATIAUD,"patiaud"
        WRITE      PATIAUD,ZERO;SEC1
        WEOF       PATIAUD,SEC1
        RETURN
.
UPIAUD  CLOCK      TIME,TIMEIS
        READ       PATIAUD,ZERO;SECTOR
.
        WRITE      PATIAUD,SECTOR;CDD,CMM,CCC,CYY,TIMEIS,ACTION,PASSCODE:
                                 ITEMNO,IALPHA,IDESC,IAMT,IMISGRP,ICLSS
        ADD        ONE,SECTOR
        WEOF       PATIAUD,SECTOR
        WRITE      PATIAUD,ZERO;SECTOR
        RETURN
.
UPIAUDX CLOCK      TIME,TIMEIS
        READ       PATIAUD,ZERO;SECTOR
.
        WRITE      PATIAUD,SECTOR;CDD,CMM,CCC,CYY,TIMEIS,ACTION,PASSCODE:
                                 SITEMNO,SIALPHA,SIDESC,SIAMT,SIMISGRP,SICLSS
.
        ADD        ONE,SECTOR
        WEOF       PATIAUD,SECTOR
        WRITE      PATIAUD,ZERO;SECTOR
        RETURN
