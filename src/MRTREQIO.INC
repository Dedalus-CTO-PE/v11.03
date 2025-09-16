.
. ------- INDEX ONE -------
.
.         positional read
.
RSMRREQ1  RESET     KEY10
          READ      MRTREQA1,KEY10;;
          RETURN
.
.         read to see if record exists
.
RAMRREQ1  MOVE      ZERO,OVRCD
          RESET     KEY10
          READ      MRTREQA1,KEY10;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDMRREQ1  MOVE      ZERO,OVRCD
          RESET     KEY10
          READ      MRTREQA1,KEY10;DMRRQNUM,MRRQDATE,MRRQTIME,MRRQDEPT:
                                   MRRQRQST,MRRQURGN,MRRQURNO,MRRQOPID:
                                   MRRQHOSP,MRRQSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMRRQNUM,MRRQNUMB
          RETURN
.
.         next read
.
RKMRREQ1  MOVE      ZERO,OVRCD
          READKS    MRTREQA1;DMRRQNUM,MRRQDATE,MRRQTIME,MRRQDEPT:
                             MRRQRQST,MRRQURGN,MRRQURNO,MRRQOPID:
                             MRRQHOSP,MRRQSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMRRQNUM,MRRQNUMB
          RETURN
.
.         previous read
.
RPMRREQ1  MOVE      ZERO,OVRCD
          READKP    MRTREQA1;DMRRQNUM,MRRQDATE,MRRQTIME,MRRQDEPT:
                             MRRQRQST,MRRQURGN,MRRQURNO,MRRQOPID:
                             MRRQHOSP,MRRQSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMRRQNUM,MRRQNUMB
          RETURN
.
.         update
.
UPMRREQ1  MOVE      MRRQNUMB,DMRRQNUM
          UPDATE    MRTREQA1;DMRRQNUM,MRRQDATE,MRRQTIME,MRRQDEPT:
                             MRRQRQST,MRRQURGN,MRRQURNO,MRRQOPID:
                             MRRQHOSP,MRRQSPAR
          RETURN
.
.         write
.
WRMRREQ1  RESET     KEY10
          MOVE      MRRQNUMB,DMRRQNUM
          WRITE     MRTREQA1,KEY10;DMRRQNUM,MRRQDATE,MRRQTIME,MRRQDEPT:
                                   MRRQRQST,MRRQURGN,MRRQURNO,MRRQOPID:
                                   MRRQHOSP,MRRQSPAR
          RETURN
.
.         delete a record
.
DEMRREQ1  RESET     KEY10
          DELETE    MRTREQA1,KEY10
          RETURN
.
. ------- INDEX TWO -------
.
.         positional read
.
RSMRREQ2  RESET     KEY26
          READ      MRTREQA2,KEY26;;
          RETURN
.
.         full read
.
RDMRREQ2  MOVE      ZERO,OVRCD
          RESET     KEY26
          READ      MRTREQA2,KEY26;DMRRQNUM,MRRQDATE,MRRQTIME,MRRQDEPT:
                                   MRRQRQST,MRRQURGN,MRRQURNO,MRRQOPID:
                                   MRRQHOSP,MRRQSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMRRQNUM,MRRQNUMB
          RETURN
.
.         next read
.
RKMRREQ2  MOVE      ZERO,OVRCD
          READKS    MRTREQA2;DMRRQNUM,MRRQDATE,MRRQTIME,MRRQDEPT:
                             MRRQRQST,MRRQURGN,MRRQURNO,MRRQOPID:
                             MRRQHOSP,MRRQSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMRRQNUM,MRRQNUMB
          RETURN
.
.         previous read
.
RPMRREQ2  MOVE      ZERO,OVRCD
          READKP    MRTREQA2;DMRRQNUM,MRRQDATE,MRRQTIME,MRRQDEPT:
                             MRRQRQST,MRRQURGN,MRRQURNO,MRRQOPID:
                             MRRQHOSP,MRRQSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMRRQNUM,MRRQNUMB
          RETURN
.
. ------- INDEX THREE -------
.
.         positional read
.
RSMRREQ3  RESET     KEY56
          READ      MRTREQA3,KEY56;;
          RETURN
.
.         full read
.
RDMRREQ3  MOVE      ZERO,OVRCD
          RESET     KEY56
          READ      MRTREQA3,KEY56;DMRRQNUM,MRRQDATE,MRRQTIME,MRRQDEPT:
                                   MRRQRQST,MRRQURGN,MRRQURNO,MRRQOPID:
                                   MRRQHOSP,MRRQSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMRRQNUM,MRRQNUMB
          RETURN
.
.         next read
.
RKMRREQ3  MOVE      ZERO,OVRCD
          READKS    MRTREQA3;DMRRQNUM,MRRQDATE,MRRQTIME,MRRQDEPT:
                             MRRQRQST,MRRQURGN,MRRQURNO,MRRQOPID:
                             MRRQHOSP,MRRQSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMRRQNUM,MRRQNUMB
          RETURN
.
.         previous read
.
RPMRREQ3  MOVE      ZERO,OVRCD
          READKP    MRTREQA3;DMRRQNUM,MRRQDATE,MRRQTIME,MRRQDEPT:
                             MRRQRQST,MRRQURGN,MRRQURNO,MRRQOPID:
                             MRRQHOSP,MRRQSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMRRQNUM,MRRQNUMB
          RETURN
.
