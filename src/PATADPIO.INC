.
.         INC       PATADPIO.INC
.
.         FILE  I/O REQUESTS FOR ALL RATE TABLE AUDIT FILES
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
RDPAUD  READ       PATPAUD,SECTOR;ADD,AMM,AYY,TIMEIS,ACTION,OPERCODE:
                           RCOMPN,RCLASS,RTYPE,RCSTAT:
                           RCPDAY,RCPDES,RCEDAY,RCEDES,RHB21
        RETURN
.
RDPAUDX READ       PATPAUD,SECTOR;ADD,AMM,AYY,TIMEIS,ACTION,OPERCODE:
                           SRCOMPN,SRCLASS,SRTYPE,SRCSTAT:
                           SRCPDAY,SRCPDES,SRCEDAY,SRCEDES,SRHB21
        RETURN
.
RDSPAUD  
        READ       PATPAUD,ZERO;SECTOR
        RETURN
.
WRSPAUD 
        CLOSE      PATPAUD
        PREP       PATPAUD,"patpaud"
        CLOSE      PATPAUD
        PREP       PATPAUD,"patpaud"
        WRITE      PATPAUD,ZERO;SEC1
        WEOF       PATPAUD,SEC1
        RETURN
.
UPPAUD  
        CLOCK      TIME,TIMEIS
        READ       PATPAUD,ZERO;SECTOR
.
        WRITE      PATPAUD,SECTOR;CDD,CMM,CYY,TIMEIS,ACTION,PASSCODE:
                           RCOMPN,RCLASS,RTYPE,RCSTAT:
                           RCPDAY,RCPDES,RCEDAY,RCEDES,RHB21
        ADD        ONE,SECTOR
        WEOF       PATPAUD,SECTOR
        WRITE      PATPAUD,ZERO;SECTOR
        RETURN
.  
UPPAUDX 
        CLOCK      TIME,TIMEIS
        READ       PATPAUD,ZERO;SECTOR
.
        WRITE      PATPAUD,SECTOR;CDD,CMM,CYY,TIMEIS,ACTION,PASSCODE:
                           SRCOMPN,SRCLASS,SRTYPE,SRCSTAT:
                           SRCPDAY,SRCPDES,SRCEDAY,SRCEDES,SRHB21
.
        ADD        ONE,SECTOR
        WEOF       PATPAUD,SECTOR
        WRITE      PATPAUD,ZERO;SECTOR
        RETURN
