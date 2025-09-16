.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATLSDFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Lumpsum for Same Day                            *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patlsdaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 27                                          *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *   ***** Programmer's Note **************************************   *
.  *   *  Any changes made to this FD will also affect PATLS1FD/IO. *   *
.  *   *  Any changes made to this FD will also affect PATLS2FD/IO. *   *
.  *   **************************************************************   *
.  *                 V9.12.01 03/09/09 J.Tan   CAR 205303               *
.  *                          Added Contract ID                         *
.  *                 V9.04.01 03/08/05 J.Tan    CAR 62750               *
.  *                          Removed redefined amount variables        *
.  *                 V6.05.00 28/04/98 J.Tan                            *
.  *                          Changed Amount to F12.2                   *
.  *                 V5.09.01 04/01/2001 Jill Habasque                  *
.  *                          Added PTLSNINV                            *
.  *                 V5.09.00 19/12/2000 Jill Habasque                  *
.  *                          Added PTLSINVR & PTLSINVI                 *
.  *                                                                    *
.  **********************************************************************
.
PATLSDA1   IFILE SQL, FIXED=127, KEY="U109-114,1-3,4-9,10-12,13-21"
PATLSDA2   IFILE SQL, FIXED=127, KEY="U1-3,4-9,10-12,13-21,109-114"
.
.NAME       TYPE   LENGTH  PHYSICAL   START     DESCRIPTION
.----       ----   ------  --------   -----     -----------
PTLSCLMN    DIM      3        3         1       Claim code (Cat CL)
PTLSHFND    DIM      6        6         4       Health Fund
PTLSTABT    DIM      3        3        10       Table Type (Category HT)
PTLSCASM    DIM      9        9        13       DRG/MBS Code
PTLSDES1    DIM     30       30        22       Description 1
PTLSDES2    DIM     35       35        52       Description 2
PTLSLREB    FORM    12.2      8        87       Lumpsum rebate portion
PTLSLPAT    FORM    12.2      8        95       Lumpsum patient portion
PTLSINVR    FORM     1        2       103       Revenue Breakdown (1=Yes) 
PTLSINVI    FORM     1        2       105       Invoice Breakdown (1=Yes)
PTLSNINV    FORM     1        2       107       Number of invoices
PTLSCNID    DIM      6        6       109       Contract ID
PTLSSPAR    DIM     12       12       115       Spare
.
.End of Record                        127
.
