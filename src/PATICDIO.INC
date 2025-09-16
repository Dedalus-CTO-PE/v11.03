. *****************************************************************************
. *                                                                           *
. *       Include Name : PATICDIO.INC                                         *
. *                                                                           *
. *       Function     : I/O Routines for PATICDFD.INC                        *
. *                                                                           *
. *       File Name    : pati10df.dat                                         *
. *                                                                           *
. *       Keys         : KEY9  KEY13                                          *
. *                                                                           *
. *       Modifications:                                                      *
. *            V11.02.01 25/03/2022  Davin        TSK 0917793                 *
. *                      Added Ed.12 PTCNGDX2 + reads/opens/closes of patd12af*
. *            V10.14.01 14/03/2019  Don Nguyen   TSK 0869412                 *
. *                      Added ICD10 Ed.11 (PTCNGDX1) and modified applicable *
. *                      reads (RS, RK, RD).                                  *
. *                      Added ICD10 Edition 11 IO include (PATD11IO).        *
. *            V10.10.01 08/03/2017  Davin        TSK 0833093    HDP 2017/2018*
. *                      Added Ed.10 PTCNGDVX + reads to RSPTICD1 and RKPTICD1*
. *            V10.06.01 17/04/2015  Davin         CAR 311669    HDP 2015/2016*
. *                      Added Ed.9 PTCNGDV9 + reads to RSPTICD1 and RKPTICD1 *
. *            V10.05.01 14/11/2014  Peter Vela    CAR 308144                 *
. *                      Added pack to long description for ver7, ver6, ver5  *
. *            V10.03.01 23/04/2013  Davin         CAR 284420    HDP 2013/2014*
. *                      Added Ed.8 PTCNGDV8 + reads to RSPTICD1 and RKPTICD1 *
. *            V10.02.01 12/10/2011  Ebon Clements CAR 244004                 *
. *                      Added standard reads for index 2                     *
. *            V10.00.01 06/04/2010  Mike Laming   CAR 219246    HDP 2010     *
. *                      Added Ed.7 PTCNGDV7 + reads to RSPTICD1 and RKPTICD1 *
. *             V9.12.01 13/01/2010  Ebon Clements CAR 176111                 *
. *                      Fixed read of PTCNGDV5 & PTCNGDV6 in OPICD2          *
. *             V9.10.01 29/04/2008  Mike Laming   CAR 167314                 *
. *                      Added test for @EOS when testing ICDRDDTE            *
. *             V9.09.01 19/03/2008  Mike Laming   CAR 163918    HDP 2008     *
. *                      Added Ed.6 reads to RSPTICD1 and RKPTICD1            *
. *             V9.06.01 08/05/2006  Mike Laming   CAR 105244     HDP 2006    *
. *                      Added new IO reads to RSPTICD1 and RKPTICD1 for Ed.5 *
. *                      and assorted tests for PTCNGDV5                      *
. *             V9.03.03 07/06/2004 Henry Son    CAR 49037                    *
. *                      Added new IO reads RSPTICD1 and RKPTICD1             *
. *                      For Edition 4.                                       *
. *             V9.03.02 10.03.2004 Sylvek Litewka  CAR 46521                 *
. *                      Added new IO reads RSPTICD1 and RKPTICD1.            *
. *             V9.03.01 21.11.2003 Sylvek Litewka  CAR 20222                 *
. *                      Added PAT13DIO include for ICD10 Version 3 Disease   *
. *                      file.                                                *
. *                      27/05/98   Nick                                      *
. *                      Added PTCNI10D                                       *
. *                                                                           *
. *****************************************************************************.
.
.  -----    I/O Routines for First Index   -----
.
RAICD1    PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
            CALL      RAPT10D1
            RETURN
          ENDIF
.
RA10T9D1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATICDD1,KEY9;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPTICD1  MATCH     SP70,ICDRDDTE           * Is Date blank?
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
            CALL      RSPD12A1              * Read ICD10 Ed12 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDX1,KEY8           * Is Date >= ICD10 Ed11 Go-Live Date
          IF        !@LESS
            MOVE      "11",ICDRDVER         * Yes, set version ind to ICD10 Ed11
            CALL      RSPD11A1              * Read ICD10 Ed11 file
            RETURN
          ENDIF
.                                                                     *I-0833093
          MATCH     PTCNGDVX,KEY8           * Is Date >= ICD10 Ed10 Go-Live Date
          IF        !@LESS
            MOVE      "10",ICDRDVER         * Yes, set version ind to ICD10 Ed10
            CALL      RSPT1XD1              * Read ICD10 Ed10 file
            RETURN
          ENDIF
.                                                                     *I-311669
          MATCH     PTCNGDV9,KEY8           * Is Date >= ICD10 Ed9 Go-Live Date?
          IF        !@LESS
            MOVE      "9",ICDRDVER          * Yes, set version ind to ICD10 Ed.9
            CALL      RSPT19D1              * Read ICD10 Ed9 file
            RETURN
          ENDIF
.                                                                     *I-284420
          MATCH     PTCNGDV8,KEY8           * Is Date >= ICD10 Ed8 Go-Live Date?
          IF        !@LESS
            MOVE      "8",ICDRDVER          * Yes, set version ind to ICD10 Ed.8
            CALL      RSPT18D1              * Read ICD10 Ed8 file
            RETURN
          ENDIF
