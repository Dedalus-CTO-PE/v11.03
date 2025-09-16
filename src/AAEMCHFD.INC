.
. ******************************************************************************
. *                                                                            *
. *  Include Name : AAEMCHFD.INC                                               *
. *                                                                            *
. *  Function     : File Definition include for A&E Miscellaneous Charges      *
. *                                                                            *
. *  File Type    : SQL                                                        *
. *                                                                            *
. *  File Name    : aaemchgf.dat                                               *
. *  Audit File   : aaeaudmc.dat                                               *
. *                                                                            *
. *  Keys         : KEY29                                                      *
. *                                                                            *
. *  Modifications:
. *                  31/01/2001    Jill Habasque                               *
. *                  Added AEMCGSTA & AEMCGSTC                                 *
. *                 V5.08.01 15/08/2000  Caleb Sharman                         *
. *                          Changed Health Fund variables to be 8 chars       *
. *                 V5.01.01 07/05/90 E.Phan                                   *
. *                          Created file.                                     *
. *                                                                            *
. ******************************************************************************
.
.Audit File Definition
.---------------------
AAEAUDMC  IFILE SQL, FIXED=101, KEY="D1-8,9-16,17-18,19-19"
.
. Name    Type    Length   Physical  Start     Description
.-------  ----    ------   --------  -----     -----------
AEMCAUDD  DIM       8         8       1        Date of change
AEMCAUDT  DIM       8         8       9        Time of change
AEMCAUDP  DIM       2         2       17       Port doing change
AEMCAUDR  DIM       1         1       19       Record type
.                                                 A = Added 
.                                                 B = Before image
.                                                 C = After image
.                                                 D = Deleted
AEMCAUDS  FORM      1         2       20      Record status
.                                                 1 = Not printed
.                                                 2 = Printed
AEMCAUDO  DIM       4         4       22      Operator id that did the change
.
.Data File Definition
.--------------------
AAEMCHG1  IFILE SQL, FIXED=76, KEY="U1-3,4-9,10-17,18-20,21-29"
.
. Name    Type    Length   Physical  Start     Description
.-------  ----    ------   --------  -----     -----------
AEMCCLM   DIM       3        3        1        Claim Type (ADACOMP from AAEDEA)
AEMCFUND  DIM       6        6        4        Health Fund Code
AEMCTAB   DIM       8        8        10       Health Fund Table (See AEMCTABL)
AEMCCLSS  DIM       3        3        18       Pat.Class (ADACLASS from AAEDEA)
AEMCMBS   DIM       9        9        21       MBS item (ICODE from PATITMFD)
AEMCPATP  FORM     12.2      8        30       Patient Portion of charge
AEMCREBP  FORM     12.2      8        38       Rebate Portion of charge
AEMCGSTA  FORM      1        2        46       Is GST applicable to charge
.                                                 0 = GST free
.                                                 1 = GST payable
.                                                 2 = Either
AEMCGSTC  DIM       6        6        48       GST payable code from GST
.                                                 rates table
AEMCSPAR  DIM       22       22       54       Spare variable
.
.End of Record                        76
.
. ------- Redefines --------
.
AEMCPAT   FORM      6.2      5        30       Patient Portion of charge
AEMCREB   FORM      6.2      5        35       Rebate Portion of charge
.
