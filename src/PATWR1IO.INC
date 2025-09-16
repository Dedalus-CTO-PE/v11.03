.
. *****************************************************************************
. *                                                                           *
. *  Include Name :  PATWR1IO                                                 *
. *                                                                           *
. *  Function     :  I/O for patwr1af file                                    *
. *                                                                           *
. *  Keys         :  KEY6  KEY14                                              *
. *                                                                           *
. *  Modifications:                                                           *
. *         V10.03.01 22/11/2011  Ebon Clements    CAR 255738                 *
. *                   Added index 8                                           *
. *         V10.02.02 11/07/2011  Peter McMullen   CAR 240725                 *
. *                   Move position of WEXTN                                  *
. *         V10.02.01 09/05/2011  Peter McMullen   CAR 240725                 *
. *                   Added PTWDSDES,  index 7                                *
. *         V10.00.01 21/05/2010  Steve Armstrong  CAR 222489                 *
. *                   Added PTWDDOST, PTWDDOET and PTWDSPAR                   *
. *                   19/05/2010  Jill Parkinson  CAR                         *
. *                  Added PTWDNDBD - Number of dynamic beds available        *
. *         V9.12.01 09/09/2009  Davin         CAR 204945                     *
. *                  Added PTWDCFCD (Cancer Facility Code)                    *
. *         V9.09.01 13/12/2007  Mike Laming   CAR 156741                     *
. *                  Added PTWDDFVS (Default Visitors) (Yes/No)               *
. *                        PTWDDPH (Default Phone Calls) (Yes/No)             *
. *         V9.04.02 07/12/2004  Ebon Clements CAR 55750                      *
. *                  Added PTWDCOMM - Ward / Bed Comments                     *
. *         V9.04.01 17/08/2004  Lina Vo CAR 51746                            *
. *                  Added 5th & 6th Index with Hospital ID                   *
. * ------------------------------------------------------                    *
. *         V9.03.01 18/08/2003  Sylvek Litewka  CAR 41826                    *
. *                  Added new variables from FVDW to UPID                    *
. * ------------------------------------------------------                    *
. *                  V5.00 01/06/89 K.Peak                                    *
. *                        Change include heading                             *
. *                        Change Admission to 8 characters                   *
. *                  V5.01 20/06/89 Graeme Williams                           *
. *                        Added routines for 4th index                       *
. *                        SRF 101101                                         *
. *                  V5.02 07/06/93 J.Tan                                     *
. *                        Added RDAWARD1 routine                             *
. *                  V5.03 14/02/94 whirlpool                                 *
. *                        fixed RDSWARD2 so that it uses                     *
. *                        correct key!!!!                                    *
. *                  V5.04 31/05/95  ROD                                      *
. *                        added PTWDLOCN - Med Rec Locn.                     *
. *                 V9.01.01 16/05/2001 J.Tan                                 *
. *                          Added Nursing station number                     *
. *****************************************************************************
.
RDSWARD1  RESET     KEY6
          READ      PATWR1A1,KEY6;;
          RETURN  
.
RDAWARD1  RESET     KEY6
          MOVE      ZERO,OVRCD
          READ      PATWR1A1,KEY6;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RLWARD1   MOVE      ZERO,OVRCD
          RESET     KEY6
          READL     PATWR1A1,KEY6;WWARD,WBED,WBDESC,DWADMNO,WSPARE4:
                                  WBLINE,WRTYPE,WEFRBT,WNBEDS,WHCSSUB,WSERV:
                                  WPLUR,WINPUT,WOCCBED,WCLASS,DWSTBY,WACTIVE:
                                  PTWDHOSN,PTWDDNIN,PTWDIAGE,PTWDICRE:
                                  PTWDSEX,PTWDLOCN,PTWDGLDG,PTWDNSTA,PTWDDOSA:
                                  PTWDFVDW,PTWDBDST,PTWDRBSC,PTWDHKST,PTWDIFST:
                                  PTWDCRDT,PTWDCRTM,PTWDCRID,PTWDUPDT,PTWDUPTM:
                                  PTWDUPID,PTWDCOMM,PTWDDFVS,PTWDDFPH:
                                  PTWDCFCD,PTWDNDBD,PTWDDOST,PTWDDOET,PTWDSDES:
                                  WEXTN,PTWDSPAR
          GOTO      OVERLOCK IF LOCKED
          GOTO      OVERCOND IF OVER
          MOVE      DWADMNO,WADMNO
          MOVE      DWSTBY,WSTBY
          MOVE      WWARD,SWWARD
          MOVE      WBED,SWBED
          MOVE      WADMNO,SWADMNO
          RETURN  
