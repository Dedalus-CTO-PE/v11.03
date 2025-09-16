. *****************************************************************************
. *                                                                           *
. *       Include Name : PATICOIO.INC                                         *
. *                                                                           *
. *       Function     : I/O Routines for PATICOFD.INC                        *
. *                                                                           *
. *       File Name    : pati10of.dat                                         *
. *                                                                           *
. *       Keys         : KEY8  KEY9                                           *
. *                                                                           *
. *       Modifications:                                                      *
. *            V11.02.01 25/03/2022  Davin        TSK 0917793                 *
. *                      Added Ed.12 PTCNGDX2 + reads/opens/closes of pato12af*
. *            V10.14.01 14/03/2019  Don Nguyen   TSK 0869412                 *
. *                      Added ICD10 Ed.11 (PTCNGDX1) and modified applicable *
. *                      reads (RS, RK, RD).                                  *
. *                      Added ICD10 Edition 11 IO include (PATO11IO).        *
. *            V10.10.01 08/03/2017  Davin        TSK 0833093    HDP 2017/2018*
. *                      Added Ed.10 PTCNGDVX + reads to RSPTICO1 and RKPTICO1*
. *            V10.06.01 17/03/2015  Davin         CAR 311669    HDP 2015/2016*
. *                      Added Ed.9 PTCNGDV9 + reads to RSPTICO1 and RKPTICO1 *
. *            V10.03.02 14/06/2013  Davin         CAR 284420    HDP 2013/2014*
. *                      Fixed read of ptcngdv7 at opico2 (posn 61 not 69)    *
. *            V10.03.01 23/04/2013  Davin         CAR 284420    HDP 2013/2014*
. *                      Added Ed.8 PTCNGDV8 + reads to RSPTICO1 and RKPTICO1 *
. *            V10.02.01 12/10/2011  Ebon Clements CAR 244004                 *
. *                      Added standard reads for index 2                     *
. *            V10.00.01 06/04/2010  Mike Laming   CAR 219246    HDP 2010     *
. *                      Added Ed.7 PTCNGDV7 + reads to RSPTICO1 and RKPTICO1 *
. *             V9.10.01 29/04/2008  Mike Laming   CAR 167314                 *
. *                      Added test for @EOS when testing ICDRDDTE            *
. *             V9.09.01 19/03/2008  Mike Laming   CAR 163918    HDP 2008     *
. *                      Added Ed.6 reads to RSPTICO1 and RKPTICO1            *
. *             V9.06.01 08/05/2006  Mike Laming   CAR 105244     HDP 2006    *
. *                      Added new IO reads to RSPTICO1 and RKPTICO1 for Ed.5 *
. *                      and assorted tests for PTCNGDV5                      *
. *             V9.03.03 07/06/2004 Henry Son    CAR 49037                    *
. *                      Added new IO reads RSPTICO1 and RKPTICO1             *
. *                      For Edition 4.                                       *
. *****************************************************************************.
.
.         INC       PATICOIO.INC
.
.         FILE  I/O REQUESTS FOR OPERATION FILE
.
.OVRCD  FORM            1             0=NOT OVER
.                                     1= OVER
.KEY9   DIM             9             KEY FOR PATICDO1
.KEY13  DIM            13             KEY FOR PATICDO2
.
.         NOTE:-
.                  RDAAAX  IS THE READ CALL ON FILE PATAAAX
.                  RDKAAAX  IS THE READKS CALL
.                  WRAAAX  IS THE WRITE CALL
.                  UPAAAX  IS THE UPDATE CALL
.                  DEAAAX  IS THE DELETE CALL
. *****************************************************************************.
.
RAICO1    PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
            CALL      RAPT10O1
            RETURN
          ENDIF
.
RA10T9O1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATICDO1,KEY9;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPTICO1  MATCH     SP70,ICDRDDTE           * Is Date blank?
          IF        @EQUAL | @EOS
            PACK      KEY8,CCC,CYY,CMM,CDD  * Yes, use current date
            REP       " 0",KEY8
          ELSE
            MOVE      ICDRDDTE,KEY8         * No, use date given
          ENDIF
.
          MATCH     PTCNGDX2,KEY8           * Is Date >= ICD10 Ed12 Go-Live Date
          IF        !@LESS
            MOVE      "12",ICDRDVER         * Yes, set version ind to ICD10 Ed12
            CALL      RSPO12A1              * Read ICD10 Ed12 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDX1,KEY8           * Is Date >= ICD10 Ed11 Go-Live Date
          IF        !@LESS
            MOVE      "11",ICDRDVER         * Yes, set version ind to ICD10 Ed11
            CALL      RSPO11A1              * Read ICD10 Ed11 file
            RETURN
          ENDIF
.                                                                     *I-0833093
          MATCH     PTCNGDVX,KEY8           * Is Date >= ICD10 Ed10 Go-Live Date
          IF        !@LESS
            MOVE      "10",ICDRDVER         * Yes, set version ind to ICD10 Ed10
            CALL      RSPT1XO1              * Read ICD10 Ed10 file
            RETURN
          ENDIF
.                                                                     *I-311669
          MATCH     PTCNGDV9,KEY8           * Is Date >= ICD10 Ed9 Go-Live Date?
          IF        !@LESS
            MOVE      "9",ICDRDVER          * Yes, set version ind to ICD10 Ed9
            CALL      RSPT19O1              * Read ICD10 Ed9 file
            RETURN
          ENDIF
.                                                                     *I-284420
          MATCH     PTCNGDV8,KEY8           * Is Date >= ICD10 Ed8 Go-Live Date?
          IF        !@LESS
            MOVE      "8",ICDRDVER          * Yes, set version ind to ICD10 Ed8
            CALL      RSPT18O1              * Read ICD10 Ed8 file
            RETURN
          ENDIF
.                                                                     *I-219246
          MATCH     PTCNGDV7,KEY8           * Is Date >= ICD10 Ed7 Go-Live Date?
          IF        !@LESS
            MOVE      "7",ICDRDVER          * Yes, set version ind to ICD10 Ed7
            CALL      RSPT17O1              * Read ICD10 Ed7 file
            RETURN
          ENDIF
