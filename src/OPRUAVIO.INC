.
. Include : OPRUAVIO.INC
. File    : opruavaf.dat
. Keys    : KEY19
.
.         positional read
.
RSOPUAV1  RESET     KEY19
          READ      OPRUAVA1,KEY19;;
          RETURN
.
.         read to see if record exists
.
RAOPUAV1  MOVE      ZERO,OVRCD
          RESET     KEY19
          READ      OPRUAVA1,KEY19;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDOPUAV1  MOVE      ZERO,OVRCD
          RESET     KEY19
          READ      OPRUAVA1,KEY19;OPUATHET,OPUADATE,OPUASTIM,OPUAETIM,OPAUSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read with a lock
.
RLOPUAV1  MOVE      ZERO,OVRCD
          RESET     KEY19
          READL     OPRUAVA1,KEY19;OPUATHET,OPUADATE,OPUASTIM,OPUAETIM,OPAUSPAR
          GOTO      OVERLOCK IF LOCKED
          GOTO      OVERCOND IF OVER
          RETURN
.
.         next read
.
RKOPUAV1  MOVE      ZERO,OVRCD
          READKS    OPRUAVA1;OPUATHET,OPUADATE,OPUASTIM,OPUAETIM,OPAUSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         previous read
.
RPOPUAV1  MOVE      ZERO,OVRCD
          READKP    OPRUAVA1;OPUATHET,OPUADATE,OPUASTIM,OPUAETIM,OPAUSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         update
.
UPOPUAV1  UPDATE    OPRUAVA1;OPUATHET,OPUADATE,OPUASTIM,OPUAETIM,OPAUSPAR
          RETURN
.
.         write
.
WROPUAV1  RESET     KEY19
          WRITE     OPRUAVA1,KEY19;OPUATHET,OPUADATE,OPUASTIM,OPUAETIM,OPAUSPAR
          RETURN
.
.         delete a record
.
DEOPUAV1  RESET     KEY19
          DELETE    OPRUAVA1,KEY19
          RETURN
.
.         unlock all locks one user has on the file
.
ULOPUAV1  UNLOCK    OPRUAVA1
          RETURN
.
