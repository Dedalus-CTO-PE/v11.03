.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATASDFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Additional Charges for Sameday                  *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patasdaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 30                                          *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *   ***** Programmer's Note **************************************   *
.  *   *  Any changes made to this FD will also affect PATAS1FD/IO. *   *
.  *   *  Any changes made to this FD will also affect PATAS2FD/IO. *   *
.  *   **************************************************************   *
.  *      V10.01.01 10/12/2010  Ebon Clements  CAR 233149               *
.  *                Added PTADFIGR                                      *
.  *      V9.12.01  03/09/09 WeeLee Koo    CAR 205303                   *
.  *                Added Contract ID (PTADCNID)                        *
.  *      V9.04.01  03/08/05 J.Tan    CAR 62750                         *
.  *                Removed redefined amount variables                  *
.  *      V6.05.00  27/04/98 J.Tan                                      *
.  *                Changed amount to F12.2                             *
.  *                                                                    *
.  **********************************************************************
.
PATASDA1   IFILE SQL, FIXED=130, KEY="U106-111,1-3,4-9,10-12,13-21,22-24"
.
.NAME       TYPE   LENGTH  PHYSICAL   START     DESCRIPTION
.----       ----   ------  --------   -----     -----------
PTADCLMN    DIM      3        3         1       Claim code (Cat CL)
PTADHFND    DIM      6        6         4       Health Fund
PTADTABT    DIM      3        3        10       Table Type (Cat HT)
PTADCASM    DIM      9        9        13       DRG/MBS Code
PTADBTYP    DIM      3        3        22       Bed type (Cat BT)
PTADDES1    DIM     30       30        25       Description 1
PTADDES2    DIM     35       35        55       Description 2
PTADDREB    FORM    12.2      8        90       Additional Daily rebate portion
PTADDPAT    FORM    12.2      8        98       Additional Daily patient portion
PTADCNID    DIM      6        6       106       Contract ID
PTADFIGR    DIM      3        3       112       Fees Invoiced Group (Cat FI)
PTADSPAR    DIM     15       15       115       Spare
.
.End of Record                        130
.