.                                                                     *I-163918
          MATCH     PTCNGDV6,KEY8           * Is Date >= ICD10 Ed6 Go-Live Date?
          IF        !@LESS
            MOVE      "6",ICDRDVER          * Yes, set version ind to ICD10 Ed6
            CALL      RSPT16O1              * Read ICD10 Ed6 file
            RETURN
          ENDIF
.                                                                     *I-105244
          MATCH     PTCNGDV5,KEY8           * Is Date >= ICD10 Ed5 Go-Live Date?
          IF        !@LESS
            MOVE      FIVE,ICDRDVER         * Yes, set version ind to ICD10 Ed5
            CALL      RSPT15O1              * Read ICD10 Ed5 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV4,KEY8           * Is Date >= ICD10 V4 Go-Live Date?
          IF        !@LESS
            MOVE      FOUR,ICDRDVER         * Yes, set version ind to ICD10 V4
            CALL      RSPT14O1              * Read ICD10 V4 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV3,KEY8           * Is Date >= ICD10 V3 Go-Live Date?
          IF        !@LESS
            MOVE      THREE,ICDRDVER        * Yes, set version ind to ICD10 V3
            CALL      RSPT13O1              * Read ICD10 V3 file
            RETURN
          ENDIF
.
          MATCH     PTCNI10D,KEY8           * Is Date >= ICD10 Go-Live Date?
          IF        !@LESS
            MOVE      TWO,ICDRDVER          * Yes, set version ind to ICD10 V2
            CALL      RSPT10O1              * Read ICD10 (V2) file
          ELSE
            MOVE      ONE,ICDRDVER          * No, set version ind to ICD9
            CALL      RS10T9O1              * Read ICD9 file
          ENDIF
          RETURN
.
RDSICO1   PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
            CALL      RSPT10O1
            RETURN
          ENDIF
.
RS10T9O1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATICDO1,KEY9;;
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTICO1  MATCH     SP70,ICDRDDTE           * Is Date blank?
          IF        @EQUAL | @EOS
            PACK      KEY8,CCC,CYY,CMM,CDD  * Yes, use current date
            REP       " 0",KEY8
          ELSE
            MOVE      ICDRDDTE,KEY8         * No, use date given
          ENDIF
.
          MATCH     PTCNGDX2,KEY8           * Is Date >= ICD10 Ed12 Go-Live Date
          IF        !@LESS
            MOVE      "12",ICDRDVER         * Yes, set version ind to ICD10 Ed12
            CALL      RDPO12A1              * Read ICD10 Ed12 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDX1,KEY8           * Is Date >= ICD10 Ed11 Go-Live Date
          IF        !@LESS
            MOVE      "11",ICDRDVER         * Yes, set version ind to ICD10 Ed11
            CALL      RDPO11A1              * Read ICD10 Ed11 file
            RETURN
          ENDIF
.                                                                     *I-0833093
          MATCH     PTCNGDVX,KEY8           * Is Date >= ICD10 Ed10 Go-Live Date
          IF        !@LESS
            MOVE      "10",ICDRDVER         * Yes, set version ind to ICD10 Ed10
            CALL      RDPT1XO1              * Read ICD10 Ed10 file
            RETURN
          ENDIF
.                                                                     *I-311669
          MATCH     PTCNGDV9,KEY8           * Is Date >= ICD10 Ed9 Go-Live Date?
          IF        !@LESS
            MOVE      "9",ICDRDVER          * Yes, set version ind to ICD10 Ed9
            CALL      RDPT19O1              * Read ICD10 Ed9 file
            RETURN
          ENDIF
.                                                                     *I-284420
          MATCH     PTCNGDV8,KEY8           * Is Date >= ICD10 Ed8 Go-Live Date?
          IF        !@LESS
            MOVE      "8",ICDRDVER          * Yes, set version ind to ICD10 Ed8
            CALL      RDPT18O1              * Read ICD10 Ed8 file
            RETURN
          ENDIF
.                                                                     *I-219246
          MATCH     PTCNGDV7,KEY8           * Is Date >= ICD10 Ed7 Go-Live Date?
          IF        !@LESS
            MOVE      "7",ICDRDVER          * Yes, set version ind to ICD10 Ed7
            CALL      RDPT17O1              * Read ICD10 Ed7 file
            RETURN
          ENDIF
.                                                                     *I-163918
          MATCH     PTCNGDV6,KEY8           * Is Date >= ICD10 Ed6 Go-Live Date?
          IF        !@LESS
            MOVE      "6",ICDRDVER          * Yes, set version ind to ICD10 Ed6
            CALL      RDPT16O1              * Read ICD10 Ed6 file
            RETURN
          ENDIF
.                                                                     *I-105244
          MATCH     PTCNGDV5,KEY8           * Is Date >= ICD10 Ed5 Go-Live Date?
          IF        !@LESS
            MOVE      FIVE,ICDRDVER         * Yes, set version ind to ICD10 Ed5
            CALL      RDPT15O1              * Read ICD10 Ed5 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV4,KEY8           * Is Date >= ICD10 V4 Go-Live Date?
          IF        !@LESS
            MOVE      FOUR,ICDRDVER         * Yes, set version ind to ICD10 V4
            CALL      RDPT14O1              * Read ICD10 V4 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV3,KEY8           * Is Date >= ICD10 V3 Go-Live Date?
          IF        !@LESS
            MOVE      THREE,ICDRDVER        * Yes, set version ind to ICD10 V3
            CALL      RDPT13O1              * Read ICD10 V3 file
            RETURN
          ENDIF
.
          MATCH     PTCNI10D,KEY8           * Is Date >= ICD10 Go-Live Date?
          IF        !@LESS
            MOVE      TWO,ICDRDVER          * Yes, set version ind to ICD10 V2
            CALL      RDPT10O1              * Read ICD10 (V2) file
          ELSE
            MOVE      ONE,ICDRDVER          * No, set version ind to ICD9
            CALL      RD10T9O1              * Read ICD9 file
          ENDIF
          RETURN
