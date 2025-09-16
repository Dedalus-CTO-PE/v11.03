.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATHDFFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Daily Fee for Inliers/High Outliers             *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : pathdfaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 31                                          *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *   ***** Programmer's Note **************************************   *
.  *   *  Any changes made to this FD will also affect PATHD1FD/IO. *   *
.  *   *  Any changes made to this FD will also affect PATHD2FD/IO. *   *
.  *   **************************************************************   *
.  *        V9.12.01  04/09/09 WeeLee Koo    CAR 205303                 *
.  *                  Added new contract ID (PTHDCNID)                  *
.  *        V9.04.01  03/08/05 J.Tan    CAR 62750                       *
.  *                  Removed redefined amount variables                *
.  *        V6.05.00  27/04/98 J.Tan                                    *
.  *                  Changed amount to be 12.2                         *
.  *        V5.07.01  27/05/99 J.Tan                                    *
.  *                  Fixed physical length of day type, spare to DIM20 *
.  *                                                                    *
.  **********************************************************************
.
PATHDFA1   IFILE SQL, FIXED=129, KEY="U109-114,1-3,4-9,10-12,13-21,22-25"
.
.NAME       TYPE   LENGTH  PHYSICAL   START     DESCRIPTION
.----       ----   ------  --------   -----     -----------
PTHDCLMN    DIM      3        3         1       Claim code (Cat CL)
PTHDHFND    DIM      6        6         4       Health Fund
PTHDTABT    DIM      3        3        10       Table Type (Cat HT)
PTHDCASM    DIM      9        9        13       DRG/MBS Code
DPTHDEDA    DIM      4        4        22       Ending Day
PTHDDTYP    FORM     1        2        26       Day Type
.                                               1 = Inlier, 2 = Outlier
PTHDDES1    DIM     30       30        28       Description 1
PTHDDES2    DIM     35       35        58       Description 2
PTHDDREB    FORM    12.2      8        93       Daily rebate portion
PTHDDPAT    FORM    12.2      8       101       Daily patient portion
PTHDCNID    DIM      6        6       109       Contract ID
PTHDSPAR    DIM     14       14       115       Spare
.
.End of Record                        129
.
. redefine form fields from key
. -----------------------------
PTHDEDAY    FORM     4        4        22       Ending Day
.