.                                                                     *I-219246
          MATCH     PTCNGDV7,KEY8           * Is Date >= ICD10 Ed7 Go-Live Date?
          IF        !@LESS
            MOVE      "7",ICDRDVER          * Yes, set version ind to ICD10 Ed.7
            CALL      RSPT17D1              * Read ICD10 Ed7 file
            RETURN
          ENDIF
.                                                                     *I-163918
          MATCH     PTCNGDV6,KEY8           * Is Date >= ICD10 Ed6 Go-Live Date?
          IF        !@LESS
            MOVE      "6",ICDRDVER          * Yes, set version ind to ICD10 Ed.6
            CALL      RSPT16D1              * Read ICD10 Ed6 file
            RETURN
          ENDIF
.                                                                     *I-105244
          MATCH     PTCNGDV5,KEY8           * Is Date >= ICD10 Ed5 Go-Live Date?
          IF        !@LESS
            MOVE      FIVE,ICDRDVER         * Yes, set version ind to ICD10 Ed5 
            CALL      RSPT15D1              * Read ICD10 Ed5 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV4,KEY8           * Is Date >= ICD10 V4 Go-Live Date?
          IF        !@LESS
            MOVE      FOUR,ICDRDVER         * Yes, set version ind to ICD10 V4
            CALL      RSPT14D1              * Read ICD10 V4 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV3,KEY8           * Is Date >= ICD10 V3 Go-Live Date?
          IF        !@LESS
            MOVE      THREE,ICDRDVER        * Yes, set version ind to ICD10 V3
            CALL      RSPT13D1              * Read ICD10 V3 file
            RETURN
          ENDIF
.
          MATCH     PTCNI10D,KEY8           * Is Date >= ICD10 Go-Live Date?
          IF        !@LESS
            MOVE      TWO,ICDRDVER          * Yes, set version ind to ICD10 V2
            CALL      RSPT10D1              * Read ICD10 (V2) file
          ELSE
            MOVE      ONE,ICDRDVER          * No, set version ind to ICD9
            CALL      RS10T9D1              * Read ICD9 file
          ENDIF
          RETURN
.
RDSICD1   PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
            CALL      RSPT10D1
            RETURN
          ENDIF
.
RS10T9D1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATICDD1,KEY9;;
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTICD1  MATCH     SP70,ICDRDDTE           * Is Date blank?
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
            CALL      RDPD12A1              * Read ICD10 Ed12 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDX1,KEY8           * Is Date >= ICD10 Ed11 Go-Live Date
          IF        !@LESS
            MOVE      "11",ICDRDVER         * Yes, set version ind to ICD10 Ed11
            CALL      RDPD11A1              * Read ICD10 Ed11 file
            RETURN
          ENDIF
.                                                                     *I-0833093
          MATCH     PTCNGDVX,KEY8           * Is Date >= ICD10 Ed10 Go-Live Date
          IF        !@LESS
            MOVE      "10",ICDRDVER         * Yes, set version ind to ICD10 Ed10
            CALL      RDPT1XD1              * Read ICD10 Ed10 file
            RETURN
          ENDIF
.                                                                     *I-311669
          MATCH     PTCNGDV9,KEY8           * Is Date >= ICD10 Ed9 Go-Live Date?
          IF        !@LESS
            MOVE      "9",ICDRDVER          * Yes, set version ind to ICD10 Ed.9
            CALL      RDPT19D1              * Read ICD10 Ed9 file
            RETURN
          ENDIF
.                                                                     *I-284420
          MATCH     PTCNGDV8,KEY8           * Is Date >= ICD10 Ed8 Go-Live Date?
          IF        !@LESS
            MOVE      "8",ICDRDVER          * Yes, set version ind to ICD10 Ed.8
            CALL      RDPT18D1              * Read ICD10 Ed8 file
            RETURN
          ENDIF
.                                                                     *I-219246
          MATCH     PTCNGDV7,KEY8           * Is Date >= ICD10 Ed7 Go-Live Date?
          IF        !@LESS
            MOVE      "7",ICDRDVER          * Yes, set version ind to ICD10 Ed7
            CALL      RDPT17D1              * Read ICD10 Ed7 file
            PACK      PT0DDSC2,DDESC,SP70,SP70,SP70
            RETURN
          ENDIF
.                                                                     *I-163918
          MATCH     PTCNGDV6,KEY8           * Is Date >= ICD10 Ed6 Go-Live Date?
          IF        !@LESS
            MOVE      "6",ICDRDVER          * Yes, set version ind to ICD10 Ed6
            CALL      RDPT16D1              * Read ICD10 Ed6 file
            PACK      PT0DDSC2,DDESC,SP70,SP70,SP70
            RETURN
          ENDIF
.                                                                     *I-105244
          MATCH     PTCNGDV5,KEY8           * Is Date >= ICD10 Ed5 Go-Live Date?
          IF        !@LESS
            MOVE      FIVE,ICDRDVER         * Yes, set version ind to ICD10 Ed5
            CALL      RDPT15D1              * Read ICD10 Ed5 file
            PACK      PT0DDSC2,DDESC,SP70,SP70,SP70
            RETURN
          ENDIF