.
RDICO1    PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
            CALL     RDPT10O1
            RETURN
          ENDIF
.
RD10T9O1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATICDO1,KEY9;OPCODE,OGPCODE,OKEYWD,ODESC,OFLAG,OAGEGP:
                                  OLOW,OHIGH,OSEX,ODAGGER,OAREA,ODIGITS,OFEE:
                                  OICD10CD,PTIOSPAR
          GOTO      OVERCOND IF OVER
          MOVE      OGPCODE,SOGPCODE
          RETURN
.
RKPTICO1  MATCH     SP70,ICDRDDTE           * Is Date blank?
          IF        @EQUAL | @EOS
            PACK      KEY8,CCC,CYY,CMM,CDD  * Yes, use current date
            REP       " 0",KEY8
          ELSE
            MOVE      ICDRDDTE,KEY8         * No, use date given
          ENDIF
.
          MATCH     PTCNGDX2,KEY8           * Is Date >= ICD10 Ed12 Go-Live Date
          IF        !@LESS
            MOVE      "12",ICDRDVER         * Yes, set version ind to ICD10 Ed12
            CALL      RKPO12A1              * Read ICD10 Ed12 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDX1,KEY8           * Is Date >= ICD10 Ed11 Go-Live Date
          IF        !@LESS
            MOVE      "11",ICDRDVER         * Yes, set version ind to ICD10 Ed11
            CALL      RKPO11A1              * Read ICD10 Ed11 file
            RETURN
          ENDIF
.                                                                     *I-0833093
          MATCH     PTCNGDVX,KEY8           * Is Date >= ICD10 Ed10 Go-Live Date
          IF        !@LESS
            MOVE      "10",ICDRDVER         * Yes, set version ind to ICD10 Ed10
            CALL      RKPT1XO1              * Read ICD10 Ed10 file
            RETURN
          ENDIF
.                                                                     *I-311669
          MATCH     PTCNGDV9,KEY8           * Is Date >= ICD10 Ed9 Go-Live Date?
          IF        !@LESS
            MOVE      "9",ICDRDVER          * Yes, set version ind to ICD10 Ed9
            CALL      RKPT19O1              * Read ICD10 Ed9 file
            RETURN
          ENDIF
.                                                                     *I-284420
          MATCH     PTCNGDV8,KEY8           * Is Date >= ICD10 Ed8 Go-Live Date?
          IF        !@LESS
            MOVE      "8",ICDRDVER          * Yes, set version ind to ICD10 Ed8
            CALL      RKPT18O1              * Read ICD10 Ed8 file
            RETURN
          ENDIF
.                                                                     *I-219246
          MATCH     PTCNGDV7,KEY8           * Is Date >= ICD10 Ed7 Go-Live Date?
          IF        !@LESS
            MOVE      "7",ICDRDVER          * Yes, set version ind to ICD10 Ed7
            CALL      RKPT17O1              * Read ICD10 Ed7 file
            RETURN
          ENDIF
.                                                                     *I-163918
          MATCH     PTCNGDV6,KEY8           * Is Date >= ICD10 Ed6 Go-Live Date?
          IF        !@LESS
            MOVE      "6",ICDRDVER          * Yes, set version ind to ICD10 Ed6
            CALL      RKPT16O1              * Read ICD10 Ed6 file
            RETURN
          ENDIF
.                                                                     *I-105244
          MATCH     PTCNGDV5,KEY8           * Is Date >= ICD10 Ed5 Go-Live Date?
          IF        !@LESS
            MOVE      FIVE,ICDRDVER         * Yes, set version ind to ICD10 Ed5
            CALL      RKPT15O1              * Read ICD10 Ed5 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV4,KEY8           * Is Date >= ICD10 V4 Go-Live Date?
          IF        !@LESS
            MOVE      FOUR,ICDRDVER         * Yes, set version ind to ICD10 V4
            CALL      RKPT14O1              * Read ICD10 V4 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV3,KEY8           * Is Date >= ICD10 V3 Go-Live Date?
          IF        !@LESS
            MOVE      THREE,ICDRDVER        * Yes, set version ind to ICD10 V3
            CALL      RKPT13O1              * Read ICD10 V3 file
            RETURN
          ENDIF
.
          MATCH     PTCNI10D,KEY8           * Is Date >= ICD10 Go-Live Date?
          IF        !@LESS
            MOVE      TWO,ICDRDVER          * Yes, set version ind to ICD10 V2
            CALL      RKPT10O1              * Read ICD10 (V2) file
          ELSE
            MOVE      ONE,ICDRDVER          * No, set version ind to ICD9
            CALL      RK10T9O1              * Read ICD9 file
          ENDIF
          RETURN
.
RDKICO1   PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
              CALL     RKPT10O1
              RETURN
          ENDIF
.
RK10T9O1  MOVE      ZERO,OVRCD
          READKS    PATICDO1;OPCODE,OGPCODE,OKEYWD,ODESC,OFLAG,OAGEGP:
                                  OLOW,OHIGH,OSEX,ODAGGER,OAREA,ODIGITS,OFEE:
                                  OICD10CD,PTIOSPAR
          GOTO      OVERCOND IF OVER
          MOVE      OGPCODE,SOGPCODE
          RETURN
.
RDPICO1   PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
              CALL     RPPT10O1
              RETURN
          ENDIF
.
RP10T9O1  MOVE      ZERO,OVRCD
          READKP    PATICDO1;OPCODE,OGPCODE,OKEYWD,ODESC,OFLAG,OAGEGP:
                                  OLOW,OHIGH,OSEX,ODAGGER,OAREA,ODIGITS,OFEE:
                                  OICD10CD,PTIOSPAR
          GOTO      OVERCOND IF OVER
          MOVE      OGPCODE,SOGPCODE
          RETURN
.
UPICO1    PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
              CALL     UPPT10O1
              RETURN
          ENDIF
