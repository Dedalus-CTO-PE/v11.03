.
. **********************************************************
. *                                                        *
. *  Include Name :  PATGSRFD                              *
. *                                                        *
. *  Function     :  I/O for patgsrnf file                 *
. *                                                        *
. *  Keys         :  KEY115 KEY98 KEY34 KEY100 KEY108      *
. *                                                        *
. *  Modifications:                                        *
. *  V10.02.01       Steve Armstrong                       *
. *                  Added PTGSGNM2 and updated key sizes  *
. *  V9.02.01        J Habasque                            *
. *                  Added index 7, changed key for index 6*
. *  V9.02.00        BGA                                   *
. *                  Key sizes changed to reflect altered  *
. *                  indexes 1 through 4.                  *
. *  V5.09.01        J.Tan                                 *
. *                  Added Date of birth and sex           *
. *                                                        *
. **********************************************************
.
RAPTGSR1 MOVE      ZERO,OVRCD
         RESET     KEY115
         READ      PATGSRN1,KEY115;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RSPTGSR1 RESET     KEY115
         READ      PATGSRN1,KEY115;;
         RETURN
.
RDPTGSR1 MOVE      ZERO,OVRCD
         RESET     KEY115
         READ      PATGSRN1,KEY115;GSRURNO,DGSRBILL,GSRSNAM,GSRGNAM,GSRSKEY:
                                   GSRGKEY1,GSRGKEY2,GSRSYS,GSRDOB,GSRSEX:
                                   PTGSGNM2,GSRSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DGSRBILL,GSRBILL
         RETURN
.
RKPTGSR1 MOVE      ZERO,OVRCD
         READKS    PATGSRN1;GSRURNO,DGSRBILL,GSRSNAM,GSRGNAM,GSRSKEY,GSRGKEY1:
                            GSRGKEY2,GSRSYS,GSRDOB,GSRSEX,PTGSGNM2,GSRSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DGSRBILL,GSRBILL
         RETURN
.
RPPTGSR1 MOVE      ZERO,OVRCD
         READKP    PATGSRN1;GSRURNO,DGSRBILL,GSRSNAM,GSRGNAM,GSRSKEY,GSRGKEY1:
                            GSRGKEY2,GSRSYS,GSRDOB,GSRSEX,PTGSGNM2,GSRSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DGSRBILL,GSRBILL
         RETURN
.
WRPTGSR1 MOVE      ZERO,OVRCD
         RESET     KEY115
         UNPACK    KEY115,GSRURNO,DGSRBILL,GSRSNAM,GSRGNAM,PTGSGNM2,GSRDOB:
                          GSRSEX
         WRITE     PATGSRN1,KEY115;GSRURNO,DGSRBILL,GSRSNAM,GSRGNAM,GSRSKEY:
                                   GSRGKEY1,GSRGKEY2,GSRSYS,GSRDOB,GSRSEX:
                                   PTGSGNM2,GSRSPARE
         RETURN
.
UPPTGSR1 MOVE      ZERO,OVRCD
         MOVE      GSRBILL,DGSRBILL
         UPDATE    PATGSRN1;GSRURNO,DGSRBILL,GSRSNAM,GSRGNAM,GSRSKEY,GSRGKEY1:
                            GSRGKEY2,GSRSYS,GSRDOB,GSRSEX,PTGSGNM2,GSRSPARE
.
         RETURN
.
DEPTGSR1 DELETE    PATGSRN1,KEY115
         RETURN
+
.
.        SECOND KEY I/O
.
RAPTGSR2 MOVE      ZERO,OVRCD
         RESET     KEY98
         READ      PATGSRN2,KEY98;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RSPTGSR2 RESET     KEY98
         READ      PATGSRN2,KEY98;;
         RETURN
.
RDPTGSR2 MOVE      ZERO,OVRCD
         RESET     KEY98
         READ      PATGSRN2,KEY98;GSRURNO,DGSRBILL,GSRSNAM,GSRGNAM,GSRSKEY:
                                  GSRGKEY1,GSRGKEY2,GSRSYS,GSRDOB,GSRSEX:
                                  PTGSGNM2,GSRSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DGSRBILL,GSRBILL
         RETURN
.
RKPTGSR2 MOVE      ZERO,OVRCD
         READKS    PATGSRN2;GSRURNO,DGSRBILL,GSRSNAM,GSRGNAM,GSRSKEY,GSRGKEY1:
                            GSRGKEY2,GSRSYS,GSRDOB,GSRSEX,PTGSGNM2,GSRSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DGSRBILL,GSRBILL
         RETURN
