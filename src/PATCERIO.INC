.*****************************************************************************
.*                       PATCERIO.INC                                        *
.*****************************************************************************
.
.         Index 1
.
RSPTCER1  RESET     KEY19
          READ      PATCERA1,KEY19;;
          RETURN
.
RAPTCER1  RESET     KEY19
          MOVE      ZERO,OVRCD
          READ      PATCERA1,KEY19;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTCER1  RESET     KEY19
          MOVE      ZERO,OVRCD
          READ      PATCERA1,KEY19;PTCEURNO,PTCETYPE,PTCEFDAT,PTCETDAT:
                                   PTCESDAT,PTCEDCOD,PTCESENT,PTCECSTA:
                                   PTCESPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTCER1  MOVE      ZERO,OVRCD
          READKS    PATCERA1;PTCEURNO,PTCETYPE,PTCEFDAT,PTCETDAT:
                             PTCESDAT,PTCEDCOD,PTCESENT,PTCECSTA:
                             PTCESPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTCER1  MOVE      ZERO,OVRCD
          READKP    PATCERA1;PTCEURNO,PTCETYPE,PTCEFDAT,PTCETDAT:
                             PTCESDAT,PTCEDCOD,PTCESENT,PTCECSTA:
                             PTCESPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTCER1  UPDATE    PATCERA1;PTCEURNO,PTCETYPE,PTCEFDAT,PTCETDAT:
                             PTCESDAT,PTCEDCOD,PTCESENT,PTCECSTA:
                             PTCESPAR
          RETURN
.
WRPTCER1  RESET     KEY19
          WRITE     PATCERA1,KEY19;PTCEURNO,PTCETYPE,PTCEFDAT,PTCETDAT:
                                   PTCESDAT,PTCEDCOD,PTCESENT,PTCECSTA:
                             PTCESPAR
          RETURN
.
DEPTCER1  RESET     KEY19
          DELETE    PATCERA1,KEY19
          RETURN
.
.         Index 2
.
RSPTCER2  RESET     KEY19
          READ      PATCERA2,KEY19;;
          RETURN
.
RAPTCER2  RESET     KEY19
          MOVE      ZERO,OVRCD
          READ      PATCERA2,KEY19;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTCER2  RESET     KEY19
          MOVE      ZERO,OVRCD
          READ      PATCERA2,KEY19;PTCEURNO,PTCETYPE,PTCEFDAT,PTCETDAT:
                                   PTCESDAT,PTCEDCOD,PTCESENT,PTCECSTA:
                                   PTCESPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTCER2  MOVE      ZERO,OVRCD
          READKS    PATCERA2;PTCEURNO,PTCETYPE,PTCEFDAT,PTCETDAT:
                             PTCESDAT,PTCEDCOD,PTCESENT,PTCECSTA:
                             PTCESPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTCER2  MOVE      ZERO,OVRCD
          READKP    PATCERA2;PTCEURNO,PTCETYPE,PTCEFDAT,PTCETDAT:
                             PTCESDAT,PTCEDCOD,PTCESENT,PTCECSTA:
                             PTCESPAR
          GOTO      OVERCOND IF OVER
          RETURN
