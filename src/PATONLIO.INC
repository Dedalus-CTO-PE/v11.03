.
. ***************************************************************
. *                                                             *
. *  Include Name :  PATONLIO                                   *
. *                                                             *
. *  Function     :  I/O for patonlvf file                      *
. *                                                             *
. *  Keys         :  KEY14                                      *
. *                                                             *
. *  Modifications:                                             *
. *   V10.12.01      19/03/2018  Steve Armstrong  TSK: 0850854  *
. *                  Added RAONLV1 routine                      *
. *    V9.12.01      15.06.2009  Ebon Clements  CAR 159088      *
. *                  Added OERTIME - Expected return time       *
. *    V9.02.00      05.12.2001  Glenn Saunders                 *
. *                  Insert READS for index 2                   *
. *    V5.01.02      14/10/89    S.Barcham                      *
. *                  Added Room Allocation - OROOM              *
. *    V5.01.01      08/07/89    M.Ohleiter                     *
. *                  Added expected return date                 *
. *                  - OERDATE                                  *
. *    V5.01         01/06/89    K.Peak                         *
. *                  Change include heading                     *
. *                  Change Admission to 8 characters           *
. *    V5.00         17/02/89    Graeme Williams                *
. *                  Put a RETURN at the end of the             *
. *                  RDKONLV1                                   *
. *                                                             *
. ***************************************************************
.
RAONLV1  MOVE      ZERO,OVRCD
         RESET     KEY14
         READ      PATONLV1,KEY14;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RDSONLV1 RESET     KEY14
         READ      PATONLV1,KEY14;;
         RETURN
.
RDONLV1  MOVE      ZERO,OVRCD
         RESET     KEY14
         READ      PATONLV1,KEY14;OWARD,OBED,DOADMNO,OERDATE,OROOM:
                                  OERTIME,OSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DOADMNO,OADMNO
         RETURN
.
RDKONLV1 MOVE      ZERO,OVRCD
         READKS    PATONLV1;OWARD,OBED,DOADMNO,OERDATE,OROOM,OERTIME,OSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DOADMNO,OADMNO
         RETURN
.
WRONLV1  RESET     KEY14
         WRITE     PATONLV1,KEY14;KEY14,OERDATE,OROOM,OERTIME,OSPARE
         RETURN
.
DEONLV1 RESET      KEY14
        DELETE     PATONLV1,KEY14
        RETURN
.
UPONLV1 MOVE       OADMNO,DOADMNO
        UPDATE     PATONLV1;OWARD,OBED,DOADMNO,OERDATE,OROOM,OERTIME,OSPARE
        RETURN
.
RDSONLV2 RESET     KEY14
         READ      PATONLV2,KEY14;;
         RETURN
.
RDONLV2  MOVE      ZERO,OVRCD
         RESET     KEY14
         READ      PATONLV2,KEY14;OWARD,OBED,DOADMNO,OERDATE,OROOM:
                                  OERTIME,OSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DOADMNO,OADMNO
         RETURN
.
RDKONLV2 MOVE      ZERO,OVRCD
         READKS    PATONLV2;OWARD,OBED,DOADMNO,OERDATE,OROOM,OERTIME,OSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DOADMNO,OADMNO
         RETURN
