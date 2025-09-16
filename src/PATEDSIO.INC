.*****************************************************************************
.*        PATEDSIO.INC                                                       *
.*****************************************************************************
.
RSPTEDS1  RESET     KEY32
          READ      PATEDSA1,KEY32;;
          RETURN
.
RAPTEDS1  RESET     KEY32
          MOVE      ZERO,OVRCD
          READ      PATEDSA1,KEY32;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTEDS1  RESET     KEY32
          MOVE      ZERO,OVRCD
          READ      PATEDSA1,KEY32;DPTESFLG,PTESHFND,PTESADMN,PTESINVN:
                                  PTESBATN,PTESURNO,PTESPBAT:
                                  PTESNBAT,PTESPCSN,PTESCSNO,PTESCCFL,PTESSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTESFLG,PTESFLAG
          RETURN
.
RKPTEDS1  MOVE      ZERO,OVRCD
          READKS    PATEDSA1;DPTESFLG,PTESHFND,PTESADMN,PTESINVN:
                                  PTESBATN,PTESURNO,PTESPBAT:
                                  PTESNBAT,PTESPCSN,PTESCSNO,PTESCCFL,PTESSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTESFLG,PTESFLAG
          RETURN
.
RPPTEDS1  MOVE      ZERO,OVRCD
          READKP    PATEDSA1;DPTESFLG,PTESHFND,PTESADMN,PTESINVN:
                                  PTESBATN,PTESURNO,PTESPBAT:
                                  PTESNBAT,PTESPCSN,PTESCSNO,PTESCCFL,PTESSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTESFLG,PTESFLAG
          RETURN
.
UPPTEDS1  MOVE      PTESFLAG,DPTESFLG
          UPDATE    PATEDSA1;DPTESFLG,PTESHFND,PTESADMN,PTESINVN:
                                  PTESBATN,PTESURNO,PTESPBAT:
                                  PTESNBAT,PTESPCSN,PTESCSNO,PTESCCFL,PTESSPAR
          RETURN
.
WRPTEDS1  RESET     KEY32
          MOVE      PTESFLAG,DPTESFLG
          WRITE     PATEDSA1,KEY32;DPTESFLG,PTESHFND,PTESADMN,PTESINVN:
                                  PTESBATN,PTESURNO,PTESPBAT:
                                  PTESNBAT,PTESPCSN,PTESCSNO,PTESCCFL,PTESSPAR
          RETURN
.
DEPTEDS1  RESET     KEY32
          DELETE    PATEDSA1,KEY32
          RETURN
.
.         Index 1 Routines
.
RSPTEDS2  RESET     KEY16
          READ      PATEDSA2,KEY16;;
          RETURN
.
RAPTEDS2  RESET     KEY16
          MOVE      ZERO,OVRCD
          READ      PATEDSA2,KEY16;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTEDS2  RESET     KEY16
          MOVE      ZERO,OVRCD
          READ      PATEDSA2,KEY16;DPTESFLG,PTESHFND,PTESADMN,PTESINVN:
                                  PTESBATN,PTESURNO,PTESPBAT:
                                  PTESNBAT,PTESPCSN,PTESCSNO,PTESCCFL,PTESSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTESFLG,PTESFLAG
          RETURN
.
RKPTEDS2  MOVE      ZERO,OVRCD
          READKS    PATEDSA2;DPTESFLG,PTESHFND,PTESADMN,PTESINVN:
                                  PTESBATN,PTESURNO,PTESPBAT:
                                  PTESNBAT,PTESPCSN,PTESCSNO,PTESCCFL,PTESSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTESFLG,PTESFLAG
          RETURN
.
RPPTEDS2  MOVE      ZERO,OVRCD
          READKP    PATEDSA2;DPTESFLG,PTESHFND,PTESADMN,PTESINVN:
                                  PTESBATN,PTESURNO,PTESPBAT:
                                  PTESNBAT,PTESPCSN,PTESCSNO,PTESCCFL,PTESSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTESFLG,PTESFLAG
          RETURN
.
.         Index 3 Routines
.
RSPTEDS3  RESET     KEY24
          READ      PATEDSA3,KEY24;;
          RETURN