. 
          MATCH     PTCNGDV4,KEY8           * Is Date >= ICD10 V4 Go-Live Date?
          IF        !@LESS
            MOVE      FOUR,ICDRDVER         * Yes, set version ind to ICD10 V4
            CALL      RDPT14D1              * Read ICD10 V4 file
            RETURN
          ENDIF
. 
          MATCH     PTCNGDV3,KEY8           * Is Date >= ICD10 V3 Go-Live Date?
          IF        !@LESS
            MOVE      THREE,ICDRDVER        * Yes, set version ind to ICD10 V3
            CALL      RDPT13D1              * Read ICD10 V3 file
            RETURN
          ENDIF
.
          MATCH     PTCNI10D,KEY8           * Is Date >= ICD10 Go-Live Date?
          IF        !@LESS
            MOVE      TWO,ICDRDVER          * Yes, set version ind to ICD10 V2
            CALL      RDPT10D1              * Read ICD10 (V2) file
          ELSE     
            MOVE      ONE,ICDRDVER          * No, set version ind to ICD9
            CALL      RD10T9D1              * Read ICD9 file
          ENDIF         
          RETURN
.
RDICD1    PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
            CALL      RDPT10D1
            RETURN
          ENDIF
.
RD10T9D1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATICDD1,KEY9;DPCODE,DGPCODE,DKEYWD,DDESC:
                                 DFLAG,DAGEGP,DLOW,DHIGH,DSEX:
                                 DDAGGER,DAREA,DDIGITS,DICD10CD,ICDSPARE
          GOTO      OVERCOND IF OVER
          MOVE      DGPCODE,SDGPCODE
          RETURN
.
RLICD1    PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
            CALL      RLPT10D1
            RETURN
          ENDIF
.
RL10T9D1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READL     PATICDD1,KEY9;DPCODE,DGPCODE,DKEYWD,DDESC,DFLAG,DAGEGP:
                                 DLOW,DHIGH,DSEX,DDAGGER,DAREA,DDIGITS:
                                 DICD10CD,ICDSPARE
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DGPCODE,SDGPCODE
          RETURN
.
RKPTICD1  MATCH     SP70,ICDRDDTE           * Is Date blank?
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
            CALL      RKPD12A1              * Read ICD10 Ed12 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDX1,KEY8           * Is Date >= ICD10 Ed11 Go-Live Date
          IF        !@LESS
            MOVE      "11",ICDRDVER         * Yes, set version ind to ICD10 Ed11
            CALL      RKPD11A1              * Read ICD10 Ed11 file
            RETURN
          ENDIF
.                                                                     *I-0833093
          MATCH     PTCNGDVX,KEY8           * Is Date >= ICD10 Ed10 Go-Live Date
          IF        !@LESS
            MOVE      "10",ICDRDVER         * Yes, set version ind to ICD10 Ed10
            CALL      RKPT1XD1              * Read ICD10 Ed10 file
            RETURN
          ENDIF
.                                                                     *I-311669
          MATCH     PTCNGDV9,KEY8           * Is Date >= ICD10 Ed9 Go-Live Date?
          IF        !@LESS
            MOVE      "9",ICDRDVER          * Yes, set version ind to ICD10 Ed.9
            CALL      RKPT19D1              * Read ICD10 Ed9 file
            RETURN
          ENDIF
.                                                                     *I-284420
          MATCH     PTCNGDV8,KEY8           * Is Date >= ICD10 Ed8 Go-Live Date?
          IF        !@LESS
            MOVE      "8",ICDRDVER          * Yes, set version ind to ICD10 Ed.8
            CALL      RKPT18D1              * Read ICD10 Ed8 file
            RETURN
          ENDIF
.                                                                     *I-219246
          MATCH     PTCNGDV7,KEY8           * Is Date >= ICD10 Ed7 Go-Live Date?
          IF        !@LESS
            MOVE      "7",ICDRDVER          * Yes, set version ind to ICD10 Ed7
            CALL      RKPT17D1              * Read ICD10 Ed7 file
            RETURN
          ENDIF
.                                                                     *I-163918
          MATCH     PTCNGDV6,KEY8           * Is Date >= ICD10 Ed6 Go-Live Date?
          IF        !@LESS
            MOVE      "6",ICDRDVER          * Yes, set version ind to ICD10 Ed6
            CALL      RKPT16D1              * Read ICD10 Ed6 file
            RETURN
          ENDIF
.                                                                     *I-105244
          MATCH     PTCNGDV5,KEY8           * Is Date >= ICD10 Ed5 Go-Live Date?
          IF        !@LESS
            MOVE      FIVE,ICDRDVER         * Yes, set version ind to ICD10 Ed5
            CALL      RKPT15D1              * Read ICD10 Ed5 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV4,KEY8           * Is Date >= ICD10 V4 Go-Live Date?
          IF        !@LESS
            MOVE      FOUR,ICDRDVER         * Yes, set version ind to ICD10 V4
            CALL      RKPT14D1              * Read ICD10 V4 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV3,KEY8           * Is Date >= ICD10 V3 Go-Live Date?
          IF        !@LESS
            MOVE      THREE,ICDRDVER        * Yes, set version ind to ICD10 V3
            CALL      RKPT13D1              * Read ICD10 V3 file
            RETURN
          ENDIF
