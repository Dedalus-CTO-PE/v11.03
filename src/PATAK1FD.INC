. V5.07.001 27/08/1998 Glenn  507 Changes
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATAK1FD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Person Responsible For Account Audit            *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : ASCII                                           *
.  *                                                                    *
.  *     File Name    : patak1af.txt                                    *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *     V11.00.01  31.03.2020  J.Tan          TSK 0868813              *
.  *                Changed SPKNAME to DIM80                            *
.  *     V5.03.01   05/10/1995    MATT                                  *
.  *                Changed PATAK1A1 def to SFILE                       *
.  **********************************************************************
.  *                    V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                    V5.01 04.06.89 K.Peak      (IBA)                *
.  *                          Change U/R & Admission to 8 characters    *
.  *                    V5.02 17.11.92 Whirlpool                        *
.  *                          Dudley Changes                            *
.  *                    V5.03 12/01/94 I.Rutt                           *
.  *                          Changed address fields to original length *  
.  *                                                                    *
.  **********************************************************************
.
 IFGE     $$VER,7
PATAK1A1    SFILE    ASCII, FIXED=256
 XIF
 IFEQ     $$VER,6
PATAK1A1    FILE     ASCII, FIXED=256
 XIF
.
.NAME       TYPE     LENGTH     START     DESCRIPTION
.----       ----     ------     -----     -----------
.SECTOR     FORM         5         1      NEXT AVAILABLE SECTOR
.
.End of Record
.
.    SECTOR          :
.
.NAME       TYPE    LENGTH         START      DESCRIPTION
.----       ----    ------         -----      -----------
.ADD        DIM          2             1      AUDIT DAY
.AMM        DIM          2             3      AUDIT MONTH
.ACC        DIM          2             5      audit century
.AYY        DIM          2             7      AUDIT YEAR
.TIMEIS     DIM          8             9      AUDIT TIME  (HH:MM:SS)
.ACTION     DIM          1            17      ACTION
.                                             A == ADDED
.                                             B == BEFORE CHANGE
.                                             C == CHANGED TO
.OPERCODE   DIM          4            18      OPERATOR CODE
.
SPKADMN     FORM         8            22      PATIENT ADMISSION NO
SPKNAME     DIM         80            30      NAME
SPKADD1     DIM         35           110      ADDRESS 1
SPKADD2     DIM         35           145      ADDRESS 2
SPKSUBR     DIM         35           180      SUBURB  (Address 3)
SPKADD4     DIM         35           215      ADDRESS 4
SPKPOST     DIM          8           250      POSTCODE 
SPKTELP     DIM         20           258      PRIVATE TELEPHONE
SPKTELB     DIM         20           278      BUSINESS TELEPHONE
.
SPKRELP     DIM         10           298      RELATIONSHIP
.
.
