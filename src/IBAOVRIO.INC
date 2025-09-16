.
.         Include name : IBAIOOVR.PBL
.
.         Sets the OVER flag for all standard file accesses
.
OVERCOND MOVE      ONE,OVRCD
         RETURN
.
.         Sets the OVER flag for RECORD LOCKING
.
OVERLOCK MOVE      TWO,OVRCD
         RETURN
.------------------------------------------------------------------
. UPDFLOCK - Used by I/O for Update returning a locked condition
.------------------------------------------------------------------
UPDFLOCK  SCAN      "WEB",PRGID
          IF        @EQUAL
            DISPLAY   *R,"ERROR - Record Not Updated. LOCKED. - "
          ELSE
            DISPLAY   *P1:24,*EL,"Record Not Updated. LOCKED. - ";
            CALL      HITENTER
          ENDIF
          RESET     PRGID
          MOVE      TWO,OVRCD
          RETURN
