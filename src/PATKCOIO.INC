. V11.02.02 28/03/2022 Davin      TSK 0917793 - Added include PTOK12IO
. V10.14.01 14/03/2019 Don Nguyen TSK 0869412 - Added include PTOK11IO
. V10.10.01 08/03/2017 Davin      TSK 0833093 - Added include PATKXOIO
. V10.06.01 17/03/2015 Davin       CAR 311669 - Added include PATK9OIO
. V10.03.01 23/04/2013 Davin       CAR 284420 - Added include PATK8OIO
. V10.00.02 18/10/2010 Mike Laming CAR 224240 - Fixed tests PTCNGDV7
. V10.00.01 06/04/2010 Mike Laming CAR 219246 - Added include PATK7OIO
. V9.09.001 18/03/2008 Mike Laming CAR 163918 - Added include PATK6OIO
. V9.06.001 15/05/2006 Mike Laming CAR 105244 - Added include PATK5OIO
.
. PATKCOIO    
. --------
. Filename     : patkcoaf.dat
.
RSPTCO1   RESET     KEY24                                                       
          READ      PATKCOA1,KEY24;;                                            
          RETURN
.
RAPTCO1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATKCOA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTCO1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATKCOA1,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTCO1                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATKCOA1;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTCO1                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATKCOA1;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTCO1                                                                         
          UPDATE    PATKCOA1;PTCOITM,PTCOKWD,PTCOSPA                            
          RETURN
.
WRPTCO1   RESET     KEY24                                                       
          WRITE     PATKCOA1,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          RETURN
.
DEPTCO1   RESET     KEY24                                                       
          DELETE    PATKCOA1,KEY24                                              
          RETURN
.
RSPTCO2   RESET     KEY24                                                       
          READ      PATKCOA2,KEY24;;                                            
          RETURN
.
RAPTCO2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATKCOA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTCO2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATKCOA2,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTCO2                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATKCOA2;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTCO2                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATKCOA2;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTCO2                                                                         
          UPDATE    PATKCOA2;PTCOITM,PTCOKWD,PTCOSPA                            
          RETURN
.
WRPTCO2   RESET     KEY24                                                       
          WRITE     PATKCOA2,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          RETURN
.
DEPTCO2   RESET     KEY24                                                       
          DELETE    PATKCOA2,KEY24                                              
          RETURN
.
.
.  Common IO routines to read ICD10 V2 or ICD10 V3 or ICD10 V4
.  Keyword Search files based
.  on given date - ICDRDDTE. If ICDRDDTE is not set then current date is used.
.
RDPTKCO1  MATCH     SP70,ICDRDDTE           * Is Date blank ?
          IF        @EQUAL
            PACK      KEY8,CCC,CYY,CMM,CDD  * Yes, use current date
            REP       " 0",KEY8
          ELSE
            MOVE      ICDRDDTE,KEY8
          ENDIF
.                                           ****** ICD10 Ed.12        *I-0917793
          MATCH     PTCNGDX2,KEY8           * Is Date >= ICD10 Ed12 Go-Live Date
          IF        !@LESS
            CALL      RDOK12A1              * Yes, read ICD10 Ed.12 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.11
          MATCH     PTCNGDX1,KEY8           * Is Date >= ICD10 Ed11 Go-Live Date
          IF        !@LESS
            CALL      RDOK11A1              * Yes, read ICD10 Ed.11 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.10        *I-0833093
          MATCH     PTCNGDVX,KEY8           * Is Date >= ICD10 Ed10 Go-Live Date
          IF        !@LESS
            CALL      RDPTXO1               * Yes, read ICD10 Ed.10 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.9         *I-311669
          MATCH     PTCNGDV9,KEY8           * Is Date >= ICD10 Ed9 Go-Live Date?
          IF        !@LESS
            CALL      RDPT9O1               * Yes, read ICD10 Ed.9 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.8         *I-284420
          MATCH     PTCNGDV8,KEY8           * Is Date >= ICD10 Ed8 Go-Live Date?
          IF        !@LESS
            CALL      RDPT8O1               * Yes, read ICD10 Ed.8 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.7         *I-218246
          MATCH     PTCNGDV7,KEY8           * Is Date >= ICD10 Ed7 Go-Live Date?
          IF        !@LESS
            CALL      RDPT7O1               * Yes, read ICD10 Ed.7 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.6         *I-163918
          MATCH     PTCNGDV6,KEY8           * Is Date >= ICD10 Ed6 Go-Live Date?
          IF        !@LESS
            CALL      RDPT6O1               * Yes, read ICD10 Ed.6 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.5         *I-105244
          MATCH     PTCNGDV5,KEY8           * Is Date >= ICD10 V5 Go-Live Date?
          IF        !@LESS
            CALL      RDPT5O1               * Yes, read ICD10 V5 Keyword file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV4,KEY8           * Is Date >= ICD10 V4 Go-Live Date?
          IF        !@LESS
            CALL      RDPT4O1               * Yes, read ICD10 V4 Keyword file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV3,KEY8           * Is Date >= ICD10 V3 Go-Live Date?
          IF        !@LESS
            CALL      RDPT3O1               * Yes, read ICD10 V3 Keyword file
          ELSE
            CALL      RDPTCO1               * No, read ICD10 V2 Keyword file
          ENDIF
          RETURN
