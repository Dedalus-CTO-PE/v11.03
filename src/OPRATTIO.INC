
. OPRATTIO.INC
. ------------
. Filename       :  oprattaf.dat
. Description    :  Doctors attendence file i/o
. Variables      :  OVRCD     FORM      1
.                   KEY12     DIM       12
.
RAOPATT1  MOVE      ZERO,OVRCD
          RESET     KEY12
          READ      OPRATTA1,KEY12;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSOPATT1  MOVE      ZERO,OVRCD
          RESET     KEY12
          READ      OPRATTA1,KEY12;;
          RETURN  
.
RDOPATT1  MOVE      ZERO,OVRCD
          RESET     KEY12
          READ      OPRATTA1,KEY12;OPATDATE,OPATDOCT,OPATOPER:
                                   OPATASST,OPATANAE,OPATSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RKOPATT1  MOVE      ZERO,OVRCD
          READKS    OPRATTA1;OPATDATE,OPATDOCT,OPATOPER,OPATASST:
                             OPATANAE,OPATSPAR 
          GOTO      OVERCOND IF OVER
          RETURN  
.
RPOPATT1  MOVE      ZERO,OVRCD
          READKP    OPRATTA1;OPATDATE,OPATDOCT,OPATOPER,OPATASST:
                             OPATANAE,OPATSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
UPOPATT1  UPDATE    OPRATTA1;OPATDATE,OPATDOCT,OPATOPER,OPATASST:
                             OPATANAE,OPATSPAR
          RETURN
.
WROPATT1  RESET     KEY12
          WRITE     OPRATTA1,KEY12;KEY12,OPATOPER,OPATASST,OPATANAE:
                                   OPATSPAR
          RETURN  
.
DEOPATT1  RESET     KEY12
          DELETE    OPRATTA1,KEY12
          RETURN
.************************************************************************
.************************************************************************
