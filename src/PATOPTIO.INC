.
. PATOPTIO.INC
. ------------
. Filename       :  patoptnf.dat
. Description    :  Program Option Security - File I/O Subroutines
. Variables      :  OVRCD     FORM      1
.                   KEY8      DIM       8
.
RAPTOPT1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      PATOPTN1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSPTOPT1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      PATOPTN1,KEY8;;
          RETURN  
.
RDPTOPT1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      PATOPTN1,KEY8;PTOPPROG:
                                  PTOPOP1,PTOPOP2,PTOPOP3,PTOPOP4,PTOPOP5:
                                  PTOPOP6,PTOPOP7,PTOPOP8,PTOPOP9,PTOPOP10:
                                  PTOPOP11,PTOPOP12,PTOPOP13,PTOPOP14,PTOPOP15:
                                  PTOPOP16,PTOPOP17,PTOPOP18,PTOPOP19,PTOPOP20:
                                  PTOPOP21,PTOPOP22,PTOPOP23,PTOPOP24,PTOPOP25:
                                  PTOPOP26,PTOPOP27,PTOPOP28,PTOPOP29,PTOPOP30
          GOTO      OVERCOND IF OVER
          RETURN  
.
RLPTOPT1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READL     PATOPTN1,KEY8;PTOPPROG:
                                  PTOPOP1,PTOPOP2,PTOPOP3,PTOPOP4,PTOPOP5:
                                  PTOPOP6,PTOPOP7,PTOPOP8,PTOPOP9,PTOPOP10:
                                  PTOPOP11,PTOPOP12,PTOPOP13,PTOPOP14,PTOPOP15:
                                  PTOPOP16,PTOPOP17,PTOPOP18,PTOPOP19,PTOPOP20:
                                  PTOPOP21,PTOPOP22,PTOPOP23,PTOPOP24,PTOPOP25:
                                  PTOPOP26,PTOPOP27,PTOPOP28,PTOPOP29,PTOPOP30
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED 
          RETURN  
.
RKPTOPT1  MOVE      ZERO,OVRCD
          READKS    PATOPTN1;PTOPPROG:
                             PTOPOP1,PTOPOP2,PTOPOP3,PTOPOP4,PTOPOP5:
                             PTOPOP6,PTOPOP7,PTOPOP8,PTOPOP9,PTOPOP10:
                             PTOPOP11,PTOPOP12,PTOPOP13,PTOPOP14,PTOPOP15:
                             PTOPOP16,PTOPOP17,PTOPOP18,PTOPOP19,PTOPOP20:
                             PTOPOP21,PTOPOP22,PTOPOP23,PTOPOP24,PTOPOP25:
                             PTOPOP26,PTOPOP27,PTOPOP28,PTOPOP29,PTOPOP30
          GOTO      OVERCOND IF OVER
          RETURN  
.
RPPTOPT1  MOVE      ZERO,OVRCD
          READKP    PATOPTN1;PTOPPROG:
                             PTOPOP1,PTOPOP2,PTOPOP3,PTOPOP4,PTOPOP5:
                             PTOPOP6,PTOPOP7,PTOPOP8,PTOPOP9,PTOPOP10:
                             PTOPOP11,PTOPOP12,PTOPOP13,PTOPOP14,PTOPOP15:
                             PTOPOP16,PTOPOP17,PTOPOP18,PTOPOP19,PTOPOP20:
                             PTOPOP21,PTOPOP22,PTOPOP23,PTOPOP24,PTOPOP25:
                             PTOPOP26,PTOPOP27,PTOPOP28,PTOPOP29,PTOPOP30
          GOTO      OVERCOND IF OVER
          RETURN  
.
UPPTOPT1  UPDATE    PATOPTN1;PTOPPROG:
                             PTOPOP1,PTOPOP2,PTOPOP3,PTOPOP4,PTOPOP5:
                             PTOPOP6,PTOPOP7,PTOPOP8,PTOPOP9,PTOPOP10:
                             PTOPOP11,PTOPOP12,PTOPOP13,PTOPOP14,PTOPOP15:
                             PTOPOP16,PTOPOP17,PTOPOP18,PTOPOP19,PTOPOP20:
                             PTOPOP21,PTOPOP22,PTOPOP23,PTOPOP24,PTOPOP25:
                             PTOPOP26,PTOPOP27,PTOPOP28,PTOPOP29,PTOPOP30
          RETURN
.
ULPTOPT1  UNLOCK    PATOPTN1
          RETURN
.
WRPTOPT1  MOVE      ZERO,OVRCD
          RESET     KEY8
          TRAP      OVERLOCK IF IO
          WRITE     PATOPTN1,KEY8;KEY8:
                             PTOPOP1,PTOPOP2,PTOPOP3,PTOPOP4,PTOPOP5:
                             PTOPOP6,PTOPOP7,PTOPOP8,PTOPOP9,PTOPOP10:
                             PTOPOP11,PTOPOP12,PTOPOP13,PTOPOP14,PTOPOP15:
                             PTOPOP16,PTOPOP17,PTOPOP18,PTOPOP19,PTOPOP20:
                             PTOPOP21,PTOPOP22,PTOPOP23,PTOPOP24,PTOPOP25:
                             PTOPOP26,PTOPOP27,PTOPOP28,PTOPOP29,PTOPOP30
          TRAPCLR   IO
          RETURN  
.
DEPTOPT1  RESET     KEY8
          DELETE    PATOPTN1,KEY8
          RETURN
.
.
.
