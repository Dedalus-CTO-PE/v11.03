.
.         INC       PATNUMIO.INC
.
.         FILE  I/O REQUESTS FOR WARD USAGE FILE
.
.OVRCD  FORM            1             0=NOT OVER
.                                     1= OVER
.KEY9   DIM             9             KEY FOR PATNUMW1
.
.         NOTE:-
.                  RDAAAX  IS THE READ CALL ON FILE PATAAAX
.                  RDKAAAX  IS THE READKS CALL
.                  WRAAAX  IS THE WRITE CALL
.                  UPAAAX  IS THE UPDATE CALL
.                  DEAAAX  IS THE DELETE CALL
.
RDNUMW1  MOVE      ZERO,OVRCD
         RESET     KEY9
         READ      PATNUMW1,KEY9;PWARD,PDATE,PADMN,PTRIN,PTROUT,PDSCH:
                                 PLEAV,PRETN
         GOTO      OVERCOND IF OVER
         RETURN  
.
UUNUMW1  UNLOCK    PATNUMW1
         RETURN
.
RLNUMW1  MOVE      ZERO,OVRCD
         RESET     KEY9
         READL     PATNUMW1,KEY9;PWARD,PDATE,PADMN,PTRIN,PTROUT,PDSCH:
                                 PLEAV,PRETN
         GOTO      OVERCOND IF OVER
         GOTO      OVERLOCK IF LOCKED
         RETURN  
.
RDKNUMW1 MOVE      ZERO,OVRCD
         READKS    PATNUMW1;PWARD,PDATE,PADMN,PTRIN,PTROUT,PDSCH:
                                 PLEAV,PRETN
         GOTO      OVERCOND IF OVER
         RETURN  
.
WRNUMW1  RESET     KEY9
         WRITE     PATNUMW1,KEY9;KEY9,PADMN,PTRIN,PTROUT,PDSCH:
                                 PLEAV,PRETN
         RETURN  
.
UPNUMW1  UPDATE    PATNUMW1;PWARD,PDATE,PADMN,PTRIN,PTROUT,PDSCH:
                                 PLEAV,PRETN
         RETURN  
.
DENUMW1  RESET     KEY9
         DELETE    PATNUMW1,KEY9
         RETURN
.
RDSNUMW1 RESET     KEY9
         READ      PATNUMW1,KEY9;;
         RETURN  
.                                                                                                                       
