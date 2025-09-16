.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIONIP                              *
. *                                                        *
. *  Function     :  I/O for patnipbf file                 *
. *                                                        *
. *  Keys         :  KEY13                                 *
. *                                                        *
. *  Modifications:  V9.00 04/07/01 Dean Cramer            *
. *                        Added Visit Type - Change key   *
. *                  V5.00 01/06/89 K.Peak                 *
. *                        Change include heading          *
. *                                                        *
. **********************************************************
.
RDSNIPB1 RESET     KEY13
         READ      PATNIPB1,KEY13;;
         RETURN
.
RDANIPB1 MOVE      ZERO,OVRCD
         RESET     KEY13
         READ      PATNIPB1,KEY13;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RDNIPB1  MOVE      ZERO,OVRCD
         RESET     KEY13
         READ      PATNIPB1,KEY13;DNBSYST,NBINDC,NBRESD,NBCOMP,NBINDV:
                                  NBDESC,NBITEM,NBAMT,NBSPARX
         GOTO      OVERCOND IF OVER
         MOVE      DNBSYST,NBSYST
         MOVE      NBAMT,NBAMNT
         RETURN
.
RDKNIPB1 MOVE      ZERO,OVRCD
         READKS    PATNIPB1;DNBSYST,NBINDC,NBRESD,NBCOMP,NBINDV:
                            NBDESC,NBITEM,NBAMT,NBSPARX
         GOTO      OVERCOND IF OVER
         MOVE      DNBSYST,NBSYST
         MOVE      NBAMT,NBAMNT
         RETURN
.
WRNIPB1  
         RESET     KEY13
         MOVE      NBAMNT,NBAMT
         WRITE     PATNIPB1,KEY13;KEY13:
                                 NBDESC,NBITEM,NBAMT,NBSPARX
         RETURN
.
DENIPB1  RESET      KEY13
         DELETE     PATNIPB1,KEY13
         RETURN
.
UPNIPB1 MOVE       NBSYST,DNBSYST
        MOVE       NBAMNT,NBAMT
        UPDATE     PATNIPB1;DNBSYST,NBINDC,NBRESD,NBCOMP,NBINDV:
                            NBDESC,NBITEM,NBAMT,NBSPARX
        RETURN
.
