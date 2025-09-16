.
.         INCLUDE FILE : PATWVEIO.INC
.
.         FILE I/O REQUESTS FOR VETERANS AFFAIRS CLAIMS
.
.OVRCD  FORM            1             0=NOT OVER
.                                     1= OVER
.KEY8   DIM             8             KEY FOR LEGWVET1
.
.         NOTE:-
.                  RDAAAX  IS THE READ CALL ON FILE PATAAAX
.                  RDKAAAX IS THE READKS CALL
.                  WRAAAX  IS THE WRITE CALL
.                  UPAAAX  IS THE UPDATE CALL
.                  DEAAAX  IS THE DELETE CALL
.
.
RDLGWVE1
          MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      LEGWVET1,KEY8;DLVADMNO,LVCLMNO,LGWVAUTH,LGWVDATE,LVSPARE
          GOTO      OVERCOND IF OVER
          MOVE      DLVADMNO,LQVADMNO
          MOVE      LQVADMNO,LVADMNO
          RETURN
.
RKLGWVE1
          MOVE      ZERO,OVRCD
          READKS    LEGWVET1;DLVADMNO,LVCLMNO,LGWVAUTH,LGWVDATE,LVSPARE
          GOTO      OVERCOND IF OVER
          MOVE      DLVADMNO,LQVADMNO
          MOVE      LQVADMNO,LVADMNO
          RETURN
.
RSLGWVE1
          RESET     KEY8
          READ      LEGWVET1,KEY8;;
          RETURN
