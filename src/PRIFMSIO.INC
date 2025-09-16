.
. PRIFMSIO.INC
. ------------
. Filename     : prifmsaf
. Description  : Financial Management System Interface to Private Practice File
.                I/O Subroutines
. Variables    : OVRCD    FORM    1
.                KEY18    DIM     18
.
RAPRFM1   MOVE      ZERO,OVRCD
          RESET     KEY18
          READ      PRIFMSA1,KEY18;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPRFM1   MOVE      ZERO,OVRCD
          RESET     KEY18
          READ      PRIFMSA1,KEY18;;
          RETURN
.
RDPRFM1   MOVE      ZERO,OVRCD
          RESET     KEY18
          READ      PRIFMSA1,KEY18;DPRFMSUB,PRFMCOD,PRFMIDI,PRFMIRE,PRFMILD:
                                   PRFMICA,PRFMIDA,PRFMIGS,PRFMTDI,PRFMTRE:
                                   PRFMTLD,PRFMTCA,PRFMTDA,PRFMBASC,PRFMSPA
          GOTO      OVERCOND IF OVER
          MOVE      DPRFMSUB,PRFMSUB
          RETURN
.
RKPRFM1   MOVE      ZERO,OVRCD
          RESET     KEY18
          READKS    PRIFMSA1;DPRFMSUB,PRFMCOD,PRFMIDI,PRFMIRE,PRFMILD,PRFMICA:
                             PRFMIDA,PRFMIGS,PRFMTDI,PRFMTRE,PRFMTLD,PRFMTCA:
                             PRFMTDA,PRFMBASC,PRFMSPA
          GOTO      OVERCOND IF OVER
          MOVE      DPRFMSUB,PRFMSUB
          RETURN
.
RPPRFM1   MOVE      ZERO,OVRCD
          RESET     KEY18
          READKP    PRIFMSA1;DPRFMSUB,PRFMCOD,PRFMIDI,PRFMIRE,PRFMILD,PRFMICA:
                             PRFMIDA,PRFMIGS,PRFMTDI,PRFMTRE,PRFMTLD,PRFMTCA:
                             PRFMTDA,PRFMBASC,PRFMSPA
          GOTO      OVERCOND IF OVER
          MOVE      DPRFMSUB,PRFMSUB
          RETURN
.
WRPRFM1   MOVE      ZERO,OVRCD
          RESET     KEY18
          WRITE     PRIFMSA1,KEY18;KEY18,PRFMIDI,PRFMIRE,PRFMILD,PRFMICA:
                                   PRFMIDA,PRFMIGS,PRFMTDI,PRFMTRE,PRFMTLD:
                                   PRFMTCA,PRFMTDA,PRFMBASC,PRFMSPA
          RETURN
.
UPPRFM1   MOVE      DPRFMSUB,PRFMSUB
          UPDATE    PRIFMSA1;DPRFMSUB,PRFMCOD,PRFMIDI,PRFMIRE,PRFMILD,PRFMICA:
                             PRFMIDA,PRFMIGS,PRFMTDI,PRFMTRE,PRFMTLD,PRFMTCA:
                             PRFMTDA,PRFMBASC,PRFMSPA
          RETURN
.
DEPRFM1   RESET     KEY18
          DELETE    PRIFMSA1,KEY18
          RETURN
.
