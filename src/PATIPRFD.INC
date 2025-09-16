.
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATIPRFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Insurance Provider for Johns Hopkins            *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patipraf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 11                                          * 
.  *                                                                    *
.  *     Modifications:                                                 *
.  *                    V10.03.01 11/08/2011 J.Tan  CAR 237245          *
.  *                    Changed Policy Number to Policy Amount          *
.  *                    V9.09.00 18/04/2011 J.Tan  CAR 237245           *
.  *                    New file for Johns Hopkins Insurance Provider   *
.  *                                                                    *
.  **********************************************************************
.
PATIPRA1  IFILE     SQL, FIXED=160, KEY="U1-8,9-16,17-19"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.  DESCRIPTION
. ----    ----   ------  -------- ----------  -----------
PTIRVISN  DIM       8        8       1        Visit Number
PTIRINVN  DIM       8        8       9        Invoice Number
PTIRCOUN  DIM       3        3       17       Counter
PTIRMEDI  DIM      40       40       20       Medical Claim Description
PTIRPOLA  FORM     12.2      8       60       Policy Amount
PTIRCHOL  DIM      32       32       68       Account Holder
PTIRCPFN  DIM      15       15      100       CPF Number
PTIRAMNT  FORM     12.2      8      115       Amount Deducted
PTIRSPAR  DIM      37       37      123       Spare variable
.
.End of Record                      160
.
