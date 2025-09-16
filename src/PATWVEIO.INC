.
. ***************************************************************************
. *                                                                         *
. *  Include Name :  PATIOWVE                                               *
. *                                                                         *
. *  Function     :  I/O for patwvetf file                                  *
. *                                                                         *
. *  Keys         :  KEY8                                                   *
. *                                                                         *
. *  Modifications:                                                         *
. *       V10.01.01 06/01/2011  Ebon Clements  CAR 236087                   *
. *                 Increased PTWVAUTH. Added PTWVCONT and PTWVTNUM         *
. *       V9.07.01  10/07/2006  Mike Laming    CAR 111820                   *
. *                 Add PTWVAUTH & PTWVDATE for IBAADT49 port to V9         *
. *                                                                         *
. *                  V5.00 01/06/89 K.Peak                                  *
. *                        Change include heading                           *
. *                        Change Admission to 8 characters                 *
. *                                                                         *
. ***************************************************************************
.
RDWVET1
         MOVE      ZERO,OVRCD
         RESET     KEY8
         READ      PATWVET1,KEY8;DVADMNO,VCLMNO,PTWVAUTH,PTWVDATE:
                            PTWVCONT,PTWVTNUM,VSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DVADMNO,VADMNO
         RETURN
.
RDKWVET1
         MOVE      ZERO,OVRCD
         READKS    PATWVET1;DVADMNO,VCLMNO,PTWVAUTH,PTWVDATE:
                            PTWVCONT,PTWVTNUM,VSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DVADMNO,VADMNO
         RETURN
.
WRWVET1
         MOVE      VADMNO,DVADMNO
         RESET     KEY8
         WRITE     PATWVET1,KEY8;KEY8,VCLMNO,PTWVAUTH,PTWVDATE:
                            PTWVCONT,PTWVTNUM,VSPARE
         RETURN
.
UPWVET1
         MOVE      VADMNO,DVADMNO
         UPDATE    PATWVET1;DVADMNO,VCLMNO,PTWVAUTH,PTWVDATE:
                            PTWVCONT,PTWVTNUM,VSPARE
         RETURN
.
DEWVET1
         RESET     KEY8
         DELETE    PATWVET1,KEY8
         RETURN
.
RDSWVET1
         RESET     KEY8
         READ      PATWVET1,KEY8;;
         RETURN

RDAWVET1 
         MOVE      ZERO,OVRCD
         RESET     KEY8
         READ      PATWVET1,KEY8;ANS
         GOTO      OVERCOND IF OVER
         RETURN
