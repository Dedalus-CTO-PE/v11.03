.
. MRTRESIO.INC
. ------------
. Filename       :  mrtresaf
. Description    :  Medical Records Tracking - File I/O Subroutines
. Variables      :  OVRCD     FORM      1
.                   KEY23     DIM       23 
.                   KEY31     DIM       31
.
RAMRRES1  MOVE      ZERO,OVRCD
          RESET     KEY23
          READ      MRTRESA1,KEY23;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSMRRES1  MOVE      ZERO,OVRCD
          RESET     KEY23
          READ      MRTRESA1,KEY23;;
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDMRRES1   MOVE      ZERO,OVRCD
          RESET     KEY23
          READ      MRTRESA1,KEY23;MRRSKEY,MRRSDATE,MRRSTIME,MRRSDEPT,MRRSREQS:
                                   MRRSREAS,MRRSRESV,MRRSRHOS,MRRSSPAR       
          GOTO      OVERCOND IF OVER
          RETURN  
.
RKMRRES1  MOVE      ZERO,OVRCD
          READKS    MRTRESA1;MRRSKEY,MRRSDATE,MRRSTIME,MRRSDEPT,MRRSREQS:
                                   MRRSREAS,MRRSRESV,MRRSRHOS,MRRSSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
UPMRRES1   UPDATE    MRTRESA1;MRRSKEY,MRRSDATE,MRRSTIME,MRRSDEPT,MRRSREQS:
                                   MRRSREAS,MRRSRESV,MRRSRHOS,MRRSSPAR
          RETURN
.
WRRESV1   MOVE      ZERO,OVRCD
WRMRRES1  RESET     KEY23
          WRITE     MRTRESA1,KEY23;MRRSKEY,MRRSDATE,MRRSTIME,MRRSDEPT,MRRSREQS:
                                   MRRSREAS,MRRSRESV,MRRSRHOS,MRRSSPAR
          RETURN  
.
DERESV1   MOVE      ZERO,OVRCD
DEMRRES1  RESET     KEY23
          DELETE    MRTRESA1,KEY23
          RETURN
.
RAMRRES2  MOVE      ZERO,OVRCD
          RESET     KEY31
          READ      MRTRESA2,KEY31;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSMRRES2  MOVE      ZERO,OVRCD
          RESET     KEY31
          READ      MRTRESA2,KEY31;;
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDMRRES2  MOVE      ZERO,OVRCD
          RESET     KEY31
          READ      MRTRESA2,KEY31;MRRSKEY,MRRSDATE,MRRSTIME,MRRSDEPT,MRRSREQS:
                                   MRRSREAS,MRRSRESV,MRRSRHOS,MRRSSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RKMRRES2  MOVE      ZERO,OVRCD
          READKS    MRTRESA2;MRRSKEY,MRRSDATE,MRRSTIME,MRRSDEPT,MRRSREQS:
                                   MRRSREAS,MRRSRESV,MRRSRHOS,MRRSSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
.
