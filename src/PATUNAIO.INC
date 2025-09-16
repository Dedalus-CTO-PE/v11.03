.
. **********************************************************
. *                                                        *
. *  Include Name :  PATUNAIO                              *
. *                                                        *
. *  Function     :  I/O for patunaa file                  *
. *                                                        *
. *  Keys         :  KEY25                                 *
. *                                                        *
. *  Modifications:                                        *
. *                                                        *
. **********************************************************
.
RDSUNAA1    READ    PATUNAA1,KEY25;;
            RETURN
.
RDAUNAA1    MOVE    ZERO,OVRCD
            RESET   KEY25 
            READ    PATUNAA1,KEY25;ANS
            GOTO    OVERCOND IF OVER
            RETURN
.
RDUNAA1     MOVE    ZERO,OVRCD
            RESET   KEY25 
            READ    PATUNAA1,KEY25;DPTUNADM,PTUNDATE,PTUNTIME,PTUNTYPE:
                                   PTUNODTE,PTUNHOSP,DPTUNSEN,PTUNDTYP:
                                   PTUNAUID,PTUNCANC,PTUNOTTM,PTUNOPRD:
                                   PTUNSPAR
            GOTO    OVERCOND IF OVER
            MOVE    DPTUNADM,PTUNADMN
            MOVE    DPTUNSEN,PTUNSENT
            RETURN
.
RDKUNAA1    MOVE    ZERO,OVRCD
            READKS  PATUNAA1;DPTUNADM,PTUNDATE,PTUNTIME,PTUNTYPE,PTUNODTE:
                             PTUNHOSP,DPTUNSEN,PTUNDTYP,PTUNAUID,PTUNCANC:
                             PTUNOTTM,PTUNOPRD,PTUNSPAR
            GOTO    OVERCOND IF OVER
            MOVE    DPTUNADM,PTUNADMN
            MOVE    DPTUNSEN,PTUNSENT
            RETURN
.
RDPUNAA1    MOVE    ZERO,OVRCD
            READKP  PATUNAA1;DPTUNADM,PTUNDATE,PTUNTIME,PTUNTYPE,PTUNODTE:
                             PTUNHOSP,DPTUNSEN,PTUNDTYP,PTUNAUID,PTUNCANC:
                             PTUNOTTM,PTUNOPRD,PTUNSPAR
            GOTO    OVERCOND IF OVER

            MOVE    DPTUNADM,PTUNADMN
            MOVE    DPTUNSEN,PTUNSENT
            RETURN
.
UPUNAA1     MOVE    PTUNADMN,DPTUNADM
            MOVE    PTUNSENT,DPTUNSEN
            UPDATE  PATUNAA1;DPTUNADM,PTUNDATE,PTUNTIME,PTUNTYPE,PTUNODTE:
                             PTUNHOSP,DPTUNSEN,PTUNDTYP,PTUNAUID,PTUNCANC:
                             PTUNOTTM,PTUNOPRD,PTUNSPAR
            RETURN
.
WRUNAA1     RESET   KEY25
            MOVE    PTUNADMN,DPTUNADM
            MOVE    PTUNSENT,DPTUNSEN
            WRITE   PATUNAA1,KEY25;DPTUNADM,PTUNDATE,PTUNTIME,PTUNTYPE:
                                   PTUNODTE,PTUNHOSP,DPTUNSEN,PTUNDTYP:
                                   PTUNAUID,PTUNCANC,PTUNOTTM,PTUNOPRD:
                                   PTUNSPAR
            RETURN
.
DEUNAA1     RESET   KEY25
            DELETE  PATUNAA1,KEY25
            RETURN
.
RDUNAA2     MOVE    ZERO,OVRCD
            RESET   KEY25 
            READ    PATUNAA2,KEY25;DPTUNADM,PTUNDATE,PTUNTIME,PTUNTYPE:
                                   PTUNODTE,PTUNHOSP,DPTUNSEN,PTUNDTYP:
                                   PTUNAUID,PTUNCANC,PTUNOTTM,PTUNOPRD:
                                   PTUNSPAR
            GOTO    OVERCOND IF OVER
            MOVE    DPTUNADM,PTUNADMN
            MOVE    DPTUNSEN,PTUNSENT
            RETURN
.
RDKUNAA2    MOVE    ZERO,OVRCD
            READKS  PATUNAA2;DPTUNADM,PTUNDATE,PTUNTIME,PTUNTYPE,PTUNODTE:
                             PTUNHOSP,DPTUNSEN,PTUNDTYP,PTUNAUID,PTUNCANC:
                             PTUNOTTM,PTUNOPRD,PTUNSPAR
            GOTO    OVERCOND IF OVER
            MOVE    DPTUNADM,PTUNADMN
            MOVE    DPTUNSEN,PTUNSENT
            RETURN
