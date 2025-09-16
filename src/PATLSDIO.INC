.
. PATLSDIO.INC
. ------------
. Filename        : patlsdaf
. Description     : Lumpsum for Sameday
. Variables       : OVRCD   FORM  1      0 = Not over
.                                        1 = Over
.                   KEY27   DIM   27     Key for PATLSDA1
.
. -------- I/O routines for PATLSDA1 -------
.
RAPTLSD1  MOVE      ZERO,OVRCD
          RESET     KEY27
          READ      PATLSDA1,KEY27;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPTLSD1  RESET     KEY27
          READ      PATLSDA1,KEY27;;
          RETURN
.
RDPTLSD1  MOVE      ZERO,OVRCD
          RESET     KEY27
          READ      PATLSDA1,KEY27;PTLSCLMN,PTLSHFND,PTLSTABT,PTLSCASM:
                                   PTLSDES1,PTLSDES2,PTLSLREB,PTLSLPAT:
                                   PTLSINVR,PTLSINVI,PTLSNINV,PTLSCNID:
                                   PTLSSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTLSD1  MOVE      ZERO,OVRCD
          READKS    PATLSDA1;PTLSCLMN,PTLSHFND,PTLSTABT,PTLSCASM:
                             PTLSDES1,PTLSDES2,PTLSLREB,PTLSLPAT:
                             PTLSINVR,PTLSINVI,PTLSNINV,PTLSCNID:
                             PTLSSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTLSD1  MOVE      ZERO,OVRCD
          READKP    PATLSDA1;PTLSCLMN,PTLSHFND,PTLSTABT,PTLSCASM:
                             PTLSDES1,PTLSDES2,PTLSLREB,PTLSLPAT:
                             PTLSINVR,PTLSINVI,PTLSNINV,PTLSCNID:
                             PTLSSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
WRPTLSD1  RESET     KEY27
          UNPACK    KEY27,PTLSCNID,PTLSCLMN,PTLSHFND,PTLSTABT,PTLSCASM
          WRITE     PATLSDA1,KEY27;PTLSCLMN,PTLSHFND,PTLSTABT,PTLSCASM:
                                   PTLSDES1,PTLSDES2,PTLSLREB,PTLSLPAT:
                                   PTLSINVR,PTLSINVI,PTLSNINV,PTLSCNID:
                                   PTLSSPAR
          RETURN
.
UPPTLSD1  UPDATE    PATLSDA1;PTLSCLMN,PTLSHFND,PTLSTABT,PTLSCASM:
                             PTLSDES1,PTLSDES2,PTLSLREB,PTLSLPAT:
                             PTLSINVR,PTLSINVI,PTLSNINV,PTLSCNID:
                             PTLSSPAR
          RETURN
.
DEPTLSD1  RESET     KEY27
          DELETE    PATLSDA1,KEY27
          RETURN
.
RAPTLSD2  MOVE      ZERO,OVRCD
          RESET     KEY27
          READ      PATLSDA2,KEY27;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPTLSD2  RESET     KEY27
          READ      PATLSDA2,KEY27;;
          RETURN
.
RDPTLSD2  MOVE      ZERO,OVRCD
          RESET     KEY27
          READ      PATLSDA2,KEY27;PTLSCLMN,PTLSHFND,PTLSTABT,PTLSCASM:
                                   PTLSDES1,PTLSDES2,PTLSLREB,PTLSLPAT:
                                   PTLSINVR,PTLSINVI,PTLSNINV,PTLSCNID:
                                   PTLSSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTLSD2  MOVE      ZERO,OVRCD
          READKS    PATLSDA2;PTLSCLMN,PTLSHFND,PTLSTABT,PTLSCASM:
                             PTLSDES1,PTLSDES2,PTLSLREB,PTLSLPAT:
                             PTLSINVR,PTLSINVI,PTLSNINV,PTLSCNID:
                             PTLSSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTLSD2  MOVE      ZERO,OVRCD
          READKP    PATLSDA2;PTLSCLMN,PTLSHFND,PTLSTABT,PTLSCASM:
                             PTLSDES1,PTLSDES2,PTLSLREB,PTLSLPAT:
                             PTLSINVR,PTLSINVI,PTLSNINV,PTLSCNID:
                             PTLSSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
WRPTLSD2  RESET     KEY27
          UNPACK    KEY27,PTLSCLMN,PTLSHFND,PTLSTABT,PTLSCASM,PTLSCNID
          WRITE     PATLSDA2,KEY27;PTLSCLMN,PTLSHFND,PTLSTABT,PTLSCASM:
                                   PTLSDES1,PTLSDES2,PTLSLREB,PTLSLPAT:
                                   PTLSINVR,PTLSINVI,PTLSNINV,PTLSCNID:
                                   PTLSSPAR
          RETURN
.
UPPTLSD2  UPDATE    PATLSDA2;PTLSCLMN,PTLSHFND,PTLSTABT,PTLSCASM:
                             PTLSDES1,PTLSDES2,PTLSLREB,PTLSLPAT:
                             PTLSINVR,PTLSINVI,PTLSNINV,PTLSCNID:
                             PTLSSPAR
          RETURN
.
DEPTLSD2  RESET     KEY27
          DELETE    PATLSDA2,KEY27
          RETURN
.
