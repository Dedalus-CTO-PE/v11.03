.
.         INC       PATADWIO.INC
.
.         FILE  I/O REQUESTS FOR ALL PATIENT WARD AUDIT FILES
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
RDSWAUD READ       PATWAUD,ZERO;SECTOR
        RETURN
.
CRWAUD  
        CLOSE      PATWAUD
        PREP       PATWAUD,"patwaud"
        CLOSE      PATWAUD
        PREP       PATWAUD,"patwaud"
        WRITE      PATWAUD,ZERO;SEC1
        WEOF       PATWAUD,SEC1
        RETURN
.
RDWAUD  READ       PATWAUD,SECTOR;ADD,AMM,ACC,AYY,TIMEIS,ACTION,OPERCODE:
                           SWWARD,SWBED,SWBDESC,SWADMNO,SWEXTN:
                           SWBLINE,SWRTYPE,SWEFRBT,SWNBEDS,SWHCSSUB:
                           SWSERV,SWPLUR,SWINPUT,SWOCCBED,SWCLASS:
                           SDWSTBY,SWACTIVE,SPTWDHOS,SPTWDDNI:
                           SPTWDIAG,SPTWDICR,SPTWDSEX:
                           SPTWDLOC,SPTWDGLD,SPTWDNST
        RETURN
.
WRWAUD  
        CLOCK      TIME,TIMEIS
        READ       PATWAUD,ZERO;SECTOR
.
        WRITE      PATWAUD,SECTOR;CDD,CMM,CCC,CYY,TIMEIS,ACTION,PASSCODE:
                           SWWARD,SWBED,SWBDESC,SWADMNO,SWEXTN:
                           SWBLINE,SWRTYPE,SWEFRBT,SWNBEDS,SWHCSSUB:
                           SWSERV,SWPLUR,SWINPUT,SWOCCBED,SWCLASS:
                           SDWSTBY,SWACTIVE,SPTWDHOS,SPTWDDNI:
                           SPTWDIAG,SPTWDICR,SPTWDSEX:
                           SPTWDLOC,SPTWDGLD,SPTWDNST
.
        ADD        ONE,SECTOR
        WEOF       PATWAUD,SECTOR
        WRITE      PATWAUD,ZERO;SECTOR
        RETURN
+
.