.
          MATCH     PTCNI10D,KEY8           * Is Date >= ICD10 Go-Live Date?
          IF        !@LESS
            MOVE      TWO,ICDRDVER          * Yes, set version ind to ICD10 V2
            CALL      RKPT10D1              * Read ICD10 (V2) file
          ELSE
            MOVE      ONE,ICDRDVER          * No, set version ind to ICD9
            CALL      RK10T9D1              * Read ICD9 file
          ENDIF
          RETURN
.
RDKICD1   PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
            CALL      RKPT10D1
            RETURN
          ENDIF
.
RK10T9D1  MOVE      ZERO,OVRCD
          READKS    PATICDD1;DPCODE,DGPCODE,DKEYWD,DDESC,DFLAG,DAGEGP:
                             DLOW,DHIGH,DSEX,DDAGGER,DAREA,DDIGITS:
                             DICD10CD,ICDSPARE
          GOTO      OVERCOND IF OVER
          MOVE      DGPCODE,SDGPCODE
          RETURN
.
RDPICD1   PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
            CALL      RPPT10D1
            RETURN
          ENDIF
.
RP10T9D1  MOVE      ZERO,OVRCD
          READKP    PATICDD1;DPCODE,DGPCODE,DKEYWD,DDESC,DFLAG,DAGEGP:
                             DLOW,DHIGH,DSEX,DDAGGER,DAREA,DDIGITS:
                             DICD10CD,ICDSPARE
          GOTO      OVERCOND IF OVER
          MOVE      DGPCODE,SDGPCODE
          RETURN
.
UPICD1    PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
            CALL      UPPT10D1
            RETURN
          ENDIF
.
UP10T9D1  UPDATE    PATICDD1;DPCODE,DGPCODE,DKEYWD,DDESC,DFLAG,DAGEGP:
                             DLOW,DHIGH,DSEX,DDAGGER,DAREA,DDIGITS:
                             DICD10CD,ICDSPARE
          RETURN
.
WRICD1    PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
            CALL      WRPT10D1
            RETURN
          ENDIF
.
WR10T9D1  MOVE      ZERO,OVRCD
          TRAP      OVERLOCK IF IO 
          RESET     KEY9
          WRITE     PATICDD1,KEY9;DPCODE,DGPCODE,DKEYWD,DDESC,DFLAG,DAGEGP:
                             DLOW,DHIGH,DSEX,DDAGGER,DAREA,DDIGITS:
                             DICD10CD,ICDSPARE
          TRAPCLR   IO
          RETURN
.
DEICD1    PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
            CALL      DEPT10D1
            RETURN
          ENDIF
.
DE10T9D1  RESET     KEY9
          DELETE    PATICDD1,KEY9
          RETURN
.
ULICD1    PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
            CALL      ULPT10D1
            RETURN
          ENDIF
.
UL10T9D1  UNLOCK    PATICDD1
          RETURN
.
. -----    I/O Routines for Second Index    -----
.
RDSICD2   PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
            CALL      RSPT10D2
            RETURN
          ENDIF
.
RS10T9D2  MOVE      ZERO,OVRCD
          RESET     KEY13
          READ      PATICDD2,KEY13;;
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPTICD2  MATCH     SP70,ICDRDDTE           * Is Date blank?
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
            CALL      RSPD12A2              * Read ICD10 Ed12 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDX1,KEY8           * Is Date >= ICD10 Ed11 Go-Live Date
          IF        !@LESS
            MOVE      "11",ICDRDVER         * Yes, set version ind to ICD10 Ed11
            CALL      RSPD11A2              * Read ICD10 Ed11 file
            RETURN
          ENDIF
.                                                                     *I-0833093
          MATCH     PTCNGDVX,KEY8           * Is Date >= ICD10 Ed10 Go-Live Date
          IF        !@LESS
            MOVE      "10",ICDRDVER         * Yes, set version ind to ICD10 Ed10
            CALL      RSPT1XD2              * Read ICD10 Ed10 file
            RETURN
          ENDIF
.                                                                     *I-311669
          MATCH     PTCNGDV9,KEY8           * Is Date >= ICD10 Ed9 Go-Live Date?
          IF        !@LESS
            MOVE      "9",ICDRDVER          * Yes, set version ind to ICD10 Ed.9
            CALL      RSPT19D2              * Read ICD10 Ed9 file
            RETURN
          ENDIF
.                                                                     *I-284420
          MATCH     PTCNGDV8,KEY8           * Is Date >= ICD10 Ed8 Go-Live Date?
          IF        !@LESS
            MOVE      "8",ICDRDVER          * Yes, set version ind to ICD10 Ed.8
            CALL      RSPT18D2              * Read ICD10 Ed8 file
            RETURN
          ENDIF
.                                                                     *I-219246
          MATCH     PTCNGDV7,KEY8           * Is Date >= ICD10 Ed7 Go-Live Date?
          IF        !@LESS
            MOVE      "7",ICDRDVER          * Yes, set version ind to ICD10 Ed.7
            CALL      RSPT17D2              * Read ICD10 Ed7 file
            RETURN
          ENDIF
.                                                                     *I-163918
          MATCH     PTCNGDV6,KEY8           * Is Date >= ICD10 Ed6 Go-Live Date?
          IF        !@LESS
            MOVE      "6",ICDRDVER          * Yes, set version ind to ICD10 Ed.6
            CALL      RSPT16D2              * Read ICD10 Ed6 file
            RETURN
          ENDIF
