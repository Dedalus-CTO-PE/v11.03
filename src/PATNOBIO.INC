.
. **********************************************************************
. *                                                                    *
. *  Include Name :  PATIONOB                                          *
. *                                                                    *
. *  Function     :  I/O for patnobef file                             *
. *                                                                    *
. *  Keys         :  KEY13, KEY16                                      *
. *                                                                    *
. *  Modifications:  V5.00 01/06/89 K.Peak                             *
. *         V9.02.00   03.12.2001  Glenn Saunders                      *
. *                    Add third index for web navigation.             *
. *         V5.01.01   14/10/89    Graeme Williams (I.B.A)             *
. *                    Added Room Allocation                           *
. *         V5.02      29.06.89    S.Barcham   (IBA)                   *
. *                    Make plurarity part of the key                  *
. *         V5.01      01.06.89    K.Peak      (IBA)                   *
. *                    Change Admission to 8 characters                *
. *                    Change include heading                          *
. *                                                                    *
. **********************************************************************
.
RANOBE1
         RESET     KEY13
         MOVE      ZERO,OVRCD
         READ      PATNOBE1,KEY13;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RDSNOBE1
         RESET     KEY13
         READ      PATNOBE1,KEY13;;
         RETURN
.
RDNOBE1  
         MOVE      ZERO,OVRCD
         RESET     KEY13
         READ      PATNOBE1,KEY13;NBWARD,DNBADMNO,DNBPLUR,NBROOM,NBSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DNBADMNO,NBADMNO
         MOVE      DNBPLUR,NBPLUR
         RETURN
.
RDKNOBE1
         MOVE      ZERO,OVRCD
         READKS    PATNOBE1;NBWARD,DNBADMNO,DNBPLUR,NBROOM,NBSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DNBADMNO,NBADMNO
         MOVE      DNBPLUR,NBPLUR
         RETURN
.
WRNOBE1
         MOVE      ZERO,OVRCD
         RESET     KEY13
         WRITE     PATNOBE1,KEY13;KEY13,NBROOM,NBSPARE
         RETURN
.
DENOBE1  
        RESET      KEY13
        DELETE     PATNOBE1,KEY13
        RETURN
.
UPNOBE1 
        MOVE       NBADMNO,DNBADMNO
        MOVE       NBPLUR,DNBPLUR
        UPDATE     PATNOBE1;NBWARD,DNBADMNO,DNBPLUR,NBROOM,NBSPARE
        RETURN
.
RDSNOBE2
         RESET     KEY16
         READ      PATNOBE2,KEY16;;
         RETURN
.
RDNOBE2  
         MOVE      ZERO,OVRCD
         RESET     KEY16
         READ      PATNOBE2,KEY16;NBWARD,DNBADMNO,DNBPLUR,NBROOM,NBSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DNBADMNO,NBADMNO
         MOVE      DNBPLUR,NBPLUR
         RETURN
.
RDKNOBE2
         MOVE      ZERO,OVRCD
         READKS    PATNOBE2;NBWARD,DNBADMNO,DNBPLUR,NBROOM,NBSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DNBADMNO,NBADMNO
         MOVE      DNBPLUR,NBPLUR
         RETURN
.
RDSNOBE3
         RESET     KEY13
         READ      PATNOBE3,KEY13;;
         RETURN
.
RDNOBE3
         MOVE      ZERO,OVRCD
         RESET     KEY13
         READ      PATNOBE3,KEY13;NBWARD,DNBADMNO,DNBPLUR,NBROOM,NBSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DNBADMNO,NBADMNO
         MOVE      DNBPLUR,NBPLUR
         RETURN
.
RDKNOBE3
         MOVE      ZERO,OVRCD
         READKS    PATNOBE3;NBWARD,DNBADMNO,DNBPLUR,NBROOM,NBSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DNBADMNO,NBADMNO
         MOVE      DNBPLUR,NBPLUR
         RETURN