.
RDWARD1   MOVE      ZERO,OVRCD
          RESET     KEY6
          READ      PATWR1A1,KEY6;WWARD,WBED,WBDESC,DWADMNO,WSPARE4:
                                  WBLINE,WRTYPE,WEFRBT,WNBEDS,WHCSSUB,WSERV:
                                  WPLUR,WINPUT,WOCCBED,WCLASS,DWSTBY,WACTIVE:
                                  PTWDHOSN,PTWDDNIN,PTWDIAGE,PTWDICRE:
                                  PTWDSEX,PTWDLOCN,PTWDGLDG,PTWDNSTA,PTWDDOSA:
                                  PTWDFVDW,PTWDBDST,PTWDRBSC,PTWDHKST,PTWDIFST:
                                  PTWDCRDT,PTWDCRTM,PTWDCRID,PTWDUPDT,PTWDUPTM:
                                  PTWDUPID,PTWDCOMM,PTWDDFVS,PTWDDFPH:
                                  PTWDCFCD,PTWDNDBD,PTWDDOST,PTWDDOET,PTWDSDES:
                                  WEXTN,PTWDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWADMNO,WADMNO
          MOVE      DWSTBY,WSTBY
          MOVE      WWARD,SWWARD
          MOVE      WBED,SWBED
          MOVE      WADMNO,SWADMNO
          RETURN  
.
RDKWARD1  MOVE      ZERO,OVRCD
          READKS    PATWR1A1;WWARD,WBED,WBDESC,DWADMNO,WSPARE4:
                             WBLINE,WRTYPE,WEFRBT,WNBEDS,WHCSSUB,WSERV:
                             WPLUR,WINPUT,WOCCBED,WCLASS,DWSTBY,WACTIVE:
                             PTWDHOSN,PTWDDNIN,PTWDIAGE,PTWDICRE:
                             PTWDSEX,PTWDLOCN,PTWDGLDG,PTWDNSTA,PTWDDOSA:
                             PTWDFVDW,PTWDBDST,PTWDRBSC,PTWDHKST,PTWDIFST:
                             PTWDCRDT,PTWDCRTM,PTWDCRID,PTWDUPDT,PTWDUPTM:
                             PTWDUPID,PTWDCOMM,PTWDDFVS,PTWDDFPH:
                             PTWDCFCD,PTWDNDBD,PTWDDOST,PTWDDOET,PTWDSDES:
                             WEXTN,PTWDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWADMNO,WADMNO
          MOVE      DWSTBY,WSTBY
          MOVE      WWARD,SWWARD
          MOVE      WBED,SWBED
          MOVE      WADMNO,SWADMNO
          RETURN  
.
RDPWARD1  MOVE      ZERO,OVRCD
          READKP    PATWR1A1;WWARD,WBED,WBDESC,DWADMNO,WSPARE4:
                             WBLINE,WRTYPE,WEFRBT,WNBEDS,WHCSSUB,WSERV:
                             WPLUR,WINPUT,WOCCBED,WCLASS,DWSTBY,WACTIVE:
                             PTWDHOSN,PTWDDNIN,PTWDIAGE,PTWDICRE:
                             PTWDSEX,PTWDLOCN,PTWDGLDG,PTWDNSTA,PTWDDOSA:
                             PTWDFVDW,PTWDBDST,PTWDRBSC,PTWDHKST,PTWDIFST:
                             PTWDCRDT,PTWDCRTM,PTWDCRID,PTWDUPDT,PTWDUPTM:
                             PTWDUPID,PTWDCOMM,PTWDDFVS,PTWDDFPH:
                             PTWDCFCD,PTWDNDBD,PTWDDOST,PTWDDOET,PTWDSDES:
                             WEXTN,PTWDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWADMNO,WADMNO
          MOVE      DWSTBY,WSTBY
          MOVE      WWARD,SWWARD
          MOVE      WBED,SWBED
          MOVE      WADMNO,SWADMNO
          RETURN  
.
WRWARD1   MOVE      ZERO,OVRCD
          RESET     KEY6
          MOVE      WADMNO,DWADMNO
          MOVE      WSTBY,DWSTBY
          TRAP      OVERLOCK IF IO
          WRITE     PATWR1A1,KEY6;WWARD,WBED,WBDESC,DWADMNO,WSPARE4:
                                  WBLINE,WRTYPE,WEFRBT,WNBEDS,WHCSSUB,WSERV:
                                  WPLUR,WINPUT,WOCCBED,WCLASS,DWSTBY,WACTIVE:
                                  PTWDHOSN,PTWDDNIN,PTWDIAGE,PTWDICRE:
                                  PTWDSEX,PTWDLOCN,PTWDGLDG,PTWDNSTA,PTWDDOSA:
                                  PTWDFVDW,PTWDBDST,PTWDRBSC,PTWDHKST,PTWDIFST:
                                  PTWDCRDT,PTWDCRTM,PTWDCRID,PTWDUPDT,PTWDUPTM:
                                  PTWDUPID,PTWDCOMM,PTWDDFVS,PTWDDFPH:
                                  PTWDCFCD,PTWDNDBD,PTWDDOST,PTWDDOET,PTWDSDES:
                                  WEXTN,PTWDSPAR
          TRAPCLR   IO
          RETURN  
