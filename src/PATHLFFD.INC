.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATHLFFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    LUMPSUM FOR OVERNIGHT (INLIERS/HIGH OUTLIERS)   *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : pathlfaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 27                                          *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *   ***** Programmer's Note **************************************   *
.  *   *  Any changes made to this FD will also affect PATHL1FD/IO. *   *
.  *   *  Any changes made to this FD will also affect PATHL2FD/IO. *   *
.  *   **************************************************************   *
.  *        V9.12.01  03/09/09 WeeLee Koo    CAR 205303                 *
.  *                  Added Contract ID (PTHLCNID)                      *
.  *        V9.04.01  03/08/05 J.Tan    CAR 62750                       *
.  *                  Removed redefined amount variables                *
.  *        V6.09.02  05/01/2001 Jill Habasque                          *
.  *                  Added PTHLNINV - Number of Invoices               *
.  *        V6.07.01  12/10/2000 Ebon Clements                          *
.  *                  Added PTHLINVB and PTHLINVI for casemix mods      *
.  *        V6.05.00  27/04/98 J.Tan                                    *
.  *                  Changed amount to be 12.2                         *
.  *                                                                    *
.  **********************************************************************
.
PATHLFA1   IFILE SQL, FIXED=128, KEY="U113-118,1-3,4-9,10-12,13-21"
PATHLFA2   IFILE SQL, FIXED=128, KEY="U1-3,4-9,10-12,13-21,113-118"
.
.NAME       TYPE   LENGTH  PHYSICAL   START     DESCRIPTION
.----       ----   ------  --------   -----     -----------
PTHLCLMN    DIM      3        3         1       Claim code (Cat CL)
PTHLHFND    DIM      6        6         4       Health Fund
PTHLTABT    DIM      3        3        10       Table Type (Cat HT)
PTHLCASM    DIM      9        9        13       DRG/MBS Code
PTHLDES1    DIM     30       30        22       Description 1
PTHLDES2    DIM     35       35        52       Description 2
PTHLLREB    FORM    12.2      8        87       Lumpsum rebate portion
PTHLLPAT    FORM    12.2      8        95       Lumpsum patient portion
PTHLCOFF    FORM     5        4       103       Low outlier cut off day
PTHLINVB    FORM     1        2       107       Revenue Breakdown
PTHLINVI    FORM     1        2       109       Invoice Breakdown 
PTHLNINV    FORM     1        2       111       Number of Invoices
PTHLCNID    DIM      6        6       113       Contract ID
PTHLSPAR    DIM      9        9       119       Spare
.
.End of Record                        128
.
