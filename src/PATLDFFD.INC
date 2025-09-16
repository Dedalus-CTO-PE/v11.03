.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATLDFFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Daily Fee for Low Outliers                      *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patldfaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 31                                          *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *   ***** Programmer's Note **************************************   *
.  *   *  Any changes made to this FD will also affect PATLD1FD/IO. *   *
.  *   *  Any changes made to this FD will also affect PATLD2FD/IO. *   *
.  *   **************************************************************   *
.  *        V9.12.01  03/09/09 WeeLee Koo    CAR 205303                 *
.  *                  Added Contract ID (PTLDCNID)                      *
.  *        V9.04.01  03/08/05 J.Tan    CAR 62750                       *
.  *                  Removed redefined amount variables                *
.  *        V6.05.00  27/04/98 J.Tan                                    *
.  *                  Changed amount to be 12.2                         *
.  *                                                                    *
.  **********************************************************************
.
PATLDFA1   IFILE SQL, FIXED=128, KEY="U107-112,1-3,4-9,10-12,13-21,22-25"
.
.NAME       TYPE   LENGTH  PHYSICAL   START     DESCRIPTION
.----       ----   ------  --------   -----     -----------
PTLDCLMN    DIM      3        3         1       Claim code (Cat CL)
PTLDHFND    DIM      6        6         4       Health Fund
PTLDTABT    DIM      3        3        10       Table Type (Cat HT)
PTLDCASM    DIM      9        9        13       DRG/MBS Code
DPTLDEDA    DIM      4        4        22       Ending Day
PTLDDES1    DIM     30       30        26       Description 1
PTLDDES2    DIM     35       35        56       Description 2
PTLDDREB    FORM    12.2      8        91       Daily rebate portion
PTLDDPAT    FORM    12.2      8        99       Daily patient portion
PTLDCNID    DIM      6        6       107       Contract ID
PTLDSPAR    DIM     15       15       113       Spare
.
.End of Record                        128
.
. redefine form fields from key
. -----------------------------
PTLDEDAY    FORM     4                          Ending Day
.
