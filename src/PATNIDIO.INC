.
.         INCLUDE NAME : PATNIDIO.INC
.
.         FILE I/O REQUESTS FOR NATIONAL ID NUMBER FILE
.  Modifications  :
.         V5.03.01  01/12/1995    Justin Coates
.                   hardcode the Hospital ID to "01" as this field should not be
.                   in this file as it stuffs up multi-database sites
.
.OVRCD    FORM       1        0 = NOT OVER
.                             1 = OVER
.KEY10    DIM       10        KEY FOR PATNIDA1
.KEY30    DIM       30        KEY FOR PATNIDA2
.
RAPTNID1  MOVE      ZERO,OVRCD
          RESET     KEY10
          CALL      PTNIPKY1
          READ      PATNIDA1,KEY10;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPTNID1  RESET     KEY10
          CALL      PTNIPKY1
          READ      PATNIDA1,KEY10;;
          RETURN
.
RKPTNID1  MOVE      ZERO,OVRCD
          READKS    PATNIDA1;DPTNIHNU,PTNILNUM,PTNINMPI,PTNISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTNIHNU,PTNIHNUM
          RETURN
.
RPPTNID1  MOVE      ZERO,OVRCD
          READKP    PATNIDA1;DPTNIHNU,PTNILNUM,PTNINMPI,PTNISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTNIHNU,PTNIHNUM
          RETURN
.
RDPTNID1  MOVE      ZERO,OVRCD
          RESET     KEY10
          CALL      PTNIPKY1
          READ      PATNIDA1,KEY10;DPTNIHNU,PTNILNUM,PTNINMPI,PTNISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTNIHNU,PTNIHNUM
          RETURN
.
UPPTNID1  MOVE      ONE,PTNIHNUM            * HARDCODE TO ONE
          MOVE      PTNIHNUM,DPTNIHNU
          UPDATE    PATNIDA1;DPTNIHNU,PTNILNUM,PTNINMPI,PTNISPAR
          RETURN
.
DEPTNID1  RESET     KEY10
          CALL      PTNIPKY1
          DELETE    PATNIDA1,KEY10
          RETURN
.
WRPTNID1  MOVE      ZERO,OVRCD
          RESET     KEY10
          CALL      PTNIPKY1
          MOVE      ONE,PTNIHNUM            * HARDCODE TO ONE
          MOVE      PTNIHNUM,DPTNIHNU
          WRITE     PATNIDA1,KEY10;DPTNIHNU,PTNILNUM,PTNINMPI,PTNISPAR
          RETURN
.
.        SECOND NATIONAL ID NUMBER I/O 
.
RSPTNID2  RESET     KEY30
          CALL      PTNIPKY2
          READ      PATNIDA2,KEY30;;
          RETURN
.
RDPTNID2  MOVE      ZERO,OVRCD
          RESET     KEY30
          CALL      PTNIPKY2
          READ      PATNIDA2,KEY30;DPTNIHNU,PTNILNUM,PTNINMPI,PTNISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTNIHNU,PTNIHNUM
          RETURN
.
RKPTNID2  MOVE      ZERO,OVRCD
          READKS    PATNIDA2;DPTNIHNU,PTNILNUM,PTNINMPI,PTNISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTNIHNU,PTNIHNUM
          RETURN
.
RPPTNID2  MOVE      ZERO,OVRCD
          READKP    PATNIDA2;DPTNIHNU,PTNILNUM,PTNINMPI,PTNISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTNIHNU,PTNIHNUM
          RETURN
.
.         change KEY10 to be database ONE
.
PTNIPKY1  UNPACK    KEY10,KEY2,KEY8
          MOVE      ONE,FORM2
          PACK      KEY10,FORM2,KEY8
          RETURN
.
.         change KEY30 to be database ONE
.
PTNIPKY2  UNPACK    KEY30,KEY20,KEY2,KEY8
          MOVE      ONE,FORM2
          PACK      KEY30,KEY20,FORM2,KEY8
          RETURN
...............................................................................
