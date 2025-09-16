.   Include Name  :   TMPRESIO.INC
.  
.   Description   :   4 temp files to copy Clinical Results files data into
.                     during HL7ORUMS & HL7MDORU.
.
.
. TMPHEBIO
. --------
. Filename     : tmphebaf.dat
.
RSTPHB1   RESET     KEY20
          READ      TMPHEBA1,KEY20;;
          RETURN
.
RDTPHB1   RESET     KEY20
          MOVE      ZERO,OVRCD
          READ      TMPHEBA1,KEY20;TPHBRDT,TPHBRTM,TPHBRUN,TPHBLIN,TPHBTXT:
                        TPHBSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
RKTPHB1
          MOVE      ZERO,OVRCD
          READKS    TMPHEBA1;TPHBRDT,TPHBRTM,TPHBRUN,TPHBLIN,TPHBTXT:
                        TPHBSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
DETPHB1   RESET     KEY20
          DELETE    TMPHEBA1,KEY20
          RETURN
.
.                                           * note - uses vars from RESHEBFD
WRTPHB1   RESET     KEY20
          WRITE     TMPHEBA1,KEY20;REHBRDT,REHBRTM,REHBRUN,REHBLIN,REHBTXT:
                        REHBSPA
          RETURN
.
.

. TMPDEAIO
. --------
. Filename     : tmpdeaaf.dat
.
RSTPDA1   RESET     KEY21
          READ      TMPDEAA1,KEY21;;
          RETURN
.
RDTPDA1   RESET     KEY21
          MOVE      ZERO,OVRCD
          READ      TMPDEAA1,KEY21;TPDARDT,TPDARTM,TPDARUN,TPDASID,TPDAPID:
                        TPDAVTY,TPDAOTY,TPDAOCS,TPDAOSC,TPDAOSD,TPDAVST:
                        TPDAVNM,TPDAUNI,TPDARFR,TPDAABF,TPDAPRB,TPDANAT:
                        TPDASTA,TPDATFL,TPDAODT,TPDAOTM,TPDAPER,TPDAROB:
                        TPDASPA
          GOTO      OVERCOND IF OVER
          RETURN
.
RKTPDA1
          MOVE      ZERO,OVRCD
          READKS    TMPDEAA1;TPDARDT,TPDARTM,TPDARUN,TPDASID,TPDAPID:
                        TPDAVTY,TPDAOTY,TPDAOCS,TPDAOSC,TPDAOSD,TPDAVST:
                        TPDAVNM,TPDAUNI,TPDARFR,TPDAABF,TPDAPRB,TPDANAT:
                        TPDASTA,TPDATFL,TPDAODT,TPDAOTM,TPDAPER,TPDAROB:
                        TPDASPA
          GOTO      OVERCOND IF OVER
          RETURN
.
DETPDA1   RESET     KEY21
          DELETE    TMPDEAA1,KEY21
          RETURN
.
.                                           * note - uses vars from RESDEAFD
WRTPDA1   RESET     KEY21
          WRITE     TMPDEAA1,KEY21;REDARDT,REDARTM,REDARUN,REDASID,REDAPID:
                        REDAVTY,REDAOTY,REDAOCS,REDAOSC,REDAOSD,REDAVST:
                        REDAVNM,REDAUNI,REDARFR,REDAABF,REDAPRB,REDANAT:
                        REDASTA,REDATFL,REDAODT,REDAOTM,REDAPER,REDAROB:
                        REDASPA
          RETURN
.
.
.
. TMPDEBIO
. --------
. Filename     : tmpdebaf.dat
.
RSTPDB1   RESET     KEY24
          READ      TMPDEBA1,KEY24;;
          RETURN
.
RDTPDB1   RESET     KEY24
          MOVE      ZERO,OVRCD
          READ      TMPDEBA1,KEY24;TPDBRDT,TPDBRTM,TPDBRUN,TPDBSID,TPDBLNO:
                        TPDBTXT,TPDBSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
RKTPDB1
          MOVE      ZERO,OVRCD
          READKS    TMPDEBA1;TPDBRDT,TPDBRTM,TPDBRUN,TPDBSID,TPDBLNO:
                        TPDBTXT,TPDBSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
DETPDB1   RESET     KEY24
          DELETE    TMPDEBA1,KEY24
          RETURN
.
.                                           * note - uses vars from RESDEBFD
WRTPDB1   RESET     KEY24
          WRITE     TMPDEBA1,KEY24;REDBRDT,REDBRTM,REDBRUN,REDBSID,REDBLNO:
                        REDBTXT,REDBSPA
          RETURN
.
.
.
. TMPDECIO
. --------
. Filename     : tmpdecaf.dat
.
RSTPDC1   RESET     KEY24
          READ      TMPDECA1,KEY24;;
          RETURN
.
RDTPDC1   RESET     KEY24
          MOVE      ZERO,OVRCD
          READ      TMPDECA1,KEY24;TPDCRDT,TPDCRTM,TPDCRUN,TPDCSID,TPDCLNO:
                        TPDCTXT,TPDCSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
RKTPDC1
          MOVE      ZERO,OVRCD
          READKS    TMPDECA1;TPDCRDT,TPDCRTM,TPDCRUN,TPDCSID,TPDCLNO:
                        TPDCTXT,TPDCSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
DETPDC1   RESET     KEY24
          DELETE    TMPDECA1,KEY24
          RETURN
.
.                                           * note - uses vars from RESDECFD
WRTPDC1   RESET     KEY24
          WRITE     TMPDECA1,KEY24;REDCRDT,REDCRTM,REDCRUN,REDCSID,REDCLNO:
                        REDCTXT,REDCSPA
          RETURN
.
