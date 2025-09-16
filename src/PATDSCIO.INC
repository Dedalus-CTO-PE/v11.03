.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIODSC                              *
. *                                                        *
. *  Function     :  I/O for patdschf file                 *
. *                                                        *
. *  Keys         :  KEY8  KEY16  KEY24                    *
. *                                                        *
. **********************************************************
.
RDSDSCH1  RESET     KEY8
          READ      PATDSCH1,KEY8;;
          RETURN
.
RDADSCH1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      PATDSCH1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDDSCH1   MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      PATDSCH1,KEY8;DURNO,DDADMNO,DDATE,DTIME,DSTAT:
                                  DDEST,DDIAG,DDIAG2,DUSD1,DUSD2:
                                  DUSD3,DUSD4,DUSD5,DFMBS,PTDSDMDC:
                                  PTDSDDRG,DWLREASN,PTDSSIDX,PTDSVOGU,PTDSOPER:
                                  PTDSUYN1,PTDSUYN2,PTDSUYN3,PTDSUYN4,PTDSDWRD:
                                  PTDSDLOS,PTDSSREF,PTDSPALD,PTDSDPMN,PTDSLSDN:
                                  PTDSCLGP,DSPARE
          GOTO      OVERCOND IF OVER
          MOVE      DDADMNO,DADMNO
          MOVE      DDATE,SDDATE
          RETURN  
.
RDKDSCH1  MOVE      ZERO,OVRCD
          READKS    PATDSCH1;DURNO,DDADMNO,DDATE,DTIME,DSTAT:
                             DDEST,DDIAG,DDIAG2,DUSD1,DUSD2:
                             DUSD3,DUSD4,DUSD5,DFMBS,PTDSDMDC:
                             PTDSDDRG,DWLREASN,PTDSSIDX,PTDSVOGU,PTDSOPER:
                             PTDSUYN1,PTDSUYN2,PTDSUYN3,PTDSUYN4,PTDSDWRD:
                             PTDSDLOS,PTDSSREF,PTDSPALD,PTDSDPMN,PTDSLSDN:
                             PTDSCLGP,DSPARE
          GOTO      OVERCOND IF OVER
          MOVE      DDADMNO,DADMNO
       	  MOVE      DDATE,SDDATE
          RETURN  
.
RDPDSCH1  MOVE      ZERO,OVRCD
          READKP    PATDSCH1;DURNO,DDADMNO,DDATE,DTIME,DSTAT:
                             DDEST,DDIAG,DDIAG2,DUSD1,DUSD2:
                             DUSD3,DUSD4,DUSD5,DFMBS,PTDSDMDC:
                             PTDSDDRG,DWLREASN,PTDSSIDX,PTDSVOGU,PTDSOPER:
                             PTDSUYN1,PTDSUYN2,PTDSUYN3,PTDSUYN4,PTDSDWRD:
                             PTDSDLOS,PTDSSREF,PTDSPALD,PTDSDPMN,PTDSLSDN:
                             PTDSCLGP,DSPARE
          GOTO      OVERCOND IF OVER
          MOVE      DDADMNO,DADMNO
          MOVE      DDATE,SDDATE
          RETURN  
.
WRDSCH1   MOVE      DADMNO,DDADMNO
          MOVE      PASSCODE,PTDSOPER
          RESET     KEY8
          WRITE     PATDSCH1,KEY8;DURNO,KEY8,DDATE,DTIME,DSTAT:
                                  DDEST,DDIAG,DDIAG2,DUSD1,DUSD2:
                                  DUSD3,DUSD4,DUSD5,DFMBS,PTDSDMDC:
                                  PTDSDDRG,DWLREASN,PTDSSIDX,PTDSVOGU,PTDSOPER:
                                  PTDSUYN1,PTDSUYN2,PTDSUYN3,PTDSUYN4,PTDSDWRD:
                                  PTDSDLOS,PTDSSREF,PTDSPALD,PTDSDPMN,PTDSLSDN:
                                  PTDSCLGP,DSPARE
          RETURN  
