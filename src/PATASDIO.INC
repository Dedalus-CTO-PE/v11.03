.
. PATASDIO.INC
. ------------
. Filename        : patasdaf
. Description     : Additional Charge for Sameday
. Variables       : OVRCD   FORM  1      0 = Not over
.                                        1 = Over
.                   KEY30   DIM   30     Key for PATASDA1
.
. -------- I/O routines for PATASDA1 -------
.
RAPTASD1  MOVE      ZERO,OVRCD
          RESET     KEY30
          READ      PATASDA1,KEY30;ANS
          GOTO      OVERCOND IF OVER
          RETURN 
.
RSPTASD1  RESET     KEY30
          READ      PATASDA1,KEY30;;
          RETURN
.
RDPTASD1  MOVE      ZERO,OVRCD
          RESET     KEY30
          READ      PATASDA1,KEY30;PTADCLMN,PTADHFND,PTADTABT,PTADCASM:
                                   PTADBTYP,PTADDES1,PTADDES2,PTADDREB:
                                   PTADDPAT,PTADCNID,PTADFIGR,PTADSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTASD1  MOVE      ZERO,OVRCD
          READKS    PATASDA1;PTADCLMN,PTADHFND,PTADTABT,PTADCASM:
                             PTADBTYP,PTADDES1,PTADDES2,PTADDREB:
                             PTADDPAT,PTADCNID,PTADFIGR,PTADSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTASD1  MOVE      ZERO,OVRCD
          READKP    PATASDA1;PTADCLMN,PTADHFND,PTADTABT,PTADCASM:
                             PTADBTYP,PTADDES1,PTADDES2,PTADDREB:
                             PTADDPAT,PTADCNID,PTADFIGR,PTADSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
WRPTASD1  RESET     KEY30
          UNPACK    KEY30,PTADCNID,PTADCLMN,PTADHFND,PTADTABT,PTADCASM,PTADBTYP
          WRITE     PATASDA1,KEY30;PTADCLMN,PTADHFND,PTADTABT,PTADCASM,PTADBTYP:
                                   PTADDES1,PTADDES2,PTADDREB,PTADDPAT,PTADCNID:
                                   PTADFIGR,PTADSPAR
          RETURN
.
UPPTASD1  UPDATE    PATASDA1;PTADCLMN,PTADHFND,PTADTABT,PTADCASM:
                             PTADBTYP,PTADDES1,PTADDES2,PTADDREB:
                             PTADDPAT,PTADCNID,PTADFIGR,PTADSPAR
          RETURN
.
DEPTASD1  RESET     KEY30
          DELETE    PATASDA1,KEY30
          RETURN
.
.
