.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   HICEFPFD.INC                                  *
.  *                                                                      *
.  *  Function          :   HIC Reconciliation Payment Statement Table    *
.  *                        (Type "P" segment)                            *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   hicefpaf.dat                                  * 
.  *                                                                      * 
.  *  Keys              :   KEY13                                         *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *      V9.04.02 22/09/05 J.Tan     CAR 77215                           *
.  *               Added field for counter                                *
.  *      V9.04.01 13/09/2005  Steve Armstrong  CAR 75995                 *
.  *               Fixed length of hcepaccn.                              *
.  *                                                                      *
.  ************************************************************************
.
.Data File Definition
.--------------------
HICEFPA1   IFILE SQL, FIXED=86, KEY="U9-18,1-3,4-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HCEPPRUN  DIM       3         3       1   Payment Run Number
HCEPCNTR  DIM       5         5       4   Counter
HCEPPYEE  DIM       10        10      9   Payee Provider
HCEPNCLM  FORM      2         2      19   Number of Claim Payments
HCEPBSBN  FORM      6         4      21   BSB Number
HCEPACCN  FORM      9         6      25   Account Number
HCEPANAM  DIM       32        32     31   Account Name
HCEPDAMT  FORM      12.2      8      63   Deposit Amount
HCEPSPAR  DIM       15        15     71   Spare Variable
.
.End of Record                       86
