.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIONUR                              *
. *                                                        *
. *  Function     :  I/O for patnursm file                 *
. *                                                        *
. *  Keys         :  KEY6                                  *
. *                                                        *
. *  Modifications:  V5.00 01/06/89 K.Peak                 *
. *                        Change include heading          *
. *                  V5.01.01 02.03/94 Ian Rutt            *
. *                        Modified to enable record lock  *
. *                                                        *
. **********************************************************
.
RDSNURS1
         MOVE      ZERO,OVRCD
         RESET     KEY6
         READ      PATNURS1,KEY6;;
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDNURS1
         MOVE      ZERO,OVRCD
         RESET     KEY6
         READ      PATNURS1,KEY6;NSTAT,NWARD,NSDESC,NSIST,NSEXTN,NSSPARE
         GOTO      OVERCOND IF OVER
         RETURN  
.
RLNURS1
         MOVE      ZERO,OVRCD
         RESET     KEY6
         READL     PATNURS1,KEY6;NSTAT,NWARD,NSDESC,NSIST,NSEXTN,NSSPARE
         GOTO      OVERLOCK IF LOCKED
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDKNURS1
         MOVE      ZERO,OVRCD
         READKS    PATNURS1;NSTAT,NWARD,NSDESC,NSIST,NSEXTN,NSSPARE
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDPNURS1
         MOVE      ZERO,OVRCD
         READKP    PATNURS1;NSTAT,NWARD,NSDESC,NSIST,NSEXTN,NSSPARE
         GOTO      OVERCOND IF OVER
         RETURN  
.
WRNURS1
         MOVE      ZERO,OVRCD
         RESET     KEY6
         TRAP      OVERLOCK IF IO
         WRITE     PATNURS1,KEY6;KEY6,NSDESC,NSIST,NSEXTN,NSSPARE
         TRAPCLR   IO
         RETURN  
.
ULNURS1
         UNLOCK    PATNURS1
         RETURN
.
UPNURS1
         UPDATE    PATNURS1;NSTAT,NWARD,NSDESC,NSIST,NSEXTN,NSSPARE
         RETURN  
.
DENURS1
         RESET     KEY6
         DELETE    PATNURS1,KEY6
         RETURN