.
RAPTEDS3  RESET     KEY24
          MOVE      ZERO,OVRCD
          READ      PATEDSA3,KEY24;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTEDS3  RESET     KEY24
          MOVE      ZERO,OVRCD
          READ      PATEDSA3,KEY24;DPTESFLG,PTESHFND,PTESADMN,PTESINVN:
                                  PTESBATN,PTESURNO,PTESPBAT:
                                  PTESNBAT,PTESPCSN,PTESCSNO,PTESCCFL,PTESSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTESFLG,PTESFLAG
          RETURN
.
RKPTEDS3  MOVE      ZERO,OVRCD
          READKS    PATEDSA3;DPTESFLG,PTESHFND,PTESADMN,PTESINVN:
                                  PTESBATN,PTESURNO,PTESPBAT:
                                  PTESNBAT,PTESPCSN,PTESCSNO,PTESCCFL,PTESSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTESFLG,PTESFLAG
          RETURN
.
RPPTEDS3  MOVE      ZERO,OVRCD
          READKP    PATEDSA3;DPTESFLG,PTESHFND,PTESADMN,PTESINVN:
                                  PTESBATN,PTESURNO,PTESPBAT:
                                  PTESNBAT,PTESPCSN,PTESCSNO,PTESCCFL,PTESSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTESFLG,PTESFLAG
          RETURN
.
.         Index 4 Routines
.
RSPTEDS4  RESET     KEY24
          READ      PATEDSA4,KEY24;;
          RETURN
.
RAPTEDS4  RESET     KEY24
          MOVE      ZERO,OVRCD
          READ      PATEDSA4,KEY24;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTEDS4  RESET     KEY24
          MOVE      ZERO,OVRCD
          READ      PATEDSA4,KEY24;DPTESFLG,PTESHFND,PTESADMN,PTESINVN:
                                  PTESBATN,PTESURNO,PTESPBAT:
                                  PTESNBAT,PTESPCSN,PTESCSNO,PTESCCFL,PTESSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTESFLG,PTESFLAG
          RETURN
.
RKPTEDS4  MOVE      ZERO,OVRCD
          READKS    PATEDSA4;DPTESFLG,PTESHFND,PTESADMN,PTESINVN:
                                  PTESBATN,PTESURNO,PTESPBAT:
                                  PTESNBAT,PTESPCSN,PTESCSNO,PTESCCFL,PTESSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTESFLG,PTESFLAG
          RETURN
.
RPPTEDS4  MOVE      ZERO,OVRCD
          READKP    PATEDSA4;DPTESFLG,PTESHFND,PTESADMN,PTESINVN:
                                  PTESBATN,PTESURNO,PTESPBAT:
                                  PTESNBAT,PTESPCSN,PTESCSNO,PTESCCFL,PTESSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTESFLG,PTESFLAG
          RETURN
.
.         Index 5 Routines
.
RSPTEDS5  RESET     KEY32
          READ      PATEDSA5,KEY32;;
          RETURN
.
RAPTEDS5  RESET     KEY32
          MOVE      ZERO,OVRCD
          READ      PATEDSA5,KEY32;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTEDS5  RESET     KEY32
          MOVE      ZERO,OVRCD
          READ      PATEDSA5,KEY32;DPTESFLG,PTESHFND,PTESADMN,PTESINVN:
                                  PTESBATN,PTESURNO,PTESPBAT:
                                  PTESNBAT,PTESPCSN,PTESCSNO,PTESCCFL,PTESSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTESFLG,PTESFLAG
          RETURN
.
RKPTEDS5  MOVE      ZERO,OVRCD
          READKS    PATEDSA5;DPTESFLG,PTESHFND,PTESADMN,PTESINVN:
                                  PTESBATN,PTESURNO,PTESPBAT:
                                  PTESNBAT,PTESPCSN,PTESCSNO,PTESCCFL,PTESSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTESFLG,PTESFLAG
          RETURN
.
RPPTEDS5  MOVE      ZERO,OVRCD
          READKP    PATEDSA5;DPTESFLG,PTESHFND,PTESADMN,PTESINVN:
                                  PTESBATN,PTESURNO,PTESPBAT:
                                  PTESNBAT,PTESPCSN,PTESCSNO,PTESCCFL,PTESSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTESFLG,PTESFLAG
          RETURN
+
