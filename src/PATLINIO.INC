.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIOLIN                              *
. *                                                        *
. *  Function     :  I/O for patlinkf file                 *
. *                                                        *
. *  Keys         :  KEY16                                 *
. *                                                        *
. *  Modifications:  V5.00 01/06/89 K.Peak                 *
. *                        Change include heading          *
. *                        Change U/R's to 8 characters    *
. *                  V5.01 17/10/89  Steve O'Gorman        *
. *                        Added an Update to I/O Routines *
. *                  V5.02 07/06/90 J.Tan                  *
. *                        Add new fields                  *
. * V10.12.01  24/01/2018 Jill Parkinson Task 0846167      *
. *            Added index 2                               *
. **********************************************************
.
RDSLINK1 RESET     KEY16
         READ      PATLINK1,KEY16;;
         RETURN  
.
RDALINK1 RESET     KEY16
         MOVE      ZERO,OVRCD
         READ      PATLINK1,KEY16;ANS
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDKLINK1 MOVE      ZERO,OVRCD
         READKS    PATLINK1;LINKFUR,LINKTUR,LINKDAT,LINKREA,LINKSPR
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDLINK1  MOVE      ZERO,OVRCD
         RESET     KEY16
         READ      PATLINK1,KEY16;LINKFUR,LINKTUR,LINKDAT,LINKREA,LINKSPR
         GOTO      OVERCOND IF OVER
         RETURN  
.
.      NOTE : -     does a reverse link write & delete
.
WRLINK1  RESET     KEY16
         WRITE     PATLINK1,KEY16;KEY16,LINKDAT,LINKREA,LINKSPR
         UNPACK    KEY16,LINKFUR,LINKTUR
         PACK      KEY16,LINKTUR,LINKFUR
         WRITE     PATLINK1,KEY16;KEY16,LINKDAT,LINKREA,LINKSPR
.
         RETURN  
.
DELINK1  RESET     KEY16
         DELETE    PATLINK1,KEY16
         UNPACK    KEY16,LINKFUR,LINKTUR
         PACK      KEY16,LINKTUR,LINKFUR
         DELETE    PATLINK1,KEY16
         RETURN
.
UPLINK1  UPDATE    PATLINK1;LINKFUR,LINKTUR,LINKDAT,LINKREA
         PACK      KEY16,LINKTUR,LINKFUR
         CALL      RDALINK1
         UPDATE    PATLINK1;LINKTUR,LINKFUR,LINKDAT,LINKREA
         RETURN
.
.
RDSLINK2 RESET     KEY24
         READ      PATLINK2,KEY24;;
         RETURN
.
RDALINK2 RESET     KEY24
         MOVE      ZERO,OVRCD
         READ      PATLINK2,KEY24;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RDKLINK2 MOVE      ZERO,OVRCD
         READKS    PATLINK2;LINKFUR,LINKTUR,LINKDAT,LINKREA,LINKSPR
         GOTO      OVERCOND IF OVER
         RETURN
.
RDPLINK2 MOVE      ZERO,OVRCD
         READKP    PATLINK2;LINKFUR,LINKTUR,LINKDAT,LINKREA,LINKSPR
         GOTO      OVERCOND IF OVER
         RETURN
.
RDLINK2  MOVE      ZERO,OVRCD
         RESET     KEY24
         READ      PATLINK2,KEY24;LINKFUR,LINKTUR,LINKDAT,LINKREA,LINKSPR
         GOTO      OVERCOND IF OVER
         RETURN
.

