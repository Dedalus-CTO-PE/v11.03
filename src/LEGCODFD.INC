.  **********************************************************************
.  *                                                                    *
.  *     Include Name : LEGCODFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Legacy              *
.  *                    LEGACY CODES TABLE                              *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : legcodes.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 5, KEY 25                                   *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *       V9.03.00  03/05/2004  Davin         CAR 49209                *
.  *                 Created FD from 6.11 PATCODFD                      *
.  *                                                                    *
.  **********************************************************************
.
LEGCODE1   IFILE SQL, FIXED=65, KEY="U1-2,3-5"
LEGCODE2   IFILE SQL, FIXED=65, KEY="U1-2,6-25,3-5"
LEGCODE3   IFILE SQL, FIXED=65, KEY="U3-5,1-2"
LEGCODE4   IFILE SQL, FIXED=65, KEY="U3-5,6-25,1-2"
.
. NAME    TYPE    LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----    ----    ------   --------  ----------   -----------
LTCODE    DIM       2          2          1       TYPE OF CODE TO TABLE
LACODE    DIM       3          3          3       ACTUAL CODE
.
LTDESC    DIM       20        20          6       TABLE DESCRIPTION
LTHCSCOD  DIM       4          4         26       STATE HCS EQUIVALENT
.                                                 (Journal Type for Journals)
LTCFORM6  FORM      6          4         30       FORM 6 USING ANYWHERE
LTCINDC1  DIM       1          1         34       SPECIAL INDIC 1 (Categ depend)
LTCINDC2  DIM       1          1         35       SPECIAL INDIC 2 (Categ depend)
LTCINDC3  DIM       1          1         36       SPECIAL INDIC 3 (Categ depend)
LTCINDC4  DIM       1          1         37       SPECIAL INDIC 4 (Categ depend)
LTCINDC5  DIM       1          1         38       SPECIAL INDIC 5 (Categ depend)
LPCOACTV  DIM       1          1         39       ACTIVE INDICATOR, A = Active
.                                                                   I = Inactive
LTCINDC6  DIM       1          1         40       SPECIAL INDIC 6 (Categ depend)
LTCINDC7  DIM       1          1         41       SPECIAL INDIC 7 (Categ depend)
LTCINDC8  DIM       1          1         42       SPECIAL INDIC 8 (Categ depend)
LTCINDC9  DIM       1          1         43       SPECIAL INDIC 9 (Categ depend)
LTCNDC10  DIM       1          1         44       SPECIAL INDIC10 (Categ depend)
LTCNDC11  DIM       1          1         45       SPECIAL INDIC10 (Categ depend)
LPCDGRPV  DIM       3          3         46       GROUPER VERSION (031 or 041)
LPCDDEFT  DIM       1          1         49       DEFAULT CODE (0=NO 1=YES)
LPCDNHCP  DIM       4          4         50       National HCP Equivalent
LTCSPARE  DIM      11         11         54       SPARE VARIABLE
.
.End of Record                           65
.