.
RKPTKCO1  MATCH     SP70,ICDRDDTE           * Is Date blank ?
          IF        @EQUAL
            PACK      KEY8,CCC,CYY,CMM,CDD  * Yes, use current date
            REP       " 0",KEY8
          ELSE
            MOVE      ICDRDDTE,KEY8
          ENDIF
.                                           ****** ICD10 Ed.12        *I-0917793
          MATCH     PTCNGDX2,KEY8           * Is Date >= ICD10 Ed12 Go-Live Date
          IF        !@LESS
            CALL      RKOK12A1              * Yes, read ICD10 Ed.12 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.11
          MATCH     PTCNGDX1,KEY8           * Is Date >= ICD10 Ed11 Go-Live Date
          IF        !@LESS
            CALL      RKOK11A1              * Yes, read ICD10 Ed.11 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.10        *I-0833093
          MATCH     PTCNGDVX,KEY8           * Is Date >= ICD10 Ed10 Go-Live Date
          IF        !@LESS
            CALL      RKPTXO1               * Yes, read ICD10 Ed.10 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.9         *I-311669
          MATCH     PTCNGDV9,KEY8           * Is Date >= ICD10 Ed9 Go-Live Date?
          IF        !@LESS
            CALL      RKPT9O1               * Yes, read ICD10 Ed.9 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.8         *I-284420
          MATCH     PTCNGDV8,KEY8           * Is Date >= ICD10 Ed8 Go-Live Date?
          IF        !@LESS
            CALL      RKPT8O1               * Yes, read ICD10 Ed.8 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.7         *I-219246
          MATCH     PTCNGDV7,KEY8           * Is Date >= ICD10 Ed7 Go-Live Date?
          IF        !@LESS
            CALL      RKPT7O1               * Yes, read ICD10 Ed.7 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.6         *I-163918
          MATCH     PTCNGDV6,KEY8           * Is Date >= ICD10 Ed6 Go-Live Date?
          IF        !@LESS
            CALL      RKPT6O1               * Yes, read ICD10 Ed.6 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.5         *I-105244
          MATCH     PTCNGDV5,KEY8           * Is Date >= ICD10 V5 Go-Live Date?
          IF        !@LESS
            CALL      RKPT5O1               * Yes, read ICD10 V5 Keyword file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV4,KEY8           * Is Date >= ICD10 V4 Go-Live Date?
          IF        !@LESS
            CALL      RKPT4O1               * Yes, read ICD10 V4 Keyword file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV3,KEY8           * Is Date >= ICD10 V3 Go-Live Date?
          IF        !@LESS
            CALL      RKPT3O1               * Yes, read ICD10 V3 Keyword file
          ELSE
            CALL      RKPTCO1               * No, read ICD10 V2 Keyword file
          ENDIF
          RETURN
