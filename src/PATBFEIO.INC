.
.         INC       PATBFEIO.INC
.
.         FILE  I/O REQUESTS FOR BFESS FILE
.
.  Modifications : 
.                 V10.01.01 30/11/2010  J.Tan    CAR 233034
.                           Removed HF Table and added table type
.                  V5.08.01 15/08/2000  Caleb Sharman
.                           Changed Health Fund variables to be 8 chars
.                  V5.00.01 6/6/90 Glen Hobby
.                           Added BFHDP
.
.OVRCD  FORM            1             0=NOT OVER
.                                     1= OVER
.KEY27   DIM            27             KEY FOR PATBFEE1
.
.         NOTE:-
.                  RDAAAX  IS THE READ CALL ON FILE PATAAAX
.                  RDKAAAX  IS THE READKS CALL
.                  WRAAAX  IS THE WRITE CALL
.                  UPAAAX  IS THE UPDATE CALL
.                  DEAAAX  IS THE DELETE CALL
.
RDSBFEE1 RESET     KEY27
         READ      PATBFEE1,KEY27;;
         RETURN
.
RDABFEE1 RESET     KEY27
         MOVE      ZERO,OVRCD
         READ      PATBFEE1,KEY27;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RDBFEE1  RESET     KEY27  
         MOVE      ZERO,OVRCD
         READ      PATBFEE1,KEY27;BFCLM,BFHFUND,PTBFHTYP,BFATYPE,BFBTYPE:
                                  DBFENDDY,BFPAT,BFHF,BFNINV,BFDESC:
                                  PTBFCNID,BFSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DBFENDDY,BFENDDY
         RETURN
.
RDKBFEE1 MOVE      ZERO,OVRCD
         READKS    PATBFEE1;BFCLM,BFHFUND,PTBFHTYP,BFATYPE,BFBTYPE:
                                  DBFENDDY,BFPAT,BFHF,BFNINV,BFDESC:
                                  PTBFCNID,BFSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DBFENDDY,BFENDDY
         RETURN
.
RDPBFEE1 MOVE      ZERO,OVRCD
         READKP    PATBFEE1;BFCLM,BFHFUND,PTBFHTYP,BFATYPE,BFBTYPE:
                                  DBFENDDY,BFPAT,BFHF,BFNINV,BFDESC:
                                  PTBFCNID,BFSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DBFENDDY,BFENDDY
         RETURN
.
UPBFEE1  MOVE      BFENDDY,DBFENDDY
         UPDATE    PATBFEE1;BFCLM,BFHFUND,PTBFHTYP,BFATYPE,BFBTYPE:
                                  DBFENDDY,BFPAT,BFHF,BFNINV,BFDESC:
                                  PTBFCNID,BFSPARE
         RETURN
.
WRBFEE1  RESET     KEY27
         WRITE     PATBFEE1,KEY27;BFCLM,BFHFUND,PTBFHTYP,BFATYPE,BFBTYPE:
                                  DBFENDDY,BFPAT,BFHF,BFNINV,BFDESC:
                                  PTBFCNID,BFSPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
DEBFEE1  RESET     KEY27
         DELETE    PATBFEE1,KEY27
         RETURN
.
RDSBFEE2 RESET     KEY27
         READ      PATBFEE2,KEY27;;
         RETURN
.
RDKBFEE2 MOVE      ZERO,OVRCD
         READKS    PATBFEE2;BFCLM,BFHFUND,PTBFHTYP,BFATYPE,BFBTYPE:
                                  DBFENDDY,BFPAT,BFHF,BFNINV,BFDESC:
                                  PTBFCNID,BFSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DBFENDDY,BFENDDY
         RETURN
.
RDPBFEE2 MOVE      ZERO,OVRCD
         READKP    PATBFEE2;BFCLM,BFHFUND,PTBFHTYP,BFATYPE,BFBTYPE:
                                  DBFENDDY,BFPAT,BFHF,BFNINV,BFDESC:
                                  PTBFCNID,BFSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DBFENDDY,BFENDDY
         RETURN
.
DEBFEE2  RESET     KEY27
         DELETE    PATBFEE2,KEY27
         RETURN
.
RDSBFEE3 RESET     KEY27
         READ      PATBFEE3,KEY27;;
         RETURN
.
RDBFEE3  RESET     KEY27
         MOVE      ZERO,OVRCD
         READ      PATBFEE3,KEY27;BFCLM,BFHFUND,PTBFHTYP,BFATYPE,BFBTYPE:
                                  DBFENDDY,BFPAT,BFHF,BFNINV,BFDESC:
                                  PTBFCNID,BFSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DBFENDDY,BFENDDY
         RETURN

.
RDKBFEE3 MOVE      ZERO,OVRCD
         READKS    PATBFEE3;BFCLM,BFHFUND,PTBFHTYP,BFATYPE,BFBTYPE:
                                  DBFENDDY,BFPAT,BFHF,BFNINV,BFDESC:
                                  PTBFCNID,BFSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DBFENDDY,BFENDDY
         RETURN
.
RDPBFEE3 MOVE      ZERO,OVRCD
         READKP    PATBFEE3;BFCLM,BFHFUND,PTBFHTYP,BFATYPE,BFBTYPE:
                                  DBFENDDY,BFPAT,BFHF,BFNINV,BFDESC:
                                  PTBFCNID,BFSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DBFENDDY,BFENDDY
         RETURN
.
DEBFEE3  RESET     KEY27
         DELETE    PATBFEE3,KEY27
         RETURN
.
         INC       JHSBFEIO/INC