.
ULWARD1   UNLOCK    PATWR1A1
          RETURN
.
UPWARD1   MOVE      WADMNO,DWADMNO
          MOVE      WSTBY,DWSTBY
          UPDATE    PATWR1A1;WWARD,WBED,WBDESC,DWADMNO,WSPARE4:
                             WBLINE,WRTYPE,WEFRBT,WNBEDS,WHCSSUB,WSERV:
                             WPLUR,WINPUT,WOCCBED,WCLASS,DWSTBY,WACTIVE:
                             PTWDHOSN,PTWDDNIN,PTWDIAGE,PTWDICRE:
                             PTWDSEX,PTWDLOCN,PTWDGLDG,PTWDNSTA,PTWDDOSA:
                             PTWDFVDW,PTWDBDST,PTWDRBSC,PTWDHKST,PTWDIFST:
                             PTWDCRDT,PTWDCRTM,PTWDCRID,PTWDUPDT,PTWDUPTM:
                             PTWDUPID,PTWDCOMM,PTWDDFVS,PTWDDFPH:
                             PTWDCFCD,PTWDNDBD,PTWDDOST,PTWDDOET,PTWDSDES:
                             WEXTN,PTWDSPAR
          RETURN  
.
DEWARD1   RESET     KEY6
          DELETE    PATWR1A1,KEY6
          RETURN
.
.
RDSWARD2  RESET     KEY14
          READ      PATWR1A2,KEY14;;
          RETURN
.
RDWARD2   MOVE      ZERO,OVRCD
          RESET     KEY14
          READ      PATWR1A2,KEY14;WWARD,WBED,WBDESC,DWADMNO,WSPARE4:
                                   WBLINE,WRTYPE,WEFRBT,WNBEDS,WHCSSUB,WSERV:
                                   WPLUR,WINPUT,WOCCBED,WCLASS,DWSTBY,WACTIVE:
                                   PTWDHOSN,PTWDDNIN,PTWDIAGE,PTWDICRE:
                                   PTWDSEX,PTWDLOCN,PTWDGLDG,PTWDNSTA,PTWDDOSA:
                                   PTWDFVDW,PTWDBDST,PTWDRBSC,PTWDHKST,PTWDIFST:
                                   PTWDCRDT,PTWDCRTM,PTWDCRID,PTWDUPDT,PTWDUPTM:
                                   PTWDUPID,PTWDCOMM,PTWDDFVS,PTWDDFPH:
                                   PTWDCFCD,PTWDNDBD,PTWDDOST,PTWDDOET,PTWDSDES:
                                   WEXTN,PTWDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWADMNO,WADMNO
          MOVE      DWSTBY,WSTBY
          MOVE      WWARD,SWWARD
          MOVE      WBED,SWBED
          MOVE      WADMNO,SWADMNO
          RETURN  
.
RDKWARD2  MOVE      ZERO,OVRCD
          READKS    PATWR1A2;WWARD,WBED,WBDESC,DWADMNO,WSPARE4:
                             WBLINE,WRTYPE,WEFRBT,WNBEDS,WHCSSUB,WSERV:
                             WPLUR,WINPUT,WOCCBED,WCLASS,DWSTBY,WACTIVE:
                             PTWDHOSN,PTWDDNIN,PTWDIAGE,PTWDICRE:
                             PTWDSEX,PTWDLOCN,PTWDGLDG,PTWDNSTA,PTWDDOSA:
                             PTWDFVDW,PTWDBDST,PTWDRBSC,PTWDHKST,PTWDIFST:
                             PTWDCRDT,PTWDCRTM,PTWDCRID,PTWDUPDT,PTWDUPTM:
                             PTWDUPID,PTWDCOMM,PTWDDFVS,PTWDDFPH:
                             PTWDCFCD,PTWDNDBD,PTWDDOST,PTWDDOET,PTWDSDES:
                             WEXTN,PTWDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWADMNO,WADMNO
          MOVE      DWSTBY,WSTBY
          MOVE      WWARD,SWWARD
          MOVE      WBED,SWBED
          MOVE      WADMNO,SWADMNO
          RETURN  
