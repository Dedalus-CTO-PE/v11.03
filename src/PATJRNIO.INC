.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIOJRN                              *
. *                                                        *
. *  Function     :  I/O for patjrnlf file                 *
. *                                                        *
. *  Keys         :  KEY24, KEY25                          *
. *                                                        *
. *  Modifications:                                        *
. *  V10.01.01 23/11/2010 Ebon Clements  CAR 233156        *
. *                       Added created by fields          *
. *                  V5.00 01/06/89 K.Peak                 *
. *                        Change include heading          *
. *                        Change Admission to 8 characters*
. *               V5.07.00 17/09/99 J.Tan                  *
. *                        Added indicator for G/L interface*
. *                                                        *
. **********************************************************
.
WRJRNL1  RESET     KEY24
         WRITE     PATJRNL1,KEY24;KEY24,JINVN,PTJRINDC:
                            PTJRCUID,PTJRCDAT,PTJRCTIM,JSPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
RDJRNL1  MOVE      ZERO,OVRCD
         RESET     KEY24
         READ      PATJRNL1,KEY24;JCODE,JDATE,DJADMN,DJTRNS,JINVN,PTJRINDC:
                                  PTJRCUID,PTJRCDAT,PTJRCTIM,JSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DJADMN,JADMN
         MOVE      DJTRNS,JTRNS
         RETURN
.
RDKJRNL1 MOVE      ZERO,OVRCD
         READKS    PATJRNL1;JCODE,JDATE,DJADMN,DJTRNS,JINVN,PTJRINDC:
                            PTJRCUID,PTJRCDAT,PTJRCTIM,JSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DJADMN,JADMN
         MOVE      DJTRNS,JTRNS
         RETURN
.
RDSJRNL1 MOVE      ZERO,OVRCD
         RESET     KEY24
         READ      PATJRNL1,KEY24;;
         GOTO      OVERCOND IF OVER
.
         RETURN
.
DEJRNL1  RESET      KEY24
         DELETE     PATJRNL1,KEY24
         RETURN
.
UPJRNL1  MOVE       JADMN,DJADMN
         MOVE       JTRNS,DJTRNS
         UPDATE     PATJRNL1;JCODE,JDATE,DJADMN,DJTRNS,JINVN,PTJRINDC:
                             PTJRCUID,PTJRCDAT,PTJRCTIM,JSPARE
         RETURN
.
WRJRNL2  MOVE      JADMN,DJADMN
         MOVE      JTRNS,DJTRNS
         RESET     KEY25
         WRITE     PATJRNL2,KEY25;JCODE,JDATE,DJADMN,DJTRNS,JINVN:
                                  PTJRINDC,PTJRCUID,PTJRCDAT,PTJRCTIM,JSPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
RDJRNL2  MOVE      ZERO,OVRCD
         RESET     KEY25
         READ      PATJRNL2,KEY25;JCODE,JDATE,DJADMN,DJTRNS,JINVN,PTJRINDC:
                                  PTJRCUID,PTJRCDAT,PTJRCTIM,JSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DJADMN,JADMN
         MOVE      DJTRNS,JTRNS
         RETURN
.
RDKJRNL2 MOVE      ZERO,OVRCD
         READKS    PATJRNL2;JCODE,JDATE,DJADMN,DJTRNS,JINVN,PTJRINDC:
                            PTJRCUID,PTJRCDAT,PTJRCTIM,JSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DJADMN,JADMN
         MOVE      DJTRNS,JTRNS
         RETURN
.
RDSJRNL2 MOVE      ZERO,OVRCD
         RESET     KEY25
         READ      PATJRNL2,KEY25;;
         GOTO      OVERCOND IF OVER
         RETURN
.
DEJRNL2  RESET      KEY25
         DELETE     PATJRNL2,KEY25
         RETURN
.
UPJRNL2  MOVE       JADMN,DJADMN
         MOVE       JTRNS,DJTRNS
         UPDATE     PATJRNL2;JCODE,JDATE,DJADMN,DJTRNS,JINVN,PTJRINDC:
                             PTJRCUID,PTJRCDAT,PTJRCTIM,JSPARE
         RETURN
.
WRJRNL3  RESET     KEY24
         MOVE      JADMN,DJADMN
         MOVE      JTRNS,DJTRNS
         WRITE     PATJRNL3,KEY24;JCODE,JDATE,DJADMN,DJTRNS,JINVN:
                            PTJRINDC,PTJRCUID,PTJRCDAT,PTJRCTIM,JSPARE
         GOTO      OVERCOND IF OVER
         RETURN
.
RDJRNL3  MOVE      ZERO,OVRCD
         RESET     KEY24
         READ      PATJRNL3,KEY24;JCODE,JDATE,DJADMN,DJTRNS,JINVN,PTJRINDC:
                                  PTJRCUID,PTJRCDAT,PTJRCTIM,JSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DJADMN,JADMN
         MOVE      DJTRNS,JTRNS
         RETURN
.
RDKJRNL3 MOVE      ZERO,OVRCD
         READKS    PATJRNL3;JCODE,JDATE,DJADMN,DJTRNS,JINVN,PTJRINDC:
                            PTJRCUID,PTJRCDAT,PTJRCTIM,JSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DJADMN,JADMN
         MOVE      DJTRNS,JTRNS
         RETURN
.
RDSJRNL3 MOVE      ZERO,OVRCD
         RESET     KEY24
         READ      PATJRNL3,KEY24;;
         GOTO      OVERCOND IF OVER
.
         RETURN
.
DEJRNL3  RESET      KEY24
         DELETE     PATJRNL3,KEY24
         RETURN
.
UPJRNL3  MOVE       JADMN,DJADMN
         MOVE       JTRNS,DJTRNS
         UPDATE     PATJRNL3;JCODE,JDATE,DJADMN,DJTRNS,JINVN,PTJRINDC:
                             PTJRCUID,PTJRCDAT,PTJRCTIM,JSPARE
         RETURN
.
