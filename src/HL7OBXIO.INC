. V5.06.001 01/12/1998
.*------------------------------------------------------------
.*
.*  Include Name:   HL7OBXIO.INC
.*
.*  Modifications:
.*        06/02/2003  Jill Habasque
.*                    Removed semi colons from read
.*------------------------------------------------------------
. ----	 read start of segment ----
.
SHL7OBX   MOVE      ZERO,OVRCD     
          READ      DGATEOUT;OBX001,OBX002,OBX003,OBX004;
          GOTO      OVERCOND IF OVER
.
          MOVE      OBX003,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],OBX00301
          MOVE      HL7CMP[02],OBX00302
          MOVE      HL7CMP[03],OBX00303
.
          MOVE      OBX004,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],OBX00401
          MOVE      HL7CMP[02],OBX00402
.
          RETURN
.
. ----	 read end of segment ----
.
EHL7OBX   MOVE      ZERO,OVRCD     
          READ      DGATEOUT;OBX006,OBX007,OBX008,OBX009,OBX010,OBX011:
                             OBX012,OBX013,OBX014,OBX015,OBX016,OBX017
          GOTO      OVERCOND IF OVER
          RETURN
.
. ----	 read in observation values for NM - Numeric or ST - String ----
.
RHL7OBX   MOVE      ZERO,OVRCD     
          READ      DGATEOUT;OBX005;
          GOTO      OVERCOND IF OVER
          RETURN
.
. ----	 read in observation values for TX - Text ----
.
ROBXTX00  MOVE      ZERO,OVRCD     
          MOVE      ZERO,EXIT
          MOVE      ZERO,F3
          CLEAR     OBX005
.
ROBXTX10  READ      DGATEOUT;*SN,ANS;
          GOTO      OVERCOND IF OVER
          MATCH     "|",ANS
          GOTO      ROBXTX90 IF EQUAL
          APPEND    ANS,OBX005
          ADD       ONE,F3
          IF        F3<127
            GOTO      ROBXTX10
          ENDIF
          RESET     OBX005
          GOTO      ROBXTX99
.
ROBXTX90  RESET     OBX005
          MOVE      ONE,EXIT
.
ROBXTX99  RETURN
.

. ----	 read in observation values for FT - Formatted Text ----
.
ROBXFT00  MOVE      ZERO,OVRCD     
          MOVE      ZERO,EXIT
          MOVE      ZERO,F3
          CLEAR     OBX005
.
ROBXFT10  READ      DGATEOUT;*SN,ANS;
          GOTO      OVERCOND IF OVER
          MATCH     "|",ANS
          GOTO      ROBXFT90 IF EQUAL
.
          MATCH     "\",ANS
          CALL      OBXESC00
          BRANCH    EXIT,ROBXFT10,ROBXFT80
.
          APPEND    ANS,OBX005
          ADD       ONE,F3
          IF        F3<127
            GOTO      ROBXFT10
          ENDIF
.
ROBXFT80  MOVE      ZERO,EXIT
          RESET     OBX005
          GOTO      ROBXFT99
.
ROBXFT90  RESET     OBX005
          MOVE      ONE,EXIT
.
ROBXFT99  RETURN
.----------------------------------------------------------------------
. Handle Escape Sequences
.----------------------------------------------------------------------
OBXESC00  CLEAR     OBXFTESC

OBXESC10  READ      DGATEOUT;*SN,ANS;
          GOTO      OVERCOND IF OVER
          MATCH     "\",ANS
          GOTO      OBXESC50 IF EQUAL
          APPEND    ANS,OBXFTESC
          GOTO      OBXESC10
.
OBXESC50  RESET     OBXFTESC
          MATCH     ".br",OBXFTESC
          GOTO      OBXESC95 IF EQUAL
.
          MATCH     ".sp",OBXFTESC
          GOTO      OBXESC95 IF EQUAL
.
          MATCH     "H",OBXFTESC
          IF        @EQUAL
            APPEND    "<b>",OBX005
            GOTO      OBXESC90 
          ENDIF
.
          MATCH     "N",OBXFTESC
          IF        @EQUAL
            APPEND    "</b>",OBX005
            GOTO      OBXESC90 
          ENDIF
.
          MATCH     "F",OBXFTESC
          IF        @EQUAL
            APPEND    "|",OBX005
            GOTO      OBXESC90 
          ENDIF
.
          MATCH     "S",OBXFTESC
          IF        @EQUAL
            APPEND    "^",OBX005
            GOTO      OBXESC90 
          ENDIF
.
          MATCH     "T",OBXFTESC
          IF        @EQUAL
            APPEND    "&AMP",OBX005
            GOTO      OBXESC90 
          ENDIF
.
          MATCH     "R",OBXFTESC
          IF        @EQUAL
            APPEND    "~",OBX005
            GOTO      OBXESC90 
          ENDIF
.
OBXESC90  MOVE      ONE,EXIT
          GOTO      OBXESC99 
.
OBXESC95  MOVE      TWO,EXIT
          GOTO      OBXESC99 
.
OBXESC99  RETURN
.------------------------------------------------------------
. ----  read HL7 file format start of segment ----
.
SHL7OBX1  MOVE      ZERO,OVRCD
          READ      HL7FLFMT,SEQ;OBX001,OBX002,OBX003,OBX004;
          GOTO      OVERCOND IF OVER
.
          MOVE      OBX003,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],OBX00301
          MOVE      HL7CMP[02],OBX00302
          MOVE      HL7CMP[03],OBX00303
.
          MOVE      OBX004,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],OBX00401
          MOVE      HL7CMP[02],OBX00402
.
          RETURN
.
. ----  read HL7 file format end of segment ----
.
EHL7OBX1  MOVE      ZERO,OVRCD    
          READ      HL7FLFMT,SEQ;OBX006,OBX007,OBX008,OBX009,OBX010,OBX011:
                             OBX012,OBX013,OBX014,OBX015,OBX016,OBX017
          GOTO      OVERCOND IF OVER

          MOVE      OBX014,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],OBX01401
          MOVE      HL7CMP[02],OBX01402
          RETURN
.
.
. -  read HL7 file format in observation values for NM - Numeric/ST - String --
.
RHL7OBX1  MOVE      ZERO,OVRCD
          READ      HL7FLFMT,SEQ;OBX005;
          GOTO      OVERCOND IF OVER
          RETURN
.
. ----  read in HL7 file format observation values for FT - Formatted Text ----
.
R1BXFT00  MOVE      ZERO,OVRCD
          MOVE      ZERO,EXIT
          MOVE      ZERO,F3
          CLEAR     OBX005
.
R1BXFT10  READ      HL7FLFMT,SEQ;*SN,ANS;
          GOTO      OVERCOND IF OVER
          MATCH     "|",ANS
          GOTO      R1BXFT90 IF EQUAL
.
          MATCH     "\",ANS
          CALL      OBXESC00
          BRANCH    EXIT,R1BXFT10,R1BXFT80
.
          APPEND    ANS,OBX005
          ADD       ONE,F3
          IF        F3<127
            GOTO      R1BXFT10
          ENDIF
.
R1BXFT80  MOVE      ZERO,EXIT
          RESET     OBX005
          GOTO      R1BXFT99
.
R1BXFT90  RESET     OBX005
          MOVE      ONE,EXIT
.
R1BXFT99  RETURN
