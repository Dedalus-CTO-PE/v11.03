. V11.02.01 28/03/2022 Davin      TSK 0917793 - Added include PTDK12IO
. V10.14.01 14/03/2019 Don Nguyen TSK 0869412 - Added include PTDK11IO
. V10.10.01 08/03/2017 Davin      TSK 0833093 - Added include PATKXDIO
. V10.06.01 17/04/2015 Davin       CAR 311669 - Added include PATK9DIO
. V10.03.01 23/04/2013 Davin       CAR 284420 - Added include PATK8DIO
. V10.00.02 18/10/2010 Mike Laming CAR 224240 - Fixed tests PTCNGDV7   
. V10.00.01 06/04/2010 Mike Laming CAR 219246 - Added include PATK7DIO
. V9.09.001 18/03/2008 Mike Laming CAR 163918 - Added include PATK6DIO
. V9.06.001 15/05/2006 Mike Laming CAR 105244 - Added include PATK5DIO
.
. PATKCDIO    
. --------
. Filename     : patkcdaf.dat
.
RSPTCD1   RESET     KEY24                                                       
          READ      PATKCDA1,KEY24;;                                            
          RETURN
.
RAPTCD1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATKCDA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTCD1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATKCDA1,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTCD1                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATKCDA1;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTCD1                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATKCDA1;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTCD1                                                                         
          UPDATE    PATKCDA1;PTCDITM,PTCDKWD,PTCDSPA                            
          RETURN
.
WRPTCD1   RESET     KEY24                                                       
          WRITE     PATKCDA1,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          RETURN
.
DEPTCD1   RESET     KEY24                                                       
          DELETE    PATKCDA1,KEY24                                              
          RETURN
.
RSPTCD2   RESET     KEY24                                                       
          READ      PATKCDA2,KEY24;;                                            
          RETURN
.
RAPTCD2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATKCDA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTCD2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATKCDA2,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTCD2                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATKCDA2;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTCD2                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATKCDA2;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTCD2                                                                         
          UPDATE    PATKCDA2;PTCDITM,PTCDKWD,PTCDSPA                            
          RETURN
.
WRPTCD2   RESET     KEY24                                                       
          WRITE     PATKCDA2,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          RETURN
.
DEPTCD2   RESET     KEY24                                                       
          DELETE    PATKCDA2,KEY24                                              
          RETURN
.
.
.  Common IO routines to read ICD10 V2 or ICD10 V3 or ICD10 V4 
.  Keyword Search files based
.  on given date - ICDRDDTE. If ICDRDDTE is not set then current date is used.
.
RDPTKCD1  MATCH     SP70,ICDRDDTE           * Is Date blank ?
          IF        @EQUAL
            PACK      KEY8,CCC,CYY,CMM,CDD  * Yes, use current date
            REP       " 0",KEY8
          ELSE
            MOVE      ICDRDDTE,KEY8
          ENDIF
.                                           ****** ICD10 Ed.12        *I-0917793
          MATCH     PTCNGDX2,KEY8           * Is Date >= ICD10 Ed12 Go-Live Date
          IF        !@LESS
            CALL      RDDK12A1              * Yes, read ICD10 Ed.12 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.11
          MATCH     PTCNGDX1,KEY8           * Is Date >= ICD10 Ed11 Go-Live Date
          IF        !@LESS
            CALL      RDDK11A1              * Yes, read ICD10 Ed.11 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.10        *I-0833093
          MATCH     PTCNGDVX,KEY8           * Is Date >= ICD10 Ed10 Go-Live Date
          IF        !@LESS
            CALL      RDPTXD1               * Yes, read ICD10 Ed.10 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.9         *I-311669
          MATCH     PTCNGDV9,KEY8           * Is Date >= ICD10 Ed9 Go-Live Date?
          IF        !@LESS
            CALL      RDPT9D1               * Yes, read ICD10 Ed.9 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.8         *I-284420
          MATCH     PTCNGDV8,KEY8           * Is Date >= ICD10 Ed8 Go-Live Date?
          IF        !@LESS
            CALL      RDPT8D1               * Yes, read ICD10 Ed.8 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.7         *I-219246
          MATCH     PTCNGDV7,KEY8           * Is Date >= ICD10 Ed7 Go-Live Date?
          IF        !@LESS
            CALL      RDPT7D1               * Yes, read ICD10 Ed.7 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.6         *I-163918
          MATCH     PTCNGDV6,KEY8           * Is Date >= ICD10 Ed6 Go-Live Date?
          IF        !@LESS
            CALL      RDPT6D1               * Yes, read ICD10 Ed.6 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.5         *I-105244
          MATCH     PTCNGDV5,KEY8           * Is Date >= ICD10 V5 Go-Live Date?
          IF        !@LESS
            CALL      RDPT5D1               * Yes, read ICD10 V5 Keyword file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV4,KEY8           * Is Date >= ICD10 V4 Go-Live Date?
          IF        !@LESS
            CALL      RDPT4D1               * Yes, read ICD10 V4 Keyword file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV3,KEY8           * Is Date >= ICD10 V3 Go-Live Date?
          IF        !@LESS
            CALL      RDPT3D1               * Yes, read ICD10 V3 Keyword file
          ELSE
            CALL      RDPTCD1               * No, read ICD10 V2 Keyword file
          ENDIF
          RETURN
