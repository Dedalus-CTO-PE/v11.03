.
.         INC       PATRCAIO.INC
.
.         FILE  I/O REQUESTS FOR ALL CHANGE RATE DETAILS
.
.          SECTOR ZERO IS...... SECTOR  . NEXT AVAILABLE SECTOR 1-5
.                               RSTATUS . 0 - FREE           POS- 6
.                                         1 - INPUTING
.                                         2 - PRINTING
.
.
.         NOTE:-
.                  UPAAAX  IS THE WRITE CALL
.                  RDAAAX  IS THE READ CALL
.                  RDSAAAX  IS THE READ SECTOR 0 CALL
.                  WRSAAAX  IS THE WRITE ONE TO SECTOR 0 CALL
.
RDRCA   READ       PATRCAUD,SECTOR;RADMNO,RNAME,RCLAIM,RFUND,RHFTAB:
                                  RBTYPE,RNPAT,RNFUND,RCGPAT,RCGHF:
                                  RDATE,REDAYS,RATYPE,ROPAT,RCLSS,RCHST:
                                  ROPER
        RETURN
.
RDSRCA  MOVE       ZERO,OVRCD
        READ       PATRCAUD,ZERO;SECTOR,RSTATUS,RPORT
        GOTO       OVERCOND IF OVER
        RETURN
.
.        FREE RCA FILE
.
WRFRCA MOVE      ZERO,RPORT
       WRITAB    PATRCAUD,ZERO;*6,ZERO,RPORT
        RETURN
.
.       INPUT TO RCA FILE
.
WRIRCA WRITAB    PATRCAUD,ZERO;*6,ONE,PORT
        RETURN
.
.       PRINTING RCA FILE
.
WRPRCA WRITAB    PATRCAUD,ZERO;*6,TWO,PORT
        RETURN
.
WRSRCA  CLOSE      PATRCAUD
        PREP       PATRCAUD,"patrcaud"
        WRITE      PATRCAUD,ZERO;SEC1,ZERO,SP2
        WEOF       PATRCAUD,SEC1
        RETURN
.
WRRCA   MOVE       ZERO,RPORT
        READ       PATRCAUD,ZERO;SECTOR,RSTATUS
        WRITE      PATRCAUD,SECTOR;RADMNO,RNAME,RCLAIM,RFUND,RHFTAB:
                                  RBTYPE,RNPAT,RNFUND,RCGPAT,RCGHF:
                                  RDATE,REDAYS,RATYPE,ROPAT,RCLSS,RCHST:
                                  ROPER
.
        ADD        ONE,SECTOR
        WEOF       PATRCAUD,SECTOR
        WRITE      PATRCAUD,ZERO;SECTOR,ZERO,RPORT
        RETURN
