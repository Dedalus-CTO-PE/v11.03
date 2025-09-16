.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATLOCFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Location Details                                *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patlocaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 88                                          *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *          V10.02.01  25/06/2011  Steve Armstrong  CAR 240722        *
.  *                     Added PTLCGNM2 - Patient Second Given Name.    *
.  *                     Also increased length of surname and first     *
.  *                     given name to 40 characters.                   *
.  **********************************************************************
.  *          V9.02.00   17.11.2001  Glenn Saunders                     *
.  *                     Add new field - Patient Ambulatory status      *
.  **********************************************************************
.  *          V5.03      03/08/89    Graeme Williams (I.B.A)            *
.  *                     Added LPCDATE, LPCTIME                         *
.  *          V5.02      01/06/89    Karin Peak      (I.B.A)            *
.  *                     Change U/R & Admission to 8 characters         *
.  *          V5.01      24/04/89    Graeme Williams (I.B.A)            *
.  *                     Added fields LPCONDC,LPCONDD,LOCSPAR           *
.  *                     Changed the stored U/R to a DIM 8              *
.  *          V5.00      31.03.89    J.Clark     (IBA)                  *
.  *                     Change include heading                         *
.  *                                                                    *
.  **********************************************************************
.
PATLOCA1   IFILE SQL, FIXED=240, KEY="U1-40,41-80,81-88"
.
. NAME     TYPE   LENGTH   PHYSICAL   START LOC.   DESCRIPTION
. ----     ----   ------   --------   ----------   -----------
LSNAME     DIM      40          40          1      PATIENT SURNAME
LGNAME     DIM      40          40         41      PATIENT'S FIRST GIVEN NAME
DLADMNO    DIM       8           8         81      PATIENT ADM NO.
LURNO      DIM       8           8         89      PATIENT U/R NO.
LPCONDC    DIM       3           3         97      PATIENT CONDITION CODE (CO)
LPCONDD    DIM      35          35        100      PATIENT CONDITION DESC
LPCDATE    DIM       8           8        135      PATIENT CONDITION DATE
LPCTIME    DIM       5           5        143      PATIENT CONDITION TIME
LPCONAM    DIM       3           3        148      PATIENT AMBULATORY STATUS(AM)
PTLCGNM2   DIM      40          40        151      PATIENT'S SECOND GIVEN NAME
LOCSPAR    DIM      49          49        191      SPARE VARIABLE
.
.End of Record                            240
.
SLSNAME    DIM         20
SLGNAME    DIM         25
.
.  Redefine FORM fields from key
.  -----------------------------
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
LADMNO     FORM         8            46      PATIENT ADM NO.
