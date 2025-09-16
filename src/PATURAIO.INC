.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIOURA                              *
. *                                                        *
. *  Function     :  I/O for paturadf file                 *
. *                                                        *
. *  Keys         :  KEY17                                 *
. *                                                        *
. *  Modifications:  V5.00 01/06/89 K.Peak                 *
. *                        Change include heading          *
. *                        Change U/R to 8 characters      *
. *                  V5.01 18/12/90 D.Di.Paola  SRF 107397 *
. *                        Added readkp for 2nd index..... *
. **********************************************************
.
RDAURAD1 MOVE      ZERO,OVRCD
         RESET     KEY17
         READ      PATURAD1,KEY17;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RDURAD1  MOVE      ZERO,OVRCD
         RESET     KEY17
         READ      PATURAD1,KEY17;URRTYPE,URDATE,URURNO:
                                  URSYST,URSPARE
         GOTO      OVERCOND IF OVER
         MOVE      URDATE,SURDATE
         MOVE      URURNO,SURURNO
         RETURN
.
RDKURAD1 MOVE      ZERO,OVRCD
         READKS    PATURAD1;URRTYPE,URDATE,URURNO:
                                  URSYST,URSPARE
         GOTO      OVERCOND IF OVER
         MOVE      URDATE,SURDATE
         MOVE      URURNO,SURURNO
         RETURN
.
RDPURAD1 MOVE      ZERO,OVRCD
         READKP    PATURAD1;URRTYPE,URDATE,URURNO:
                                  URSYST,URSPARE
         GOTO      OVERCOND IF OVER
         MOVE      URDATE,SURDATE
         MOVE      URURNO,SURURNO
         RETURN
.
WRURAD1  RESET     KEY17
         WRITE     PATURAD1,KEY17;KEY17:
                                  URSYST,URSPARE
.
         RETURN
.
UPURAD1  UPDATE    PATURAD1;URRTYPE,URDATE,URURNO:
                                  URSYST,URSPARE
.
         RETURN
.
DEURAD1  RESET     KEY17
         DELETE    PATURAD1,KEY17
.
         RETURN
.
RDSURAD1 RESET     KEY17
         READ      PATURAD1,KEY17;;
         RETURN
.
RDURAD2  MOVE      ZERO,OVRCD
         RESET     KEY17
         READ      PATURAD2,KEY17;URRTYPE,URDATE,URURNO:
                                  URSYST,URSPARE
         GOTO      OVERCOND IF OVER
         MOVE      URDATE,SURDATE
         MOVE      URURNO,SURURNO
         RETURN
.
RDKURAD2 MOVE      ZERO,OVRCD
         READKS    PATURAD2;URRTYPE,URDATE,URURNO:
                                  URSYST,URSPARE
         GOTO      OVERCOND IF OVER
         MOVE      URDATE,SURDATE
         MOVE      URURNO,SURURNO
         RETURN
.
RDPURAD2 MOVE      ZERO,OVRCD
         READKP    PATURAD2;URRTYPE,URDATE,URURNO:
                                  URSYST,URSPARE
         GOTO      OVERCOND IF OVER
         MOVE      URDATE,SURDATE
         MOVE      URURNO,SURURNO
         RETURN
.
RDSURAD2 RESET     KEY17
         READ      PATURAD2,KEY17;;
         RETURN
.
UPURAD2  UPDATE    PATURAD2;URRTYPE,URDATE,URURNO:
                                  URSYST,URSPARE
         RETURN