.
RDPWARD2  MOVE      ZERO,OVRCD
          READKP    PATWR1A2;WWARD,WBED,WBDESC,DWADMNO,WSPARE4:
                             WBLINE,WRTYPE,WEFRBT,WNBEDS,WHCSSUB,WSERV:
                             WPLUR,WINPUT,WOCCBED,WCLASS,DWSTBY,WACTIVE:
                             PTWDHOSN,PTWDDNIN,PTWDIAGE,PTWDICRE:
                             PTWDSEX,PTWDLOCN,PTWDGLDG,PTWDNSTA,PTWDDOSA:
                             PTWDFVDW,PTWDBDST,PTWDRBSC,PTWDHKST,PTWDIFST:
                             PTWDCRDT,PTWDCRTM,PTWDCRID,PTWDUPDT,PTWDUPTM:
                             PTWDUPID,PTWDCOMM,PTWDDFVS,PTWDDFPH:
                             PTWDCFCD,PTWDNDBD,PTWDDOST,PTWDDOET,PTWDSDES:
                             WEXTN,PTWDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWADMNO,WADMNO
          MOVE      DWSTBY,WSTBY
          MOVE      WWARD,SWWARD
          MOVE      WBED,SWBED
          MOVE      WADMNO,SWADMNO
          RETURN  
.
UPWARD2   MOVE      WADMNO,DWADMNO
          MOVE      WSTBY,DWSTBY
          UPDATE    PATWR1A2;WWARD,WBED,WBDESC,DWADMNO,WSPARE4:
                             WBLINE,WRTYPE,WEFRBT,WNBEDS,WHCSSUB,WSERV:
                             WPLUR,WINPUT,WOCCBED,WCLASS,DWSTBY,WACTIVE:
                             PTWDHOSN,PTWDDNIN,PTWDIAGE,PTWDICRE:
                             PTWDSEX,PTWDLOCN,PTWDGLDG,PTWDNSTA,PTWDDOSA:
                             PTWDFVDW,PTWDBDST,PTWDRBSC,PTWDHKST,PTWDIFST:
                             PTWDCRDT,PTWDCRTM,PTWDCRID,PTWDUPDT,PTWDUPTM:
                             PTWDUPID,PTWDCOMM,PTWDDFVS,PTWDDFPH:
                             PTWDCFCD,PTWDNDBD,PTWDDOST,PTWDDOET,PTWDSDES:
                             WEXTN,PTWDSPAR
          RETURN  
.
DEWARD2   RESET     KEY14
          DELETE    PATWR1A2,KEY14
          RETURN
.
.
RDSWARD3  RESET     KEY6
          READ      PATWR1A3,KEY6;;
          RETURN
.
RDWARD3   MOVE      ZERO,OVRCD
          RESET     KEY6
          READ      PATWR1A3,KEY6;WWARD,WBED,WBDESC,DWADMNO,WSPARE4:
                                  WBLINE,WRTYPE,WEFRBT,WNBEDS,WHCSSUB,WSERV:
                                  WPLUR,WINPUT,WOCCBED,WCLASS,DWSTBY,WACTIVE:
                                  PTWDHOSN,PTWDDNIN,PTWDIAGE,PTWDICRE:
                                  PTWDSEX,PTWDLOCN,PTWDGLDG,PTWDNSTA,PTWDDOSA:
                                  PTWDFVDW,PTWDBDST,PTWDRBSC,PTWDHKST,PTWDIFST:
                                  PTWDCRDT,PTWDCRTM,PTWDCRID,PTWDUPDT,PTWDUPTM:
                                  PTWDUPID,PTWDCOMM,PTWDDFVS,PTWDDFPH:
                                  PTWDCFCD,PTWDNDBD,PTWDDOST,PTWDDOET,PTWDSDES:
                                  WEXTN,PTWDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWADMNO,WADMNO
          MOVE      DWSTBY,WSTBY
          RETURN  
.
RDKWARD3  MOVE      ZERO,OVRCD
          READKS    PATWR1A3;WWARD,WBED,WBDESC,DWADMNO,WSPARE4:
                             WBLINE,WRTYPE,WEFRBT,WNBEDS,WHCSSUB,WSERV:
                             WPLUR,WINPUT,WOCCBED,WCLASS,DWSTBY,WACTIVE:
                             PTWDHOSN,PTWDDNIN,PTWDIAGE,PTWDICRE:
                             PTWDSEX,PTWDLOCN,PTWDGLDG,PTWDNSTA,PTWDDOSA:
                             PTWDFVDW,PTWDBDST,PTWDRBSC,PTWDHKST,PTWDIFST:
                             PTWDCRDT,PTWDCRTM,PTWDCRID,PTWDUPDT,PTWDUPTM:
                             PTWDUPID,PTWDCOMM,PTWDDFVS,PTWDDFPH:
                             PTWDCFCD,PTWDNDBD,PTWDDOST,PTWDDOET,PTWDSDES:
                             WEXTN,PTWDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWADMNO,WADMNO
          MOVE      DWSTBY,WSTBY
          RETURN  
