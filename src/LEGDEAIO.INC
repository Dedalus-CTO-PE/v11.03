.*****************************************************************************
.*        LEGDEAIO.INC                                                       *
.* Mods:                                                                     *
.*        18/01/2008  Steve Armstrong  CAR 159429                            *
.*                    Added UPLGDEA2 for U/R merging                         *
.*****************************************************************************
.
.         INCLUDE NAME : LEGDEAIO.PBL
.
.         FILE  I/O REQUESTS FOR SESSIONS
.
.OVRCD  FORM            1             0=NOT OVER
.                                     1= OVER
.
.KEY8   DIM             8            KEY FOR ANEDETA1
.KEY16  DIM            16            KEY FOR ANEDETA2
.KEY21  DIM            21            KEY FOR ANEDETA3
.KEY27  DIM            27            KEY FOR ANEDETA4
.
.         NOTE:-
.                  RDAAAX  IS AAE READ CALL ON FILE LEGAAAX
.                  RDKAAAX  IS AAE READKS CALL
.
.       FIRST SESSIONS   I/O
.
RALGDEA1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      LEGDETA1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSLGDEA1  RESET     KEY8
          READ      LEGDETA1,KEY8;;
          RETURN  
.
RDLGDEA1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      LEGDETA1,KEY8;DLADANUM,LADADATE,LADATIME:
                                  DLADAURN,LADACOMP,LADACLAS,LADAINSU,LADASRC:
                                  LADASIT,LADAMODE,LADAFILL,LADADOCT:
                                  LADASEEN,LADAADMI,LADALOCK,LADADURN:
                                  LADAEMPL,LADAADD1,LADAADD2,LADASUBR:
                                  LADAPOST,LADATELE,LADACONT,LADAUSR1,LADAUSR2:
                                  LADAUSR3,LADAUSR4,LADAUSR5,LADADIAG:
                                  LADAWAIT,LADASDTE,LADAPREV,LADADIGC,LAEDAPRT:
                                  LAEDARDO,LAEDAUDD,LAEDAUDT,LADASPAR
.
          GOTO      OVERCOND IF OVER
          MOVE      DLADANUM,LADANUMB
          MOVE      DLADAURN,LADAURNO
.
          MOVE      LADANUMB,LSADANUM
          MOVE      LADATIME,LSADATIM
          MOVE      LADADATE,LSADADAT
          MOVE      LADAURNO,LSADAURN
          MOVE      LADADOCT,LSADADOC
          RETURN  
.
RKLGDEA1  MOVE      ZERO,OVRCD
          READKS    LEGDETA1;DLADANUM,LADADATE,LADATIME:
                             DLADAURN,LADACOMP,LADACLAS,LADAINSU,LADASRC:
                             LADASIT,LADAMODE,LADAFILL,LADADOCT:
                             LADASEEN,LADAADMI,LADALOCK,LADADURN:
                             LADAEMPL,LADAADD1,LADAADD2,LADASUBR:
                             LADAPOST,LADATELE,LADACONT,LADAUSR1,LADAUSR2:
                             LADAUSR3,LADAUSR4,LADAUSR5,LADADIAG:
                             LADAWAIT,LADASDTE,LADAPREV,LADADIGC,LAEDAPRT:
                             LAEDARDO,LAEDAUDD,LAEDAUDT,LADASPAR
.
          GOTO      OVERCOND IF OVER
          MOVE      DLADANUM,LADANUMB
          MOVE      DLADAURN,LADAURNO
.
          MOVE      LADANUMB,LSADANUM
          MOVE      LADATIME,LSADATIM
          MOVE      LADADATE,LSADADAT
          MOVE      LADAURNO,LSADAURN
          MOVE      LADADOCT,LSADADOC
          RETURN  
.
RPLGDEA1  MOVE      ZERO,OVRCD
          READKP    LEGDETA1;DLADANUM,LADADATE,LADATIME:
                             DLADAURN,LADACOMP,LADACLAS,LADAINSU,LADASRC:
                             LADASIT,LADAMODE,LADAFILL,LADADOCT:
                             LADASEEN,LADAADMI,LADALOCK,LADADURN:
                             LADAEMPL,LADAADD1,LADAADD2,LADASUBR:
                             LADAPOST,LADATELE,LADACONT,LADAUSR1,LADAUSR2:
                             LADAUSR3,LADAUSR4,LADAUSR5,LADADIAG:
                             LADAWAIT,LADASDTE,LADAPREV,LADADIGC,LAEDAPRT:
                             LAEDARDO,LAEDAUDD,LAEDAUDT,LADASPAR
.
          GOTO      OVERCOND IF OVER
          MOVE      DLADANUM,LADANUMB
          MOVE      DLADAURN,LADAURNO
.
          MOVE      LADANUMB,LSADANUM
          MOVE      LADATIME,LSADATIM
          MOVE      LADADATE,LSADADAT
          MOVE      LADAURNO,LSADAURN
          MOVE      LADADOCT,LSADADOC
          RETURN  