.
RKPTKCD1  MATCH     SP70,ICDRDDTE           * Is Date blank ?
          IF        @EQUAL
            PACK      KEY8,CCC,CYY,CMM,CDD  * Yes, use current date
            REP       " 0",KEY8
          ELSE
            MOVE      ICDRDDTE,KEY8
          ENDIF
.                                           ****** ICD10 Ed.12        *I-0917793
          MATCH     PTCNGDX2,KEY8           * Is Date >= ICD10 Ed12 Go-Live Date
          IF        !@LESS
            CALL      RKDK12A1              * Yes, read ICD10 Ed.12 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.11
          MATCH     PTCNGDX1,KEY8           * Is Date >= ICD10 Ed11 Go-Live Date
          IF        !@LESS
            CALL      RKDK11A1              * Yes, read ICD10 Ed.11 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.10        *I-0833093
          MATCH     PTCNGDVX,KEY8           * Is Date >= ICD10 Ed10 Go-Live Date
          IF        !@LESS
            CALL      RKPTXD1               * Yes, read ICD10 Ed.10 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.9         *I-311669
          MATCH     PTCNGDV9,KEY8           * Is Date >= ICD10 Ed9 Go-Live Date?
          IF        !@LESS
            CALL      RKPT9D1               * Yes, read ICD10 Ed.9 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.8         *I-284420
          MATCH     PTCNGDV8,KEY8           * Is Date >= ICD10 Ed8 Go-Live Date?
          IF        !@LESS
            CALL      RKPT8D1               * Yes, read ICD10 Ed.8 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.7         *I-219246
          MATCH     PTCNGDV7,KEY8           * Is Date >= ICD10 Ed7 Go-Live Date?
          IF        !@LESS
            CALL      RKPT7D1               * Yes, read ICD10 Ed.7 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.6         *I-163918
          MATCH     PTCNGDV6,KEY8           * Is Date >= ICD10 Ed6 Go-Live Date?
          IF        !@LESS
            CALL      RKPT6D1               * Yes, read ICD10 Ed.6 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.5         *I-105244
          MATCH     PTCNGDV5,KEY8           * Is Date >= ICD10 V5 Go-Live Date?
          IF        !@LESS
            CALL      RKPT5D1               * Yes, read ICD10 V5 Keyword file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV4,KEY8           * Is Date >= ICD10 V4 Go-Live Date?
          IF        !@LESS
            CALL      RKPT4D1               * Yes, read ICD10 V4 Keyword file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV3,KEY8           * Is Date >= ICD10 V3 Go-Live Date?
          IF        !@LESS
            CALL      RKPT3D1               * Yes, read ICD10 V3 Keyword file
          ELSE
            CALL      RKPTCD1               * No, read ICD10 V2 Keyword file
          ENDIF
          RETURN
.
RSPTKCD2  MATCH     SP70,ICDRDDTE           * Is Date blank ?
          IF        @EQUAL
            PACK      KEY8,CCC,CYY,CMM,CDD  * Yes, use current date
            REP       " 0",KEY8
          ELSE
            MOVE      ICDRDDTE,KEY8
          ENDIF