.
RDPWARD3  MOVE      ZERO,OVRCD
          READKP    PATWR1A3;WWARD,WBED,WBDESC,DWADMNO,WSPARE4:
                             WBLINE,WRTYPE,WEFRBT,WNBEDS,WHCSSUB,WSERV:
                             WPLUR,WINPUT,WOCCBED,WCLASS,DWSTBY,WACTIVE:
                             PTWDHOSN,PTWDDNIN,PTWDIAGE,PTWDICRE:
                             PTWDSEX,PTWDLOCN,PTWDGLDG,PTWDNSTA,PTWDDOSA:
                             PTWDFVDW,PTWDBDST,PTWDRBSC,PTWDHKST,PTWDIFST:
                             PTWDCRDT,PTWDCRTM,PTWDCRID,PTWDUPDT,PTWDUPTM:
                             PTWDUPID,PTWDCOMM,PTWDDFVS,PTWDDFPH:
                             PTWDCFCD,PTWDNDBD,PTWDDOST,PTWDDOET,PTWDSDES:
                             WEXTN,PTWDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWADMNO,WADMNO
          MOVE      DWSTBY,WSTBY
          RETURN  
.
.
RDSWARD4  RESET     KEY14
          READ      PATWR1A4,KEY14;;
          RETURN
.
RDWARD4   MOVE      ZERO,OVRCD
          RESET     KEY14
          READ      PATWR1A4,KEY14;WWARD,WBED,WBDESC,DWADMNO,WSPARE4:
                                   WBLINE,WRTYPE,WEFRBT,WNBEDS,WHCSSUB,WSERV:
                                   WPLUR,WINPUT,WOCCBED,WCLASS,DWSTBY,WACTIVE:
                                   PTWDHOSN,PTWDDNIN,PTWDIAGE,PTWDICRE:
                                   PTWDSEX,PTWDLOCN,PTWDGLDG,PTWDNSTA,PTWDDOSA:
                                   PTWDFVDW,PTWDBDST,PTWDRBSC,PTWDHKST,PTWDIFST:
                                   PTWDCRDT,PTWDCRTM,PTWDCRID,PTWDUPDT,PTWDUPTM:
                                   PTWDUPID,PTWDCOMM,PTWDDFVS,PTWDDFPH:
                                   PTWDCFCD,PTWDNDBD,PTWDDOST,PTWDDOET,PTWDSDES:
                                   WEXTN,PTWDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWADMNO,WADMNO
          MOVE      DWSTBY,WSTBY
          RETURN  
.
RDKWARD4  MOVE      ZERO,OVRCD
          READKS    PATWR1A4;WWARD,WBED,WBDESC,DWADMNO,WSPARE4:
                             WBLINE,WRTYPE,WEFRBT,WNBEDS,WHCSSUB,WSERV:
                             WPLUR,WINPUT,WOCCBED,WCLASS,DWSTBY,WACTIVE:
                             PTWDHOSN,PTWDDNIN,PTWDIAGE,PTWDICRE:
                             PTWDSEX,PTWDLOCN,PTWDGLDG,PTWDNSTA,PTWDDOSA:
                             PTWDFVDW,PTWDBDST,PTWDRBSC,PTWDHKST,PTWDIFST:
                             PTWDCRDT,PTWDCRTM,PTWDCRID,PTWDUPDT,PTWDUPTM:
                             PTWDUPID,PTWDCOMM,PTWDDFVS,PTWDDFPH:
                             PTWDCFCD,PTWDNDBD,PTWDDOST,PTWDDOET,PTWDSDES:
                             WEXTN,PTWDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWADMNO,WADMNO
          MOVE      DWSTBY,WSTBY
          RETURN  
.
RDPWARD4  MOVE      ZERO,OVRCD
          READKP    PATWR1A4;WWARD,WBED,WBDESC,DWADMNO,WSPARE4:
                             WBLINE,WRTYPE,WEFRBT,WNBEDS,WHCSSUB,WSERV:
                             WPLUR,WINPUT,WOCCBED,WCLASS,DWSTBY,WACTIVE:
                             PTWDHOSN,PTWDDNIN,PTWDIAGE,PTWDICRE:
                             PTWDSEX,PTWDLOCN,PTWDGLDG,PTWDNSTA,PTWDDOSA:
                             PTWDFVDW,PTWDBDST,PTWDRBSC,PTWDHKST,PTWDIFST:
                             PTWDCRDT,PTWDCRTM,PTWDCRID,PTWDUPDT,PTWDUPTM:
                             PTWDUPID,PTWDCOMM,PTWDDFVS,PTWDDFPH:
                             PTWDCFCD,PTWDNDBD,PTWDDOST,PTWDDOET,PTWDSDES:
                             WEXTN,PTWDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWADMNO,WADMNO
          MOVE      DWSTBY,WSTBY
          RETURN  
+
RDSWARD5  RESET     KEY9
          READ      PATWR1A5,KEY9;;
          RETURN
