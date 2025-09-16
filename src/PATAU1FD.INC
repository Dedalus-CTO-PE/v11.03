. V5.07.001 27/08/1998 Glenn  507 Changes
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATAU1FD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    PATIENT U/R DELETION AUDIT                      *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : ASCII                                           *
.  *                                                                    *
.  *     File Name    : patau1af                                        *
.  *                                                                    *
.  *     Modifications: V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                    V5.01 01.06.89 K.Peak      (IBA)                *
.  *                          Change U/R to 8 characters                *
.  *                    V5.02 18.11.92 Whirlpool                        *
.  *                          DUDLEY CHANGES                            *
.  *                    V5.03 12/01/94 I.Rutt                           *
.  *                          Changed address fields to original length *  
.  *                                                                    *
.  *                                                                    *
.  **********************************************************************
.
PATAU1A1  FILE   ASCII, FIXED=256
.
.       SECTOR ZER0
.       -----------
.
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
.SECTOR    FORM         5             1      NEXT AVAILABLE SECTOR
AUSTAT     FORM         1             6      AUDIT STATUS INDICATOR
.                                             0 = FREE
.                                             1 = INPUTING
.                                             2 = PRINTING
.        SECTOR ONE ONWARDS
.        ------------------
.
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
AUURNO     DIM          8             1      U/R NUMBER 
AUTITL     DIM          4             9      PATIENT TITLE
AUSNAM     DIM         20            13      PATIENT SURNAME NAME
AUGNAM     DIM         25            33      PATIENT GIVEN NAMES
AUDATE     DIM          6            58      DELETION DATE
AUTIME     DIM          8            64      DELETION TIME
AUADD1     DIM         35            72      PATIENT ADDRESS LINE 1
AUADD2     DIM         35           107      PATIENT ADDRESS LINE 2
AUSUBR     DIM         35           142      PATIENT SUBURB
AUADD4     DIM         35           177      PATIENT ADDRESS LINE 2
AUPOST     DIM          8           212      PATIENT POSTCODE
AUMEDI     DIM         10           220      MEDICARE NUMBER
AUTELP     DIM         20           230      PRIVATE TELEPHONE NUMBER
AUSEX      DIM          1           250      PATIENT SEX
.                                   251
.
AUBDAT     DIM          8             1      BIRTH DATE CCYYMMDD
AUOPID     DIM          4             9      OPERATOR ID.
AUOPER     DIM         30            13      OPERATOR NAME
.
.END OF RECORD                       43
.
.
