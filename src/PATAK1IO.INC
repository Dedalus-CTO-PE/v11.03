.
.         FILE  I/O REQUESTS FOR ALL PERSON RESP FOR ACCOUNT AUDIT FILES
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
RDSKAUD   READ      PATAK1A1,ZERO;SECTOR
          RETURN
.
CRKAUD    
          CLOSE     PATAK1A1
          PREP      PATAK1A1,"patak1af"
          CLOSE     PATAK1A1
          PREP      PATAK1A1,"patak1af"
          WRITE     PATAK1A1,ZERO;SEC1
          WEOF      PATAK1A1,SEC1
          RETURN
.
RDKAUD    READ      PATAK1A1,SECTOR;ADD,AMM,ACC,AYY,TIMEIS,ACTION,OPERCODE:
                             SPKADMN,SPNKNAME,SPNKADD1,SPNKADD2,SPNKSUBR:
                             SPNKADD4,SPNKPOST,SPNKTELP,SPNKTELB,SPNKRELP
          RETURN
.
WRKAUD    
          CLOCK     TIME,TIMEIS
          READ      PATAK1A1,ZERO;SECTOR
          WRITE     PATAK1A1,SECTOR;ADD,AMM,CCC,AYY,TIMEIS,ACTION,OPERCODE:
                             SPKADMN,SPNKNAME,SPNKADD1,SPNKADD2,SPNKSUBR:
                             SPNKADD4,SPNKPOST,SPNKTELP,SPNKTELB,SPNKRELP
          ADD       ONE,SECTOR
          WEOF      PATAK1A1,SECTOR
          WRITE     PATAK1A1,ZERO;SECTOR
          RETURN
+
.

