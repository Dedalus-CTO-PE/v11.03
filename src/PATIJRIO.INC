.
. PATIJRIO.INC
. ------------
. Filename       :  patijrnf
. Description    :  Patient invoices with Journals entered File I/O Subroutines
. Variables      :  OVRCD     FORM      1
.                   KEY16     DIM       16
.
RDSIJRN1  MOVE      ZERO,OVRCD
          RESET     KEY16
          READ      PATIJRN1,KEY16;;
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDIJRN1   MOVE      ZERO,OVRCD
          RESET     KEY16
          READ      PATIJRN1,KEY16;IJINVNO,IJADMNO,DIJBATCH,IJSPARE
          GOTO      OVERCOND IF OVER
          MOVE      DIJBATCH,IJBATCH
          RETURN  
.
RDKIJRN1  MOVE      ZERO,OVRCD
          READKS    PATIJRN1;IJINVNO,IJADMNO,DIJBATCH,IJSPARE
          GOTO      OVERCOND IF OVER
          MOVE      DIJBATCH,IJBATCH
          RETURN  
.
WRIJRN1   MOVE      ZERO,OVRCD
          MOVE      IJBATCH,DIJBATCH
          RESET     KEY16
          WRITE     PATIJRN1,KEY16;IJINVNO,IJADMNO,DIJBATCH,IJSPARE
          RETURN  
.
DEIJRN1   RESET     KEY16
          DELETE    PATIJRN1,KEY16
          RETURN
.
