. *****************************************************************************
. *                                                                           *
. *  Include Name :  PATWC1IO                                                 *
. *                                                                           *
. *  Function     :  I/O for patwc1af file                                    *
. *                                                                           *
. *  Keys         :  KEY8,KEY16,KEY44                                         *
. *                                                                           *
. *  Modifications:                                                           *
. *       V9.10.01  02/05/2008  Mike Laming   CAR 153670                      *
. *                 Add "Read Previous" on Key 3 (RDPWCOM3)                   *
. *               V9.02.01 20/02/03 J.Tan                                     *
. *                        Added index 2,3,U/R,visit date                     *
. *                  V5.00 01/06/89 K.Peak                                    *
. *                        Change include heading                             *
. *                        Change Admission to 8 characters                   *
. *                  V5.01 20.11.92 Whirlpool                                 *
. *                          DUDLEY CHANGES                                   *
. *                  V5.02 12/01/94 I.Rutt                                    *
. *                        Removed SFORMAT of address vars                    *
. *                        from PATWC1FD                                      *
. *                                                                           *
. *****************************************************************************
.
RDSWCOM1  RESET     KEY8
          READ      PATWC1A1,KEY8;;
          RETURN
.
RDWCOM1   MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      PATWC1A1,KEY8;DWCADMNO,WCENAME:
                                  WCEADD1,WCEADD2,WCEADD3,WCEADD4:
                                  WCEPOST,WCETELE,WCACDAT,WCACCPT,WCICODE:
                                  WCCLMNO,WCCOMN1,WCCOMN2,PTWCURNO,PTWCVDAT:
                                  PTWCSPAR

          GOTO      OVERCOND IF OVER
          MOVE      DWCADMNO,WCADMNO
          RETURN
.
RDKWCOM1  MOVE      ZERO,OVRCD
          READKS    PATWC1A1;DWCADMNO,WCENAME,WCEADD1,WCEADD2,WCEADD3,WCEADD4:
                             WCEPOST,WCETELE,WCACDAT,WCACCPT,WCICODE:
                             WCCLMNO,WCCOMN1,WCCOMN2,PTWCURNO,PTWCVDAT:
                             PTWCSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWCADMNO,WCADMNO
          RETURN
.
WRWCOM1   MOVE      WCADMNO,DWCADMNO
          RESET     KEY8
          WRITE     PATWC1A1,KEY8;KEY8,WCENAME,WCEADD1,WCEADD2,WCEADD3,WCEADD4:
                                  WCEPOST,WCETELE,WCACDAT,WCACCPT,WCICODE:
                                  WCCLMNO,WCCOMN1,WCCOMN2,PTWCURNO,PTWCVDAT:
                                  PTWCSPAR
          RETURN
.
UPWCOM1   MOVE      WCADMNO,DWCADMNO
          UPDATE    PATWC1A1;DWCADMNO,WCENAME,WCEADD1,WCEADD2,WCEADD3,WCEADD4:
                             WCEPOST,WCETELE,WCACDAT,WCACCPT,WCICODE:
                             WCCLMNO,WCCOMN1,WCCOMN2,PTWCURNO,PTWCVDAT:
                             PTWCSPAR
          RETURN
.
DEWCOM1   RESET     KEY8
          DELETE    PATWC1A1,KEY8
          RETURN

RDAWCOM1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      PATWC1A1,KEY8;ANS 
          GOTO      OVERCOND IF OVER                                            
          RETURN             
.
RDSWCOM2  RESET     KEY16
          READ      PATWC1A2,KEY16;;
          RETURN
.
RDWCOM2   MOVE      ZERO,OVRCD
          RESET     KEY16
          READ      PATWC1A2,KEY16;DWCADMNO,WCENAME:
                                  WCEADD1,WCEADD2,WCEADD3,WCEADD4:
                                  WCEPOST,WCETELE,WCACDAT,WCACCPT,WCICODE:
                                  WCCLMNO,WCCOMN1,WCCOMN2,PTWCURNO,PTWCVDAT:
                                  PTWCSPAR

          GOTO      OVERCOND IF OVER
          MOVE      DWCADMNO,WCADMNO
          RETURN
.
RDKWCOM2  MOVE      ZERO,OVRCD
          READKS    PATWC1A2;DWCADMNO,WCENAME,WCEADD1,WCEADD2,WCEADD3,WCEADD4:
                             WCEPOST,WCETELE,WCACDAT,WCACCPT,WCICODE:
                             WCCLMNO,WCCOMN1,WCCOMN2,PTWCURNO,PTWCVDAT:
                             PTWCSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWCADMNO,WCADMNO
          RETURN