+
RPPTGSR2 MOVE      ZERO,OVRCD
         READKP    PATGSRN2;GSRURNO,DGSRBILL,GSRSNAM,GSRGNAM,GSRSKEY,GSRGKEY1:
                            GSRGKEY2,GSRSYS,GSRDOB,GSRSEX,PTGSGNM2,GSRSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DGSRBILL,GSRBILL
         RETURN
+
.
.        THIRD KEY I/O
.
RAPTGSR3 MOVE      ZERO,OVRCD
         RESET     KEY34
         READ      PATGSRN3,KEY34;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RSPTGSR3 RESET     KEY34
         READ      PATGSRN3,KEY34;;
         RETURN
.
RDPTGSR3 MOVE      ZERO,OVRCD
         RESET     KEY34
         READ      PATGSRN3,KEY34;GSRURNO,DGSRBILL,GSRSNAM,GSRGNAM,GSRSKEY:
                                  GSRGKEY1,GSRGKEY2,GSRSYS,GSRDOB,GSRSEX:
                                  PTGSGNM2,GSRSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DGSRBILL,GSRBILL
         RETURN
.
RKPTGSR3 MOVE      ZERO,OVRCD
         READKS    PATGSRN3;GSRURNO,DGSRBILL,GSRSNAM,GSRGNAM,GSRSKEY,GSRGKEY1:
                            GSRGKEY2,GSRSYS,GSRDOB,GSRSEX,PTGSGNM2,GSRSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DGSRBILL,GSRBILL
         RETURN
.
RPPTGSR3 MOVE      ZERO,OVRCD
         READKP    PATGSRN3;GSRURNO,DGSRBILL,GSRSNAM,GSRGNAM,GSRSKEY,GSRGKEY1:
                            GSRGKEY2,GSRSYS,GSRDOB,GSRSEX,PTGSGNM2,GSRSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DGSRBILL,GSRBILL
         RETURN
.
.        FOURTH KEY 
.
RAPTGSR4 MOVE      ZERO,OVRCD
         RESET     KEY34
         READ      PATGSRN4,KEY34;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RSPTGSR4 RESET     KEY34
         READ      PATGSRN4,KEY34;;
         RETURN
.
RDPTGSR4 MOVE      ZERO,OVRCD
         RESET     KEY34
         READ      PATGSRN4,KEY34;GSRURNO,DGSRBILL,GSRSNAM,GSRGNAM,GSRSKEY:
                                  GSRGKEY1,GSRGKEY2,GSRSYS,GSRDOB,GSRSEX:
                                  PTGSGNM2,GSRSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DGSRBILL,GSRBILL
         RETURN
.
RKPTGSR4 MOVE      ZERO,OVRCD
         READKS    PATGSRN4;GSRURNO,DGSRBILL,GSRSNAM,GSRGNAM,GSRSKEY,GSRGKEY1:
                            GSRGKEY2,GSRSYS,GSRDOB,GSRSEX,PTGSGNM2,GSRSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DGSRBILL,GSRBILL
         RETURN
.
RPPTGSR4 MOVE      ZERO,OVRCD
         READKP    PATGSRN4;GSRURNO,DGSRBILL,GSRSNAM,GSRGNAM,GSRSKEY,GSRGKEY1:
                            GSRGKEY2,GSRSYS,GSRDOB,GSRSEX,PTGSGNM2,GSRSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DGSRBILL,GSRBILL
         RETURN
.
.        Fifth
.
RAPTGSR5 MOVE      ZERO,OVRCD
         RESET     KEY100
         READ      PATGSRN5,KEY100;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RSPTGSR5 RESET     KEY100
         READ      PATGSRN5,KEY100;;
         RETURN
.
RDPTGSR5 MOVE      ZERO,OVRCD
         RESET     KEY100
         READ      PATGSRN5,KEY100;GSRURNO,DGSRBILL,GSRSNAM,GSRGNAM,GSRSKEY:
                                  GSRGKEY1,GSRGKEY2,GSRSYS,GSRDOB,GSRSEX:
                                  PTGSGNM2,GSRSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DGSRBILL,GSRBILL
         RETURN
.
RKPTGSR5 MOVE      ZERO,OVRCD
         READKS    PATGSRN5;GSRURNO,DGSRBILL,GSRSNAM,GSRGNAM,GSRSKEY,GSRGKEY1:
                            GSRGKEY2,GSRSYS,GSRDOB,GSRSEX,PTGSGNM2,GSRSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DGSRBILL,GSRBILL
         RETURN
.
RPPTGSR5 MOVE      ZERO,OVRCD
         READKP    PATGSRN5;GSRURNO,DGSRBILL,GSRSNAM,GSRGNAM,GSRSKEY,GSRGKEY1:
                            GSRGKEY2,GSRSYS,GSRDOB,GSRSEX,PTGSGNM2,GSRSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DGSRBILL,GSRBILL
         RETURN
