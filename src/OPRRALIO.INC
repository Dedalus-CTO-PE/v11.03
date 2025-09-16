.
. Include   :  OPRRALIO.INC
. File name :  oprralaf.dat
. KEYS      :  KEY30
.
.         positional read
.
RSOPRAL1  RESET     KEY30
          READ      OPRRALA1,KEY30;;
          RETURN
.
.         read to see if record exists
.
RAOPRAL1  MOVE      ZERO,OVRCD
          RESET     KEY30
          READ      OPRRALA1,KEY30;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDOPRAL1  MOVE      ZERO,OVRCD
          RESET     KEY30
          READ      OPRRALA1,KEY30;OPRLDATE,OPRLSTOR,OPRLSUOR,OPRLSTNW:
                                  OPRLSUNW,OPRLOVST,OPRLOVEN,OPRLCUID:
                                  OPRLCDAT,OPRLCTIM,OPRLSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read with a lock
.
RLOPRAL1  MOVE      ZERO,OVRCD
          RESET     KEY30
          READL     OPRRALA1,KEY30;OPRLDATE,OPRLSTOR,OPRLSUOR,OPRLSTNW:
                                  OPRLSUNW,OPRLOVST,OPRLOVEN,OPRLCUID:
                                  OPRLCDAT,OPRLCTIM,OPRLSPAR
          GOTO      OVERLOCK IF LOCKED
          GOTO      OVERCOND IF OVER
          RETURN
.
.         next read
.
RKOPRAL1  MOVE      ZERO,OVRCD
          READKS    OPRRALA1;OPRLDATE,OPRLSTOR,OPRLSUOR,OPRLSTNW:
                                  OPRLSUNW,OPRLOVST,OPRLOVEN,OPRLCUID:
                                  OPRLCDAT,OPRLCTIM,OPRLSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         previous read
.
RPOPRAL1  MOVE      ZERO,OVRCD
          READKP    OPRRALA1;OPRLDATE,OPRLSTOR,OPRLSUOR,OPRLSTNW:
                                  OPRLSUNW,OPRLOVST,OPRLOVEN,OPRLCUID:
                                  OPRLCDAT,OPRLCTIM,OPRLSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         update
.
UPOPRAL1  UPDATE    OPRRALA1;OPRLDATE,OPRLSTOR,OPRLSUOR,OPRLSTNW:
                                  OPRLSUNW,OPRLOVST,OPRLOVEN,OPRLCUID:
                                  OPRLCDAT,OPRLCTIM,OPRLSPAR
          RETURN
.
.         write
.
WROPRAL1  RESET     KEY30
          WRITE     OPRRALA1,KEY30;OPRLDATE,OPRLSTOR,OPRLSUOR,OPRLSTNW:
                                  OPRLSUNW,OPRLOVST,OPRLOVEN,OPRLCUID:
                                  OPRLCDAT,OPRLCTIM,OPRLSPAR
          RETURN
.
.         delete a record
.
DEOPRAL1  RESET     KEY30
          DELETE    OPRRALA1,KEY30
          RETURN
.
.         unlock all locks one user has on the file
.
ULOPRAL1  UNLOCK    OPRRALA1
          RETURN
.
.
.         positional read
.
RSOPRAL2  RESET     KEY30
          READ      OPRRALA2,KEY30;;
          RETURN
.
.         read to see if record exists
.
RAOPRAL2  MOVE      ZERO,OVRCD
          RESET     KEY30
          READ      OPRRALA2,KEY30;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDOPRAL2  MOVE      ZERO,OVRCD
          RESET     KEY30
          READ      OPRRALA2,KEY30;OPRLDATE,OPRLSTOR,OPRLSUOR,OPRLSTNW:
                                  OPRLSUNW,OPRLOVST,OPRLOVEN,OPRLCUID:
                                  OPRLCDAT,OPRLCTIM,OPRLSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read with a lock
.
RLOPRAL2  MOVE      ZERO,OVRCD
          RESET     KEY30
          READL     OPRRALA2,KEY30;OPRLDATE,OPRLSTOR,OPRLSUOR,OPRLSTNW:
                                  OPRLSUNW,OPRLOVST,OPRLOVEN,OPRLCUID:
                                  OPRLCDAT,OPRLCTIM,OPRLSPAR
          GOTO      OVERLOCK IF LOCKED
          GOTO      OVERCOND IF OVER
          RETURN
.
.         next read
.
RKOPRAL2  MOVE      ZERO,OVRCD
          READKS    OPRRALA2;OPRLDATE,OPRLSTOR,OPRLSUOR,OPRLSTNW:
                                  OPRLSUNW,OPRLOVST,OPRLOVEN,OPRLCUID:
                                  OPRLCDAT,OPRLCTIM,OPRLSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         previous read
.
RPOPRAL2  MOVE      ZERO,OVRCD
          READKP    OPRRALA2;OPRLDATE,OPRLSTOR,OPRLSUOR,OPRLSTNW:
                                  OPRLSUNW,OPRLOVST,OPRLOVEN,OPRLCUID:
                                  OPRLCDAT,OPRLCTIM,OPRLSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         update
.
UPOPRAL2  UPDATE    OPRRALA2;OPRLDATE,OPRLSTOR,OPRLSUOR,OPRLSTNW:
                                  OPRLSUNW,OPRLOVST,OPRLOVEN,OPRLCUID:
                                  OPRLCDAT,OPRLCTIM,OPRLSPAR
          RETURN
.
.         write
.
WROPRAL2  RESET     KEY30
          WRITE     OPRRALA2,KEY30;OPRLDATE,OPRLSTOR,OPRLSUOR,OPRLSTNW:
                                  OPRLSUNW,OPRLOVST,OPRLOVEN,OPRLCUID:
                                  OPRLCDAT,OPRLCTIM,OPRLSPAR
          RETURN
.
.         delete a record
.
DEOPRAL2  RESET     KEY30
          DELETE    OPRRALA2,KEY30
          RETURN
.
.         unlock all locks one user has on the file
.
ULOPRAL2  UNLOCK    OPRRALA2
          RETURN
.