.                                                                     *I-105244
          MATCH     PTCNGDV5,KEY8           * Is Date >= ICD10 Ed5 Go-Live Date?
          IF        !@LESS
            MOVE      FIVE,ICDRDVER         * Yes, set version ind to ICD10 Ed5
            CALL      RSPT15D2              * Read ICD10 Ed5 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV4,KEY8           * Is Date >= ICD10 V4 Go-Live Date?
          IF        !@LESS
            MOVE      FOUR,ICDRDVER         * Yes, set version ind to ICD10 V4
            CALL      RSPT14D2              * Read ICD10 V4 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV3,KEY8           * Is Date >= ICD10 V3 Go-Live Date?
          IF        !@LESS
            MOVE      THREE,ICDRDVER        * Yes, set version ind to ICD10 V3
            CALL      RSPT13D2              * Read ICD10 V3 file
            RETURN
          ENDIF
.
          MATCH     PTCNI10D,KEY8           * Is Date >= ICD10 Go-Live Date?
          IF        !@LESS
            MOVE      TWO,ICDRDVER          * Yes, set version ind to ICD10 V2
            CALL      RSPT10D2              * Read ICD10 (V2) file
          ELSE
            MOVE      ONE,ICDRDVER          * No, set version ind to ICD9
            CALL      RS10T9D2              * Read ICD9 file
          ENDIF
          RETURN
.
RDICD2    PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
            CALL      RDPT10D2
            RETURN
          ENDIF
.
RD10T9D2  MOVE      ZERO,OVRCD
          RESET     KEY13
          READ      PATICDD2,KEY13;DPCODE,DGPCODE,DKEYWD,DDESC:
                                 DFLAG,DAGEGP,DLOW,DHIGH,DSEX:
                                 DDAGGER,DAREA,DDIGITS,DICD10CD,ICDSPARE
          GOTO      OVERCOND IF OVER
          MOVE      DGPCODE,SDGPCODE
          RETURN
.
RDPTICD2  MATCH     SP70,ICDRDDTE           * Is Date blank?
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
            CALL      RDPD12A2              * Read ICD10 Ed12 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDX1,KEY8           * Is Date >= ICD10 Ed11 Go-Live Date
          IF        !@LESS
            MOVE      "11",ICDRDVER         * Yes, set version ind to ICD10 Ed11
            CALL      RDPD11A2              * Read ICD10 Ed11 file
            RETURN
          ENDIF
.                                                                     *I-0833093
          MATCH     PTCNGDVX,KEY8           * Is Date >= ICD10 Ed10 Go-Live Date
          IF        !@LESS
            MOVE      "10",ICDRDVER         * Yes, set version ind to ICD10 Ed10
            CALL      RDPT1XD2              * Read ICD10 Ed10 file
            RETURN
          ENDIF
.                                                                     *I-311669
          MATCH     PTCNGDV9,KEY8           * Is Date >= ICD10 Ed9 Go-Live Date?
          IF        !@LESS
            MOVE      "9",ICDRDVER          * Yes, set version ind to ICD10 Ed.9
            CALL      RDPT19D2              * Read ICD10 Ed9 file
            RETURN
          ENDIF
.                                                                     *I-284420
          MATCH     PTCNGDV8,KEY8           * Is Date >= ICD10 Ed8 Go-Live Date?
          IF        !@LESS
            MOVE      "8",ICDRDVER          * Yes, set version ind to ICD10 Ed.8
            CALL      RDPT18D2              * Read ICD10 Ed8 file
            RETURN
          ENDIF
.                                                                     *I-219246
          MATCH     PTCNGDV7,KEY8           * Is Date >= ICD10 Ed7 Go-Live Date?
          IF        !@LESS
            MOVE      "7",ICDRDVER          * Yes, set version ind to ICD10 Ed7
            CALL      RDPT17D2              * Read ICD10 Ed7 file
            PACK      PT0DDSC2,DDESC,SP70,SP70,SP70
            RETURN
          ENDIF
.                                                                     *I-163918
          MATCH     PTCNGDV6,KEY8           * Is Date >= ICD10 Ed6 Go-Live Date?
          IF        !@LESS
            MOVE      "6",ICDRDVER          * Yes, set version ind to ICD10 Ed6
            CALL      RDPT16D2              * Read ICD10 Ed6 file
            PACK      PT0DDSC2,DDESC,SP70,SP70,SP70
            RETURN
          ENDIF
.                                                                     *I-105244
          MATCH     PTCNGDV5,KEY8           * Is Date >= ICD10 Ed5 Go-Live Date?
          IF        !@LESS
            MOVE      FIVE,ICDRDVER         * Yes, set version ind to ICD10 Ed5
            CALL      RDPT15D2              * Read ICD10 Ed5 file
            PACK      PT0DDSC2,DDESC,SP70,SP70,SP70
            RETURN
          ENDIF
.
          MATCH     PTCNGDV4,KEY8           * Is Date >= ICD10 V4 Go-Live Date?
          IF        !@LESS
            MOVE      FOUR,ICDRDVER         * Yes, set version ind to ICD10 V4
            CALL      RDPT14D2              * Read ICD10 V4 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV3,KEY8           * Is Date >= ICD10 V3 Go-Live Date?
          IF        !@LESS
            MOVE      THREE,ICDRDVER        * Yes, set version ind to ICD10 V3
            CALL      RDPT13D2              * Read ICD10 V3 file
            RETURN
          ENDIF
