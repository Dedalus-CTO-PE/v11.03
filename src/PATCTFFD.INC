.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATCTFFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    DRG/CASEMIX THEATRE FEE                         *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patctfaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 33                                          *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *                    V10.01.01 15/02/2010 Ebon Clements CAR 233048   *
.  *                    Removed old/new file                            *
.  *                    V9.12.00  09/09/09 WeeLee Koo    CAR 205303     *
.  *                    Added Contract ID (PTCTCNID)                    *
.  *                    V9.04.01  03/08/05 J.Tan    CAR 62750           *
.  *                    Removed redefined amount variables              *
.  *                    V9.03.00 02/10/2003  Pat Dirito                 *
.  *                    Added INDEX 3                                   *
.  *                    V5.09.B00 14/11/2000  Ebon Clements             *
.  *                    Removed episode type and added daycase field    *
.  *                    V6.05.00 27/04/98 J.Tan                         *
.  *                    Changed amount to F12.2                         *
.  *                                                                    *
.  **********************************************************************
.
PATCTFA1   IFILE SQL, FIXED=61, KEY="U44-49,1-3,4-9,10-12,13-21,22-24,25-25,26-27"
PATCTFA2   IFILE SQL, FIXED=61, KEY="U44-49,1-3,4-9,10-12,22-24,13-21,25-25,26-27"
PATCTFA3   IFILE SQL, FIXED=61, KEY="U26-27,1-3,4-9,10-12,22-24,13-21,25-25,44-49"
.
.NAME       TYPE   LENGTH  PHYSICAL   START     DESCRIPTION
.----       ----   ------  --------   -----     -----------
PTCTCLMN    DIM      3        3         1       Claim code (Cat CL)
PTCTHFND    DIM      6        6         4       Health Fund
PTCTTABT    DIM      3        3        10       Table Type (Cat HT)
PTCTCASM    DIM      9        9        13       DRG Code (blank if not DRG)
PTCTMBSB    DIM      3        3        22       MBS Banding (blank if not MBS)
DPTCTDCA    DIM      1        1        25       Daycase Yes/No
.                                               1 = Yes
.                                               0 = No
DPTCTITM    DIM      2        2        26       Item sequence
PTCTDREB    FORM    12.2      8        28       rebate portion
PTCTDPAT    FORM    12.2      8        36       patient portion
PTCTCNID    DIM      6        6        44       Contract ID
PTCTSPAR    DIM     11       11        50       Spare
.
.End of Record                         61
.
.  redefine form fields for key
.  ----------------------------
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
PTCTITMS    FORM     2                       Item sequence
PTCTDCAS    FORM     1                       Daycase Yes/No
.