.
RDPUNAA2    MOVE    ZERO,OVRCD
            READKP  PATUNAA2;DPTUNADM,PTUNDATE,PTUNTIME,PTUNTYPE,PTUNODTE:
                             PTUNHOSP,DPTUNSEN,PTUNDTYP,PTUNAUID,PTUNCANC:
                             PTUNOTTM,PTUNOPRD,PTUNSPAR
            GOTO    OVERCOND IF OVER
            MOVE    DPTUNADM,PTUNADMN
            MOVE    DPTUNSEN,PTUNSENT
            RETURN
.
WRUNAA2     RESET   KEY25
            MOVE    PTUNADMN,DPTUNADM
            MOVE    PTUNSENT,DPTUNSEN
            WRITE   PATUNAA2,KEY25;DPTUNADM,PTUNDATE,PTUNTIME,PTUNTYPE:
                                   PTUNODTE,PTUNHOSP,DPTUNSEN,PTUNDTYP:
                                   PTUNAUID,PTUNCANC,PTUNOTTM,PTUNOPRD:
                                   PTUNSPAR
            RETURN
.
UPUNAA2     MOVE    PTUNADMN,DPTUNADM
            MOVE    PTUNSENT,DPTUNSEN
            UPDATE  PATUNAA2;DPTUNADM,PTUNDATE,PTUNTIME,PTUNTYPE,PTUNODTE:
                             PTUNHOSP,DPTUNSEN,PTUNDTYP,PTUNAUID,PTUNCANC:
                             PTUNOTTM,PTUNOPRD,PTUNSPAR
            RETURN
.
DEUNAA2     RESET   KEY25
            DELETE  PATUNAA2,KEY25
            RETURN
.
RDSUNAA2    READ    PATUNAA2,KEY25;;
            RETURN
.
RDUNAA3     MOVE    ZERO,OVRCD
            RESET   KEY25 
            READ    PATUNAA3,KEY25;DPTUNADM,PTUNDATE,PTUNTIME,PTUNTYPE:
                                   PTUNODTE,PTUNHOSP,DPTUNSEN,PTUNDTYP:
                                   PTUNAUID,PTUNCANC,PTUNOTTM,PTUNOPRD:
                                   PTUNSPAR
            GOTO    OVERCOND IF OVER
            MOVE    DPTUNADM,PTUNADMN
            MOVE    DPTUNSEN,PTUNSENT
            RETURN
.
RDKUNAA3    MOVE    ZERO,OVRCD
            READKS  PATUNAA3;DPTUNADM,PTUNDATE,PTUNTIME,PTUNTYPE,PTUNODTE:
                             PTUNHOSP,DPTUNSEN,PTUNDTYP,PTUNAUID,PTUNCANC:
                             PTUNOTTM,PTUNOPRD,PTUNSPAR
            GOTO    OVERCOND IF OVER
            MOVE    DPTUNADM,PTUNADMN
            MOVE    DPTUNSEN,PTUNSENT
            RETURN
.
RDPUNAA3    MOVE    ZERO,OVRCD
            READKP  PATUNAA3;DPTUNADM,PTUNDATE,PTUNTIME,PTUNTYPE,PTUNODTE:
                             PTUNHOSP,DPTUNSEN,PTUNDTYP,PTUNAUID,PTUNCANC:
                             PTUNOTTM,PTUNOPRD,PTUNSPAR
            GOTO    OVERCOND IF OVER
            MOVE    DPTUNADM,PTUNADMN
            MOVE    DPTUNSEN,PTUNSENT
            RETURN
.
WRUNAA3     RESET   KEY25
            MOVE    PTUNADMN,DPTUNADM
            MOVE    PTUNSENT,DPTUNSEN
            WRITE   PATUNAA3,KEY25;DPTUNADM,PTUNDATE,PTUNTIME,PTUNTYPE:
                                   PTUNODTE,PTUNHOSP,DPTUNSEN,PTUNDTYP:
                                   PTUNAUID,PTUNCANC,PTUNOTTM,PTUNOPRD:
                                   PTUNSPAR
            RETURN
.
UPUNAA3     MOVE    PTUNADMN,DPTUNADM
            MOVE    PTUNSENT,DPTUNSEN
            UPDATE  PATUNAA3;DPTUNADM,PTUNDATE,PTUNTIME,PTUNTYPE,PTUNODTE:
                             PTUNHOSP,DPTUNSEN,PTUNDTYP,PTUNAUID,PTUNCANC:
                             PTUNOTTM,PTUNOPRD,PTUNSPAR
            RETURN
.
DEUNAA3     RESET   KEY25
            DELETE  PATUNAA3,KEY25
            RETURN
.
RDSUNAA3    READ    PATUNAA3,KEY25;;
            RETURN
