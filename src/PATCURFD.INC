. **********************************************************************
. *                                                                    *
. *     Include Name : PATCURFD.INC                                    *
. *                                                                    *
. *     Function     : File Definition include for Patient             *
. *                    COMMENTS Details - by U/R                       *
. *                                                                    *
. *                                                                    *
. *     File Type    : SQL                                             *
. *                                                                    *
. *     File Name    : patcuraf.dat                                    *
. *                                                                    *
. *     Keys         : KEY 11                                          *
. *                                                                    *
. *     Modifications:                                                 *
. *                    V6.05.00 27/04/98 J.Tan                         *
. *                    Changed U/R to F8                               *
. *                                                                    *
. **********************************************************************
.
PATCURA1   IFILE SQL, FIXED=82, KEY="U1-8,9-11"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
DCMURNO    DIM      8            8        1       U/R number
DCMURLNO   DIM      3            3        9       Line number on current page
CMURLINE   DIM      70          70        12      Comment line
.
.End of Record                            82
.
.  redefine form fields from key
.  -----------------------------
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
CMURNO     FORM        8             1       U/R number
QCMURNO    FORM        8             1       U/R number
CMURLNO    FORM        3             9       Line number on current page