.
RSPTKCO2  MATCH     SP70,ICDRDDTE           * Is Date blank ?
          IF        @EQUAL
            PACK      KEY8,CCC,CYY,CMM,CDD  * Yes, use current date
            REP       " 0",KEY8
          ELSE
            MOVE      ICDRDDTE,KEY8
          ENDIF
.                                           ****** ICD10 Ed.12        *I-0917793
          MATCH     PTCNGDX2,KEY8           * Is Date >= ICD10 Ed12 Go-Live Date
          IF        !@LESS
            CALL      RSOK12A2              * Yes, read ICD10 Ed.12 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.11
          MATCH     PTCNGDX1,KEY8           * Is Date >= ICD10 Ed11 Go-Live Date
          IF        !@LESS
            CALL      RSOK11A2              * Yes, read ICD10 Ed.11 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.10        *I-0833093
          MATCH     PTCNGDVX,KEY8           * Is Date >= ICD10 Ed10 Go-Live Date
          IF        !@LESS
            CALL      RSPTXO2               * Yes, read ICD10 Ed.10 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.9         *I-311669
          MATCH     PTCNGDV9,KEY8           * Is Date >= ICD10 Ed9 Go-Live Date?
          IF        !@LESS
            CALL      RSPT9O2               * Yes, read ICD10 Ed.9 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.8         *I-284420
          MATCH     PTCNGDV8,KEY8           * Is Date >= ICD10 Ed8 Go-Live Date?
          IF        !@LESS
            CALL      RSPT8O2               * Yes, read ICD10 Ed.8 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.7         *I-219246
          MATCH     PTCNGDV7,KEY8           * Is Date >= ICD10 Ed7 Go-Live Date?
          IF        !@LESS
            CALL      RSPT7O2               * Yes, read ICD10 Ed.7 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.6         *I-163918
          MATCH     PTCNGDV6,KEY8           * Is Date >= ICD10 Ed6 Go-Live Date?
          IF        !@LESS
            CALL      RSPT6O2               * Yes, read ICD10 Ed.6 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.5         *I-105244
          MATCH     PTCNGDV5,KEY8           * Is Date >= ICD10 V5 Go-Live Date?
          IF        !@LESS
            CALL      RSPT5O2               * Yes, read ICD10 V5 Keyword file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV4,KEY8           * Is Date >= ICD10 V4 Go-Live Date?
          IF        !@LESS
            CALL      RSPT4O2               * Yes, read ICD10 V4 Keyword file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV3,KEY8           * Is Date >= ICD10 V3 Go-Live Date?
          IF        !@LESS
            CALL      RSPT3O2               * Yes, read ICD10 V3 Keyword file
          ELSE
            CALL      RSPTCO2               * No, read ICD10 V2 Keyword file
          ENDIF
          RETURN
.
RDPTKCO2  MATCH     SP70,ICDRDDTE           * Is Date blank ?
          IF        @EQUAL
            PACK      KEY8,CCC,CYY,CMM,CDD  * Yes, use current date
            REP       " 0",KEY8
          ELSE
            MOVE      ICDRDDTE,KEY8
          ENDIF
