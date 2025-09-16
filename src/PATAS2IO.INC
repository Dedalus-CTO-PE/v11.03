.
. PATAS2IO.INC
. ------------
. Filename        : oldasdaf
. Description     : Additional Charge for Sameday
. Variables       : OVRCD   FORM  1      0 = Not over
.                                        1 = Over
.                   KEY30   DIM   30     Key for PATAS2A1
.
. -------- I/O routines for PATAS2A1 -------
.
RAPTAS21  MOVE      ZERO,OVRCD
          RESET     KEY30
          READ      PATAS2A1,KEY30;ANS
          GOTO      OVERCOND IF OVER
          RETURN 
.
RSPTAS21  RESET     KEY30
          READ      PATAS2A1,KEY30;;
          RETURN
.
RDPTAS21  MOVE      ZERO,OVRCD
          RESET     KEY30
          READ      PATAS2A1,KEY30;PTADCLMN,PTADHFND,PTADTABT,PTADCASM:
                                   PTADBTYP,PTADDES1,PTADDES2,PTADDREB:
                                   PTADDPAT,PTADCNID,PTADFIGR,PTADSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTAS21  MOVE      ZERO,OVRCD
          READKS    PATAS2A1;PTADCLMN,PTADHFND,PTADTABT,PTADCASM:
                             PTADBTYP,PTADDES1,PTADDES2,PTADDREB:
                             PTADDPAT,PTADCNID,PTADFIGR,PTADSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTAS21  MOVE      ZERO,OVRCD
          READKP    PATAS2A1;PTADCLMN,PTADHFND,PTADTABT,PTADCASM:
                             PTADBTYP,PTADDES1,PTADDES2,PTADDREB:
                             PTADDPAT,PTADCNID,PTADFIGR,PTADSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
WRPTAS21  RESET     KEY30
          UNPACK    KEY30,PTADCNID,PTADCLMN,PTADHFND,PTADTABT,PTADCASM,PTADBTYP
          WRITE     PATAS2A1,KEY30;PTADCLMN,PTADHFND,PTADTABT,PTADCASM,PTADBTYP:
                                   PTADDES1,PTADDES2,PTADDREB,PTADDPAT,PTADCNID:
                                   PTADFIGR,PTADSPAR
          RETURN
.
UPPTAS21  UPDATE    PATAS2A1;PTADCLMN,PTADHFND,PTADTABT,PTADCASM:
                             PTADBTYP,PTADDES1,PTADDES2,PTADDREB:
                             PTADDPAT,PTADCNID,PTADFIGR,PTADSPAR
          RETURN
.
DEPTAS21  RESET     KEY30
          DELETE    PATAS2A1,KEY30
          RETURN
.
.
