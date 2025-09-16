.******************************************************************************
. WATCATIO.INC
. ------------
. Filename       : watcataf
. Description    : Waiting List Category Change file
. Programmer     : Bill Dew  06/06/1990
.
. Ouput signals  : OVRCD   FORM 1  0=NOT OVER   1=OVER
. KEY29          : WATCATA1, WATCATA2
.
. Modifications  : V5.01.01  19/10/90 DIG / i chung (07/11/90)
.                            Changed incorrect Keys size (was 30, now 29)
.
.******************************************************************************
.
. ------  I/O routines for 1st index ------
.
RAWTCAT1  MOVE      ZERO,OVRCD
          RESET     KEY29
          READ      WATCATA1,KEY29;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSWTCAT1  RESET     KEY29
          READ      WATCATA1,KEY29;;
          RETURN
.
RDWTCAT1  MOVE      ZERO,OVRCD
          RESET     KEY29
          READ      WATCATA1,KEY29;WTCAEDAT,WTCAURNO,WTCAPROC,DWTCAPCN:
                    WTCACATF,WTCACODF,WTCACODT,WTCAADTE,WTCAATIM,WTCAWEBI:
                    WTCASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWTCAPCN,WTCAPCNT
          RETURN
.
RKWTCAT1  MOVE      ZERO,OVRCD
          READKS    WATCATA1;WTCAEDAT,WTCAURNO,WTCAPROC,DWTCAPCN:
                    WTCACATF,WTCACODF,WTCACODT,WTCAADTE,WTCAATIM,WTCAWEBI:
                    WTCASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWTCAPCN,WTCAPCNT
          RETURN
.
RPWTCAT1  MOVE      ZERO,OVRCD
          READKP    WATCATA1;WTCAEDAT,WTCAURNO,WTCAPROC,DWTCAPCN:
                    WTCACATF,WTCACODF,WTCACODT,WTCAADTE,WTCAATIM,WTCAWEBI:
                    WTCASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWTCAPCN,WTCAPCNT
          RETURN
.
WRWTCAT1  RESET     KEY29
          MOVE      WTCAPCNT,DWTCAPCN
          WRITE     WATCATA1,KEY29;WTCAEDAT,WTCAURNO,WTCAPROC,DWTCAPCN:
                    WTCACATF,WTCACODF,WTCACODT,WTCAADTE,WTCAATIM,WTCAWEBI:
                    WTCASPAR
          RETURN
.
UPWTCAT1  MOVE      WTCAPCNT,DWTCAPCN
          UPDATE    WATCATA1;WTCAEDAT,WTCAURNO,WTCAPROC,DWTCAPCN:
                    WTCACATF,WTCACODF,WTCACODT,WTCAADTE,WTCAATIM,WTCAWEBI:
                    WTCASPAR
          RETURN
.
DEWTCAT1  RESET     KEY29
          DELETE    WATCATA1,KEY29
          RETURN
.
.         IO routines for 2nd index
.
RAWTCAT2  MOVE      ZERO,OVRCD
          RESET     KEY29
          READ      WATCATA2,KEY29;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSWTCAT2  RESET     KEY29
          READ      WATCATA2,KEY29;;
          RETURN
.
RDWTCAT2  MOVE      ZERO,OVRCD
          RESET     KEY29
          READ      WATCATA2,KEY29;WTCAEDAT,WTCAURNO,WTCAPROC,DWTCAPCN:
                    WTCACATF,WTCACODF,WTCACODT,WTCAADTE,WTCAATIM,WTCAWEBI:
                    WTCASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWTCAPCN,WTCAPCNT
          RETURN
.
RKWTCAT2  MOVE      ZERO,OVRCD
          READKS    WATCATA2;WTCAEDAT,WTCAURNO,WTCAPROC,DWTCAPCN:
                    WTCACATF,WTCACODF,WTCACODT,WTCAADTE,WTCAATIM,WTCAWEBI:
                    WTCASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWTCAPCN,WTCAPCNT
          RETURN
.
RPWTCAT2  MOVE      ZERO,OVRCD
          READKP    WATCATA2;WTCAEDAT,WTCAURNO,WTCAPROC,DWTCAPCN:
                    WTCACATF,WTCACODF,WTCACODT,WTCAADTE,WTCAATIM,WTCAWEBI:
                    WTCASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWTCAPCN,WTCAPCNT
          RETURN
.
UPWTCAT2  MOVE      WTCAPCNT,DWTCAPCN
          UPDATE    WATCATA2;WTCAEDAT,WTCAURNO,WTCAPROC,DWTCAPCN:
                    WTCACATF,WTCACODF,WTCACODT,WTCAADTE,WTCAATIM,WTCAWEBI:
                    WTCASPAR
          RETURN
.
DEWTCAT2  RESET     KEY29
          DELETE    WATCATA2,KEY29
          RETURN
.
