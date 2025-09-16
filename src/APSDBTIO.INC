.
.    APSDBTIO.INC
.    ------------
.    File Definition :  APSDBTFD.INC
.    Description     :  I/O include for Direct Bank Transfer datafile
.    Access Method   :  Sequential
.
.                    DESCRIPTIVE Record
.                    ------------------ 
WRDBT0    COMPARE   "3",FMCHDFRM
          GOTO      WRDBT0NZ IF EQUAL
          BRANCH    TAPEFLAG,WRDBT0T
          WRITE     DBTFILE,SEQ;S0RECTYP,S0FILL1,S0RLSEQ,S0BNKNAM:
                                   S0FILL2,S0USRNAM,S0USRNUM,S0DESC:
                                   S0DATE,S0FILL3
          RETURN
.       
. Tape
.
WRDBT0T   WRITE     DBTFILE,SEQ;S0RECTYP,S0FILL1,S0RLSEQ,S0BNKNAM:
                                   S0FILL2,S0USRNAM,S0USRNUM,S0DESC:
                                   S0DATE,S0FILL3;
          WRITE     DBTHEAD,SEQ;"VOL1",DBTBNK:
                                JULDAY,SP20,SP7,"ASSOCIATED",SP20:
                                SP10,SP3;
.
          MOVE      JULDAY,VALFROM
          MOVE      JULDAY,VALTO
          ADD       FIVE,VALTO
          WRITE     DBTHEAD,SEQ;"HDR1",DBTDESC,".HOSCEMTEX",DBTBNK:
                                JULDAY,"00010":
                                   "001       ",JULYR,VALFROM," ",JULYR,VALTO:
                                   "0000000","IBMDOSVS",SP10,SP2;
.
          RETURN
.
. New Zealand
.
WRDBT0NZ  PACK      KEY6,CYY,CMM,CDD
          REP       " 0",KEY6
          UNPACK    S0DATE,CDAY,CMON,CYEAR
          PACK      S0DATE,CYEAR,CMON,CDAY 
          STRIP     FMCHNZAC
          CLEAR     DBTRECNZ
          APPEND    "1,,,,",DBTRECNZ
          APPEND    FMCHNZAC,DBTRECNZ
          APPEND    ",7,",DBTRECNZ
          APPEND    KEY6,DBTRECNZ
          APPEND    COMMA,DBTRECNZ
          APPEND    S0DATE,DBTRECNZ
          APPEND    COMMA,DBTRECNZ
          RESET     DBTRECNZ
          STRIP     DBTRECNZ
          MOVE      ZERO,NZUNIQID
          MOVE      ZERO,NZHASHTT
          WRITE     DBTFILE,SEQ;*+,DBTRECNZ,*-
          RETURN
.
.                    DETAIL Record
.                    -------------
WRDBT1    COMPARE   "3",FMCHDFRM
          GOTO      WRDBT1NZ IF EQUAL
          BRANCH    TAPEFLAG,WRDBT1T
          WRITE     DBTFILE,SEQ;S1RECTYP,S1BSBNUM,S1ACCNUM,S1INDCTR:
                                   S1TRCODE,S1AMOUNT,S1ACTITL,S1LDGREF:
                                   S1TRCBSB,S1TRCACC,S1REMNAM,S1WHTAX
          RETURN
.
WRDBT1T   WRITE     DBTFILE,SEQ;S1RECTYP,S1BSBNUM,S1ACCNUM,S1INDCTR:
                                   S1TRCODE,S1AMOUNT,S1ACTITL,S1LDGREF:
                                   S1TRCBSB,S1TRCACC,S1REMNAM,S1WHTAX;
          RETURN
.
. New Zealand
.
WRDBT1NZ  ADD       ONE,NZUNIQID
          CLEAR     DBTRECNZ
          APPEND    "2,",DBTRECNZ
          PACK      S1NZACC,S1BSBNUM,S1ACCNUM
          UNPACK    SP20,KEY2,KEY11
          MOVE      ZERO,NZHASH11
          SQUEEZE   S1NZACC
          UNPACK    S1NZACC,KEY2,KEY11
          MOVE      KEY11,NZHASH11
          ADD       NZHASH11,NZHASHTT
          STRIP     S1NZACC 
          APPEND    S1NZACC,DBTRECNZ
          APPEND    ",50,",DBTRECNZ
          SQUEEZE   S1AMOUNT
          APPEND    S1AMOUNT,DBTRECNZ 
          APPEND    COMMA,DBTRECNZ
          STRIP     S1ACTITL
          APPEND    S1ACTITL,DBTRECNZ
          APPEND    COMMA,DBTRECNZ
          STRIP     S1LDGREF
          APPEND    S1LDGREF,DBTRECNZ
          APPEND    COMMA,DBTRECNZ
          APPEND    S1NZOPC,DBTRECNZ
          APPEND    ",",DBTRECNZ
          MOVE      NZUNIQID,KEY6
          SQUEEZE   KEY6
          APPEND    KEY6,DBTRECNZ
          APPEND    ",,",DBTRECNZ
          STRIP     S1REMNAM
          APPEND    S1REMNAM,DBTRECNZ
          APPEND    ",,,",DBTRECNZ
          RESET     DBTRECNZ
          STRIP     DBTRECNZ
          WRITE     DBTFILE,SEQ;*+,DBTRECNZ,*-
          RETURN
.
.                    FILE TOTAL Record
.                    -----------------
WRDBT7    COMPARE   "3",FMCHDFRM
          GOTO      WRDBT7NZ IF EQUAL
          BRANCH    TAPEFLAG,WRDBT7T
          WRITE     DBTFILE,SEQ;S7RECTYP,S7BSBNUM,S7FILL1,S7BRHNET:
                                   S7BRHCRE,S7BRHDEB,S7FILL2,S7RECCNT:
                                   S7FILL3
          RETURN
.
WRDBT7T   WRITE     DBTFILE,SEQ;S7RECTYP,S7BSBNUM,S7FILL1,S7BRHNET:
                                   S7BRHCRE,S7BRHDEB,S7FILL2,S7RECCNT:
                                   S7FILL3;
          WRITE     DBTEOF,SEQ;"EOF1",DBTDESC,".HOSCEMTEX",DBTBNK:
                                JULDAY,"00010":
                                "001       ",JULYR,VALFROM," ",JULYR,VALTO:
                                "0000000","IBMDOSVS",SP10,SP2;
          RETURN
.
. New Zealand
.
WRDBT7NZ  CLEAR     DBTRECNZ
          APPEND    "3,",DBTRECNZ
          MOVE      S7BRHCRE,F10
          MOVE      F10,KEY10
          SQUEEZE   KEY10
          APPEND    KEY10,DBTRECNZ
          APPEND    COMMA,DBTRECNZ
          MOVE      S7RECCNT,F6
          MOVE      F6,KEY6
          SQUEEZE   KEY6
          APPEND    KEY6,DBTRECNZ
          APPEND    COMMA,DBTRECNZ
          MOVE      NZHASHTT,KEY16
          UNPACK    KEY16,KEY5,KEY11
          REP       " 0",KEY11
          APPEND    KEY11,DBTRECNZ
          RESET     DBTRECNZ
          STRIP     DBTRECNZ
          WRITE     DBTFILE,SEQ;*+,DBTRECNZ,*-
          RETURN