.
.       SECOND SESSIONS   I/O
.
RSLGDEA2  RESET     KEY16
          READ      LEGDETA2,KEY16;;
          RETURN  
.
RDLGDEA2  MOVE      ZERO,OVRCD
          RESET     KEY16
          READ      LEGDETA2,KEY16;DLADANUM,LADADATE,LADATIME:
                                  DLADAURN,LADACOMP,LADACLAS,LADAINSU,LADASRC:
                                  LADASIT,LADAMODE,LADAFILL,LADADOCT:
                                  LADASEEN,LADAADMI,LADALOCK,LADADURN:
                                  LADAEMPL,LADAADD1,LADAADD2,LADASUBR:
                                  LADAPOST,LADATELE,LADACONT,LADAUSR1,LADAUSR2:
                                  LADAUSR3,LADAUSR4,LADAUSR5,LADADIAG:
                                  LADAWAIT,LADASDTE,LADAPREV,LADADIGC,LAEDAPRT:
                                  LAEDARDO,LAEDAUDD,LAEDAUDT,LADASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DLADANUM,LADANUMB
          MOVE      DLADAURN,LADAURNO
          RETURN  
.
RKLGDEA2  MOVE      ZERO,OVRCD
          READKS    LEGDETA2;DLADANUM,LADADATE,LADATIME:
                             DLADAURN,LADACOMP,LADACLAS,LADAINSU,LADASRC:
                             LADASIT,LADAMODE,LADAFILL,LADADOCT:
                             LADASEEN,LADAADMI,LADALOCK,LADADURN:
                             LADAEMPL,LADAADD1,LADAADD2,LADASUBR:
                             LADAPOST,LADATELE,LADACONT,LADAUSR1,LADAUSR2:
                             LADAUSR3,LADAUSR4,LADAUSR5,LADADIAG:
                             LADAWAIT,LADASDTE,LADAPREV,LADADIGC,LAEDAPRT:
                             LAEDARDO,LAEDAUDD,LAEDAUDT,LADASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DLADANUM,LADANUMB
          MOVE      DLADAURN,LADAURNO
          RETURN  
.
RPLGDEA2  MOVE      ZERO,OVRCD
          READKP    LEGDETA2;DLADANUM,LADADATE,LADATIME:
                             DLADAURN,LADACOMP,LADACLAS,LADAINSU,LADASRC:
                             LADASIT,LADAMODE,LADAFILL,LADADOCT:
                             LADASEEN,LADAADMI,LADALOCK,LADADURN:
                             LADAEMPL,LADAADD1,LADAADD2,LADASUBR:
                             LADAPOST,LADATELE,LADACONT,LADAUSR1,LADAUSR2:
                             LADAUSR3,LADAUSR4,LADAUSR5,LADADIAG:
                             LADAWAIT,LADASDTE,LADAPREV,LADADIGC,LAEDAPRT:
                             LAEDARDO,LAEDAUDD,LAEDAUDT,LADASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DLADANUM,LADANUMB
          MOVE      DLADAURN,LADAURNO
          RETURN  
.
UPLGDEA2  MOVE      LADANUMB,DLADANUM
          MOVE      LADAURNO,DLADAURN
          UPDATE    LEGDETA2;DLADANUM,LADADATE,LADATIME:
                             DLADAURN,LADACOMP,LADACLAS,LADAINSU,LADASRC:
                             LADASIT,LADAMODE,LADAFILL,LADADOCT:
                             LADASEEN,LADAADMI,LADALOCK,LADADURN:
                             LADAEMPL,LADAADD1,LADAADD2,LADASUBR:
                             LADAPOST,LADATELE,LADACONT,LADAUSR1,LADAUSR2:
                             LADAUSR3,LADAUSR4,LADAUSR5,LADADIAG:
                             LADAWAIT,LADASDTE,LADAPREV,LADADIGC,LAEDAPRT:
                             LAEDARDO,LAEDAUDD,LAEDAUDT,LADASPAR
          RETURN  
.
.       THIRD SESSIONS  FILE I/O
.
RSLGDEA3  RESET     KEY21
          READ      LEGDETA3,KEY21;;
          RETURN
.
RDLGDEA3  MOVE      ZERO,OVRCD
          RESET     KEY21
          READ      LEGDETA3,KEY21;DLADANUM,LADADATE,LADATIME:
                                  DLADAURN,LADACOMP,LADACLASS,LADAINSU,LADASRC:
                                  LADASIT,LADAMODE,LADAFILL,LADADOCT:
                                  LADASEEN,LADAADMI,LADALOCK,LADADURN:
                                  LADAEMPL,LADAADD1,LADAADD2,LADASUBR:
                                  LADAPOST,LADATELE,LADACONT,LADAUSR1,LADAUSR2:
                                  LADAUSR3,LADAUSR4,LADAUSR5,LADADIAG:
                                  LADAWAIT,LADASDTE,LADAPREV,LADADIGC,LAEDAPRT:
                                  LAEDARDO,LAEDAUDD,LAEDAUDT,LADASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DLADANUM,LADANUMB
          MOVE      DLADAURN,LADAURNO
          RETURN  