.
UPDSCH1   MOVE      DADMNO,DDADMNO
          UPDATE    PATDSCH1;DURNO,DDADMNO,DDATE,DTIME,DSTAT:
                             DDEST,DDIAG,DDIAG2,DUSD1,DUSD2:
                             DUSD3,DUSD4,DUSD5,DFMBS,PTDSDMDC:
                             PTDSDDRG,DWLREASN,PTDSSIDX,PTDSVOGU,PTDSOPER:
                             PTDSUYN1,PTDSUYN2,PTDSUYN3,PTDSUYN4,PTDSDWRD:
                             PTDSDLOS,PTDSSREF,PTDSPALD,PTDSDPMN,PTDSLSDN:
                             PTDSCLGP,DSPARE
          RETURN  
.
DEDSCH1   MOVE      ZERO,OVRCD
          RESET     KEY8
          DELETE    PATDSCH1,KEY8
          RETURN
.
.
RDSDSCH2  RESET     KEY16
          READ      PATDSCH2,KEY16;;
          RETURN
.
RDADSCH2  MOVE      ZERO,OVRCD
          RESET     KEY16
          READ      PATDSCH2,KEY16;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDDSCH2   MOVE      ZERO,OVRCD
          RESET     KEY16
          READ      PATDSCH2,KEY16;DURNO,DDADMNO,DDATE,DTIME,DSTAT:
                                   DDEST,DDIAG,DDIAG2,DUSD1,DUSD2:
                                   DUSD3,DUSD4,DUSD5,DFMBS,PTDSDMDC:
                                   PTDSDDRG,DWLREASN,PTDSSIDX,PTDSVOGU,PTDSOPER:
                                   PTDSUYN1,PTDSUYN2,PTDSUYN3,PTDSUYN4,PTDSDWRD:
                                   PTDSDLOS,PTDSSREF,PTDSPALD,PTDSDPMN,PTDSLSDN:
                                   PTDSCLGP,DSPARE
          GOTO      OVERCOND IF OVER
          MOVE      DDADMNO,DADMNO
          MOVE      DDATE,SDDATE
          RETURN  
.
RDKDSCH2  MOVE      ZERO,OVRCD
          READKS    PATDSCH2;DURNO,DDADMNO,DDATE,DTIME,DSTAT:
                             DDEST,DDIAG,DDIAG2,DUSD1,DUSD2:
                             DUSD3,DUSD4,DUSD5,DFMBS,PTDSDMDC:
                             PTDSDDRG,DWLREASN,PTDSSIDX,PTDSVOGU,PTDSOPER:
                             PTDSUYN1,PTDSUYN2,PTDSUYN3,PTDSUYN4,PTDSDWRD:
                             PTDSDLOS,PTDSSREF,PTDSPALD,PTDSDPMN,PTDSLSDN:
                             PTDSCLGP,DSPARE
          GOTO      OVERCOND IF OVER
          MOVE      DDADMNO,DADMNO
          MOVE      DDATE,SDDATE
          RETURN  
.
RDPDSCH2  MOVE      ZERO,OVRCD
          READKP    PATDSCH2;DURNO,DDADMNO,DDATE,DTIME,DSTAT:
                             DDEST,DDIAG,DDIAG2,DUSD1,DUSD2:
                             DUSD3,DUSD4,DUSD5,DFMBS,PTDSDMDC:
                             PTDSDDRG,DWLREASN,PTDSSIDX,PTDSVOGU,PTDSOPER:
                             PTDSUYN1,PTDSUYN2,PTDSUYN3,PTDSUYN4,PTDSDWRD:
                             PTDSDLOS,PTDSSREF,PTDSPALD,PTDSDPMN,PTDSLSDN:
                             PTDSCLGP,DSPARE
          GOTO      OVERCOND IF OVER
          MOVE      DDADMNO,DADMNO
          MOVE      DDATE,SDDATE
          RETURN  