.
          MATCH     PTCNI10D,KEY8           * Is Date >= ICD10 Go-Live Date?
          IF        !@LESS
            MOVE      TWO,ICDRDVER          * Yes, set version ind to ICD10 V2
            CALL      RDPT10D2              * Read ICD10 (V2) file
          ELSE
            MOVE      ONE,ICDRDVER          * No, set version ind to ICD9
            CALL      RD10T9D2              * Read ICD9 file
          ENDIF
          RETURN
.
RLICD2    PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
            CALL      RLPT10D2
            RETURN
          ENDIF
.
RL10T9D2  MOVE      ZERO,OVRCD
          RESET     KEY13
          READL     PATICDD2,KEY13;DPCODE,DGPCODE,DKEYWD,DDESC,DFLAG,DAGEGP:
                                 DLOW,DHIGH,DSEX,DDAGGER,DAREA,DDIGITS:
                                 DICD10CD,DICD10CD
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DGPCODE,SDGPCODE
          RETURN
.
RDKICD2   PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
            CALL      RKPT10D2
            RETURN
          ENDIF
.
RK10T9D2  MOVE      ZERO,OVRCD
          READKS    PATICDD2;DPCODE,DGPCODE,DKEYWD,DDESC,DFLAG,DAGEGP:
                             DLOW,DHIGH,DSEX,DDAGGER,DAREA,DDIGITS:
                             DICD10CD,ICDSPARE
          GOTO      OVERCOND IF OVER
          MOVE      DGPCODE,SDGPCODE
          RETURN
.
RKPTICD2  MATCH     SP70,ICDRDDTE           * Is Date blank?
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
            CALL      RKPD12A2              * Read ICD10 Ed12 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDX1,KEY8           * Is Date >= ICD10 Ed11 Go-Live Date
          IF        !@LESS
            MOVE      "11",ICDRDVER         * Yes, set version ind to ICD10 Ed11
            CALL      RKPD11A2              * Read ICD10 Ed11 file
            RETURN
          ENDIF
.                                                                     *I-0833093
          MATCH     PTCNGDVX,KEY8           * Is Date >= ICD10 Ed10 Go-Live Date
          IF        !@LESS
            MOVE      "10",ICDRDVER         * Yes, set version ind to ICD10 Ed10
            CALL      RKPT1XD2              * Read ICD10 Ed10 file
            RETURN
          ENDIF
.                                                                     *I-311669
          MATCH     PTCNGDV9,KEY8           * Is Date >= ICD10 Ed9 Go-Live Date?
          IF        !@LESS
            MOVE      "9",ICDRDVER          * Yes, set version ind to ICD10 Ed.9
            CALL      RKPT19D2              * Read ICD10 Ed9 file
            RETURN
          ENDIF
.                                                                     *I-284420
          MATCH     PTCNGDV8,KEY8           * Is Date >= ICD10 Ed8 Go-Live Date?
          IF        !@LESS
            MOVE      "8",ICDRDVER          * Yes, set version ind to ICD10 Ed.8
            CALL      RKPT18D2              * Read ICD10 Ed8 file
            RETURN
          ENDIF
.                                                                     *I-219246
          MATCH     PTCNGDV7,KEY8           * Is Date >= ICD10 Ed7 Go-Live Date?
          IF        !@LESS
            MOVE      "7",ICDRDVER          * Yes, set version ind to ICD10 Ed7
            CALL      RKPT17D2              * Read ICD10 Ed7 file
            RETURN
          ENDIF
.                                                                     *I-163918
          MATCH     PTCNGDV6,KEY8           * Is Date >= ICD10 Ed6 Go-Live Date?
          IF        !@LESS
            MOVE      "6",ICDRDVER          * Yes, set version ind to ICD10 Ed6
            CALL      RKPT16D2              * Read ICD10 Ed6 file
            RETURN
          ENDIF
.                                                                     *I-105244
          MATCH     PTCNGDV5,KEY8           * Is Date >= ICD10 Ed5 Go-Live Date?
          IF        !@LESS
            MOVE      FIVE,ICDRDVER         * Yes, set version ind to ICD10 Ed5
            CALL      RKPT15D2              * Read ICD10 Ed5 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV4,KEY8           * Is Date >= ICD10 V4 Go-Live Date?
          IF        !@LESS
            MOVE      FOUR,ICDRDVER         * Yes, set version ind to ICD10 V4
            CALL      RKPT14D2              * Read ICD10 V4 file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV3,KEY8           * Is Date >= ICD10 V3 Go-Live Date?
          IF        !@LESS
            MOVE      THREE,ICDRDVER        * Yes, set version ind to ICD10 V3
            CALL      RKPT13D2              * Read ICD10 V3 file
            RETURN
          ENDIF
.
          MATCH     PTCNI10D,KEY8           * Is Date >= ICD10 Go-Live Date?
          IF        !@LESS
            MOVE      TWO,ICDRDVER          * Yes, set version ind to ICD10 V2
            CALL      RKPT10D2              * Read ICD10 (V2) file
          ELSE
            MOVE      ONE,ICDRDVER          * No, set version ind to ICD9
            CALL      RK10T9D2              * Read ICD9 file
          ENDIF
          RETURN