.
UP10T9O1  UPDATE    PATICDO1;OPCODE,OGPCODE,OKEYWD,ODESC,OFLAG,OAGEGP:
                                  OLOW,OHIGH,OSEX,ODAGGER,OAREA,ODIGITS,OFEE:
                                  OICD10CD,PTIOSPAR
          RETURN
.
WRICO1    PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
              CALL     WRPT10O1
              RETURN
          ENDIF
.
WR10T9O1  MOVE      ZERO,OVRCD
          TRAP      OVERLOCK IF IO
          RESET     KEY9
          WRITE     PATICDO1,KEY9;OPCODE,OGPCODE,OKEYWD,ODESC,OFLAG,OAGEGP:
                                  OLOW,OHIGH,OSEX,ODAGGER,OAREA,ODIGITS,OFEE:
                                  OICD10CD,PTIOSPAR
          TRAPCLR   IO
          RETURN
.
DEICO1    PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
              CALL     DEPT10O1
              RETURN
          ENDIF
.
DE10T9O1  RESET     KEY9
          DELETE    PATICDO1,KEY9
.
          RETURN
+
.
.         SECOND I/O INDEX
.
RAICO2    PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
              CALL      RAPT10O2
              RETURN
          ENDIF
.
RA10T9O2  MOVE      ZERO,OVRCD
          RESET     KEY13
          READ      PATICDO2,KEY13;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSICO2   PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
              CALL     RSPT10O2
              RETURN
          ENDIF
.
RS10T9O2  RESET     KEY13
          READ      PATICDO2,KEY13;;
          RETURN
.
RSPTICO2  MATCH     SP70,ICDRDDTE           * Is Date blank?
          IF        @EQUAL | @EOS
            PACK      KEY8,CCC,CYY,CMM,CDD  * Yes, use current date
            REP       " 0",KEY8
          ELSE
            MOVE      ICDRDDTE,KEY8         * No, use date given
          ENDIF
.
          MATCH     PTCNGDX2,KEY8           * Is Date >= ICD10 Ed12 Go-Live Date
          IF        !@LESS
            MOVE      "12",ICDRDVER         * Yes, set version ind to ICD10 Ed12
            CALL      RSPO12A2              * Read ICD10 Ed12 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDX1,KEY8           * Is Date >= ICD10 Ed11 Go-Live Date
          IF        !@LESS
            MOVE      "11",ICDRDVER         * Yes, set version ind to ICD10 Ed11
            CALL      RSPO11A2              * Read ICD10 Ed11 file
            RETURN
          ENDIF
.                                                                     *I-0833093
          MATCH     PTCNGDVX,KEY8           * Is Date >= ICD10 Ed10 Go-Live Date
          IF        !@LESS
            MOVE      "10",ICDRDVER         * Yes, set version ind to ICD10 Ed10
            CALL      RSPT1XO2              * Read ICD10 Ed10 file
            RETURN
          ENDIF
.                                                                     *I-311669
          MATCH     PTCNGDV9,KEY8           * Is Date >= ICD10 Ed9 Go-Live Date?
          IF        !@LESS
            MOVE      "9",ICDRDVER          * Yes, set version ind to ICD10 Ed9
            CALL      RSPT19O2              * Read ICD10 Ed9 file
            RETURN
          ENDIF
.                                                                     *I-284420
          MATCH     PTCNGDV8,KEY8           * Is Date >= ICD10 Ed8 Go-Live Date?
          IF        !@LESS
            MOVE      "8",ICDRDVER          * Yes, set version ind to ICD10 Ed8
            CALL      RSPT18O2              * Read ICD10 Ed8 file
            RETURN
          ENDIF
.                                                                     *I-219246
          MATCH     PTCNGDV7,KEY8           * Is Date >= ICD10 Ed7 Go-Live Date?
          IF        !@LESS
            MOVE      "7",ICDRDVER          * Yes, set version ind to ICD10 Ed7
            CALL      RSPT17O2              * Read ICD10 Ed7 file
            RETURN
          ENDIF
.                                                                     *I-163918
          MATCH     PTCNGDV6,KEY8           * Is Date >= ICD10 Ed6 Go-Live Date?
          IF        !@LESS
            MOVE      "6",ICDRDVER          * Yes, set version ind to ICD10 Ed6
            CALL      RSPT16O2              * Read ICD10 Ed6 file
            RETURN
          ENDIF
.                                                                     *I-105244
          MATCH     PTCNGDV5,KEY8           * Is Date >= ICD10 Ed5 Go-Live Date?
          IF        !@LESS
            MOVE      FIVE,ICDRDVER         * Yes, set version ind to ICD10 Ed5
            CALL      RSPT15O2              * Read ICD10 Ed5 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV4,KEY8           * Is Date >= ICD10 V4 Go-Live Date?
          IF        !@LESS
            MOVE      FOUR,ICDRDVER         * Yes, set version ind to ICD10 V4
            CALL      RSPT14O2              * Read ICD10 V4 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV3,KEY8           * Is Date >= ICD10 V3 Go-Live Date?
          IF        !@LESS
            MOVE      THREE,ICDRDVER        * Yes, set version ind to ICD10 V3
            CALL      RSPT13O2              * Read ICD10 V3 file
            RETURN
          ENDIF
.
          MATCH     PTCNI10D,KEY8           * Is Date >= ICD10 Go-Live Date?
          IF        !@LESS
            MOVE      TWO,ICDRDVER          * Yes, set version ind to ICD10 V2
            CALL      RSPT10O2              * Read ICD10 (V2) file
          ELSE
            MOVE      ONE,ICDRDVER          * No, set version ind to ICD9
            CALL      RS10T9O2              * Read ICD9 file
          ENDIF
          RETURN
.
RDICO2    PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
              CALL     RDPT10O2
              RETURN
          ENDIF
