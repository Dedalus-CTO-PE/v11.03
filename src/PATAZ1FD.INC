. V5.07.001 27/08/1998 Glenn  507 Changes
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATAZ1FD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for                     *
.  *                    PATIENT U/R NO. CHANGE AUDIT FILE               *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : ASCII                                           *
.  *                                                                    *
.  *     File Name    : pataz1af.txt                                    *
.  *                                                                    *
.  *     Modifications: V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                    V5.01 01.06.89 K.Peak      (IBA)                *
.  *                          Change U/R's to 8 characters              *
.  *                    V5.02 18.11.92 Whirlpool                        *
.  *                          Dudley Changes                            *
.  *                    V5.03 12/01/94 I.Rutt                           *
.  *                          Changed address fields to original length *  
.  *                                                                    *
.  **********************************************************************
.
PATAZ1A1  FILE   ASCII, FIXED=256
.
.       SECTOR ZER0
.       -----------
.
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
.SECTOR    FORM         5             1      NEXT AVAILABLE SECTOR
AZSTAT     FORM         1             6      AUDIT STATUS INDICATOR
.                                             0 = FREE
.                                             1 = INPUTING
.                                             2 = PRINTING
.        SECTOR ONE ONWARDS
.        ------------------
.
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
AZURNO     DIM          8             1      OLD U/R NUMBER 
AZURNN     DIM          8             9      NEW U/R NUMBER 
AZDATE     DIM          8            17      change date (ccyymdd)
AZTIME     DIM          8            25      CHANGE TIME
AZSNAM     DIM         20            33      PATIENTS SURNAME
AZGNAM     DIM         25            53      PATIENTS GIVEN NAMES
AZADD1     DIM         35            78      ADDRESS LINE 1
AZADD2     DIM         35           113      ADDRESS LINE 2
AZSUBR     DIM         35           148      SUBRURB
AZADD4     DIM         35           183      ADRESS LINE 4
AZPOST     DIM          8           218      POSTCODE
AZMEDI     DIM         10           226      MEDICARE NUMBER
AZTELP     DIM         20           236      PRIVATE TELEPHONE NUMBER
.
.
AZSEX      DIM          1             1      PATIENTS SEX
AZBDAT     DIM          8             9      BIRTH DATE (ccyymmdd)
AZTITL     DIM          4            17      PATIENTS TITLE
AZOPID     DIM          4            21      OPERATOR ID.
AZOPER     DIM         30            25      OPERATOR NAME
.
.END OF RECORD                       55
.