.                                           ****** ICD10 Ed.12        *I-0917793
          MATCH     PTCNGDX2,KEY8           * Is Date >= ICD10 Ed12 Go-Live Date
          IF        !@LESS
            CALL      RDOK12A2              * Yes, read ICD10 Ed.12 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.11
          MATCH     PTCNGDX1,KEY8           * Is Date >= ICD10 Ed11 Go-Live Date
          IF        !@LESS
            CALL      RDOK11A2              * Yes, read ICD10 Ed.11 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.10        *I-0833093
          MATCH     PTCNGDVX,KEY8           * Is Date >= ICD10 Ed10 Go-Live Date
          IF        !@LESS
            CALL      RDPTXO2               * Yes, read ICD10 Ed.10 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.9         *I-311669
          MATCH     PTCNGDV9,KEY8           * Is Date >= ICD10 Ed9 Go-Live Date?
          IF        !@LESS
            CALL      RDPT9O2               * Yes, read ICD10 Ed.9 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.8         *I-284420
          MATCH     PTCNGDV8,KEY8           * Is Date >= ICD10 Ed8 Go-Live Date?
          IF        !@LESS
            CALL      RDPT8O2               * Yes, read ICD10 Ed.8 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.7         *I-219246
          MATCH     PTCNGDV7,KEY8           * Is Date >= ICD10 Ed7 Go-Live Date?
          IF        !@LESS
            CALL      RDPT7O2               * Yes, read ICD10 Ed.7 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.6         *I-163918
          MATCH     PTCNGDV6,KEY8           * Is Date >= ICD10 Ed6 Go-Live Date?
          IF        !@LESS
            CALL      RDPT6O2               * Yes, read ICD10 Ed.6 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.5         *I-105244
          MATCH     PTCNGDV5,KEY8           * Is Date >= ICD10 V5 Go-Live Date?
          IF        !@LESS
            CALL      RDPT5O2               * Yes, read ICD10 V5 Keyword file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV4,KEY8           * Is Date >= ICD10 V4 Go-Live Date?
          IF        !@LESS
            CALL      RDPT4O2               * Yes, read ICD10 V4 Keyword file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV3,KEY8           * Is Date >= ICD10 V3 Go-Live Date?
          IF        !@LESS
            CALL      RDPT3O2               * Yes, read ICD10 V3 Keyword file
          ELSE
            CALL      RDPTCO2               * No, read ICD10 V2 Keyword file
          ENDIF
          RETURN
.
RKPTKCO2  MATCH     SP70,ICDRDDTE           * Is Date blank ?
          IF        @EQUAL
            PACK      KEY8,CCC,CYY,CMM,CDD  * Yes, use current date
            REP       " 0",KEY8
          ELSE
            MOVE      ICDRDDTE,KEY8
          ENDIF
.                                           ****** ICD10 Ed.12        *I-0917793
          MATCH     PTCNGDX2,KEY8           * Is Date >= ICD10 Ed12 Go-Live Date
          IF        !@LESS
            CALL      RKOK12A2              * Yes, read ICD10 Ed.12 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.11
          MATCH     PTCNGDX1,KEY8           * Is Date >= ICD10 Ed11 Go-Live Date
          IF        !@LESS
            CALL      RKOK11A2              * Yes, read ICD10 Ed.11 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.10        *I-0833093
          MATCH     PTCNGDVX,KEY8           * Is Date >= ICD10 Ed10 Go-Live Date
          IF        !@LESS
            CALL      RKPTXO2               * Yes, read ICD10 Ed.10 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.9         *I-311669
          MATCH     PTCNGDV9,KEY8           * Is Date >= ICD10 Ed9 Go-Live Date?
          IF        !@LESS
            CALL      RKPT9O2               * Yes, read ICD10 Ed.9 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.8         *I-284420
          MATCH     PTCNGDV8,KEY8           * Is Date >= ICD10 Ed8 Go-Live Date?
          IF        !@LESS
            CALL      RKPT8O2               * Yes, read ICD10 Ed.8 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.7         *I-219246
          MATCH     PTCNGDV7,KEY8           * Is Date >= ICD10 Ed7 Go-Live Date?
          IF        !@LESS
            CALL      RKPT7O2               * Yes, read ICD10 Ed.7 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.6         *I-163918
          MATCH     PTCNGDV6,KEY8           * Is Date >= ICD10 Ed6 Go-Live Date?
          IF        !@LESS
            CALL      RKPT6O2               * Yes, read ICD10 Ed.6 Keyword file
            RETURN
          ENDIF
.                                           ****** ICD10 Ed.5         *I-105244
          MATCH     PTCNGDV5,KEY8           * Is Date >= ICD10 V5 Go-Live Date?
          IF        !@LESS
            CALL      RKPT5O2               * Yes, read ICD10 V5 Keyword file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV4,KEY8           * Is Date >= ICD10 V4 Go-Live Date?
          IF        !@LESS
            CALL      RKPT4O2               * Yes, read ICD10 V4 Keyword file
            RETURN
          ENDIF
.
          MATCH     PTCNGDV3,KEY8           * Is Date >= ICD10 V3 Go-Live Date?
          IF        !@LESS
            CALL      RKPT3O2               * Yes, read ICD10 V3 Keyword file
          ELSE
            CALL      RKPTCO2               * No, read ICD10 V2 Keyword file
          ENDIF
          RETURN