.                                           ****** ICD10 Ed.12        *I-0917793
          MATCH     PTCNGDX2,KEY8           * Is Date >= ICD10 Ed12 Go-Live Date
          IF        !@LESS
            CALL      RSDK12A2              * Yes, read ICD10 Ed.12 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.11
          MATCH     PTCNGDX1,KEY8           * Is Date >= ICD10 Ed11 Go-Live Date
          IF        !@LESS
            CALL      RSDK11A2              * Yes, read ICD10 Ed.11 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.10        *I-0833093
          MATCH     PTCNGDVX,KEY8           * Is Date >= ICD10 Ed10 Go-Live Date
          IF        !@LESS
            CALL      RSPTXD2               * Yes, read ICD10 Ed.10 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.9         *I-311669
          MATCH     PTCNGDV9,KEY8           * Is Date >= ICD10 Ed9 Go-Live Date?
          IF        !@LESS
            CALL      RSPT9D2               * Yes, read ICD10 Ed.9 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.8         *I-284420
          MATCH     PTCNGDV8,KEY8           * Is Date >= ICD10 Ed8 Go-Live Date?
          IF        !@LESS
            CALL      RSPT8D2               * Yes, read ICD10 Ed.8 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.7         *I-219246
          MATCH     PTCNGDV7,KEY8           * Is Date >= ICD10 Ed7 Go-Live Date?
          IF        !@LESS
            CALL      RSPT7D2               * Yes, read ICD10 Ed.7 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.6         *I-163918
          MATCH     PTCNGDV6,KEY8           * Is Date >= ICD10 Ed6 Go-Live Date?
          IF        !@LESS
            CALL      RSPT6D2               * Yes, read ICD10 Ed.6 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.5         *I-105244
          MATCH     PTCNGDV5,KEY8           * Is Date >= ICD10 V5 Go-Live Date?
          IF        !@LESS
            CALL      RSPT5D2               * Yes, read ICD10 V5 Keyword file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV4,KEY8           * Is Date >= ICD10 V4 Go-Live Date?
          IF        !@LESS
            CALL      RSPT4D2               * Yes, read ICD10 V4 Keyword file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV3,KEY8           * Is Date >= ICD10 V3 Go-Live Date?
          IF        !@LESS
            CALL      RSPT3D2               * Yes, read ICD10 V3 Keyword file
          ELSE
            CALL      RSPTCD2               * No, read ICD10 V2 Keyword file
          ENDIF
          RETURN
.
RDPTKCD2  MATCH     SP70,ICDRDDTE           * Is Date blank ?
          IF        @EQUAL
            PACK      KEY8,CCC,CYY,CMM,CDD  * Yes, use current date
            REP       " 0",KEY8
          ELSE
            MOVE      ICDRDDTE,KEY8
          ENDIF
.                                           ****** ICD10 Ed.12        *I-0917793
          MATCH     PTCNGDX2,KEY8           * Is Date >= ICD10 Ed12 Go-Live Date
          IF        !@LESS
            CALL      RDDK12A2              * Yes, read ICD10 Ed.12 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.11
          MATCH     PTCNGDX1,KEY8           * Is Date >= ICD10 Ed11 Go-Live Date
          IF        !@LESS
            CALL      RDDK11A2              * Yes, read ICD10 Ed.11 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.10        *I-0833093
          MATCH     PTCNGDVX,KEY8           * Is Date >= ICD10 Ed10 Go-Live Date
          IF        !@LESS
            CALL      RDPTXD2               * Yes, read ICD10 Ed.10 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.9         *I-311669
          MATCH     PTCNGDV9,KEY8           * Is Date >= ICD10 Ed9 Go-Live Date?
          IF        !@LESS
            CALL      RDPT9D2               * Yes, read ICD10 Ed.9 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.8         *I-284420
          MATCH     PTCNGDV8,KEY8           * Is Date >= ICD10 Ed8 Go-Live Date?
          IF        !@LESS
            CALL      RDPT8D2               * Yes, read ICD10 Ed.8 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.7         *I-219246
          MATCH     PTCNGDV7,KEY8           * Is Date >= ICD10 Ed7 Go-Live Date?
          IF        !@LESS
            CALL      RDPT7D2               * Yes, read ICD10 Ed.7 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.6         *I-163918
          MATCH     PTCNGDV6,KEY8           * Is Date >= ICD10 Ed6 Go-Live Date?
          IF        !@LESS
            CALL      RDPT6D2               * Yes, read ICD10 Ed.6 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.5         *I-105244
          MATCH     PTCNGDV5,KEY8           * Is Date >= ICD10 V5 Go-Live Date?
          IF        !@LESS
            CALL      RDPT5D2               * Yes, read ICD10 V5 Keyword file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV4,KEY8           * Is Date >= ICD10 V4 Go-Live Date?
          IF        !@LESS
            CALL      RDPT4D2               * Yes, read ICD10 V4 Keyword file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV3,KEY8           * Is Date >= ICD10 V3 Go-Live Date?
          IF        !@LESS
            CALL      RDPT3D2               * Yes, read ICD10 V3 Keyword file
          ELSE
            CALL      RDPTCD2               * No, read ICD10 V2 Keyword file
          ENDIF
          RETURN
