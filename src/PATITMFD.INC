.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATITMFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Item Details                                    *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patitemn.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 15 , KEY 9                                  *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *                                                                    *
.  *      V11.01.01 24/02/20 J.Tan     TSK 0838262                      *
.  *                Added new fields for Effective From and To Date     *
.  **********************************************************************
.  *      V10.08.01  24/03/2016  Steve Armstrong  TSK 0813090           *
.  *                 Added PTITTACB and reduced length of PTITSPAR      *
.  **********************************************************************
.  *      V10.01.01  28/02/2011  Steve Armstrong  CAR 228299            *
.  *                 Moved PTITECEQ, PTITECTS & PTITLWRD into FD        *
.  **********************************************************************
.  *      V10.00.02  27/08/2010  Steve Armstrong  CAR 228299            *
.  *                 Added PTITLWRD                                     *
.  *      V10.00.01  22/06/2010  Steve Armstrong  CAR 206701            *
.  *                 Added PTITECEQ & PTITECTS                          *
.  **********************************************************************
.  *      V9.11.02   05/01/2009 Ebon Clements CAR 183976                *
.  *                 Added PTITSERV - DVA Service Code                  *
.  *      V9.11.01   21/11/2008 Ebon Clements CAR 183976                *
.  *                 Added PTITTCCD - Theatre Category Code             *
.  *      V9.08.03   18/04/2007 Peter Vela CAR 135210                   *
.  *                 Added PTITMSCH - Misc Charge Code Indicator        *
.  *      V9.08.02   16/11/2006 Peter Vela CAR 124538                   *
.  *                 Added field for Type of Certificate (CAT cr)       *
.  *      V9.08.01   15/11/2006 J.Tan   CAR 120003                      *
.  *                 Added field for Long item description              *
.  *      V9.02.01   18/01/2001 J.Tan                                   *
.  *                 Added PTITDCSC                                     *
.  *      V5.08.00   28/01/2000  J Habasque                             *
.  *                 Added PTITGSTA & PTITGSTC                          *
.  *                    V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                    V5.01 18/05/90 J.Tan                            *
.  *                          Added 8 new theatre classifications       *
.  *                    V5.02 10/10/91 Graeme Williams                  *
.  *                          Added PTITACTV and PTITLINK               *
.  *      V6.03.B00 22/12/1994  Greg Horvat      New Release 6.03       *
.  *                Added PTITEXCL - Exclusion list item                *
.  *      V6.03.01  15.01/98 J.Tan                                      *
.  *                Added new field for warning message indicator       *
.  *                                                                    *
.  **********************************************************************
.
PATITEM1   IFILE SQL, FIXED=351, KEY="U1-9,233-240"
PATITEM2   IFILE SQL, FIXED=351, KEY="U10-15,1-9,233-240"
PATITEM3   IFILE SQL, FIXED=351, KEY="U16-55,1-9,233-240"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
ITEMNO     DIM       9           9         1      ITEM NUMBER
IALPHA     DIM       6           6        10      ITEM ALPHA KEY
IDESC      DIM      40          40        16      ITEM DESCRIPTION
QIAMT      FORM     12.2         8        56      MBS AMOUNT    
IMISGRP    DIM       3           3        64      MISCELLANEOUS GROUP (CAT FI)
ICLSS      DIM       3           3        67      SUGGESTED CLASS (CAT A )
IBAND1     DIM       3           3        70      THEATRE CLASS 1 (CAT TB)
IBAND2     DIM       3           3        73      THEATRE CLASS 2 (CAT TB)
IBAND3     DIM       3           3        76      THEATRE CLASS 3 (CAT TB)
IBAND4     DIM       3           3        79      THEATRE CLASS 4 (CAT TB)
IBAND5     DIM       3           3        82      THEATRE CLASS 5 (CAT TB)
IBAND6     DIM       3           3        85      THEATRE CLASS 6 (CAT TB)
IBAND7     DIM       3           3        88      THEATRE CLASS 7 (CAT TB)
IBAND8     DIM       3           3        91      THEATRE CLASS 8 (CAT TB)
IBAND9     DIM       3           3        94      THEATRE CLASS 9 (CAT TB)
IBAND10    DIM       3           3        97      THEATRE CLASS 10(CAT TB)
IBAND11    DIM       3           3       100      THEATRE CLASS 11(CAT TB)
IBAND12    DIM       3           3       103      THEATRE CLASS 12(CAT TB)
IBAND13    DIM       3           3       106      THEATRE CLASS 13(CAT TB)
IBAND14    DIM       3           3       109      THEATRE CLASS 14(CAT TB)
IBAND15    DIM       3           3       112      THEATRE CLASS 15(CAT TB)
IBAND16    DIM       3           3       115      THEATRE CLASS 16(CAT TB)
PTITACTV   DIM       1           1       118      Active indicator
.                                                   " " = Active
.                                                   "I" = Inactive
PTITLINK   DIM       9           9       119      Linked item code (inactive
.                                                 items only).
PTITEXCL   FORM      1           2       128      Exclusion list item ?
.                                                    1 = Yes
.                                                    2 = No
PTITIWRN   DIM       1           1       130      Warning to enter a Prosthetic
PTITGSTA   FORM      1           2       131      Is GST applicable?
.                                                 0 = GST Free
.                                                 1 = GST Payable
.                                                 2 = Either
PTITGSTC   DIM       6           6       133      GST Payable Code
PTITDCSC   DIM       3           3       139      Daycase Suggested Class.
.                                                     (CAT A)
PTITDESC   DIM       60          60      142      Long Item Description
PTITTCER   DIM       3           3       202      Type of Certificate (CAT cr)
PTITMSCH   DIM       1           1       205      Misc Service Charge Indicator
PTITTCCD   DIM       1           1       206      Theatre Category Code
.                                                 0/Blank = Simple, 1 = Complex
PTITSERV   DIM       9           9       207      DVA Service Code      
PTITECEQ   DIM       11          11      216      Eclipse Equivalent
PTITECTS   DIM       2           2       227      Eclipse Type of Service
.                                                 0 = Blank
.                                                 1 = External Aid/Prosthetic
.                                                 2 = Cosmetic
.                                                 3 = Dental
.                                                 4 = Drug
.                                                 5 = Disposable
.                                                 6 = Exceptional Drug List
.                                                 7 = Other – Clinic
.                                                 8 = Other – Home
.                                                 9 = Other
.                                                 10 = Psych – Clinic
.                                                 11 = Psych – Home
.                                                 12 = Psych
.                                                 13 = Cwealth Prosthetic
.                                                 14 = Rehab – Clinic
.                                                 15 = Rehab – Home
.                                                 16 = Rehab
.
PTITLWRD   DIM       1           1       229      Eclipse Labour Ward Item
.                                                   Blank or 0 = No
.                                                   1 = Yes
PTITTACB   DIM       3           3       230      Theatre Average Calc. Band
.                                                   (Cat TB)
PTITEFDT   DIM       8           8       233      Effective from Date (CCYYMMDD)
PTITETDT   DIM       8           8       241      Effective to Date (CCYYMMDD)
PTITCDAT   DIM       8           8       249      Date record created (CCYYMMDD)
PTITCTIM   DIM       8           8       257      Time record created (hh:mm:ss)
PTITCUID   DIM       10          10      265      Record created by (websecaf)
PTITUDAT   DIM       8           8       275      Date record updated (CCYYMMDD)
PTITUTIM   DIM       8           8       283      Time record updated (hh:mm:ss)
PTITUUID   DIM       10          10      291      Record updated by (websecaf)
PTITSPAR   DIM       50          50      301      Spare
.
.End of Record                           351
.
.           SPARE VARIABLES
.
SITEMNO    DIM          9             1      ITEM NUMBER
SIALPHA    DIM          6            10      ITEM ALPHA KEY
SIDESC     DIM         40            16      ITEM DESCRIPTION
SIAMT      FORM         5            56      MBS AMOUNT    
SIMISGRP   DIM          3            61      MISCELLANEOUS GROUP
SICLSS     DIM          3            64      SUGGESTED CLASSIFICATION (CAT A )
SIBAND1    DIM          3            67      THEATRE CLASSIFICATION 1 (CAT TB)
SIBAND2    DIM          3            70      THEATRE CLASSIFICATION 2 (CAT TB)
SIBAND3    DIM          3            73      THEATRE CLASSIFICATION 3 (CAT TB)
SIBAND4    DIM          3            76      THEATRE CLASSIFICATION 4 (CAT TB)
SIBAND5    DIM          3            79      THEATRE CLASSIFICATION 5 (CAT TB)
SIBAND6    DIM          3            82      THEATRE CLASSIFICATION 6 (CAT TB)
SIBAND7    DIM          3            85      THEATRE CLASSIFICATION 7 (CAT TB)
SIBAND8    DIM          3            88      THEATRE CLASSIFICATION 8 (CAT TB)
SIBAND9    DIM          3            91      THEATRE CLASSIFICATION 9 (CAT TB)
SIBAND10   DIM          3            94      THEATRE CLASSIFICATION 10(CAT TB)
SIBAND11   DIM          3            97      THEATRE CLASSIFICATION 11(CAT TB)
SIBAND12   DIM          3           100      THEATRE CLASSIFICATION 12(CAT TB)
SIBAND13   DIM          3           103      THEATRE CLASSIFICATION 13(CAT TB)
SIBAND14   DIM          3           106      THEATRE CLASSIFICATION 14(CAT TB)
SIBAND15   DIM          3           109      THEATRE CLASSIFICATION 15(CAT TB)
SIBAND16   DIM          3           112      THEATRE CLASSIFICATION 16(CAT TB)
SPTITACT   DIM          1           115      Active indicator
SPTITLIN   DIM          9           116      Linked item code
SPTITEXC   FORM         1           125      Exclusion list item
SPTITIWR   DIM          1           126      Display warning for Prosthetic
.
.  redefine form fields from key
.  -----------------------------
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
IAMT       FORM        5             56      MBS AMOUNT
.
. Other field definitions
. -----------------------
.
. Fields used in PATITMRD.PBL
.---------------------------
WKITCODE   DIM         9                          Charge Code
WKITDATE   DIM         8                          Service Date
WKITINAC   FORM        1                          Item Inactice flag
WKITEXDT   FORM        1                          Date Range error flag
.

