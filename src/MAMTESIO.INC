. MAMTESIO.INC
. ------------
. Filename       :  MAMTEST1f
. Description    :  Mammography Test Results File I/O Subroutines
. Variables      :  OVRCD     FORM      1
.                   KEY18     DIM      18
.
RDATES1
         MOVE      ZERO,OVRCD
         RESET     KEY18
         READ      MAMTEST1,KEY18;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RDSTES1
         MOVE      ZERO,OVRCD
         RESET     KEY18
         READ      MAMTEST1,KEY18;;
         RETURN
.
RDTES1
         MOVE      ZERO,OVRCD
         RESET     KEY18
         READ      MAMTEST1,KEY18;MMURNO,DMMIDNO,DMMTCNT,MMDATE:
                                 MMINTR,MMINTL,MMFOLLOW,MMUSER1:
                                 MMUSER2,MMUSER3,MMUSER4,MMUSER5,MMUSER6:
                                 MMUSER7,MMUSER8,MMFILLER
         GOTO      OVERCOND IF OVER
         MOVE      DMMIDNO,MMIDNO
         MOVE      DMMTCNT,MMTCNT
         RETURN
.
RDKTES1
         MOVE      ZERO,OVRCD
         READKS    MAMTEST1;MMURNO,DMMIDNO,DMMTCNT,MMDATE,MMINTR:
                           MMINTL,MMFOLLOW,MMUSER1,MMUSER2,MMUSER3:
                           MMUSER4,MMUSER5,MMUSER6,MMUSER7,MMUSER8,MMFILLER
         GOTO      OVERCOND IF OVER
         MOVE      DMMIDNO,MMIDNO
         MOVE      DMMTCNT,MMTCNT
         RETURN
.
RDPTES1
         MOVE      ZERO,OVRCD
         READKP    MAMTEST1;MMURNO,DMMIDNO,DMMTCNT,MMDATE,MMINTR:
                           MMINTL,MMFOLLOW,MMUSER1,MMUSER2,MMUSER3:
                           MMUSER4,MMUSER5,MMUSER6,MMUSER7,MMUSER8,MMFILLER
         GOTO      OVERCOND IF OVER
         MOVE      DMMIDNO,MMIDNO
         MOVE      DMMTCNT,MMTCNT
         RETURN
.
WRTES1 
         MOVE      ZERO,OVRCD
         RESET     KEY18
         MOVE      ZERO,OVRCD
         WRITE     MAMTEST1,KEY18;KEY18,MMDATE,MMINTR:
                                 MMINTL,MMFOLLOW,MMUSER1,MMUSER2:
                                 MMUSER3,MMUSER4,MMUSER5,MMUSER6,MMUSER7:
                                 MMUSER8,MMFILLER
         RETURN
.
UPTES1
         MOVE      MMIDNO,DMMIDNO
         MOVE      MMTCNT,DMMTCNT
         UPDATE    MAMTEST1;MMURNO,DMMIDNO,DMMTCNT,MMDATE,MMINTR:
                           MMINTL,MMFOLLOW,MMUSER1,MMUSER2,MMUSER3:
                           MMUSER4,MMUSER5,MMUSER6,MMUSER7,MMUSER8,MMFILLER
         RETURN
.
DETES1
         RESET     KEY18
         DELETE    MAMTEST1,KEY18
         RETURN
.
RDKTES2
         MOVE      ZERO,OVRCD
         READKS    MAMTEST2;MMURNO,DMMIDNO,DMMTCNT,MMDATE,MMINTR:
                           MMINTL,MMFOLLOW,MMUSER1,MMUSER2,MMUSER3:
                           MMUSER4,MMUSER5,MMUSER6,MMUSER7,MMUSER8,MMFILLER
         GOTO      OVERCOND IF OVER
         MOVE      DMMIDNO,MMIDNO
         MOVE      DMMTCNT,MMTCNT
         RETURN
.
RDPTES2
         MOVE      ZERO,OVRCD
         READKP    MAMTEST2;MMURNO,DMMIDNO,DMMTCNT,MMDATE,MMINTR:
                           MMINTL,MMFOLLOW,MMUSER1,MMUSER2,MMUSER3:
                           MMUSER4,MMUSER5,MMUSER6,MMUSER7,MMUSER8,MMFILLER
         GOTO      OVERCOND IF OVER
         MOVE      DMMIDNO,MMIDNO
         MOVE      DMMTCNT,MMTCNT
         RETURN
.
RDSTES2
         MOVE      ZERO,OVRCD
         RESET     KEY26
         READ      MAMTEST2,KEY26;;
         RETURN
.
.

