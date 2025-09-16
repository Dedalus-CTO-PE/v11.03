.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIOMER                              *
. *                                                        *
. *  Function     :  I/O for patmerch file                 *
. *                                                        *
. *  Keys         :  KEY15                                 *
. *                                                        *
. *  Modifications:                                        *
. *                  V5.00 01/06/89 K.Peak                 *
. *                        Change include heading          *
. *                                                        *
. **********************************************************
.
WRMERC1
         RESET     KEY15
         WRITE     PATMERC1,KEY15;KEY15,MSUMDATE,MAMTCLM:
                                  MAMTPAID,MCOMMISS,MJOURNAL
         GOTO      OVERCOND IF OVER
         RETURN
.
RDMERC1  
         MOVE      ZERO,OVRCD
         RESET     KEY15
         READ      PATMERC1,KEY15;MERCODE,MSUMMNO,MSUMDATE,MAMTCLM:
                                  MAMTPAID,MCOMMISS,MJOURNAL
         GOTO      OVERCOND IF OVER
         RETURN
.
RDKMERC1
         MOVE      ZERO,OVRCD
         READKS    PATMERC1;MERCODE,MSUMMNO,MSUMDATE,MAMTCLM:
                            MAMTPAID,MCOMMISS,MJOURNAL
         GOTO      OVERCOND IF OVER
         RETURN
.
RDSMERC1
         MOVE      ZERO,OVRCD
         RESET     KEY15
         READ      PATMERC1,KEY15;;
         GOTO      OVERCOND IF OVER
.
         RETURN
.
DEMERC1  
        RESET      KEY15
        DELETE     PATMERC1,KEY15
        RETURN
.
UPMERC1 
        UPDATE     PATMERC1;MERCODE,MSUMMNO,MSUMDATE,MAMTCLM:
                            MAMTPAID,MCOMMISS,MJOURNAL
        RETURN