.
RD10T9O2  MOVE      ZERO,OVRCD
          RESET     KEY13
          READ      PATICDO2,KEY13;OPCODE,OGPCODE,OKEYWD,ODESC,OFLAG,OAGEGP:
                                  OLOW,OHIGH,OSEX,ODAGGER,OAREA,ODIGITS,OFEE:
                                  OICD10CD,PTIOSPAR
          GOTO      OVERCOND IF OVER
          MOVE      OGPCODE,SOGPCODE
          RETURN
.
RDPTICO2  MATCH     SP70,ICDRDDTE           * Is Date blank?
          IF        @EQUAL | @EOS
            PACK      KEY8,CCC,CYY,CMM,CDD  * Yes, use current date
            REP       " 0",KEY8
          ELSE
            MOVE      ICDRDDTE,KEY8         * No, use date given
          ENDIF
.
          MATCH     PTCNGDX2,KEY8           * Is Date >= ICD10 Ed12 Go-Live Date
          IF        !@LESS
            MOVE      "12",ICDRDVER         * Yes, set version ind to ICD10 Ed12
            CALL      RDPO12A2              * Read ICD10 Ed12 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDX1,KEY8           * Is Date >= ICD10 Ed11 Go-Live Date
          IF        !@LESS
            MOVE      "11",ICDRDVER         * Yes, set version ind to ICD10 Ed11
            CALL      RDPO11A2              * Read ICD10 Ed11 file
            RETURN
          ENDIF
.                                                                     *I-0833093
          MATCH     PTCNGDVX,KEY8           * Is Date >= ICD10 Ed10 Go-Live Date
          IF        !@LESS
            MOVE      "10",ICDRDVER         * Yes, set version ind to ICD10 Ed10
            CALL      RDPT1XO2              * Read ICD10 Ed10 file
            RETURN
          ENDIF
.                                                                     *I-311669
          MATCH     PTCNGDV9,KEY8           * Is Date >= ICD10 Ed9 Go-Live Date?
          IF        !@LESS
            MOVE      "9",ICDRDVER          * Yes, set version ind to ICD10 Ed9
            CALL      RDPT19O2              * Read ICD10 Ed9 file
            RETURN
          ENDIF
.                                                                     *I-284420
          MATCH     PTCNGDV8,KEY8           * Is Date >= ICD10 Ed8 Go-Live Date?
          IF        !@LESS
            MOVE      "8",ICDRDVER          * Yes, set version ind to ICD10 Ed8
            CALL      RDPT18O2              * Read ICD10 Ed8 file
            RETURN
          ENDIF
.                                                                     *I-219246
          MATCH     PTCNGDV7,KEY8           * Is Date >= ICD10 Ed7 Go-Live Date?
          IF        !@LESS
            MOVE      "7",ICDRDVER          * Yes, set version ind to ICD10 Ed7
            CALL      RDPT17O2              * Read ICD10 Ed7 file
            RETURN
          ENDIF
.                                                                     *I-163918
          MATCH     PTCNGDV6,KEY8           * Is Date >= ICD10 Ed6 Go-Live Date?
          IF        !@LESS
            MOVE      "6",ICDRDVER          * Yes, set version ind to ICD10 Ed6
            CALL      RDPT16O2              * Read ICD10 Ed6 file
            RETURN
          ENDIF
.                                                                     *I-105244
          MATCH     PTCNGDV5,KEY8           * Is Date >= ICD10 Ed5 Go-Live Date?
          IF        !@LESS
            MOVE      FIVE,ICDRDVER         * Yes, set version ind to ICD10 Ed5
            CALL      RDPT15O2              * Read ICD10 Ed5 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV4,KEY8           * Is Date >= ICD10 V4 Go-Live Date?
          IF        !@LESS
            MOVE      FOUR,ICDRDVER         * Yes, set version ind to ICD10 V4
            CALL      RDPT14O2              * Read ICD10 V4 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV3,KEY8           * Is Date >= ICD10 V3 Go-Live Date?
          IF        !@LESS
            MOVE      THREE,ICDRDVER        * Yes, set version ind to ICD10 V3
            CALL      RDPT13O2              * Read ICD10 V3 file
            RETURN
          ENDIF
.
          MATCH     PTCNI10D,KEY8           * Is Date >= ICD10 Go-Live Date?
          IF        !@LESS
            MOVE      TWO,ICDRDVER          * Yes, set version ind to ICD10 V2
            CALL      RDPT10O2              * Read ICD10 (V2) file
          ELSE
            MOVE      ONE,ICDRDVER          * No, set version ind to ICD9
            CALL      RD10T9O2              * Read ICD9 file
          ENDIF
          RETURN
.
RDKICO2   PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
              CALL     RKPT10O2
              RETURN
          ENDIF
. 
RK10T9O2  MOVE      ZERO,OVRCD
          READKS    PATICDO2;OPCODE,OGPCODE,OKEYWD,ODESC,OFLAG,OAGEGP:
                                  OLOW,OHIGH,OSEX,ODAGGER,OAREA,ODIGITS,OFEE:
                                  OICD10CD,PTIOSPAR
          GOTO      OVERCOND IF OVER
          MOVE      OGPCODE,SOGPCODE
          RETURN
.
RKPTICO2  MATCH     SP70,ICDRDDTE           * Is Date blank?
          IF        @EQUAL | @EOS
            PACK      KEY8,CCC,CYY,CMM,CDD  * Yes, use current date
            REP       " 0",KEY8
          ELSE
            MOVE      ICDRDDTE,KEY8         * No, use date given
          ENDIF
.
          MATCH     PTCNGDX2,KEY8           * Is Date >= ICD10 Ed12 Go-Live Date
          IF        !@LESS
            MOVE      "12",ICDRDVER         * Yes, set version ind to ICD10 Ed12
            CALL      RKPO12A2              * Read ICD10 Ed12 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDX1,KEY8           * Is Date >= ICD10 Ed11 Go-Live Date
          IF        !@LESS
            MOVE      "11",ICDRDVER         * Yes, set version ind to ICD10 Ed11
            CALL      RKPO11A2              * Read ICD10 Ed11 file
            RETURN
          ENDIF
