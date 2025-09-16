.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIOSTA                              *
. *                                                        *
. *  Function     :  I/O for patstads file                 *
. *                                                        *
. *  Keys         :  KEY8                                  *
. *                                                        *
. *  Modifications:  V5.00 01/06/89 K.Peak                 *
. *                        Change include heading          *
. *                                                        *
. **********************************************************
.
RDSTAD1
         MOVE      ZERO,OVRCD
         RESET     KEY8
         READ      PATSTAD1,KEY8;SADYEAR,SADTYPE,SADCODE:
                                 SADMTH1,SADMTH2,SADMTH3:
                                 SADMTH4,SADMTH5,SADMTH6,SADMTH7,SADMTH8:
                                 SADMTH9,SADMTH10,SADMTH11,SADMTH12:
                                 SADMTH13,SADSPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
RDKSTAD1
         MOVE      ZERO,OVRCD
         READKS    PATSTAD1;SADYEAR,SADTYPE,SADCODE:
                                 SADMTH1,SADMTH2,SADMTH3:
                                 SADMTH4,SADMTH5,SADMTH6,SADMTH7,SADMTH8:
                                 SADMTH9,SADMTH10,SADMTH11,SADMTH12:
                                 SADMTH13,SADSPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
WRSTAD1
         RESET     KEY8
         WRITE     PATSTAD1,KEY8;KEY8:
                                 SADMTH1,SADMTH2,SADMTH3:
                                 SADMTH4,SADMTH5,SADMTH6,SADMTH7,SADMTH8:
                                 SADMTH9,SADMTH10,SADMTH11,SADMTH12:
                                 SADMTH13,SADSPARE
         RETURN
.
UPSTAD1
         UPDATE    PATSTAD1;SADYEAR,SADTYPE,SADCODE:
                                 SADMTH1,SADMTH2,SADMTH3:
                                 SADMTH4,SADMTH5,SADMTH6,SADMTH7,SADMTH8:
                                 SADMTH9,SADMTH10,SADMTH11,SADMTH12:
                                 SADMTH13,SADSPARE
         RETURN
.
DESTAD1
         RESET     KEY8
         DELETE    PATSTAD1,KEY8
         RETURN
.
RDSSTAD1
         RESET     KEY8
         READ      PATSTAD1,KEY8;;
         RETURN
