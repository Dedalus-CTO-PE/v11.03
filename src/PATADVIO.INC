.
.         INC       PATADVIO.INC
.
.         FILE  I/O REQUESTS FOR ALL BED FEE AUDIT FILES
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
RDVAUD  READ       PATVAUD,SECTOR;ADD,AMM,AYY,TIMEIS,ACTION,OPERCODE:
                           BFCLM,BFHFUND,BFHFTAB,BFATYPE,BFBTYPE:
                           BFENDDY,BFPAT,BFHF,BFNINV,BFDESC
        RETURN
.
RDVAUDX READ       PATVAUD,SECTOR;ADD,AMM,AYY,TIMEIS,ACTION,OPERCODE:
                             SBFCLM,SBFHFUND,SBFHFTAB,SBFATYPE,SBFBTYPE:
                                 SBFENDDY,SBFPAT,SBFHF,SBFNINV,SBFDESC
        RETURN
.
RDSVAUD  
        READ       PATVAUD,ZERO;SECTOR
        RETURN
.
WRSVAUD 
        CLOSE      PATVAUD
        PREP       PATVAUD,"patvaud"
        CLOSE      PATVAUD
        PREP       PATVAUD,"patvaud"
        WRITE      PATVAUD,ZERO;SEC1
        WEOF       PATVAUD,SEC1
        RETURN
.
UPVAUD  
        CLOCK      TIME,TIMEIS
        READ       PATVAUD,ZERO;SECTOR
.
        WRITE      PATVAUD,SECTOR;CDD,CMM,CYY,TIMEIS,ACTION,PASSCODE:
                                 BFCLM,BFHFUND,BFHFTAB,BFATYPE,BFBTYPE:
                                 BFENDDY,BFPAT,BFHF,BFNINV,BFDESC
        ADD        ONE,SECTOR
        WEOF       PATVAUD,SECTOR
        WRITE      PATVAUD,ZERO;SECTOR
        RETURN
.  
UPVAUDX 
        CLOCK      TIME,TIMEIS
        READ       PATVAUD,ZERO;SECTOR
.
        WRITE      PATVAUD,SECTOR;CDD,CMM,CYY,TIMEIS,ACTION,PASSCODE:
                             SBFCLM,SBFHFUND,SBFHFTAB,SBFATYPE,SBFBTYPE:
                                 SBFENDDY,SBFPAT,SBFHF,SBFNINV,SBFDESC
.
        ADD        ONE,SECTOR
        WEOF       PATVAUD,SECTOR
        WRITE      PATVAUD,ZERO;SECTOR
        RETURN