.                                                                     *I-0833093
          MATCH     PTCNGDVX,KEY8           * Is Date >= ICD10 Ed10 Go-Live Date
          IF        !@LESS
            MOVE      "10",ICDRDVER         * Yes, set version ind to ICD10 Ed10
            CALL      RKPT1XO2              * Read ICD10 Ed10 file
            RETURN
          ENDIF
.                                                                     *I-311669
          MATCH     PTCNGDV9,KEY8           * Is Date >= ICD10 Ed9 Go-Live Date?
          IF        !@LESS
            MOVE      "9",ICDRDVER          * Yes, set version ind to ICD10 Ed9
            CALL      RKPT19O2              * Read ICD10 Ed9 file
            RETURN
          ENDIF
.                                                                     *I-284420
          MATCH     PTCNGDV8,KEY8           * Is Date >= ICD10 Ed8 Go-Live Date?
          IF        !@LESS
            MOVE      "8",ICDRDVER          * Yes, set version ind to ICD10 Ed8
            CALL      RKPT18O2              * Read ICD10 Ed8 file
            RETURN
          ENDIF
.                                                                     *I-219246
          MATCH     PTCNGDV7,KEY8           * Is Date >= ICD10 Ed7 Go-Live Date?
          IF        !@LESS
            MOVE      "7",ICDRDVER          * Yes, set version ind to ICD10 Ed7
            CALL      RKPT17O2              * Read ICD10 Ed7 file
            RETURN
          ENDIF
.                                                                     *I-163918
          MATCH     PTCNGDV6,KEY8           * Is Date >= ICD10 Ed6 Go-Live Date?
          IF        !@LESS
            MOVE      "6",ICDRDVER          * Yes, set version ind to ICD10 Ed6
            CALL      RKPT16O2              * Read ICD10 Ed6 file
            RETURN
          ENDIF
.                                                                     *I-105244
          MATCH     PTCNGDV5,KEY8           * Is Date >= ICD10 Ed5 Go-Live Date?
          IF        !@LESS
            MOVE      FIVE,ICDRDVER         * Yes, set version ind to ICD10 Ed5
            CALL      RKPT15O2              * Read ICD10 Ed5 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV4,KEY8           * Is Date >= ICD10 V4 Go-Live Date?
          IF        !@LESS
            MOVE      FOUR,ICDRDVER         * Yes, set version ind to ICD10 V4
            CALL      RKPT14O2              * Read ICD10 V4 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV3,KEY8           * Is Date >= ICD10 V3 Go-Live Date?
          IF        !@LESS
            MOVE      THREE,ICDRDVER        * Yes, set version ind to ICD10 V3
            CALL      RKPT13O2              * Read ICD10 V3 file
            RETURN
          ENDIF
.
          MATCH     PTCNI10D,KEY8           * Is Date >= ICD10 Go-Live Date?
          IF        !@LESS
            MOVE      TWO,ICDRDVER          * Yes, set version ind to ICD10 V2
            CALL      RKPT10O2              * Read ICD10 (V2) file
          ELSE
            MOVE      ONE,ICDRDVER          * No, set version ind to ICD9
            CALL      RK10T9O2              * Read ICD9 file
          ENDIF
          RETURN
.
RPKICO2   PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
              CALL     RPPT10O2
              RETURN
          ENDIF
.
RP10T9O2  MOVE      ZERO,OVRCD
          READKP    PATICDO2;OPCODE,OGPCODE,OKEYWD,ODESC,OFLAG,OAGEGP:
                                  OLOW,OHIGH,OSEX,ODAGGER,OAREA,ODIGITS,OFEE:
                                  OICD10CD,PTIOSPAR
          GOTO      OVERCOND IF OVER
          MOVE      OGPCODE,SOGPCODE
          RETURN
.
WRICO2    PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
              CALL     WRPT10O2
              RETURN
          ENDIF
.
WR10T9O2  RESET     KEY13
          WRITE     PATICDO2,KEY13;OPCODE,OGPCODE,OKEYWD,ODESC,OFLAG,OAGEGP:
                                  OLOW,OHIGH,OSEX,ODAGGER,OAREA,ODIGITS,OFEE:
                                  OICD10CD,PTIOSPAR
.
          RETURN
.
UPICO2    PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
              CALL     UPPT10O2
              RETURN
          ENDIF
.
UP10T9O2  UPDATE    PATICDO2;OPCODE,OGPCODE,OKEYWD,ODESC,OFLAG,OAGEGP:
                                  OLOW,OHIGH,OSEX,ODAGGER,OAREA,ODIGITS,OFEE:
                                  OICD10CD,PTIOSPAR
          RETURN
.
DEICO2    PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
              CALL     DEPT10O2
              RETURN
          ENDIF
.
DE10T9O2  RESET     KEY13
          DELETE    PATICDO2,KEY13
.
          RETURN
.
.         THIRD I/O INDEX
.
RDICO3    MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATICDO3,KEY9;OPCODE,OGPCODE,OKEYWD,ODESC,OFLAG,OAGEGP:
                                  OLOW,OHIGH,OSEX,ODAGGER,OAREA,ODIGITS,OFEE
          GOTO      OVERCOND IF OVER
          MOVE      OGPCODE,SOGPCODE
          RETURN
.
RLICO3    MOVE      ZERO,OVRCD
          RESET     KEY9
          READL     PATICDO3,KEY9;OPCODE,OGPCODE,OKEYWD,ODESC,OFLAG,OAGEGP:
                                  OLOW,OHIGH,OSEX,ODAGGER,OAREA,ODIGITS,OFEE
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      OGPCODE,SOGPCODE
          RETURN
.
RDKICO3   MOVE      ZERO,OVRCD
          READKS    PATICDO3;OPCODE,OGPCODE,OKEYWD,ODESC,OFLAG,OAGEGP:
                                  OLOW,OHIGH,OSEX,ODAGGER,OAREA,ODIGITS,OFEE
          GOTO      OVERCOND IF OVER
          MOVE      OGPCODE,SOGPCODE
          RETURN
