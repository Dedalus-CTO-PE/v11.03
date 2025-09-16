.
. PATASDIO.INC
. ------------
. Filename        : patasdaf
. Description     : Additional Charge for Sameday
. Variables       : OVRCD   FORM  1      0 = Not over
.                                        1 = Over
.                   KEY30   DIM   30     Key for PATAS1A1
.
. -------- I/O routines for PATAS1A1 -------
.
RAPTAS11  MOVE      ZERO,OVRCD
          RESET     KEY30
          READ      PATAS1A1,KEY30;ANS
          GOTO      OVERCOND IF OVER
          RETURN 
.
RSPTAS11  RESET     KEY30
          READ      PATAS1A1,KEY30;;
          RETURN
.
RDPTAS11  MOVE      ZERO,OVRCD
          RESET     KEY30
          READ      PATAS1A1,KEY30;PTADCLMN,PTADHFND,PTADTABT,PTADCASM:
                                   PTADBTYP,PTADDES1,PTADDES2,PTADDREB:
                                   PTADDPAT,PTADCNID,PTADFIGR,PTADSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTAS11  MOVE      ZERO,OVRCD
          READKS    PATAS1A1;PTADCLMN,PTADHFND,PTADTABT,PTADCASM:
                             PTADBTYP,PTADDES1,PTADDES2,PTADDREB:
                             PTADDPAT,PTADCNID,PTADFIGR,PTADSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTAS11  MOVE      ZERO,OVRCD
          READKP    PATAS1A1;PTADCLMN,PTADHFND,PTADTABT,PTADCASM:
                             PTADBTYP,PTADDES1,PTADDES2,PTADDREB:
                             PTADDPAT,PTADCNID,PTADFIGR,PTADSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
WRPTAS11  RESET     KEY30
          UNPACK    KEY30,PTADCNID,PTADCLMN,PTADHFND,PTADTABT,PTADCASM,PTADBTYP
          WRITE     PATAS1A1,KEY30;PTADCLMN,PTADHFND,PTADTABT,PTADCASM,PTADBTYP:
                                   PTADDES1,PTADDES2,PTADDREB,PTADDPAT,PTADCNID:
                                   PTADFIGR,PTADSPAR
          RETURN
.
UPPTAS11  UPDATE    PATAS1A1;PTADCLMN,PTADHFND,PTADTABT,PTADCASM:
                             PTADBTYP,PTADDES1,PTADDES2,PTADDREB:
                             PTADDPAT,PTADCNID,PTADFIGR,PTADSPAR
          RETURN
.
DEPTAS11  RESET     KEY30
          DELETE    PATAS1A1,KEY30
          RETURN
.
.