.
OPKCO1    OPEN      CONTROLF,"controlf"
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
            OPEN      PTOK12A1,"patok12f"
          ENDIF
.                                                ****** ICD10 Ed.11
          UNPACK    PTCNGDX1,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            OPEN      PTOK11A1,"patok11f"
          ENDIF
.                                                ****** ICD10 Ed.10   *I-0833093
          UNPACK    PTCNGDVX,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            OPEN      PATKXOA1,"patkcoxf"
          ENDIF
.                                                ****** ICD10 Ed.9    *I-311669
          UNPACK    PTCNGDV9,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            OPEN      PATK9OA1,"patkco9f"
          ENDIF
.                                                ****** ICD10 Ed.8    *I-284420
          UNPACK    PTCNGDV8,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            OPEN      PATK8OA1,"patkco8f"
          ENDIF
.                                                ****** ICD10 Ed.7    *I-219246
          UNPACK    PTCNGDV7,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            OPEN      PATK7OA1,"patkco7f"
          ENDIF
.                                                ****** ICD10 Ed.6    *I-163918
          UNPACK    PTCNGDV6,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            OPEN      PATK6OA1,"patkco6f"
          ENDIF
.                                                * ICD10 Ed.5         *I-105244
          MATCH     "99999999",PTCNGDV5
          IF        !@EQUAL
            OPEN      PATK5OA1,"patkco5f"
          ENDIF
.
          MATCH     "99999999",PTCNGDV4
          IF        !@EQUAL
            OPEN      PATK4OA1,"patkco4f"
          ENDIF
.
          MATCH     "99999999",PTCNGDV3
          IF        !@EQUAL
            OPEN      PATK3OA1,"patkco3f"
          ENDIF
.
          OPEN      PATKCOA1,"patkcoaf"
          RETURN
.
CLKCO1    MOVE      ZERO,EXIT
.                                                ****** ICD10 Ed.12   *I-0917793
          UNPACK    PTCNGDX2,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            CLOSE     PTOK12A1
          ENDIF
.                                                ****** ICD10 Ed.11
          UNPACK    PTCNGDX1,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            CLOSE     PTOK11A1
          ENDIF
.                                                ****** ICD10 Ed.10   *I-0833093
          UNPACK    PTCNGDVX,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            CLOSE     PATKXOA1
          ENDIF
.                                                ****** ICD10 Ed.9    *I-311669
          UNPACK    PTCNGDV9,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            CLOSE     PATK9OA1
          ENDIF
.                                                ****** ICD10 Ed.8    *I-284420
          UNPACK    PTCNGDV8,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            CLOSE     PATK8OA1
          ENDIF
.                                                ****** ICD10 Ed.7    *I-219246
          UNPACK    PTCNGDV7,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            CLOSE     PATK7OA1
          ENDIF
.                                                ****** ICD10 Ed.6    *I-163918
          UNPACK    PTCNGDV6,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            CLOSE     PATK6OA1
          ENDIF
.                                                * ICD10 Ed.5         *I-105244
          MATCH     "99999999",PTCNGDV5
          IF        !@EQUAL
            CLOSE     PATK5OA1
          ENDIF
.
          MATCH     "99999999",PTCNGDV4
          IF        !@EQUAL
            CLOSE     PATK4OA1
          ENDIF
.
          MATCH     "99999999",PTCNGDV3
          IF        !@EQUAL
            CLOSE     PATK3OA1
          ENDIF
.
          CLOSE     PATKCOA1
          RETURN
.
OPKCO2    OPEN      CONTROLF,"controlf"
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
            OPEN      PTOK12A2,"patok12f"
          ENDIF
.                                                ****** ICD10 Ed.11
          UNPACK    PTCNGDX1,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            OPEN      PTOK11A2,"patok11f"
          ENDIF
.                                                ****** ICD10 Ed.10   *I-0833093
          UNPACK    PTCNGDVX,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            OPEN      PATKXOA2,"patkcoxf"
          ENDIF