.
UPDSCH2   MOVE      DADMNO,DDADMNO
          UPDATE    PATDSCH2;DURNO,DDADMNO,DDATE,DTIME,DSTAT:
                             DDEST,DDIAG,DDIAG2,DUSD1,DUSD2:
                             DUSD3,DUSD4,DUSD5,DFMBS,PTDSDMDC:
                             PTDSDDRG,DWLREASN,PTDSSIDX,PTDSVOGU,PTDSOPER:
                             PTDSUYN1,PTDSUYN2,PTDSUYN3,PTDSUYN4,PTDSDWRD:
                             PTDSDLOS,PTDSSREF,PTDSPALD,PTDSDPMN,PTDSLSDN:
                             PTDSCLGP,DSPARE
          RETURN  
.
.
RDSDSCH3  RESET     KEY24
          READ      PATDSCH3,KEY24;;
          RETURN
.
RDADSCH3  MOVE      ZERO,OVRCD
          RESET     KEY24
          READ      PATDSCH3,KEY24;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDSCH3   MOVE      ZERO,OVRCD
          RESET     KEY24
          READ      PATDSCH3,KEY24;DURNO,DDADMNO,DDATE,DTIME,DSTAT:
                                   DDEST,DDIAG,DDIAG2,DUSD1,DUSD2:
                                   DUSD3,DUSD4,DUSD5,DFMBS,PTDSDMDC:
                                   PTDSDDRG,DWLREASN,PTDSSIDX,PTDSVOGU,PTDSOPER:
                                   PTDSUYN1,PTDSUYN2,PTDSUYN3,PTDSUYN4,PTDSDWRD:
                                   PTDSDLOS,PTDSSREF,PTDSPALD,PTDSDPMN,PTDSLSDN:
                                   PTDSCLGP,DSPARE
          GOTO      OVERCOND IF OVER
          MOVE      DDADMNO,DADMNO
          MOVE      DDATE,SDDATE
          RETURN
.
RDKDSCH3  MOVE      ZERO,OVRCD
          READKS    PATDSCH3;DURNO,DDADMNO,DDATE,DTIME,DSTAT:
                             DDEST,DDIAG,DDIAG2,DUSD1,DUSD2:
                             DUSD3,DUSD4,DUSD5,DFMBS,PTDSDMDC:
                             PTDSDDRG,DWLREASN,PTDSSIDX,PTDSVOGU,PTDSOPER:
                             PTDSUYN1,PTDSUYN2,PTDSUYN3,PTDSUYN4,PTDSDWRD:
                             PTDSDLOS,PTDSSREF,PTDSPALD,PTDSDPMN,PTDSLSDN:
                             PTDSCLGP,DSPARE
          GOTO      OVERCOND IF OVER
          MOVE      DDADMNO,DADMNO
          MOVE      DDATE,SDDATE
          RETURN
.
RDPDSCH3  MOVE      ZERO,OVRCD
          READKP    PATDSCH3;DURNO,DDADMNO,DDATE,DTIME,DSTAT:
                             DDEST,DDIAG,DDIAG2,DUSD1,DUSD2:
                             DUSD3,DUSD4,DUSD5,DFMBS,PTDSDMDC:
                             PTDSDDRG,DWLREASN,PTDSSIDX,PTDSVOGU,PTDSOPER:
                             PTDSUYN1,PTDSUYN2,PTDSUYN3,PTDSUYN4,PTDSDWRD:
                             PTDSDLOS,PTDSSREF,PTDSPALD,PTDSDPMN,PTDSLSDN:
                             PTDSCLGP,DSPARE
          GOTO      OVERCOND IF OVER
          MOVE      DDADMNO,DADMNO
          MOVE      DDATE,SDDATE
          RETURN
.
UPDSCH3   MOVE      DADMNO,DDADMNO
          UPDATE    PATDSCH3;DURNO,DDADMNO,DDATE,DTIME,DSTAT:
                             DDEST,DDIAG,DDIAG2,DUSD1,DUSD2:
                             DUSD3,DUSD4,DUSD5,DFMBS,PTDSDMDC:
                             PTDSDDRG,DWLREASN,PTDSSIDX,PTDSVOGU,PTDSOPER:
                             PTDSUYN1,PTDSUYN2,PTDSUYN3,PTDSUYN4,PTDSDWRD:
                             PTDSDLOS,PTDSSREF,PTDSPALD,PTDSDPMN,PTDSLSDN:
                             PTDSCLGP,DSPARE
          RETURN