.
RKPTKCD2  MATCH     SP70,ICDRDDTE           * Is Date blank ?
          IF        @EQUAL
            PACK      KEY8,CCC,CYY,CMM,CDD  * Yes, use current date
            REP       " 0",KEY8
          ELSE
            MOVE      ICDRDDTE,KEY8
          ENDIF
.                                           ****** ICD10 Ed.12        *I-0917793
          MATCH     PTCNGDX2,KEY8           * Is Date >= ICD10 Ed12 Go-Live Date
          IF        !@LESS
            CALL      RKDK12A2              * Yes, read ICD10 Ed.12 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.11
          MATCH     PTCNGDX1,KEY8           * Is Date >= ICD10 Ed11 Go-Live Date
          IF        !@LESS
            CALL      RKDK11A2              * Yes, read ICD10 Ed.11 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.10        *I-0833093
          MATCH     PTCNGDVX,KEY8           * Is Date >= ICD10 Ed10 Go-Live Date
          IF        !@LESS
            CALL      RKPTXD2               * Yes, read ICD10 Ed.10 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.9         *I-311669
          MATCH     PTCNGDV9,KEY8           * Is Date >= ICD10 Ed9 Go-Live Date?
          IF        !@LESS
            CALL      RKPT9D2               * Yes, read ICD10 Ed.9 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.8         *I-284420
          MATCH     PTCNGDV8,KEY8           * Is Date >= ICD10 Ed8 Go-Live Date?
          IF        !@LESS
            CALL      RKPT8D2               * Yes, read ICD10 Ed.8 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.7         *I-219246
          MATCH     PTCNGDV7,KEY8           * Is Date >= ICD10 Ed7 Go-Live Date?
          IF        !@LESS
            CALL      RKPT7D2               * Yes, read ICD10 Ed.7 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.6         *I-163918
          MATCH     PTCNGDV6,KEY8           * Is Date >= ICD10 Ed6 Go-Live Date?
          IF        !@LESS
            CALL      RKPT6D2               * Yes, read ICD10 Ed.6 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.5         *I-105244
          MATCH     PTCNGDV5,KEY8           * Is Date >= ICD10 V5 Go-Live Date?
          IF        !@LESS
            CALL      RKPT5D2               * Yes, read ICD10 V5 Keyword file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV4,KEY8           * Is Date >= ICD10 V4 Go-Live Date?
          IF        !@LESS
            CALL      RKPT4D2               * Yes, read ICD10 V4 Keyword file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV3,KEY8           * Is Date >= ICD10 V3 Go-Live Date?
          IF        !@LESS
            CALL      RKPT3D2               * Yes, read ICD10 V3 Keyword file
          ELSE
            CALL      RKPTCD2               * No, read ICD10 V2 Keyword file
          ENDIF
          RETURN
.
OPKCD1    OPEN      CONTROLF,"controlf"
          READ      CONTROLF,HUND09;*151,PTCNGDV3
          READ      CONTROLF,HUND05;*217,PTCNGDV4:                     *I-49037
                                    *227,PTCNGDV5                     *I-105244
          READ      CONTROLF,HUND12;*239,PTCNGDV6                     *I-163918
          READ      CONTROLF,HUND10;*61,PTCNGDV7:                     *I-219246
                                    *69,PTCNGDV8:                     *I-284420
                                    *77,PTCNGDV9:                     *I-311669
                                    *85,PTCNGDVX                      *I-0833093
          READ      CONTROLF,HUND17;*220,PTCNGDX1
          READ      CONTROLF,HUND28;*231,PTCNGDX2                     *I-0917793
.
.                                                ****** ICD10 Ed.12   *I-0917793
          UNPACK    PTCNGDX2,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            OPEN      PTDK12A1,"patdk12f"
          ENDIF
.                                                ****** ICD10 Ed.11
          UNPACK    PTCNGDX1,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            OPEN      PTDK11A1,"patdk11f"
          ENDIF
.                                                ****** ICD10 Ed.10   *I-0833093
          UNPACK    PTCNGDVX,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            OPEN      PATKXDA1,"patkcdxf"
          ENDIF
