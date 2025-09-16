.
. OPRRECIO.INC
. ------------
. Filename       :  oprrecaf.dat
. Description    :  Operation Records - File I/O Subroutines
. Variables      :  OVRCD     FORM      1
.                   KEY14     DIM       14 
. Modifications  :  V5.01.01  20/12/89  E.Phan
.                   Changed key & length.
.
.                   08/10/90 J. Ceniza. Changed according to new specs.
.
RAOPREC1  MOVE      ZERO,OVRCD
          RESET     KEY14
          READ      OPRRECA1,KEY14;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSOPREC1  MOVE      ZERO,OVRCD
          RESET     KEY14
          READ      OPRRECA1,KEY14;;
          RETURN  
.
RDOPREC1  MOVE      ZERO,OVRCD
          RESET     KEY14
          READ      OPRRECA1,KEY14;OPORUNIQ,OPORTEAM,OPORCLND,OPORLINE,OPORSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RKOPREC1  MOVE      ZERO,OVRCD
          READKS    OPRRECA1;OPORUNIQ,OPORTEAM,OPORCLND,OPORLINE,OPORSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RPOPREC1  MOVE      ZERO,OVRCD
          READKP    OPRRECA1;OPORUNIQ,OPORTEAM,OPORCLND,OPORLINE,OPORSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
UPOPREC1  UPDATE    OPRRECA1;OPORUNIQ,OPORTEAM,OPORCLND,OPORLINE,OPORSPAR
          RETURN
.
WROPREC1  RESET     KEY14
          WRITE     OPRRECA1,KEY14;KEY14,OPORLINE,OPORSPAR
          RETURN  
.
DEOPREC1  RESET     KEY14
          DELETE    OPRRECA1,KEY14
          RETURN
.