.                                                ****** ICD10 Ed.9    *I-311669
          UNPACK    PTCNGDV9,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            OPEN      PATK9OA2,"patkco9f"
          ENDIF
.                                                ****** ICD10 Ed.8    *I-284420
          UNPACK    PTCNGDV8,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            OPEN      PATK8OA2,"patkco8f"
          ENDIF
.                                                ****** ICD10 Ed.7    *I-219246
          UNPACK    PTCNGDV7,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            OPEN      PATK7OA2,"patkco7f"
          ENDIF
.                                                ****** ICD10 Ed.6    *I-163918
          UNPACK    PTCNGDV6,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            OPEN      PATK6OA2,"patkco6f"
          ENDIF
.                                                * ICD10 Ed.5         *I-105244
          MATCH     "99999999",PTCNGDV5
          IF        !@EQUAL
            OPEN      PATK5OA2,"patkco5f"
          ENDIF
.
          MATCH     "99999999",PTCNGDV4
          IF        !@EQUAL
            OPEN      PATK4OA2,"patkco4f"
          ENDIF
.
          MATCH     "99999999",PTCNGDV3
          IF        !@EQUAL
            OPEN      PATK3OA2,"patkco3f"
          ENDIF
.
          OPEN      PATKCOA2,"patkcoaf"
          RETURN
.
CLKCO2    MOVE      ZERO,EXIT
.                                                ****** ICD10 Ed.12   *I-0917793
          UNPACK    PTCNGDX2,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            CLOSE     PTOK12A2
          ENDIF
.                                                ****** ICD10 Ed.11
          UNPACK    PTCNGDX1,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            CLOSE     PTOK11A2
          ENDIF
.                                                ****** ICD10 Ed.10   *I-0833093
          UNPACK    PTCNGDVX,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            CLOSE     PATKXOA2
          ENDIF
.                                                ****** ICD10 Ed.9    *I-311669
          UNPACK    PTCNGDV9,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            CLOSE     PATK9OA2
          ENDIF
.                                                ****** ICD10 Ed.8    *I-284420
          UNPACK    PTCNGDV8,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            CLOSE     PATK8OA2
          ENDIF
.                                                ****** ICD10 Ed.7    *I-219246
          UNPACK    PTCNGDV7,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            CLOSE     PATK7OA2
          ENDIF
.                                                ****** ICD10 Ed.6    *I-163918
          UNPACK    PTCNGDV6,KEY4,KEY5
          MATCH     "9999",KEY4                  * check if year = "9999"
          IF        !@EQUAL
            CLOSE     PATK6OA2
          ENDIF
.                                                * ICD10 Ed.5         *I-105244
          MATCH     "99999999",PTCNGDV5
          IF        !@EQUAL
            CLOSE     PATK5OA2
          ENDIF
.
          MATCH     "99999999",PTCNGDV4
          IF        !@EQUAL
            CLOSE     PATK4OA2
          ENDIF
.
          MATCH     "99999999",PTCNGDV3
          IF        !@EQUAL
            CLOSE     PATK3OA2
          ENDIF
.
          CLOSE     PATKCOA2
          RETURN
.
          INC       PATK3OIO/INC    * ICD10 Version 3 Procedure Keyword Index
          INC       PATK4OIO/INC    * ICD10 Edition 4 Procedure Keyword Index
          INC       PATK5OIO/INC    * ICD10 Edition 5 Procedure Keyword Index
          INC       PATK6OIO/INC    * ICD10 Ed.6 Proc. Keyword Index  *I-163918
          INC       PATK7OIO/INC    * ICD10 Ed.7 Proc. Keyword Index  *I-219246
          INC       PATK8OIO/INC    * ICD10 Ed.8 Proc. Keyword Index  *I-284420
          INC       PATK9OIO/INC    * ICD10 Ed.9 Proc. Keyword Index  *I-311669
          INC       PATKXOIO/INC    * ICD10 Ed.10 Proc. Keyword Index *I-0833093
          INC       PTOK11IO/INC    * ICD10 Ed.11 Proc. Keyword Index
          INC       PTOK12IO/INC    * ICD10 Ed.12 Proc. Keyword Index