.                                                ****** ICD10 Ed.9    *I-311669
          UNPACK    PTCNGDV9,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            OPEN      PATK9DA1,"patkcd9f"
          ENDIF
.                                                ****** ICD10 Ed.8    *I-284420
          UNPACK    PTCNGDV8,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            OPEN      PATK8DA1,"patkcd8f"
          ENDIF
.                                                ****** ICD10 Ed.7    *I-219246
          UNPACK    PTCNGDV7,KEY4,KEY5      
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            OPEN      PATK7DA1,"patkcd7f"
          ENDIF
.                                                ****** ICD10 Ed.6    *I-163918
          UNPACK    PTCNGDV6,KEY4,KEY5      
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            OPEN      PATK6DA1,"patkcd6f"
          ENDIF
.                                                * ICD10 Ed.5         *I-105244
          MATCH     "99999999",PTCNGDV5
          IF        !@EQUAL
            OPEN      PATK5DA1,"patkcd5f"
          ENDIF
.
          MATCH     "99999999",PTCNGDV4
          IF        !@EQUAL
            OPEN      PATK4DA1,"patkcd4f"
          ENDIF
.
          MATCH     "99999999",PTCNGDV3
          IF        !@EQUAL
            OPEN      PATK3DA1,"patkcd3f"
          ENDIF
.
          OPEN      PATKCDA1,"patkcdaf"
          RETURN
.
CLKCD1    MOVE      ZERO,EXIT
.                                                ****** ICD10 Ed.12   *I-0917793
          UNPACK    PTCNGDX2,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            CLOSE     PTDK12A1
          ENDIF
.                                                ****** ICD10 Ed.11
          UNPACK    PTCNGDX1,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            CLOSE     PTDK11A1
          ENDIF
.                                                ****** ICD10 Ed.10   *I-0833093
          UNPACK    PTCNGDVX,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            CLOSE     PATKXDA1
          ENDIF
.                                                ****** ICD10 Ed.9    *I-311669
          UNPACK    PTCNGDV9,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            CLOSE     PATK9DA1
          ENDIF
.                                                ****** ICD10 Ed.8    *I-284420
          UNPACK    PTCNGDV8,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            CLOSE     PATK8DA1
          ENDIF
.                                                ****** ICD10 Ed.7    *I-219246
          UNPACK    PTCNGDV7,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            CLOSE     PATK7DA1
          ENDIF
.                                                ****** ICD10 Ed.6    *I-163918
          UNPACK    PTCNGDV6,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            CLOSE     PATK6DA1
          ENDIF
.                                                * ICD10 Ed.5         *I-105244
          MATCH     "99999999",PTCNGDV5
          IF        !@EQUAL
            CLOSE     PATK5DA1
          ENDIF
.
          MATCH     "99999999",PTCNGDV4
          IF        !@EQUAL
            CLOSE     PATK4DA1
          ENDIF
.
          MATCH     "99999999",PTCNGDV3
          IF        !@EQUAL
            CLOSE     PATK3DA1
          ENDIF
.
          CLOSE     PATKCDA1
          RETURN
.
OPKCD2    OPEN      CONTROLF,"controlf"
          READ      CONTROLF,HUND09;*151,PTCNGDV3
          READ      CONTROLF,HUND05;*217,PTCNGDV4:                     *I-49037
                                    *227,PTCNGDV5                     *I-105244
          READ      CONTROLF,HUND12;*239,PTCNGDV6                     *I-163918
          READ      CONTROLF,HUND10;*61,PTCNGDV7:                     *I-219246
                                    *69,PTCNGDV8:                     *I-284420
                                    *77,PTCNGDV9:                     *I-311669
                                    *85,PTCNGDVX                      *I-0833093
          READ      CONTROLF,HUND17;*220,PTCNGDX1
          READ      CONTROLF,HUND28;*231,PTCNGDX2                     *I-0917793
.
.                                                ****** ICD10 Ed.12   *I-0917793
          UNPACK    PTCNGDX2,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            OPEN      PTDK12A2,"patdk12f"
          ENDIF
.                                                ****** ICD10 Ed.11
          UNPACK    PTCNGDX1,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            OPEN      PTDK11A2,"patdk11f"
          ENDIF
.                                                ****** ICD10 Ed.10   *I-0833093
          UNPACK    PTCNGDVX,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year is "9999"
          IF        !@EQUAL
            OPEN      PATKXDA2,"patkcdxf"
          ENDIF