.
RDPICD2   PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
            CALL      RPPT10D2
            RETURN
          ENDIF
.
RP10T9D2  MOVE      ZERO,OVRCD
          READKP    PATICDD2;DPCODE,DGPCODE,DKEYWD,DDESC,DFLAG,DAGEGP:
                             DLOW,DHIGH,DSEX,DDAGGER,DAREA,DDIGITS:
                             DICD10CD,ICDSPARE
          GOTO      OVERCOND IF OVER
          MOVE      DGPCODE,SDGPCODE
          RETURN
.
UPICD2    PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
            CALL      UPPT10D2
            RETURN
          ENDIF
.
UP10T9D2  UPDATE    PATICDD2;DPCODE,DGPCODE,DKEYWD,DDESC,DFLAG,DAGEGP:
                             DLOW,DHIGH,DSEX,DDAGGER,DAREA,DDIGITS:
                             DICD10CD,ICDSPARE
          RETURN
.
WRICD2    PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
            CALL      WRPT10D2
            RETURN
          ENDIF
.
WR10T9D2  MOVE      ZERO,OVRCD
          TRAP      OVERLOCK IF IO 
          RESET     KEY13
          WRITE     PATICDD2,KEY13;DPCODE,DGPCODE,DKEYWD,DDESC,DFLAG,DAGEGP:
                             DLOW,DHIGH,DSEX,DDAGGER,DAREA,DDIGITS:
                             DICD10CD,ICDSPARE
          TRAPCLR   IO
          RETURN
.
DEICD2    PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
            CALL      DEPT10D2
            RETURN
          ENDIF
.
DE10T9D2  RESET     KEY13
          DELETE    PATICDD2,KEY13
          RETURN
.
ULICD2    PACK      KEY8,CCC,CYY,CMM,CDD
          REP       " 0",KEY8
          MATCH     PTCNI10D,KEY8
          IF        !@LESS
            CALL      ULPT10D2
            RETURN
          ENDIF
.
UL10T9D2  UNLOCK    PATICDD2
          RETURN
.
OPICD1    OPEN      CONTROLF,"controlf"
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
            OPEN      PATD12A1,"patd12af"
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
            OPEN      PATD11A1,"patd11af"
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
            OPEN      PATI1XD1,"pat10dxf"
          ENDIF
.
          UNPACK    PTCNGDV9,KEY4,KEY5           * ICD10 Ed.9         *I-311669
          MATCH     "9999",KEY4                  * is year = "9999"?
          IF        !@EQUAL
            OPEN      PATI19D1,"pat10d9f"
          ENDIF
.
          UNPACK    PTCNGDV8,KEY4,KEY5           * ICD10 Ed.8         *I-284420
          MATCH     "9999",KEY4                  * is year = "9999"?         
          IF        !@EQUAL
            OPEN      PATI18D1,"pat10d8f"
          ENDIF
.
          UNPACK    PTCNGDV7,KEY4,KEY5           * ICD10 Ed.7         *I-219246
          MATCH     "9999",KEY4                  * is year = "9999"?         
          IF        !@EQUAL
            OPEN      PATI17D1,"pat10d7f"
          ENDIF
.
          UNPACK    PTCNGDV6,KEY4,KEY5           * ICD10 Ed.6         *I-163918
          MATCH     "9999",KEY4                  * is year = "9999"?         
          IF        !@EQUAL
            OPEN      PATI16D1,"pat10d6f"
          ENDIF
.
          MATCH     "99999999",PTCNGDV5          * ICD10 Ed.5         *I-105244
          IF        !@EQUAL
            OPEN      PATI15D1,"pat10d5f"
          ENDIF
.
          MATCH     "99999999",PTCNGDV4
          IF        !@EQUAL
            OPEN      PATI14D1,"pat10d4f"
          ENDIF
.
          MATCH     "99999999",PTCNGDV3
          IF        !@EQUAL
            OPEN      PATI13D1,"pat10d3f"
          ENDIF
.
          MATCH     "99999999",PTCNI10D
          IF        !@EQUAL
            OPEN      PATI10D1,"pati10df"
          ENDIF
.
          OPEN      PATICDD1,"paticddf"
          RETURN
.
CLICD1    MOVE      ZERO,EXIT
          CLOSE     PATD12A1                                          *I-0917793
          CLOSE     PATD11A1                                          *I-0917793
          CLOSE     PATI1XD1                                          *I-0833093
          CLOSE     PATI19D1                                          *I-311669
          CLOSE     PATI18D1                                          *I-284420
          CLOSE     PATI17D1                                          *I-219246
          CLOSE     PATI16D1                                          *I-163918
          CLOSE     PATI15D1
          CLOSE     PATI14D1
          CLOSE     PATI13D1
          CLOSE     PATI10D1
          CLOSE     PATICDD1
          RETURN
.
OPICD2    OPEN      CONTROLF,"controlf"
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
            OPEN      PATD12A2,"patd12af"
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
            OPEN      PATD11A2,"patd11af"
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
            OPEN      PATI1XD2,"pat10dxf"
          ENDIF
.
          UNPACK    PTCNGDV9,KEY4,KEY5           * ICD10 Ed.9         *I-311669
          MATCH     "9999",KEY4                  * is year = "9999"?
          IF        !@EQUAL
            OPEN      PATI19D2,"pat10d9f"
          ENDIF