.
RDPWCOM2  MOVE      ZERO,OVRCD
          READKP    PATWC1A2;DWCADMNO,WCENAME,WCEADD1,WCEADD2,WCEADD3,WCEADD4:
                             WCEPOST,WCETELE,WCACDAT,WCACCPT,WCICODE:
                             WCCLMNO,WCCOMN1,WCCOMN2,PTWCURNO,PTWCVDAT:
                             PTWCSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWCADMNO,WCADMNO
          RETURN
.
WRWCOM2   MOVE      WCADMNO,DWCADMNO
          RESET     KEY16
          WRITE     PATWC1A2,KEY16;DWCADMNO,WCENAME,WCEADD1,WCEADD2:
                                  WCEADD3,WCEADD4:
                                  WCEPOST,WCETELE,WCACDAT,WCACCPT,WCICODE:
                                  WCCLMNO,WCCOMN1,WCCOMN2,PTWCURNO,PTWCVDAT:
                                  PTWCSPAR
          RETURN
.
UPWCOM2   MOVE      WCADMNO,DWCADMNO
          UPDATE    PATWC1A2;DWCADMNO,WCENAME,WCEADD1,WCEADD2,WCEADD3,WCEADD4:
                             WCEPOST,WCETELE,WCACDAT,WCACCPT,WCICODE:
                             WCCLMNO,WCCOMN1,WCCOMN2,PTWCURNO,PTWCVDAT:
                             PTWCSPAR
          RETURN
.
DEWCOM2   RESET     KEY16
          DELETE    PATWC1A2,KEY16
          RETURN

RDAWCOM2  MOVE      ZERO,OVRCD
          RESET     KEY16
          READ      PATWC1A2,KEY16;ANS 
          GOTO      OVERCOND IF OVER                                            

RDSWCOM3  RESET     KEY44
          READ      PATWC1A3,KEY44;;
          RETURN
.
RDWCOM3   MOVE      ZERO,OVRCD
          RESET     KEY44
          READ      PATWC1A3,KEY44;DWCADMNO,WCENAME:
                                  WCEADD1,WCEADD2,WCEADD3,WCEADD4:
                                  WCEPOST,WCETELE,WCACDAT,WCACCPT,WCICODE:
                                  WCCLMNO,WCCOMN1,WCCOMN2,PTWCURNO,PTWCVDAT:
                                  PTWCSPAR

          GOTO      OVERCOND IF OVER
          MOVE      DWCADMNO,WCADMNO
          RETURN
.
RDKWCOM3  MOVE      ZERO,OVRCD
          READKS    PATWC1A3;DWCADMNO,WCENAME,WCEADD1,WCEADD2,WCEADD3,WCEADD4:
                             WCEPOST,WCETELE,WCACDAT,WCACCPT,WCICODE:
                             WCCLMNO,WCCOMN1,WCCOMN2,PTWCURNO,PTWCVDAT:
                             PTWCSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWCADMNO,WCADMNO
          RETURN
.
RDPWCOM3  MOVE      ZERO,OVRCD
          READKP    PATWC1A3;DWCADMNO,WCENAME,WCEADD1,WCEADD2,WCEADD3,WCEADD4:
                             WCEPOST,WCETELE,WCACDAT,WCACCPT,WCICODE:
                             WCCLMNO,WCCOMN1,WCCOMN2,PTWCURNO,PTWCVDAT:
                             PTWCSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWCADMNO,WCADMNO
          RETURN
.
WRWCOM3   MOVE      WCADMNO,DWCADMNO
          RESET     KEY44
          WRITE     PATWC1A3,KEY44;DWCADMNO,WCENAME,WCEADD1,WCEADD2:
                                  WCEADD3,WCEADD4:
                                  WCEPOST,WCETELE,WCACDAT,WCACCPT,WCICODE:
                                  WCCLMNO,WCCOMN1,WCCOMN2,PTWCURNO,PTWCVDAT:
                                  PTWCSPAR
          RETURN
.
UPWCOM3   MOVE      WCADMNO,DWCADMNO
          UPDATE    PATWC1A3;DWCADMNO,WCENAME,WCEADD1,WCEADD2,WCEADD3,WCEADD4:
                             WCEPOST,WCETELE,WCACDAT,WCACCPT,WCICODE:
                             WCCLMNO,WCCOMN1,WCCOMN2,PTWCURNO,PTWCVDAT:
                             PTWCSPAR
          RETURN
.
DEWCOM3   RESET     KEY44
          DELETE    PATWC1A3,KEY44
          RETURN

RDAWCOM3  MOVE      ZERO,OVRCD
          RESET     KEY44
          READ      PATWC1A3,KEY44;ANS 
          GOTO      OVERCOND IF OVER                                            
.