.
.        Sixth
.
RAPTGSR6 MOVE      ZERO,OVRCD
         RESET     KEY98
         READ      PATGSRN6,KEY98;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RSPTGSR6 RESET     KEY98
         READ      PATGSRN6,KEY98;;
         RETURN
.
RDPTGSR6 MOVE      ZERO,OVRCD
         RESET     KEY98
         READ      PATGSRN6,KEY98;GSRURNO,DGSRBILL,GSRSNAM,GSRGNAM,GSRSKEY:
                                  GSRGKEY1,GSRGKEY2,GSRSYS,GSRDOB,GSRSEX:
                                  PTGSGNM2,GSRSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DGSRBILL,GSRBILL
         RETURN
.
RKPTGSR6 MOVE      ZERO,OVRCD
         READKS    PATGSRN6;GSRURNO,DGSRBILL,GSRSNAM,GSRGNAM,GSRSKEY,GSRGKEY1:
                            GSRGKEY2,GSRSYS,GSRDOB,GSRSEX,PTGSGNM2,GSRSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DGSRBILL,GSRBILL
         RETURN
.
RPPTGSR6 MOVE      ZERO,OVRCD
         READKP    PATGSRN6;GSRURNO,DGSRBILL,GSRSNAM,GSRGNAM,GSRSKEY,GSRGKEY1:
                            GSRGKEY2,GSRSYS,GSRDOB,GSRSEX,PTGSGNM2,GSRSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DGSRBILL,GSRBILL
         RETURN
.
.
.        Seventh
.
RAPTGSR7 MOVE      ZERO,OVRCD
         RESET     KEY108
         READ      PATGSRN7,KEY108;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RSPTGSR7 RESET     KEY108
         READ      PATGSRN7,KEY108;;
         RETURN
.
RDPTGSR7 MOVE      ZERO,OVRCD
         RESET     KEY108
         READ      PATGSRN7,KEY108;GSRURNO,DGSRBILL,GSRSNAM,GSRGNAM,GSRSKEY:
                                  GSRGKEY1,GSRGKEY2,GSRSYS,GSRDOB,GSRSEX:
                                  PTGSGNM2,GSRSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DGSRBILL,GSRBILL
         RETURN
.
RKPTGSR7 MOVE      ZERO,OVRCD
         READKS    PATGSRN7;GSRURNO,DGSRBILL,GSRSNAM,GSRGNAM,GSRSKEY,GSRGKEY1:
                            GSRGKEY2,GSRSYS,GSRDOB,GSRSEX,PTGSGNM2,GSRSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DGSRBILL,GSRBILL
         RETURN
.
RPPTGSR7 MOVE      ZERO,OVRCD
         READKP    PATGSRN7;GSRURNO,DGSRBILL,GSRSNAM,GSRGNAM,GSRSKEY,GSRGKEY1:
                            GSRGKEY2,GSRSYS,GSRDOB,GSRSEX,PTGSGNM2,GSRSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DGSRBILL,GSRBILL
         RETURN
.
.
.        Eighth
.
RAPTGSR8 MOVE      ZERO,OVRCD
         RESET     KEY108
         READ      PATGSRN8,KEY108;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RSPTGSR8 RESET     KEY108
         READ      PATGSRN8,KEY108;;
         RETURN
.
RDPTGSR8 MOVE      ZERO,OVRCD
         RESET     KEY108
         READ      PATGSRN8,KEY108;GSRURNO,DGSRBILL,GSRSNAM,GSRGNAM,GSRSKEY:
                                  GSRGKEY1,GSRGKEY2,GSRSYS,GSRDOB,GSRSEX:
                                  PTGSGNM2,GSRSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DGSRBILL,GSRBILL
         RETURN
.
RKPTGSR8 MOVE      ZERO,OVRCD
         READKS    PATGSRN8;GSRURNO,DGSRBILL,GSRSNAM,GSRGNAM,GSRSKEY,GSRGKEY1:
                            GSRGKEY2,GSRSYS,GSRDOB,GSRSEX,PTGSGNM2,GSRSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DGSRBILL,GSRBILL
         RETURN
.
RPPTGSR8 MOVE      ZERO,OVRCD
         READKP    PATGSRN8;GSRURNO,DGSRBILL,GSRSNAM,GSRGNAM,GSRSKEY,GSRGKEY1:
                            GSRGKEY2,GSRSYS,GSRDOB,GSRSEX,PTGSGNM2,GSRSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DGSRBILL,GSRBILL
         RETURN
+
