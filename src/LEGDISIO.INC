.
.         INCLUDE NAME : LEGDISIO.INC
.
.         FILE  I/O REQUESTS FOR A&E DISCHARGE INFORMATION
.
.OVRCD  FORM            1             0=NOT OVER
.                                     1= OVER
.KEY8   DIM             8             KEY FOR LEGDISA1
.
.         NOTE:-
.                  RDAAAX  IS THE READ CALL ON FILE PATAAAX
.                  RDKAAAX  IS THE READKS CALL
.
RSLGDIS1 RESET     KEY8
         READ      LEGDISA1,KEY8;;
         RETURN  
.
RDLGDIS1 MOVE      ZERO,OVRCD
         RESET     KEY8
         READ      LEGDISA1,KEY8;LADSNUMB,LADSDATE,LADSTIME,LADSSSES:
                                 LADSDISC,LADSDIAG,LADSUSD1,LADSUSD2,LADSUSD3:
                                 LADSSPAR
         GOTO      OVERCOND IF OVER
         RETURN  
.
RKLGDIS1 MOVE      ZERO,OVRCD
         READKS    LEGDISA1;LADSNUMB,LADSDATE,LADSTIME,LADSSSES:
                            LADSDISC,LADSDIAG,LADSUSD1,LADSUSD2,LADSUSD3:
                            LADSSPAR
         GOTO      OVERCOND IF OVER
         RETURN  
.
