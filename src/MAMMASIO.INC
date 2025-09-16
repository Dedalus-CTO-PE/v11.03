.
. MAMMASIO.INC
. ------------
. Filename       :  mammasxf
. Description    :  Mammography PMI Extension File I/O Subroutines
. Variables      :  OVRCD     FORM      1
.                   KEY8      DIM       8
.
RDAMASX1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      MAMMASX1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSMASX1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      MAMMASX1,KEY8;;
          RETURN
.
RDKMASX1  MOVE      ZERO,OVRCD
          READKS    MAMMASX1;DMAXNO,MAXHEIGT,MAXWEIGT,MAXPREV,MAXDPREV:
                             MAXHYST,MAXDHYST,MAXFAMLY,MAXDFAML:
                             MAXCANCR,MAXDCANC,MAXSURG:
                             MAXUSER1,MAXUSER2,MAXUSER3,MAXUSER4:
                             MAXUSER5,MAXUSER6,MAXUSER7,MAXUSER8:
                             MAXRDOCT,MAXTESNO,MAXLOCK,MAXFILL
          GOTO      OVERCOND IF OVER
          MOVE      DMAXNO,MAXNO
          RETURN
.
RDMASX1   MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      MAMMASX1,KEY8;DMAXNO,MAXHEIGT,MAXWEIGT,MAXPREV,MAXDPREV:
                                  MAXHYST,MAXDHYST,MAXFAMLY,MAXDFAML:
                                  MAXCANCR,MAXDCANC,MAXSURG:
                                  MAXUSER1,MAXUSER2,MAXUSER3,MAXUSER4:
                                  MAXUSER5,MAXUSER6,MAXUSER7,MAXUSER8:
                                  MAXRDOCT,MAXTESNO,MAXLOCK,MAXFILL
          GOTO      OVERCOND IF OVER
          MOVE      DMAXNO,MAXNO
          RETURN
.
RDLMASX1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      MAMMASX1,KEY8;*92,MAXLOCK
          GOTO      OVERCOND IF OVER
          MATCH     SP2,MAXLOCK
          GOTO      OVERCOND IF NOT EQUAL
          MOVE      PORT,MAXLOCK
          UPDATE    MAMMASX1;*92,MAXLOCK
          RETURN
.
ULMASX1   MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      MAMMASX1,KEY8;*92,MAXLOCK
          GOTO      OVERCOND IF OVER
          MOVE      SP2,MAXLOCK
          UPDATE    MAMMASX1;*92,MAXLOCK
          RETURN
.
UPMASX1   MOVE      MAXNO,DMAXNO
          UPDATE    MAMMASX1;DMAXNO,MAXHEIGT,MAXWEIGT,MAXPREV,MAXDPREV:
                             MAXHYST,MAXDHYST,MAXFAMLY,MAXDFAML:
                             MAXCANCR,MAXDCANC,MAXSURG:
                             MAXUSER1,MAXUSER2,MAXUSER3,MAXUSER4:
                             MAXUSER5,MAXUSER6,MAXUSER7,MAXUSER8:
                             MAXRDOCT,MAXTESNO,MAXLOCK,MAXFILL
          RETURN
.
DEMASX1   RESET     KEY8
          DELETE    MAMMASX1,KEY8
          RETURN
.
WRMASX1   MOVE      ZERO,OVRCD
          WRITE     MAMMASX1,KEY8;KEY8,MAXHEIGT,MAXWEIGT,MAXPREV,MAXDPREV:
                                  MAXHYST,MAXDHYST,MAXFAMLY,MAXDFAML:
                                  MAXCANCR,MAXDCANC,MAXSURG:
                                  MAXUSER1,MAXUSER2,MAXUSER3,MAXUSER4:
                                  MAXUSER5,MAXUSER6,MAXUSER7,MAXUSER8:
                                  MAXRDOCT,MAXTESNO,MAXLOCK,MAXFILL
          GOTO      OVERCOND IF OVER
          RETURN
.
