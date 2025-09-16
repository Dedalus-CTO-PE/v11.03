.
. OPRNURIO.INC
. ------------
. Filename       :  oprnuraf.dat
. Description    :  Nurse File - File I/O Subroutines
. Variables      :  OVRCD     FORM      1
.                   KEY6      DIM       6 
.                   KEY66     DIM       66 
.
RAOPNUR1  MOVE      ZERO,OVRCD
          RESET     KEY6
          READ      OPRNURA1,KEY6;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSOPNUR1  MOVE      ZERO,OVRCD
          RESET     KEY6
          READ      OPRNURA1,KEY6;;
          RETURN  
.
RDOPNUR1  MOVE      ZERO,OVRCD
          RESET     KEY6
          READ      OPRNURA1,KEY6;OPNRCODE,OPNRSNAM,OPNRGNAM,OPNRUSR1:
                                  OPNRUSR2,OPNRUSR3,OPNRUSR4,OPNRUSR5:
                                  OPNRSTAT,OPNRSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RKOPNUR1  MOVE      ZERO,OVRCD
          READKS    OPRNURA1;OPNRCODE,OPNRSNAM,OPNRGNAM,OPNRUSR1:
                                  OPNRUSR2,OPNRUSR3,OPNRUSR4,OPNRUSR5:
                                  OPNRSTAT,OPNRSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RPOPNUR1  MOVE      ZERO,OVRCD
          READKP    OPRNURA1;OPNRCODE,OPNRSNAM,OPNRGNAM,OPNRUSR1:
                                  OPNRUSR2,OPNRUSR3,OPNRUSR4,OPNRUSR5:
                                  OPNRSTAT,OPNRSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
UPOPNUR1  UPDATE    OPRNURA1;OPNRCODE,OPNRSNAM,OPNRGNAM,OPNRUSR1:
                                  OPNRUSR2,OPNRUSR3,OPNRUSR4,OPNRUSR5:
                                  OPNRSTAT,OPNRSPAR
          RETURN
.
WROPNUR1  RESET     KEY6
          WRITE     OPRNURA1,KEY6;KEY6,OPNRSNAM,OPNRGNAM,OPNRUSR1:
                                  OPNRUSR2,OPNRUSR3,OPNRUSR4,OPNRUSR5:
                                  OPNRSTAT,OPNRSPAR
          RETURN  
.
DEOPNUR1  RESET     KEY6
          DELETE    OPRNURA1,KEY6
          RETURN
.
RAOPNUR2  MOVE      ZERO,OVRCD
          RESET     KEY66
          READ      OPRNURA2,KEY66;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSOPNUR2  MOVE      ZERO,OVRCD
          RESET     KEY66
          READ      OPRNURA2,KEY66;;
          RETURN  
.
RDOPNUR2  MOVE      ZERO,OVRCD
          RESET     KEY66
          READ      OPRNURA2,KEY66;OPNRCODE,OPNRSNAM,OPNRGNAM,OPNRUSR1:
                                  OPNRUSR2,OPNRUSR3,OPNRUSR4,OPNRUSR5:
                                  OPNRSTAT,OPNRSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RKOPNUR2  MOVE      ZERO,OVRCD
          READKS    OPRNURA2;OPNRCODE,OPNRSNAM,OPNRGNAM,OPNRUSR1:
                                  OPNRUSR2,OPNRUSR3,OPNRUSR4,OPNRUSR5:
                                  OPNRSTAT,OPNRSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RPOPNUR2  MOVE      ZERO,OVRCD
          READKP    OPRNURA2;OPNRCODE,OPNRSNAM,OPNRGNAM,OPNRUSR1:
                                  OPNRUSR2,OPNRUSR3,OPNRUSR4,OPNRUSR5:
                                  OPNRSTAT,OPNRSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
