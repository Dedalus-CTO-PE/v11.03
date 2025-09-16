.        INCLUDE NAME : BOKIOLET.INC
.
.        FILE I/O REQUESTS FOR OOKINGS LETTER FILE
.
.OVRCD   FORM     1        0 = NOT OVER
.                          1 = OVER
.KEY6    DIM      6        KEY FOR BOKLETR1 AND BOKLETR2
.
.  Modifications :
.-------------------------------------------------------------------------------
. V11.02.01 11/03/2022 Thanh T.       TSK 0911895
.           Added Communication Method (BLETCOMM)    
.-------------------------------------------------------------------------------
. V9.03.01  10/06/2004 Lina Vo    CAR50424
.           Added Read backwards for both indexes
.-------------------------------------------------------------------------------
.
RDALET1 
         MOVE     ZERO,OVRCD
         RESET    KEY6
         READ     BOKLETR1,KEY6;ANS
         GOTO     OVERCOND IF OVER
         RETURN
.
RDSLET1  
         MOVE     ZERO,OVRCD
         RESET    KEY6
         READ     BOKLETR1,KEY6;;
         RETURN
.
RDKLET1
         MOVE     ZERO,OVRCD
         READKS   BOKLETR1;DBLETNO,DBLINNO,BLTEXT,BLVAR,BLETPBOT,BLETPTOP:
                           BLETPPAG,BLETPTAB,BLETACTV,BLETCOMM,BLETSPAR
         GOTO     OVERCOND IF OVER
         MOVE     DBLETNO,BLETNO
         MOVE     DBLINNO,BLINNO
         RETURN
.
RDPLET1
         MOVE     ZERO,OVRCD
         READKP   BOKLETR1;DBLETNO,DBLINNO,BLTEXT,BLVAR,BLETPBOT,BLETPTOP:
                           BLETPPAG,BLETPTAB,BLETACTV,BLETCOMM,BLETSPAR
         GOTO     OVERCOND IF OVER
         MOVE     DBLETNO,BLETNO
         MOVE     DBLINNO,BLINNO
         RETURN
.
RDLET1
         MOVE     ZERO,OVRCD
         RESET    KEY6
         READ     BOKLETR1,KEY6;DBLETNO,DBLINNO,BLTEXT,BLVAR,BLETPBOT,BLETPTOP:
                           BLETPPAG,BLETPTAB,BLETACTV,BLETCOMM,BLETSPAR
         GOTO     OVERCOND IF OVER
         MOVE     DBLETNO,BLETNO
         MOVE     DBLINNO,BLINNO
         RETURN
.
UPLET1   
         MOVE     BLETNO,DBLETNO
         MOVE     BLINNO,DBLINNO
         UPDATE   BOKLETR1;DBLETNO,DBLINNO,BLTEXT,BLVAR,BLETPBOT,BLETPTOP:
                           BLETPPAG,BLETPTAB,BLETACTV,BLETCOMM,BLETSPAR
         RETURN
.
DELLET1  
         RESET    KEY6
         DELETE   BOKLETR1,KEY6
         RETURN
.
WRLET1  
         MOVE     ZERO,OVRCD
         RESET    KEY6
         WRITE    BOKLETR1,KEY6;KEY6,BLTEXT,BLVAR,BLETPBOT,BLETPTOP:
                           BLETPPAG,BLETPTAB,BLETACTV,BLETCOMM,BLETSPAR
         RETURN
.
RDALET2 
         MOVE     ZERO,OVRCD
         RESET    KEY6
         READ     BOKLETR2,KEY6;ANS
         GOTO     OVERCOND IF OVER
         RETURN
.
RDSLET2  
         MOVE     ZERO,OVRCD
         RESET    KEY6
         READ     BOKLETR2,KEY6;;
         RETURN
.
RDKLET2
         MOVE     ZERO,OVRCD
         READKS   BOKLETR2;DBLETNO,DBLINNO,BLTEXT,BLVAR,BLETPBOT,BLETPTOP:
                           BLETPPAG,BLETPTAB,BLETACTV,BLETCOMM,BLETSPAR
         GOTO     OVERCOND IF OVER
         MOVE     DBLETNO,BLETNO
         MOVE     DBLINNO,BLINNO
         RETURN
.
RDPLET2
         MOVE     ZERO,OVRCD
         READKP   BOKLETR2;DBLETNO,DBLINNO,BLTEXT,BLVAR,BLETPBOT,BLETPTOP:
                           BLETPPAG,BLETPTAB,BLETACTV,BLETCOMM,BLETSPAR
         GOTO     OVERCOND IF OVER
         MOVE     DBLETNO,BLETNO
         MOVE     DBLINNO,BLINNO
         RETURN
.
RDLET2
         MOVE     ZERO,OVRCD
         RESET    KEY6
         READ     BOKLETR2,KEY6;DBLETNO,DBLINNO,BLTEXT,BLVAR,BLETPBOT,BLETPTOP:
                           BLETPPAG,BLETPTAB,BLETACTV,BLETCOMM,BLETSPAR
         GOTO     OVERCOND IF OVER
         MOVE     DBLETNO,BLETNO
         MOVE     DBLINNO,BLINNO
         RETURN
.