.
RDWARD5   MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATWR1A5,KEY9;WWARD,WBED,WBDESC,DWADMNO,WSPARE4:
                                  WBLINE,WRTYPE,WEFRBT,WNBEDS,WHCSSUB,WSERV:
                                  WPLUR,WINPUT,WOCCBED,WCLASS,DWSTBY,WACTIVE:
                                  PTWDHOSN,PTWDDNIN,PTWDIAGE,PTWDICRE:
                                  PTWDSEX,PTWDLOCN,PTWDGLDG,PTWDNSTA,PTWDDOSA:
                                  PTWDFVDW,PTWDBDST,PTWDRBSC,PTWDHKST,PTWDIFST:
                                  PTWDCRDT,PTWDCRTM,PTWDCRID,PTWDUPDT,PTWDUPTM:
                                  PTWDUPID,PTWDCOMM,PTWDDFVS,PTWDDFPH:
                                  PTWDCFCD,PTWDNDBD,PTWDDOST,PTWDDOET,PTWDSDES:
                                  WEXTN,PTWDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWADMNO,WADMNO
          MOVE      DWSTBY,WSTBY
          RETURN  
.
RDKWARD5  MOVE      ZERO,OVRCD
          READKS    PATWR1A5;WWARD,WBED,WBDESC,DWADMNO,WSPARE4:
                             WBLINE,WRTYPE,WEFRBT,WNBEDS,WHCSSUB,WSERV:
                             WPLUR,WINPUT,WOCCBED,WCLASS,DWSTBY,WACTIVE:
                             PTWDHOSN,PTWDDNIN,PTWDIAGE,PTWDICRE:
                             PTWDSEX,PTWDLOCN,PTWDGLDG,PTWDNSTA,PTWDDOSA:
                             PTWDFVDW,PTWDBDST,PTWDRBSC,PTWDHKST,PTWDIFST:
                             PTWDCRDT,PTWDCRTM,PTWDCRID,PTWDUPDT,PTWDUPTM:
                             PTWDUPID,PTWDCOMM,PTWDDFVS,PTWDDFPH:
                             PTWDCFCD,PTWDNDBD,PTWDDOST,PTWDDOET,PTWDSDES:
                             WEXTN,PTWDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWADMNO,WADMNO
          MOVE      DWSTBY,WSTBY
          RETURN  
.
RDPWARD5  MOVE      ZERO,OVRCD
          READKP    PATWR1A5;WWARD,WBED,WBDESC,DWADMNO,WSPARE4:
                             WBLINE,WRTYPE,WEFRBT,WNBEDS,WHCSSUB,WSERV:
                             WPLUR,WINPUT,WOCCBED,WCLASS,DWSTBY,WACTIVE:
                             PTWDHOSN,PTWDDNIN,PTWDIAGE,PTWDICRE:
                             PTWDSEX,PTWDLOCN,PTWDGLDG,PTWDNSTA,PTWDDOSA:
                             PTWDFVDW,PTWDBDST,PTWDRBSC,PTWDHKST,PTWDIFST:
                             PTWDCRDT,PTWDCRTM,PTWDCRID,PTWDUPDT,PTWDUPTM:
                             PTWDUPID,PTWDCOMM,PTWDDFVS,PTWDDFPH:
                             PTWDCFCD,PTWDNDBD,PTWDDOST,PTWDDOET,PTWDSDES:
                             WEXTN,PTWDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWADMNO,WADMNO
          MOVE      DWSTBY,WSTBY
          RETURN  
+
RDSWARD6  RESET     KEY9
          READ      PATWR1A6,KEY9;;
          RETURN
.
RDWARD6   MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATWR1A6,KEY9;WWARD,WBED,WBDESC,DWADMNO,WSPARE4:
                                  WBLINE,WRTYPE,WEFRBT,WNBEDS,WHCSSUB,WSERV:
                                  WPLUR,WINPUT,WOCCBED,WCLASS,DWSTBY,WACTIVE:
                                  PTWDHOSN,PTWDDNIN,PTWDIAGE,PTWDICRE:
                                  PTWDSEX,PTWDLOCN,PTWDGLDG,PTWDNSTA,PTWDDOSA:
                                  PTWDFVDW,PTWDBDST,PTWDRBSC,PTWDHKST,PTWDIFST:
                                  PTWDCRDT,PTWDCRTM,PTWDCRID,PTWDUPDT,PTWDUPTM:
                                  PTWDUPID,PTWDCOMM,PTWDDFVS,PTWDDFPH:
                                  PTWDCFCD,PTWDNDBD,PTWDDOST,PTWDDOET,PTWDSDES:
                                  WEXTN,PTWDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWADMNO,WADMNO
          MOVE      DWSTBY,WSTBY
          RETURN
