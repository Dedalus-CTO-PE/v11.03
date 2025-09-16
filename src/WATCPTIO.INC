.
. WATCPTIO.INC
. ------------
. Filenames       : watcptaf , wataudcp (audits)
. Description     : Waiting Lists Consultant/Procedure Time file
.
. -----------------------------------------
. ------- I/O routines for WATCPTA1 -------
. -----------------------------------------
.
.         positional read
.
RSWTCPT1  RESET     KEY15
          READ      WATCPTA1,KEY15;;
          RETURN
.
.         read to see if record exists
.
RAWTCPT1  MOVE      ZERO,OVRCD
          RESET     KEY15
          READ      WATCPTA1,KEY15;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDWTCPT1  MOVE      ZERO,OVRCD
          RESET     KEY15
          READ      WATCPTA1,KEY15;WTCPDOCT,WTCPPROC,WTCPSTAY,WTCPTIME,WTCPSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read with a lock
.
RLWTCPT1  MOVE      ZERO,OVRCD
          RESET     KEY15
          READL     WATCPTA1,KEY15;WTCPDOCT,WTCPPROC,WTCPSTAY,WTCPTIME,WTCPSPAR
          GOTO      OVERLOCK IF LOCKED
          GOTO      OVERCOND IF OVER
          RETURN
.
.         next read
.
RKWTCPT1  MOVE      ZERO,OVRCD
          READKS    WATCPTA1;WTCPDOCT,WTCPPROC,WTCPSTAY,WTCPTIME,WTCPSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         previous read
.
RPWTCPT1  MOVE      ZERO,OVRCD
          READKP    WATCPTA1;WTCPDOCT,WTCPPROC,WTCPSTAY,WTCPTIME,WTCPSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         update
.
UPWTCPT1  UPDATE    WATCPTA1;WTCPDOCT,WTCPPROC,WTCPSTAY,WTCPTIME,WTCPSPAR
          RETURN
.
.         write
.
WRWTCPT1  RESET     KEY15
          WRITE     WATCPTA1,KEY15;WTCPDOCT,WTCPPROC,WTCPSTAY,WTCPTIME,WTCPSPAR
          RETURN
.
.         delete a record
.
DEWTCPT1  RESET     KEY15
          DELETE    WATCPTA1,KEY15
          RETURN
.
.         unlock all locks one user has on the file
.
ULWTCPT1  UNLOCK    WATCPTA1
          RETURN
.
. -------------------------------------------
. ------- audit routines for WATCPTA1 -------
. -------------------------------------------
.
ASWATCP   RESET    KEY19
          READ     WATAUDCP,KEY19;;
          RETURN 
.
ARWATCP   MOVE     ZERO,OVRCD
          RESET    KEY19
          READ     WATAUDCP,KEY19;WTCPAUDD,WTCPAUDT,WTCPAUDP:
                                  WTCPAUDR,WTCPAUDS,WTCPAUDO:
                                  WTCPDOCT,WTCPPROC,WTCPSTAY,WTCPTIME,WTCPSPAR
          GOTO     OVERCOND IF OVER
          RETURN
.
AKWATCP   MOVE     ZERO,OVRCD
          RESET    KEY19
          READKS   WATAUDCP;WTCPAUDD,WTCPAUDT,WTCPAUDP:
                            WTCPAUDR,WTCPAUDS,WTCPAUDO:
                            WTCPDOCT,WTCPPROC,WTCPSTAY,WTCPTIME,WTCPSPAR
          GOTO     OVERCOND IF OVER
          RETURN
.
AWWATCP   RESET    KEY19
          WRITE    WATAUDCP,KEY19;WTCPAUDD,WTCPAUDT,WTCPAUDP:
                                  WTCPAUDR,WTCPAUDS,WTCPAUDO:
                                  WTCPDOCT,WTCPPROC,WTCPSTAY,WTCPTIME,WTCPSPAR
          RETURN
.
AUWATCP   UPDATE   WATAUDCP;WTCPAUDD,WTCPAUDT,WTCPAUDP:
                            WTCPAUDR,WTCPAUDS,WTCPAUDO:
                            WTCPDOCT,WTCPPROC,WTCPSTAY,WTCPTIME,WTCPSPAR
          RETURN
.
ADWATCP   RESET    KEY19
          DELETE   WATAUDCP,KEY19;
          RETURN
.
