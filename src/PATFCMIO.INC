.
. PATFCMIO.INC
. ------------
. Filename       :  patfcmmf
. Description    :  Patient Health Fund Comments File I/O Subroutines
. Variables      :  OVRCD     FORM      1
.                   KEY8      DIM       8 
.
RDAFCMM1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      PATFCMM1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDSFCMM1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      PATFCMM1,KEY8;;
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDFCMM1   MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      PATFCMM1,KEY8;FUNDCOD,DFCOUNT,FTEXT,FSPARES
          GOTO      OVERCOND IF OVER
          MOVE      DFCOUNT,FCOUNT 
          RETURN  
.
RDKFCMM1  MOVE      ZERO,OVRCD
          READKS    PATFCMM1;FUNDCOD,DFCOUNT,FTEXT,FSPARES
          GOTO      OVERCOND IF OVER
          MOVE      DFCOUNT,FCOUNT 
          RETURN  
.
UPFCMM1   MOVE      FCOUNT,DFCOUNT
          UPDATE    PATFCMM1;FUNDCOD,DFCOUNT,FTEXT,FSPARES
          RETURN
.
WRFCMM1   RESET     KEY8
          WRITE     PATFCMM1,KEY8;KEY8,FTEXT,FSPARES
          RETURN  
.
DEFCMM1   RESET     KEY8
          DELETE    PATFCMM1,KEY8
          RETURN
.