.
RDKWARD6  MOVE      ZERO,OVRCD
          READKS    PATWR1A6;WWARD,WBED,WBDESC,DWADMNO,WSPARE4:
                             WBLINE,WRTYPE,WEFRBT,WNBEDS,WHCSSUB,WSERV:
                             WPLUR,WINPUT,WOCCBED,WCLASS,DWSTBY,WACTIVE:
                             PTWDHOSN,PTWDDNIN,PTWDIAGE,PTWDICRE:
                             PTWDSEX,PTWDLOCN,PTWDGLDG,PTWDNSTA,PTWDDOSA:
                             PTWDFVDW,PTWDBDST,PTWDRBSC,PTWDHKST,PTWDIFST:
                             PTWDCRDT,PTWDCRTM,PTWDCRID,PTWDUPDT,PTWDUPTM:
                             PTWDUPID,PTWDCOMM,PTWDDFVS,PTWDDFPH:
                             PTWDCFCD,PTWDNDBD,PTWDDOST,PTWDDOET,PTWDSDES:
                             WEXTN,PTWDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWADMNO,WADMNO
          MOVE      DWSTBY,WSTBY
          RETURN
.
RDPWARD6  MOVE      ZERO,OVRCD
          READKP    PATWR1A6;WWARD,WBED,WBDESC,DWADMNO,WSPARE4:
                             WBLINE,WRTYPE,WEFRBT,WNBEDS,WHCSSUB,WSERV:
                             WPLUR,WINPUT,WOCCBED,WCLASS,DWSTBY,WACTIVE:
                             PTWDHOSN,PTWDDNIN,PTWDIAGE,PTWDICRE:
                             PTWDSEX,PTWDLOCN,PTWDGLDG,PTWDNSTA,PTWDDOSA:
                             PTWDFVDW,PTWDBDST,PTWDRBSC,PTWDHKST,PTWDIFST:
                             PTWDCRDT,PTWDCRTM,PTWDCRID,PTWDUPDT,PTWDUPTM:
                             PTWDUPID,PTWDCOMM,PTWDDFVS,PTWDDFPH:
                             PTWDCFCD,PTWDNDBD,PTWDDOST,PTWDDOET,PTWDSDES:
                             WEXTN,PTWDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWADMNO,WADMNO
          MOVE      DWSTBY,WSTBY
          RETURN
+
RDSWARD7  RESET     KEY29
          READ      PATWR1A7,KEY29;;
          RETURN
.
RDWARD7   MOVE      ZERO,OVRCD
          RESET     KEY29
          READ      PATWR1A7,KEY29;WWARD,WBED,WBDESC,DWADMNO,WSPARE4:
                                  WBLINE,WRTYPE,WEFRBT,WNBEDS,WHCSSUB,WSERV:
                                  WPLUR,WINPUT,WOCCBED,WCLASS,DWSTBY,WACTIVE:
                                  PTWDHOSN,PTWDDNIN,PTWDIAGE,PTWDICRE:
                                  PTWDSEX,PTWDLOCN,PTWDGLDG,PTWDNSTA,PTWDDOSA:
                                  PTWDFVDW,PTWDBDST,PTWDRBSC,PTWDHKST,PTWDIFST:
                                  PTWDCRDT,PTWDCRTM,PTWDCRID,PTWDUPDT,PTWDUPTM:
                                  PTWDUPID,PTWDCOMM,PTWDDFVS,PTWDDFPH:
                                  PTWDCFCD,PTWDNDBD,PTWDDOST,PTWDDOET,PTWDSDES:
                                  WEXTN,PTWDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWADMNO,WADMNO
          MOVE      DWSTBY,WSTBY
          RETURN
.
RDKWARD7  MOVE      ZERO,OVRCD
          READKS    PATWR1A7;WWARD,WBED,WBDESC,DWADMNO,WSPARE4:
                             WBLINE,WRTYPE,WEFRBT,WNBEDS,WHCSSUB,WSERV:
                             WPLUR,WINPUT,WOCCBED,WCLASS,DWSTBY,WACTIVE:
                             PTWDHOSN,PTWDDNIN,PTWDIAGE,PTWDICRE:
                             PTWDSEX,PTWDLOCN,PTWDGLDG,PTWDNSTA,PTWDDOSA:
                             PTWDFVDW,PTWDBDST,PTWDRBSC,PTWDHKST,PTWDIFST:
                             PTWDCRDT,PTWDCRTM,PTWDCRID,PTWDUPDT,PTWDUPTM:
                             PTWDUPID,PTWDCOMM,PTWDDFVS,PTWDDFPH:
                             PTWDCFCD,PTWDNDBD,PTWDDOST,PTWDDOET,PTWDSDES:
                             WEXTN,PTWDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWADMNO,WADMNO
          MOVE      DWSTBY,WSTBY
          RETURN
