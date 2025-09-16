. OPRORUIO.INC
. ------------
. Filename       :  oproruaf.dat
. Description    :  Operating room usage file
. Variables      :  OVRCD     FORM      1
.                   KEY12     DIM       12
.
RAOPORU1  MOVE      ZERO,OVRCD
          RESET     KEY12
          READ      OPRORUA1,KEY12;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSOPORU1  MOVE      ZERO,OVRCD
          RESET     KEY12
          READ      OPRORUA1,KEY12;;
          RETURN  
.
RDOPORU1  MOVE      ZERO,OVRCD
          RESET     KEY12
          READ      OPRORUA1,KEY12;OPOUDATE,OPOUROOM,OPOUBCAS,OPOUBOPR:
                             OPOUBTIM,OPOUTCAS,OPOUTOPR,OPOUTTIM:
                             OPOUECAS,OPOUEOPR,OPOUETIM,OPOUAVAL:
                             OPOUSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RKOPORU1  MOVE      ZERO,OVRCD
          READKS    OPRORUA1;OPOUDATE,OPOUROOM,OPOUBCAS,OPOUBOPR:
                             OPOUBTIM,OPOUTCAS,OPOUTOPR,OPOUTTIM:
                             OPOUECAS,OPOUEOPR,OPOUETIM,OPOUAVAL:
                             OPOUSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RPOPORU1  MOVE      ZERO,OVRCD
          READKP    OPRORUA1;OPOUDATE,OPOUROOM,OPOUBCAS,OPOUBOPR:
                             OPOUBTIM,OPOUTCAS,OPOUTOPR,OPOUTTIM:
                             OPOUECAS,OPOUEOPR,OPOUETIM,OPOUAVAL:
                             OPOUSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
UPOPORU1  UPDATE    OPRORUA1;OPOUDATE,OPOUROOM,OPOUBCAS,OPOUBOPR:
                             OPOUBTIM,OPOUTCAS,OPOUTOPR,OPOUTTIM:
                             OPOUECAS,OPOUEOPR,OPOUETIM,OPOUAVAL:
                             OPOUSPAR
          RETURN
.
WROPORU1  RESET     KEY12
          WRITE     OPRORUA1,KEY12;KEY12,OPOUBCAS,OPOUBOPR:
                             OPOUBTIM,OPOUTCAS,OPOUTOPR,OPOUTTIM:
                             OPOUECAS,OPOUEOPR,OPOUETIM,OPOUAVAL:
                             OPOUSPAR
          RETURN  
.
DEOPORU1  RESET     KEY12
          DELETE    OPRORUA1,KEY12
          RETURN
.************************************************************************
