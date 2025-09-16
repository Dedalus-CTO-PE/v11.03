
.
.         INC       PATADBIO.INC
.
.         FILE  I/O REQUESTS FOR ALL DISCHARGE AUDIT FILES
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
RDSBAUD READ       PATBAUD,ZERO;SECTOR
        RETURN
.
CRBAUD  CLOSE      PATBAUD
        PREP       PATBAUD,"patbaud"
        CLOSE      PATBAUD
        PREP       PATBAUD,"patbaud"
        WRITE      PATBAUD,ZERO;SEC1,SP30,SP30,SP30,SP30,SP30,SP30,SP30:
                                SP30,SP10
        RETURN
.
RDBAUD  READ       PATBAUD,SECTOR;ADD,AMM,ACC,AYY,TIMEIS,ACTION,OPERCODE:
                            SDURNO,SDADMNO,SDDATE,SDTIME,SDSTAT:
                            SDDEST,SDDIAG,SDDIAG2,SDUSD1,SDUSD2,SDUSD3:
                            SDUSD4,SDUSD5,SDFMBS,SDMDC,SDDRG,SDWLREAS:
                            SPTDSSID,SPTDSVOG,SPTDSOPE,SPTDSUY1,SPTDSUY2:
                            SPTDSUY3,SPTDSUY4,SPTDSDWR,SPTDSDLO
        RETURN
.
WRBAUD  CLOCK      TIME,TIMEIS
        READ       PATBAUD,ZERO;SECTOR
.
        WRITE      PATBAUD,SECTOR;CDD,CMM,ACC,CYY,TIMEIS,ACTION,PASSCODE:
                            SDURNO,SDADMNO,SDDATE,SDTIME,SDSTAT:
                            SDDEST,SDDIAG,SDDIAG2,SDUSD1,SDUSD2,SDUSD3:
                            SDUSD4,SDUSD5,SDFMBS,SDMDC,SDDRG,SDWLREAS:
                            SPTDSSID,SPTDSVOG,SPTDSOPE,SPTDSUY1,SPTDSUY2:
                            SPTDSUY3,SPTDSUY4,SPTDSDWR,SPTDSDLO,SP20,SP20,SP6
        ADD        ONE,SECTOR
        WRITE      PATBAUD,ZERO;SECTOR,SP30,SP30,SP30,SP30,SP30,SP30,SP30:
                               SP30,SP10
        RETURN
