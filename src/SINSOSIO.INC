.
.         INCLUDE NAME : SINSOSIO.INC
.
.         FILE I/O FOR TRANSMISSION FILE
.
.Write header records
.--------------------
WRINSS1   PACK      TODAY,CCC,CYY,CMM,CDD
          REP       " 0",TODAY
          IF        INSSVHA=1
            READ      CONTROLF,TWENTY6;*1,INCNVHAD,*47,INCNVHAN
          ELSE
            READ      CONTROLF,SIXTY7;*18,INCNVHAN,*208,INCNVHAD
          ENDIF
.
          MOVE      INCNVHAC,INSSCUS
          MATCH     TODAY,INCNVHAD
          GOTO      WRINSS1A IF EQUAL
          MOVE      TODAY,INCNVHAD
          MOVE      ZERO,INCNVHAN
.
WRINSS1A  ADD       ONE,INCNVHAN
          IF        INSSVHA=1
            WRITAB    CONTROLF,TWENTY6;*1,INCNVHAD,*47,INCNVHAN
          ELSE
            WRITAB    CONTROLF,SIXTY7;*18,INCNVHAN,*208,INCNVHAD
          ENDIF
.
          MOVE      TWENTY TO LLCNT
WRINSS1B  RESET     INCNSOSD TO LLCNT
          CMATCH    SP1 TO INCNSOSD
          GOTO      WRINSS1C IF NOT EQUAL
.
          SUB       ONE FROM LLCNT
          COMPARE   ZERO TO LLCNT
          GOTO      WRINSS1B IF NOT EQUAL
.
          CLEAR     INCNSOSD
          GOTO      WRINSS1D
.
WRINSS1C  LENSET    INCNSOSD
          RESET     INCNSOSD
.
WRINSS1D  UNPACK    INCNVHAD,CCENT,CYEAR,CMON,CDAY
          PACK      KEY6,CYEAR,CMON,CDAY
          PACK      TRANFILE,INCNSOSD,ANSX,KEY6,DOT,INCNVHAN
          REP       " 0",TRANFILE
.
          DISPLAY   *P1:14,"Transfer File Name - ",TRANFILE
          PREP      SINSOSAF,TRANFILE
.
          WRITE     SINSOSAF,SEQ;"ST*850*8400"
.
          CLEAR     INSSLINE
          APPEND    "BEG*00*SA*",INSSLINE
          APPEND    INSSPURA,INSSLINE        * Purchase order
          APPEND    "***",INSSLINE
          APPEND    INSSDAT,INSSLINE         * Purchase order date
          APPEND    SP70,INSSLINE
          RESET     INSSLINE
          CALL      WRINSS4                  * Write packed line
.
          CLEAR     INSSLINE
          APPEND    "N1*BY**91*",INSSLINE
          APPEND    INSSCUS,INSSLINE         * Customer code
          APPEND    SP70,INSSLINE
          RESET     INSSLINE
          CALL      WRINSS4                  * Write packed line
.
.                                            * Delivery Instructions
          WRITE     SINSOSAF,SEQ;"TD2*O***",INSSDEL  
.
.         4 header segments + 2 trailer segments = 6
.
          MOVE      SIX,INSSSEGS
          MOVE      ZERO,INSSNUM
          MOVE      ONE,INSSLNO
          RETURN
.
.Write line item
.---------------
WRINSS2   CLEAR     INSSLINE
          APPEND    "PO1*",INSSLINE
          APPEND    INSSLNO,INSSLINE         * Line number
          APPEND    "*",INSSLINE
          APPEND    INSSQTY,INSSLINE         * Quantity
          APPEND    "*",INSSLINE
          APPEND    INSSPACK,INSSLINE        * Pack unit
          APPEND    "*",INSSLINE
          APPEND    INSSPRIC,INSSLINE        * Unit price
          APPEND    "*QT*IN*",INSSLINE
          APPEND    INSSCATA,INSSLINE        * Catalog code
          APPEND    "*VN*",INSSLINE
          APPEND    INSSVCOD,INSSLINE        * Supplier code
          APPEND    SP70,INSSLINE
          RESET     INSSLINE
.
          CALL      WRINSS4                  * Write packed record
.
          ADD       ONE,INSSSEGS
          ADD       ONE,INSSNUM
          ADD       ONE,INSSLNO
.
          RETURN
.
.Write trailing records
.----------------------
WRINSS3   CLEAR     INSSLINE
          APPEND    "CTT*",INSSLINE
          APPEND    INSSNUM,INSSLINE
          APPEND    SP70,INSSLINE
          RESET     INSSLINE
.
          CALL      WRINSS4                  * Write packed record
.
          CLEAR     INSSLINE
          APPEND    "SE*",INSSLINE
          APPEND    INSSSEGS,INSSLINE
          APPEND    "*8400",INSSLINE
          APPEND    SP70,INSSLINE
          RESET     INSSLINE
.
          CALL      WRINSS4                  * Write packed record
.
          CLOSE     SINSOSAF
          RETURN
.
.Routine to write packed record to SOS transfer file
.---------------------------------------------------
WRINSS4   MOVE      ONE,COUNT
.
WRINSS4A  CMATCH    SP1,INSSLINE
          GOTO      WRINSS4B IF EQUAL
.
          MOVE      INSSLINE,ANS
          WRITE     SINSOSAF,SEQ;ANS;
.
WRINSS4B  BUMP      INSSLINE
          ADD       ONE,COUNT
          COMPARE   "120",COUNT
          GOTO      WRINSS4A IF NOT EQUAL
.
WRINSS4C  WRITE     SINSOSAF,SEQ;""
          RETURN 
.
. ------- Update the File Number for the BLS transmissions
WRINSS5   IF        INSSVHA<>1
            MOVE      TODAY,INCNVHAD         * It Should be by now anyway
            ADD       ONE,INCNVHAN           * Update next File Number
            WRITAB    CONTROLF,SIXTY7;*18,INCNVHAN,*208,INCNVHAD
          ENDIF
          RETURN
.