.
RDPICO3   MOVE      ZERO,OVRCD
          READKP    PATICDO3;OPCODE,OGPCODE,OKEYWD,ODESC,OFLAG,OAGEGP:
                                  OLOW,OHIGH,OSEX,ODAGGER,OAREA,ODIGITS,OFEE
          GOTO      OVERCOND IF OVER
          MOVE      OGPCODE,SOGPCODE
          RETURN
. 
ULICO3    UNLOCK    PATICDO3
          RETURN
.
RDSICO3   RESET     KEY9
          READ      PATICDO3,KEY9;;
          RETURN
+
.
.
OPICO1    OPEN      CONTROLF,"controlf"
          READ      CONTROLF,EIGHTY8;*59,PTCNI10D
          READ      CONTROLF,HUND09;*151,PTCNGDV3
          READ      CONTROLF,HUND05;*217,PTCNGDV4:                     *I-49037
                                    *227,PTCNGDV5                     *I-105244
          READ      CONTROLF,HUND12;*239,PTCNGDV6                     *I-163918
          READ      CONTROLF,HUND10;*61,PTCNGDV7:                     *I-219246
                                    *69,PTCNGDV8:                     *I-284420
                                    *77,PTCNGDV9:                     *I-311669
                                    *85,PTCNGDVX                      *I-0833093
          READ      CONTROLF,HUND17;*220,PTCNGDX1
          READ      CONTROLF,HUND28;*231,PTCNGDX2
.
          UNPACK    PTCNGDX2,KEY4,KEY5           * ICD10 Ed.12 startup
          MATCH     "    ",KEY4
          IF        @EQUAL
            MOVE      "99991231",PTCNGDX2
          ENDIF
          MATCH     "0000",KEY4
          IF        @EQUAL
            MOVE      "99991231",PTCNGDX2
          ENDIF
.
          UNPACK    PTCNGDX2,KEY4,KEY5           * ICD10 Ed.12
          MATCH     "9999",KEY4                  * is year = "9999"?
          IF        !@EQUAL
            OPEN      PATO12A1,"pato12af"
          ENDIF
.
          UNPACK    PTCNGDX1,KEY4,KEY5           * ICD10 Ed.11 startup
          MATCH     "    ",KEY4
          IF        @EQUAL
            MOVE      "99991231",PTCNGDX1
          ENDIF
          MATCH     "0000",KEY4
          IF        @EQUAL
            MOVE      "99991231",PTCNGDX1
          ENDIF
.
          UNPACK    PTCNGDX1,KEY4,KEY5           * ICD10 Ed.11
          MATCH     "9999",KEY4                  * is year = "9999"?
          IF        !@EQUAL
            OPEN      PATO11A1,"pato11af"
          ENDIF
.
          UNPACK    PTCNGDVX,KEY4,KEY5      * ICD10 Ed.10 startup     *I-0833093
          MATCH     "    ",KEY4
          IF        @EQUAL
            MOVE      "99991231",PTCNGDVX
          ENDIF
          MATCH     "0000",KEY4
          IF        @EQUAL
            MOVE      "99991231",PTCNGDVX
          ENDIF
.
          UNPACK    PTCNGDVX,KEY4,KEY5           * ICD10 Ed.10        *I-0833093
          MATCH     "9999",KEY4                  * is year = "9999"?
          IF        !@EQUAL
            OPEN      PATI1XO1,"pat10oxf"
          ENDIF
.
          UNPACK    PTCNGDV9,KEY4,KEY5           * ICD10 Ed.9         *I-311669
          MATCH     "9999",KEY4                  * is year = "9999"?
          IF        !@EQUAL
            OPEN      PATI19O1,"pat10o9f"
          ENDIF
.
          UNPACK    PTCNGDV8,KEY4,KEY5           * ICD10 Ed.8         *I-284420
          MATCH     "9999",KEY4                  * is year = "9999"?
          IF        !@EQUAL
            OPEN      PATI18O1,"pat10o8f"
          ENDIF
.
          UNPACK    PTCNGDV7,KEY4,KEY5           * ICD10 Ed.7         *I-219246
          MATCH     "9999",KEY4                  * is year = "9999"?       
          IF        !@EQUAL
            OPEN      PATI17O1,"pat10o7f"
          ENDIF
.
          UNPACK    PTCNGDV6,KEY4,KEY5           * ICD10 Ed.6         *I-163918
          MATCH     "9999",KEY4                  * is year = "9999"?       
          IF        !@EQUAL
            OPEN      PATI16O1,"pat10o6f"
          ENDIF
.
          MATCH     "99999999",PTCNGDV5          * ICD10 Ed.5         *I-105244
          IF        !@EQUAL
            OPEN      PATI15O1,"pat10o5f"
          ENDIF
.
          MATCH     "99999999",PTCNGDV4
          IF        !@EQUAL
            OPEN      PATI14O1,"pat10o4f"
          ENDIF
.
          MATCH     "99999999",PTCNGDV3
          IF        !@EQUAL
            OPEN      PATI13O1,"pat10o3f"
          ENDIF
.
          MATCH     "99999999",PTCNI10D
          IF        !@EQUAL
            OPEN      PATI10O1,"pati10of"
          ENDIF
.
          OPEN      PATICDO1,"paticdof"
          RETURN
.
CLICO1    MOVE      ZERO,EXIT
          CLOSE     PATO12A1                                          *I-0917793
          CLOSE     PATO11A1                                          *I-0917793
          CLOSE     PATI1XO1                                          *I-0833093
          CLOSE     PATI19O1                                          *I-311669
          CLOSE     PATI18O1                                          *I-284420
          CLOSE     PATI17O1                                          *I-219246
          CLOSE     PATI16O1                                          *I-163918
          CLOSE     PATI15O1
          CLOSE     PATI14O1
          CLOSE     PATI13O1
          CLOSE     PATI10O1
          CLOSE     PATICDO1
          RETURN