.
          UNPACK    PTCNGDV8,KEY4,KEY5           * ICD10 Ed.8         *I-284420
          MATCH     "9999",KEY4                  * is year = "9999"?
          IF        !@EQUAL
            OPEN      PATI18D2,"pat10d8f"
          ENDIF
.
          UNPACK    PTCNGDV7,KEY4,KEY5           * ICD10 Ed.7         *I-219246
          MATCH     "9999",KEY4                  * is year = "9999"?
          IF        !@EQUAL
            OPEN      PATI17D2,"pat10d7f"
          ENDIF
.
          UNPACK    PTCNGDV6,KEY4,KEY5           * ICD10 Ed.6         *I-163918
          MATCH     "9999",KEY4                  * is year = "9999"?
          IF        !@EQUAL
            OPEN      PATI16D2,"pat10d6f"
          ENDIF
.
          MATCH     "99999999",PTCNGDV5                               *I-105244
          IF        !@EQUAL
            OPEN      PATI15D2,"pat10d5f"
          ENDIF
.
          MATCH     "99999999",PTCNGDV4
          IF        !@EQUAL
            OPEN      PATI14D2,"pat10d4f"
          ENDIF
.
          MATCH     "99999999",PTCNGDV3
          IF        !@EQUAL
            OPEN      PATI13D2,"pat10d3f"
          ENDIF
.
          MATCH     "99999999",PTCNI10D
          IF        !@EQUAL
            OPEN      PATI10D2,"pati10df"
          ENDIF
.
          OPEN      PATICDD2,"paticddf"
          RETURN
.
CLICD2    MOVE      ZERO,EXIT
          CLOSE     PATD12A2                                          *I-0917793
          CLOSE     PATD11A2                                          *I-0917793
          CLOSE     PATI1XD2                                          *I-0833093
          CLOSE     PATI19D2                                          *I-311669
          CLOSE     PATI18D2                                          *I-284420
          CLOSE     PATI17D2                                          *I-219246
          CLOSE     PATI16D2                                          *I-163918
          CLOSE     PATI15D2
          CLOSE     PATI14D2
          CLOSE     PATI13D2
          CLOSE     PATI10D2
          CLOSE     PATICDD2
          RETURN
.
. -----    I/O Routines for third Index    -----
.
RAICD3    MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATICDD3,KEY9;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSICD3   MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATICDD3,KEY9;;
          GOTO      OVERCOND IF OVER
          RETURN
.
RDICD3    MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATICDD3,KEY9;DPCODE,DGPCODE,DKEYWD,DDESC:
                                 DFLAG,DAGEGP,DLOW,DHIGH,DSEX:
                                 DDAGGER,DAREA,DDIGITS,DICD10CD,ICDSPARE
          GOTO      OVERCOND IF OVER
          MOVE      DGPCODE,SDGPCODE
          RETURN
.
RLICD3    MOVE      ZERO,OVRCD
          RESET     KEY9
          READL     PATICDD3,KEY9;DPCODE,DGPCODE,DKEYWD,DDESC,DFLAG,DAGEGP:
                                 DLOW,DHIGH,DSEX,DDAGGER,DAREA,DDIGITS:
                                 DICD10CD,ICDSPARE
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DGPCODE,SDGPCODE
          RETURN
.
RDKICD3   MOVE      ZERO,OVRCD
          READKS    PATICDD3;DPCODE,DGPCODE,DKEYWD,DDESC,DFLAG,DAGEGP:
                             DLOW,DHIGH,DSEX,DDAGGER,DAREA,DDIGITS:
                             DICD10CD,ICDSPARE
          GOTO      OVERCOND IF OVER
          MOVE      DGPCODE,SDGPCODE
          RETURN
.
RDPICD3   MOVE      ZERO,OVRCD
          READKP    PATICDD3;DPCODE,DGPCODE,DKEYWD,DDESC,DFLAG,DAGEGP:
                             DLOW,DHIGH,DSEX,DDAGGER,DAREA,DDIGITS:
                             DICD10CD,ICDSPARE
          GOTO      OVERCOND IF OVER
          MOVE      DGPCODE,SDGPCODE
          RETURN
.
ULICD3    UNLOCK    PATICDD3
          RETURN
.
          INC           PAT10DIO/INC
          INC           PAT13DIO/INC   * ICD10 Version 3 Disease codes
          INC           PAT14DIO/INC   * ICD10 Edition 4 Disease codes
          INC           PAT15DIO/INC   * ICD10 Edition 5 Disease codes
          INC           PAT16DIO/INC   * ICD10 Ed.6 Disease codes     *I-163918
          INC           PAT17DIO/INC   * ICD10 Ed.7 Disease codes     *I-219246
          INC           PAT18DIO/INC   * ICD10 Ed.8 Disease codes     *I-284420
          INC           PAT19DIO/INC   * ICD10 Ed.9 Disease codes     *I-311669
          INC           PAT1XDIO/INC   * ICD10 Ed.10 Disease codes    *I-0833093
          INC           PATD11IO/INC   * ICD10 Ed.11 Disease codes
          INC           PATD12IO/INC   * ICD10 Ed.12 Disease codes    *I-0917793
+