.
RDPWARD7  MOVE      ZERO,OVRCD
          READKP    PATWR1A7;WWARD,WBED,WBDESC,DWADMNO,WSPARE4:
                             WBLINE,WRTYPE,WEFRBT,WNBEDS,WHCSSUB,WSERV:
                             WPLUR,WINPUT,WOCCBED,WCLASS,DWSTBY,WACTIVE:
                             PTWDHOSN,PTWDDNIN,PTWDIAGE,PTWDICRE:
                             PTWDSEX,PTWDLOCN,PTWDGLDG,PTWDNSTA,PTWDDOSA:
                             PTWDFVDW,PTWDBDST,PTWDRBSC,PTWDHKST,PTWDIFST:
                             PTWDCRDT,PTWDCRTM,PTWDCRID,PTWDUPDT,PTWDUPTM:
                             PTWDUPID,PTWDCOMM,PTWDDFVS,PTWDDFPH:
                             PTWDCFCD,PTWDNDBD,PTWDDOST,PTWDDOET,PTWDSDES:
                             WEXTN,PTWDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWADMNO,WADMNO
          MOVE      DWSTBY,WSTBY
          RETURN
+
RDSWARD8  RESET     KEY16
          READ      PATWR1A8,KEY16;;
          RETURN
.
RDWARD8   MOVE      ZERO,OVRCD
          RESET     KEY16
          READ      PATWR1A8,KEY16;WWARD,WBED,WBDESC,DWADMNO,WSPARE4:
                                  WBLINE,WRTYPE,WEFRBT,WNBEDS,WHCSSUB,WSERV:
                                  WPLUR,WINPUT,WOCCBED,WCLASS,DWSTBY,WACTIVE:
                                  PTWDHOSN,PTWDDNIN,PTWDIAGE,PTWDICRE:
                                  PTWDSEX,PTWDLOCN,PTWDGLDG,PTWDNSTA,PTWDDOSA:
                                  PTWDFVDW,PTWDBDST,PTWDRBSC,PTWDHKST,PTWDIFST:
                                  PTWDCRDT,PTWDCRTM,PTWDCRID,PTWDUPDT,PTWDUPTM:
                                  PTWDUPID,PTWDCOMM,PTWDDFVS,PTWDDFPH:
                                  PTWDCFCD,PTWDNDBD,PTWDDOST,PTWDDOET,PTWDSDES:
                                  WEXTN,PTWDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWADMNO,WADMNO
          MOVE      DWSTBY,WSTBY
          RETURN
.
RDKWARD8  MOVE      ZERO,OVRCD
          READKS    PATWR1A8;WWARD,WBED,WBDESC,DWADMNO,WSPARE4:
                             WBLINE,WRTYPE,WEFRBT,WNBEDS,WHCSSUB,WSERV:
                             WPLUR,WINPUT,WOCCBED,WCLASS,DWSTBY,WACTIVE:
                             PTWDHOSN,PTWDDNIN,PTWDIAGE,PTWDICRE:
                             PTWDSEX,PTWDLOCN,PTWDGLDG,PTWDNSTA,PTWDDOSA:
                             PTWDFVDW,PTWDBDST,PTWDRBSC,PTWDHKST,PTWDIFST:
                             PTWDCRDT,PTWDCRTM,PTWDCRID,PTWDUPDT,PTWDUPTM:
                             PTWDUPID,PTWDCOMM,PTWDDFVS,PTWDDFPH:
                             PTWDCFCD,PTWDNDBD,PTWDDOST,PTWDDOET,PTWDSDES:
                             WEXTN,PTWDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWADMNO,WADMNO
          MOVE      DWSTBY,WSTBY
          RETURN
.
RDPWARD8  MOVE      ZERO,OVRCD
          READKP    PATWR1A8;WWARD,WBED,WBDESC,DWADMNO,WSPARE4:
                             WBLINE,WRTYPE,WEFRBT,WNBEDS,WHCSSUB,WSERV:
                             WPLUR,WINPUT,WOCCBED,WCLASS,DWSTBY,WACTIVE:
                             PTWDHOSN,PTWDDNIN,PTWDIAGE,PTWDICRE:
                             PTWDSEX,PTWDLOCN,PTWDGLDG,PTWDNSTA,PTWDDOSA:
                             PTWDFVDW,PTWDBDST,PTWDRBSC,PTWDHKST,PTWDIFST:
                             PTWDCRDT,PTWDCRTM,PTWDCRID,PTWDUPDT,PTWDUPTM:
                             PTWDUPID,PTWDCOMM,PTWDDFVS,PTWDDFPH:
                             PTWDCFCD,PTWDNDBD,PTWDDOST,PTWDDOET,PTWDSDES:
                             WEXTN,PTWDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWADMNO,WADMNO
          MOVE      DWSTBY,WSTBY
          RETURN
+