.
OPICO2    OPEN      CONTROLF,"controlf"
          READ      CONTROLF,EIGHTY8;*59,PTCNI10D
          READ      CONTROLF,HUND09;*151,PTCNGDV3
          READ      CONTROLF,HUND05;*217,PTCNGDV4:                     *I-49037
                                    *227,PTCNGDV5                     *I-105244
          READ      CONTROLF,HUND12;*239,PTCNGDV6                     *I-163918
          READ      CONTROLF,HUND10;*61,PTCNGDV7:                     *I-219246
                                    *69,PTCNGDV8:                     *I-284420
                                    *77,PTCNGDV9:                     *I-311669
                                    *85,PTCNGDVX                      *I-0833093
          READ      CONTROLF,HUND17;*220,PTCNGDX1
          READ      CONTROLF,HUND28;*231,PTCNGDX2
.
          UNPACK    PTCNGDX2,KEY4,KEY5           * ICD10 Ed.12 startup
          MATCH     "    ",KEY4
          IF        @EQUAL
            MOVE      "99991231",PTCNGDX2
          ENDIF
          MATCH     "0000",KEY4
          IF        @EQUAL
            MOVE      "99991231",PTCNGDX2
          ENDIF
.
          UNPACK    PTCNGDX2,KEY4,KEY5           * ICD10 Ed.12
          MATCH     "9999",KEY4                  * is year = "9999"?
          IF        !@EQUAL
            OPEN      PATO12A2,"pato12af"
          ENDIF
.
          UNPACK    PTCNGDX1,KEY4,KEY5           * ICD10 Ed.11 startup
          MATCH     "    ",KEY4
          IF        @EQUAL
            MOVE      "99991231",PTCNGDX1
          ENDIF
          MATCH     "0000",KEY4
          IF        @EQUAL
            MOVE      "99991231",PTCNGDX1
          ENDIF
.
          UNPACK    PTCNGDX1,KEY4,KEY5           * ICD10 Ed.11
          MATCH     "9999",KEY4                  * is year = "9999"?
          IF        !@EQUAL
            OPEN      PATO11A2,"pato11af"
          ENDIF
.
          UNPACK    PTCNGDVX,KEY4,KEY5      * ICD10 Ed.10 startup     *I-0833093
          MATCH     "    ",KEY4
          IF        @EQUAL
            MOVE      "99991231",PTCNGDVX
          ENDIF
          MATCH     "0000",KEY4
          IF        @EQUAL
            MOVE      "99991231",PTCNGDVX
          ENDIF
.
          UNPACK    PTCNGDVX,KEY4,KEY5           * ICD10 Ed.10        *I-0833093
          MATCH     "9999",KEY4                  * is year = "9999"?
          IF        !@EQUAL
            OPEN      PATI1XO2,"pat10oxf"
          ENDIF
.
          UNPACK    PTCNGDV9,KEY4,KEY5           * ICD10 Ed.9         *I-311669
          MATCH     "9999",KEY4                  * is year = "9999"?
          IF        !@EQUAL
            OPEN      PATI19O2,"pat10o9f"
          ENDIF
.
          UNPACK    PTCNGDV8,KEY4,KEY5           * ICD10 Ed.8         *I-284420
          MATCH     "9999",KEY4                  * is year = "9999"?
          IF        !@EQUAL
            OPEN      PATI18O2,"pat10o8f"
          ENDIF
.
          UNPACK    PTCNGDV7,KEY4,KEY5           * ICD10 Ed.7         *I-219246
          MATCH     "9999",KEY4                  * is year = "9999"?       
          IF        !@EQUAL
            OPEN      PATI17O2,"pat10o7f"
          ENDIF
.
          UNPACK    PTCNGDV6,KEY4,KEY5           * ICD10 Ed.6         *I-163918
          MATCH     "9999",KEY4                  * is year = "9999"?       
          IF        !@EQUAL
            OPEN      PATI16O2,"pat10o6f"
          ENDIF
.
          MATCH     "99999999",PTCNGDV5                               *I-105244
          IF        !@EQUAL
            OPEN      PATI15O2,"pat10o5f"
          ENDIF
.
          MATCH     "99999999",PTCNGDV4
          IF        !@EQUAL
            OPEN      PATI14O2,"pat10o4f"
          ENDIF
.
          MATCH     "99999999",PTCNGDV3
          IF        !@EQUAL
            OPEN      PATI13O2,"pat10o3f"
          ENDIF
.
          MATCH     "99999999",PTCNI10D
          IF        !@EQUAL
            OPEN      PATI10O2,"pati10of"
          ENDIF
.
          OPEN      PATICDO2,"paticdof"
          RETURN
.
CLICO2    MOVE      ZERO,EXIT
          CLOSE     PATO12A2                                          *I-0917793
          CLOSE     PATO11A2                                          *I-0917793
          CLOSE     PATI1XO2                                          *I-0833093
          CLOSE     PATI19O2                                          *I-311669
          CLOSE     PATI18O2                                          *I-284420
          CLOSE     PATI17O2                                          *I-219246
          CLOSE     PATI16O2                                          *I-163918
          CLOSE     PATI15O2
          CLOSE     PATI14O2
          CLOSE     PATI13O2
          CLOSE     PATI10O2
          CLOSE     PATICDO2
          RETURN
.
          INC       PAT10OIO/INC       * ICD10 operation file
          INC       PAT13OIO/INC       * ICD10 Version 3 operation file
          INC       PAT14OIO/INC       * ICD10 Version 4 operation file
          INC       PAT15OIO/INC       * ICD10 Edition 5 operation file
          INC       PAT16OIO/INC       * ICD10 Ed.6 operation file    *I-163918
          INC       PAT17OIO/INC       * ICD10 Ed.7 operation file    *I-219246
          INC       PAT18OIO/INC       * ICD10 Ed.8 operation file    *I-284420
          INC       PAT19OIO/INC       * ICD10 Ed.9 operation file    *I-311669
          INC       PAT1XOIO/INC       * ICD10 Ed.10 operation file   *I-0833093
          INC       PATO11IO/INC       * ICD10 Ed.11 operation file
          INC       PATO12IO/INC       * ICD10 Ed.12 operation file   *I-0917793
+
.

