. V5.06.001 01/12/1998
.*------------------------------------------------------------
.*
.*  Include Name:   HL7NTEIO.INC
.*
.*------------------------------------------------------------
. ----	 read to see if record exists ----
.
RHL7NTE   MOVE      ZERO,OVRCD     
          READ      DGATEOUT;NTE001,NTE002;
          GOTO      OVERCOND IF OVER
.
          RETURN
.
.  ---- read in notes as FT - formatted text ----
.
RNTEFT00  MOVE      ZERO,OVRCD
          MOVE      ZERO,EXIT
          MOVE      ZERO,F3
          CLEAR     NTE003
.
RNTEFT10  READ      DGATEOUT;*SN,ANS;
          GOTO      OVERCOND IF OVER
          MATCH     "|",ANS
          GOTO      RNTEFT90 IF EQUAL
.
          MATCH     "\",ANS
          CALL      NTEESC00
          BRANCH    EXIT,RNTEFT10,RNTEFT80
.
          APPEND    ANS,NTE003
          ADD       ONE,F3
          IF        F3<127
            GOTO      RNTEFT10
          ENDIF
.
RNTEFT80  MOVE      ZERO,EXIT
          RESET     NTE003
          GOTO      RNTEFT99
.
RNTEFT90  RESET     NTE003
          MOVE      ONE,EXIT
.
RNTEFT99  RETURN
.----------------------------------------------------------------------
. Handle Escape Sequences
.----------------------------------------------------------------------
NTEESC00  CLEAR     NTEFTESC

NTEESC10  READ      DGATEOUT;*SN,ANS;
          GOTO      OVERCOND IF OVER
          MATCH     "\",ANS
          GOTO      NTEESC50 IF EQUAL
          APPEND    ANS,NTEFTESC
          GOTO      NTEESC10
.
NTEESC50  RESET     NTEFTESC
          MATCH     ".br",NTEFTESC
          GOTO      NTEESC95 IF EQUAL
.
          MATCH     ".sp",NTEFTESC
          GOTO      NTEESC95 IF EQUAL
.
          MATCH     "H",NTEFTESC
          IF        @EQUAL
            APPEND    "<b>",NTE003
            GOTO      NTEESC90 
          ENDIF
.
          MATCH     "N",NTEFTESC
          IF        @EQUAL
            APPEND    "</b>",NTE003
            GOTO      NTEESC90 
          ENDIF
.
          MATCH     "F",NTEFTESC
          IF        @EQUAL
            APPEND    "|",NTE003
            GOTO      NTEESC90 
          ENDIF
.
          MATCH     "S",NTEFTESC
          IF        @EQUAL
            APPEND    "^",NTE003
            GOTO      NTEESC90 
          ENDIF
.
          MATCH     "T",NTEFTESC
          IF        @EQUAL
            APPEND    "&AMP",NTE003
            GOTO      NTEESC90 
          ENDIF
.
          MATCH     "R",NTEFTESC
          IF        @EQUAL
            APPEND    "~",NTE003
            GOTO      NTEESC90 
          ENDIF
.
NTEESC90  MOVE      ONE,EXIT
          GOTO      NTEESC99 
.
NTEESC95  MOVE      TWO,EXIT
          GOTO      NTEESC99 
.
NTEESC99  RETURN
.
. ----  read in HL7 file format to see if record exists ----
.
RHL7NTE1  MOVE      ZERO,OVRCD
          READ      HL7FLFMT,SEQ;NTE001,NTE002;
          GOTO      OVERCOND IF OVER
.
          RETURN
.
.  ---- read in HL7 file format notes as FT - formatted text ----
.
R1TEFT00  MOVE      ZERO,OVRCD
          MOVE      ZERO,EXIT
          MOVE      ZERO,F3
          CLEAR     NTE003
.
R1TEFT10  READ      HL7FLFMT,SEQ;*SN,ANS;
          GOTO      OVERCOND IF OVER
          MATCH     "|",ANS
          GOTO      R1TEFT90 IF EQUAL
.
          MATCH     "\",ANS
          CALL      NTEESC00
          BRANCH    EXIT,R1TEFT10,R1TEFT80
.
          APPEND    ANS,NTE003
          ADD       ONE,F3
          IF        F3<127
            GOTO      R1TEFT10
          ENDIF
.
R1TEFT80  MOVE      ZERO,EXIT
          RESET     NTE003
          GOTO      R1TEFT99
.
R1TEFT90  RESET     NTE003
          MOVE      ONE,EXIT
.
R1TEFT99  RETURN
