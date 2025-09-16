.
. PATHLFIO.INC
. ------------
. Filename        : pathlfaf
. Description     : Lumpsum for overnight (Inliers/high outliers)
. Variables       : OVRCD   FORM  1      0 = Not over
.                                        1 = Over
.                   KEY27   DIM   27     Key for PATHLFA1
.
. -------- I/O routines for PATHLFA1 -------
.
RAPTHLF1  MOVE      ZERO,OVRCD
          RESET     KEY27
          READ      PATHLFA1,KEY27;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPTHLF1  RESET     KEY27
          READ      PATHLFA1,KEY27;;
          RETURN
.
RDPTHLF1  MOVE      ZERO,OVRCD
          RESET     KEY27
          READ      PATHLFA1,KEY27;PTHLCLMN,PTHLHFND,PTHLTABT,PTHLCASM:
                                   PTHLDES1,PTHLDES2,PTHLLREB,PTHLLPAT:
                                   PTHLCOFF,PTHLINVB,PTHLINVI,PTHLNINV:
                                   PTHLCNID,PTHLSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTHLF1  MOVE      ZERO,OVRCD
          READKS    PATHLFA1;PTHLCLMN,PTHLHFND,PTHLTABT,PTHLCASM:
                             PTHLDES1,PTHLDES2,PTHLLREB,PTHLLPAT:
                             PTHLCOFF,PTHLINVB,PTHLINVI,PTHLNINV:
                             PTHLCNID,PTHLSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTHLF1  MOVE      ZERO,OVRCD
          READKP    PATHLFA1;PTHLCLMN,PTHLHFND,PTHLTABT,PTHLCASM:
                             PTHLDES1,PTHLDES2,PTHLLREB,PTHLLPAT:
                             PTHLCOFF,PTHLINVB,PTHLINVI,PTHLNINV:
                             PTHLCNID,PTHLSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
WRPTHLF1  RESET     KEY27
          UNPACK    KEY27,PTHLCNID,PTHLCLMN,PTHLHFND,PTHLTABT,PTHLCASM
          WRITE     PATHLFA1,KEY27;PTHLCLMN,PTHLHFND,PTHLTABT,PTHLCASM:
                                   PTHLDES1,PTHLDES2,PTHLLREB,PTHLLPAT:
                                   PTHLCOFF,PTHLINVB,PTHLINVI,PTHLNINV:
                                   PTHLCNID,PTHLSPAR
          RETURN
.
UPPTHLF1  UPDATE    PATHLFA1;PTHLCLMN,PTHLHFND,PTHLTABT,PTHLCASM:
                             PTHLDES1,PTHLDES2,PTHLLREB,PTHLLPAT:
                             PTHLCOFF,PTHLINVB,PTHLINVI,PTHLNINV:
                             PTHLCNID,PTHLSPAR
          RETURN
.
DEPTHLF1  RESET     KEY27
          DELETE    PATHLFA1,KEY27
          RETURN
.
RAPTHLF2  MOVE      ZERO,OVRCD
          RESET     KEY27  
          READ      PATHLFA2,KEY27;ANS
          GOTO      OVERCOND IF OVER    
          RETURN     
.
RSPTHLF2  RESET     KEY27     
          READ      PATHLFA2,KEY27;;   
          RETURN    
.
RDPTHLF2  MOVE      ZERO,OVRCD
          RESET     KEY27     
          READ      PATHLFA2,KEY27;PTHLCLMN,PTHLHFND,PTHLTABT,PTHLCASM:
                                   PTHLDES1,PTHLDES2,PTHLLREB,PTHLLPAT:
                                   PTHLCOFF,PTHLINVB,PTHLINVI,PTHLNINV:
                                   PTHLCNID,PTHLSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTHLF2  MOVE      ZERO,OVRCD
          READKS    PATHLFA2;PTHLCLMN,PTHLHFND,PTHLTABT,PTHLCASM:
                             PTHLDES1,PTHLDES2,PTHLLREB,PTHLLPAT:
                             PTHLCOFF,PTHLINVB,PTHLINVI,PTHLNINV:
                             PTHLCNID,PTHLSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTHLF2  MOVE      ZERO,OVRCD
          READKP    PATHLFA2;PTHLCLMN,PTHLHFND,PTHLTABT,PTHLCASM:
                             PTHLDES1,PTHLDES2,PTHLLREB,PTHLLPAT:
                             PTHLCOFF,PTHLINVB,PTHLINVI,PTHLNINV:
                             PTHLCNID,PTHLSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
WRPTHLF2  RESET     KEY27
          UNPACK    KEY27,PTHLCLMN,PTHLHFND,PTHLTABT,PTHLCASM,PTHLCNID
          WRITE     PATHLFA2,KEY27;PTHLCLMN,PTHLHFND,PTHLTABT,PTHLCASM:
                                   PTHLDES1,PTHLDES2,PTHLLREB,PTHLLPAT:
                                   PTHLCOFF,PTHLINVB,PTHLINVI,PTHLNINV:
                                   PTHLCNID,PTHLSPAR
          RETURN
.
UPPTHLF2  UPDATE    PATHLFA2;PTHLCLMN,PTHLHFND,PTHLTABT,PTHLCASM:
                             PTHLDES1,PTHLDES2,PTHLLREB,PTHLLPAT:
                             PTHLCOFF,PTHLINVB,PTHLINVI,PTHLNINV:
                             PTHLCNID,PTHLSPAR
          RETURN
.
DEPTHLF2  RESET     KEY27
          DELETE    PATHLFA2,KEY27
          RETURN
.
