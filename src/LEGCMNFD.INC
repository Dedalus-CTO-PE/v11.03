.  **********************************************************************
.  *                                                                    *
.  *     Include Name : LEGCMNFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for                     *
.  *                    LEGACY PATIENT COMMENTS DETAILS                 *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : legcmntf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 11                                          *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *                 V9.11.00 05/03/2008  Ebon Clements  CAR 191018     *
.  *                          Ported from V6.16                         *
.  **********************************************************************
.
LEGCMNT1  IFILE SQL, FIXED=82, KEY="U1-8,9-11"
.
. NAME    TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----    ----   ------   --------  ----------   -----------
DLPCADMN  DIM      8            8        1       ADMISSION NUMBER
DLPCLNO   DIM      3            3        9       LINE NUMBER ON CURRENT PAGE
LPCLINE   DIM      70          70        12      COMMENT LINE
.
.End of Record
.
.
.  redefine form fields from key
.  -----------------------------
. NAME    TYPE      LENGTH     START LOC.   DESCRIPTION
. ----    ----      ------     ----------   -----------
LPCADMN   FORM        8             1       ADMISSION NUMBER
LQPCADMN  FORM        8             1       ADMISSION NUMBER
LPCLNO    FORM        3             9       LINE NUMBER ON CURRENT PAGE
