.
.         INCLUDE FILE : PATEXPIO.INC
.
. Modifications : V5.01.01  23/05/91  DIG                          
.                 Changed this include to PATEXPFD so that PATEXCFD can be 
.                 used for the new Management Analysis Generation                              
.
.         FILE I/O REQUESTS FOR PURGE EXCEPTIONS FILE
.
.OVRCD  FORM            1             0=NOT OVER
.                                     1= OVER
.KEY8   DIM             8             KEY FOR PATEXPA1
.
.         NOTE:-
.                  RDAAAX  IS THE READ CALL ON FILE PATAAAX
.                  RDKAAAX IS THE READKS CALL
.                  WRAAAX  IS THE WRITE CALL
.                  UPAAAX  IS THE UPDATE CALL
.                  DEAAAX  IS THE DELETE CALL
.
RAEXPA1  MOVE      ZERO,OVRCD
         RESET     KEY8
         READ      PATEXPA1,KEY8;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RDEXPA1  MOVE      ZERO,OVRCD
         RESET     KEY8
         READ      PATEXPA1,KEY8;DPTEXVIS,PTEXIDAT,PTEXIOPR,PTEXIPRT:
                                 PTEXSTAT,PTEXDDAT,PTEXDOPR,PTEXDPRT,PTEXSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPTEXVIS,PTEXVIS
         RETURN
.
RKEXPA1  MOVE      ZERO,OVRCD
         READKS    PATEXPA1;DPTEXVIS,PTEXIDAT,PTEXIOPR,PTEXIPRT:
                            PTEXSTAT,PTEXDDAT,PTEXDOPR,PTEXDPRT,PTEXSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPTEXVIS,PTEXVIS
         RETURN
.
RPEXPA1  MOVE      ZERO,OVRCD
         READKP    PATEXPA1;DPTEXVIS,PTEXIDAT,PTEXIOPR,PTEXIPRT:
                            PTEXSTAT,PTEXDDAT,PTEXDOPR,PTEXDPRT,PTEXSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPTEXVIS,PTEXVIS
         RETURN
.
WREXPA1  RESET     KEY8
         WRITE     PATEXPA1,KEY8;KEY8,PTEXIDAT,PTEXIOPR,PTEXIPRT:
                            PTEXSTAT,PTEXDDAT,PTEXDOPR,PTEXDPRT,PTEXSPAR
.
         RETURN
.
UPEXPA1  MOVE      PTEXVIS,DPTEXVIS
         UPDATE    PATEXPA1;DPTEXVIS,PTEXIDAT,PTEXIOPR,PTEXIPRT:
                            PTEXSTAT,PTEXDDAT,PTEXDOPR,PTEXDPRT,PTEXSPAR
.
         RETURN
.
DEEXPA1  RESET     KEY8
         DELETE    PATEXPA1,KEY8
.
         RETURN
.
RSEXPA1  RESET     KEY8
         READ      PATEXPA1,KEY8;;
         RETURN
.
