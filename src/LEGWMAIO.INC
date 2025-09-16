.
.         INCLUDE FILE : LEGWMAIO.INC
.
.         FILE I/O REQUESTS FOR MOTOR ACCIDENT BOARD CLAIMS
.
.OVRCD  FORM            1             0=NOT OVER
.                                     1= OVER
.KEY8   DIM             8             KEY FOR LEGWMAB1
.
.         NOTE:-
.                  RDAAAX  IS THE READ CALL ON FILE PATAAAX
.                  RDKAAAX IS THE READKS CALL
.                  WRAAAX  IS THE WRITE CALL
.                  UPAAAX  IS THE UPDATE CALL
.                  DEAAAX  IS THE DELETE CALL
.
RDLGWMA1
          MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      LEGWMAB1,KEY8;DLMADMNO,LMREFNO,LMPOLIC,LMACDAT,LMSNAME:
                                  LMSTELE,LMCREGO,LMACLOC,LPTAROLE:
                                  LENGAGED,LPINJURE,LMDTRANS,LMECHSEV:
                                  LREGNSEV,LOTHDET1,LOTHDET2,LOTHDET3,LTWMTIST:
                                  LMSPARE
          GOTO      OVERCOND IF OVER
          MOVE      DLMADMNO,LMADMNO
          RETURN
.
RKLGWMA1
          MOVE      ZERO,OVRCD
          READKS    LEGWMAB1;DLMADMNO,LMREFNO,LMPOLIC,LMACDAT,LMSNAME:
                                  LMSTELE,LMCREGO,LMACLOC,LPTAROLE:
                                  LENGAGED,LPINJURE,LMDTRANS,LMECHSEV:
                                  LREGNSEV,LOTHDET1,LOTHDET2,LOTHDET3,LTWMTIST:
                                  LMSPARE
          GOTO      OVERCOND IF OVER
          MOVE      DLMADMNO,LMADMNO
          RETURN
.
RSLGWMA1
          RESET     KEY8
          READ      LEGWMAB1,KEY8;;
          RETURN
