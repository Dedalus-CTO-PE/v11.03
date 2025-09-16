. V10.01.01 23/11/2010 Ebon Clements Added created by fields CAR 233156
. V5.07.001 07/08/1998 Jim Stathopoulos  507 Changes 
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATJRNFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Journal Details                                 *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patjrnlf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 24                                          *
.  *                    V5.07.01 J.Tan                                  *
.  *                    Added indicator for G/L interface               *
.  *                    Added 3rd index                                 *
.  *                                                                    *
.  **********************************************************************
.
PATJRNL1   IFILE SQL, FIXED=100, KEY="U1-2,3-10,11-18,19-24"
PATJRNL2   IFILE SQL, FIXED=100, KEY="U33-33,1-2,3-10,11-18,19-24"
PATJRNL3   IFILE SQL, FIXED=100, KEY="U11-18,19-24,3-10,1-2"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
JCODE      DIM      2            2        1       JOURNAL CODE
JDATE      DIM      8            8        3       JOURNAL DATE (CCYYMMDD)
DJADMN     DIM      8            8       11       JOURNAL ADMISSION NUMBER
DJTRNS     DIM      6            6       19       JOURNAL DTRAN TRANSACTION No
JINVN      DIM      8            8       25       JOURNAL INVOICE NUMBER
PTJRINDC   DIM      1            1       33       G/L Interface indicator
.                                                 0 - Transfered
.                                                 1 - Not transfered
PTJRCUID   DIM      10           10      34       WEB User ID Created (websecaf)
PTJRCDAT   DIM      8            8       44       Date Record Created (CCYYMMDD)
PTJRCTIM   DIM      8            8       52       Time Record Created (HH:MM:SS)
JSPARE     DIM      40           40      60       SPARE VARIABLE
.
.End of Record                           100
.
JDIM6A     DIM         6
JDIM6T     DIM         6
.
.  redefine form fields from key
   -----------------------------
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
JADMN      FORM        8             9       JOURNAL ADMISSION NUMBER
JTRNS      FORM        6            17       JOURNAL DTRAN TRANSACTION NUMBER