.                                                ****** ICD10 Ed.9    *I-311669
          UNPACK    PTCNGDV9,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year is "9999"
          IF        !@EQUAL
            OPEN      PATK9DA2,"patkcd9f"
          ENDIF
.                                                ****** ICD10 Ed.8    *I-284420
          UNPACK    PTCNGDV8,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year is "9999"
          IF        !@EQUAL
            OPEN      PATK8DA2,"patkcd8f"
          ENDIF
.                                                ***** ICD10 Ed.7     *I-219246
          UNPACK    PTCNGDV7,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year is "9999"
          IF        !@EQUAL
            OPEN      PATK7DA2,"patkcd7f"
          ENDIF
.                                                ***** ICD10 Ed.6     *I-163918
          UNPACK    PTCNGDV6,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year is "9999"
          IF        !@EQUAL
            OPEN      PATK6DA2,"patkcd6f"
          ENDIF
.                                                * ICD10 Ed.5         *I-105244
          MATCH     "99999999",PTCNGDV5
          IF        !@EQUAL
            OPEN      PATK5DA2,"patkcd5f"
          ENDIF
.
          MATCH     "99999999",PTCNGDV4
          IF        !@EQUAL
            OPEN      PATK4DA2,"patkcd4f"
          ENDIF
.
          MATCH     "99999999",PTCNGDV3
          IF        !@EQUAL
            OPEN      PATK3DA2,"patkcd3f"
          ENDIF
.
          OPEN      PATKCDA2,"patkcdaf"
          RETURN
.
CLKCD2    MOVE      ZERO,EXIT
.                                                ****** ICD10 Ed.12   *I-0917793
          UNPACK    PTCNGDX2,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            CLOSE     PTDK12A2
          ENDIF
.                                                ****** ICD10 Ed.11
          UNPACK    PTCNGDX1,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            CLOSE     PTDK11A2
          ENDIF
.                                                ***** ICD10 Ed.10    *I-0833093
          UNPACK    PTCNGDVX,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year is "9999"
          IF        !@EQUAL
            CLOSE     PATKXDA2
          ENDIF
.                                                ***** ICD10 Ed.9     *I-311669
          UNPACK    PTCNGDV9,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year is "9999"
          IF        !@EQUAL
            CLOSE     PATK9DA2
          ENDIF
.                                                ***** ICD10 Ed.8     *I-284420
          UNPACK    PTCNGDV8,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year is "9999"
          IF        !@EQUAL
            CLOSE     PATK8DA2
          ENDIF
.                                                ***** ICD10 Ed.7     *I-219246
          UNPACK    PTCNGDV7,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year is "9999"
          IF        !@EQUAL
            CLOSE     PATK7DA2
          ENDIF
.                                                ***** ICD10 Ed.6     *I-163918
          UNPACK    PTCNGDV6,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year is "9999"
          IF        !@EQUAL
            CLOSE     PATK6DA2
          ENDIF
.                                                * ICD10 Ed.5         *I-105244
          MATCH     "99999999",PTCNGDV5
          IF        !@EQUAL
            CLOSE     PATK5DA2
          ENDIF
.
          MATCH     "99999999",PTCNGDV4
          IF        !@EQUAL
            CLOSE     PATK4DA2
          ENDIF
.
          MATCH     "99999999",PTCNGDV3
          IF        !@EQUAL
            CLOSE     PATK3DA2
          ENDIF
.
          CLOSE     PATKCDA2
          RETURN
.
          INC       PATK3DIO/INC    * ICD10 Version 3 Diagnosis Keyword Index
          INC       PATK4DIO/INC    * ICD10 Edition 4 Diagnosis Keyword Index
          INC       PATK5DIO/INC    * ICD10 Edition 5 Diagnosis Keyword Index
          INC       PATK6DIO/INC    * ICD10 Edition 6 Diagnosis Keyword Index
.                                                                     *I-219246
          INC       PATK7DIO/INC    * ICD10 Edition 7 Diagnosis Keyword Index
.                                                                     *I-284420
          INC       PATK8DIO/INC    * ICD10 Edition 8 Diagnosis Keyword Index
.                                                                     *I-311669
          INC       PATK9DIO/INC    * ICD10 Edition 9 Diagnosis Keyword Index
.                                                                     *I-0833093
          INC       PATKXDIO/INC    * ICD10 Edition 10 Diagnosis Keyword Index
          INC       PTDK11IO/INC    * ICD10 Edition 11 Diagnosis Keyword Index
          INC       PTDK12IO/INC    * ICD10 Edition 12 Diagnosis Keyword Index