.
RKLGDEA3  MOVE      ZERO,OVRCD
          READKS    LEGDETA3;DLADANUM,LADADATE,LADATIME:
                             DLADAURN,LADACOMP,LADACLAS,LADAINSU,LADASRC:
                             LADASIT,LADAMODE,LADAFILL,LADADOCT:
                             LADASEEN,LADAADMI,LADALOCK,LADADURN:
                             LADAEMPL,LADAADD1,LADAADD2,LADASUBR:
                             LADAPOST,LADATELE,LADACONT,LADAUSR1,LADAUSR2:
                             LADAUSR3,LADAUSR4,LADAUSR5,LADADIAG:
                             LADAWAIT,LADASDTE,LADAPREV,LADADIGC,LAEDAPRT:
                             LAEDARDO,LAEDAUDD,LAEDAUDT,LADASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DLADANUM,LADANUMB
          MOVE      DLADAURN,LADAURNO
          RETURN  
.
RPLGDEA3  MOVE      ZERO,OVRCD
          READKP    LEGDETA3;DLADANUM,LADADATE,LADATIME:
                             DLADAURN,LADACOMP,LADACLAS,LADAINSU,LADASRC:
                             LADASIT,LADAMODE,LADAFILL,LADADOCT:
                             LADASEEN,LADAADMI,LADALOCK,LADADURN:
                             LADAEMPL,LADAADD1,LADAADD2,LADASUBR:
                             LADAPOST,LADATELE,LADACONT,LADAUSR1,LADAUSR2:
                             LADAUSR3,LADAUSR4,LADAUSR5,LADADIAG:
                             LADAWAIT,LADASDTE,LADAPREV,LADADIGC,LAEDAPRT:
                             LAEDARDO,LAEDAUDD,LAEDAUDT,LADASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DLADANUM,LADANUMB
          MOVE      DLADAURN,LADAURNO
          RETURN  
.
.       FOURTH FILE I/O
.
RSLGDEA4  RESET     KEY27
          READ      LEGDETA4,KEY27;;
          RETURN
.
RDLGDEA4  MOVE      ZERO,OVRCD
          RESET     KEY27
          READ      LEGDETA4,KEY27;DLADANUM,LADADATE,LADATIME:
                             DLADAURN,LADACOMP,LADACLAS,LADAINSU,LADASRC:
                             LADASIT,LADAMODE,LADAFILL,LADADOCT:
                             LADASEEN,LADAADMI,LADALOCK,LADADURN:
                             LADAEMPL,LADAADD1,LADAADD2,LADASUBR:
                             LADAPOST,LADATELE,LADACONT,LADAUSR1,LADAUSR2:
                             LADAUSR3,LADAUSR4,LADAUSR5,LADADIAG:
                             LADAWAIT,LADASDTE,LADAPREV,LADADIGC,LAEDAPRT:
                             LAEDARDO,LAEDAUDD,LAEDAUDT,LADASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DLADANUM,LADANUMB
          MOVE      DLADAURN,LADAURNO
          RETURN  
.
RKLGDEA4  MOVE      ZERO,OVRCD
          READKS    LEGDETA4;DLADANUM,LADADATE,LADATIME:
                             DLADAURN,LADACOMP,LADACLAS,LADAINSU,LADASRC:
                             LADASIT,LADAMODE,LADAFILL,LADADOCT:
                             LADASEEN,LADAADMI,LADALOCK,LADADURN:
                             LADAEMPL,LADAADD1,LADAADD2,LADASUBR:
                             LADAPOST,LADATELE,LADACONT,LADAUSR1,LADAUSR2:
                             LADAUSR3,LADAUSR4,LADAUSR5,LADADIAG:
                             LADAWAIT,LADASDTE,LADAPREV,LADADIGC,LAEDAPRT:
                             LAEDARDO,LAEDAUDD,LAEDAUDT,LADASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DLADANUM,LADANUMB
          MOVE      DLADAURN,LADAURNO
          RETURN  
.
RPLGDEA4  MOVE      ZERO,OVRCD
          READKP    LEGDETA4;DLADANUM,LADADATE,LADATIME:
                             DLADAURN,LADACOMP,LADACLAS,LADAINSU,LADASRC:
                             LADASIT,LADAMODE,LADAFILL,LADADOCT:
                             LADASEEN,LADAADMI,LADALOCK,LADADURN:
                             LADAEMPL,LADAADD1,LADAADD2,LADASUBR:
                             LADAPOST,LADATELE,LADACONT,LADAUSR1,LADAUSR2:
                             LADAUSR3,LADAUSR4,LADAUSR5,LADADIAG:
                             LADAWAIT,LADASDTE,LADAPREV,LADADIGC,LAEDAPRT:
                             LAEDARDO,LAEDAUDD,LAEDAUDT,LADASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DLADANUM,LADANUMB
          MOVE      DLADAURN,LADAURNO
          RETURN  
.
