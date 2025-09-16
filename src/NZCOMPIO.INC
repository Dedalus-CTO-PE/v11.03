.-----------------------------------------------------------------------
. Include for Keyin U/R for Programs that Do Not Require NZHIS Lookup
.-----------------------------------------------------------------------
NZIBSRCH  DISPLAY    *P1:24,*EL,"NZIBSRCH Search Not Available. System Error. ";
          CALL       HITENTER
          RETURN
.
NZCLR000  DISPLAY    *P1:24,*EL,"NZCLR000 Not Available. System Error. ";
          CALL       HITENTER
          RETURN
.
KURNHI00  MOVE      PURNO,KEY8
          MOVE      TWO,EXIT
          CALL      RDMAST1
          BRANCH    OVRCD,KURNHI99
          MOVE      ZERO,EXIT
KURNHI99  RETURN
.
