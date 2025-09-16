.
.         INC       OUTLOAIO.INC
.
.         FILE  I/O REQUESTS FOR LOCATION FILE
.
.OVRCD  FORM            1             0=NOT OVER
.                                     1= OVER
.KEY24   DIM           24             KEY FOR OUTLOCA1
.
.         NOTE:-
.                  RDAAAX  IS OUT READ CALL ON FILE OUTAAAX
.                  RDKAAAX  IS OUT READKS CALL
.                  WRAAAX  IS OUT WRITE CALL
.                  UPAAAX  IS OUT UPDATE CALL
.                  DEAAAX  IS OUT DELETE CALL
. 
.         NOTE  OVRCD=1   RECORD DOSENT EXIST
.                     2   RECORD IS LOCKED
.
RAOTLOC1 RESET     KEY24
         MOVE      ZERO,OVRCD
         READ      OUTLOCA1,KEY24;ANS
         GOTO      OVERCOND IF OVER
         RETURN  
.
RSOTLOC1 RESET     KEY24
         READ      OUTLOCA1,KEY24;;
         RETURN  
.
RDOTLOC1 MOVE      ZERO,OVRCD
         RESET     KEY24
         READ      OUTLOCA1,KEY24;LOASITE,LOAGRUP,LOATYPE,LOACACH,LOADATE:
                                  LOANUMB,LOASPAR
.
         GOTO      OVERCOND IF OVER
         RETURN  
.
RKOTLOC1 MOVE      ZERO,OVRCD
         READKS    OUTLOCA1;LOASITE,LOAGRUP,LOATYPE,LOACACH,LOADATE:
                            LOANUMB,LOASPAR
.
         GOTO      OVERCOND IF OVER
         RETURN  
.
WROTLOC1 RESET     KEY24
         WRITE     OUTLOCA1,KEY24;KEY24,LOANUMB,LOASPAR
         RETURN  
.
UPOTLOC1 UPDATE    OUTLOCA1;LOASITE,LOAGRUP,LOATYPE,LOACACH,LOADATE:
                            LOANUMB,LOASPAR
         RETURN  
.
DEOTLOC1 RESET     KEY24
         DELETE    OUTLOCA1,KEY24
         RETURN
