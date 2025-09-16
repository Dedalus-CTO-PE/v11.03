. V6.00.001 14/01/1992
. V6.00.002 20/09/1994
. *----------------------------------------------------------------------
. * Include Name  :   FMSBNKFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Bank Reconciliation Table
. *
. * File Type     :   SQL
. *
. * File Name     :   fmsbnkaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSBNKA1   IFILE    SQL, FIXED=150, KEY="U1-15,16-20"
FMSBNKA2   IFILE    SQL, FIXED=150, KEY="U1-15,58-58,21-35,16-20"
FMSBNKA3   IFILE    SQL, FIXED=150, KEY="U1-15,58-58,50-57,21-35,16-20"
FMSBNKA4   IFILE    SQL, FIXED=150, KEY="U80-84,85-89,1-15,16-20"
FMSBNKA5   IFILE    SQL, FIXED=150, KEY="U1-15,58-58,95-129,16-20"
FMSBNKA6   IFILE    SQL, FIXED=150, KEY="D1-15,59-59,60-67"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMBNBNK   DIM       15     15       1     Cheque Account                     
FMBNUNQ   DIM       5      5        16    Unique Id                          
FMBNREF   DIM       15     15       21    Reference (Cheque No etc )         
FMBNLED   DIM       2      2        36    Ledger                             
FMBNACC   DIM       12     12       38    Bank Account                       
FMBNDAT   DIM       8      8        50    Transaction Date CCYYMMDD          
FMBNTYP   DIM       1      1        58    Type 0 - Cheque 1 - Receipt 2 - Adj
FMBNPRE   DIM       1      1        59    Presented 0 = No 1 = Yes 2 = Cancel
FMBNPDT   DIM       8      8        60    Statement/Cancelled Date CCYYMMDD  
FMBNAMT   FORM      12.2   8        68    Amount                             
FMBNFYR   DIM       4      4        76    Financial Year (Cash Transaction Fi
FMBNBCH   DIM       5      5        80    Batch Number                       
FMBNLNO   DIM       5      5        85    Batch Line Number                  
FMBNCRE   DIM       5      5        90    Creditor/Debtor Code               
FMBNNAM   DIM       35     35       95    Creditor/Debtor Name               
FMBNSPAR  DIM       20     20       130   Spare                              
.
.End of Record                      150  
.
. keyin variables
.
CCHEQREC  FORM      1        * keyin type 0=cheque, 1=receipt
CFMBND    INIT      "       "
CFMBND0   INIT      "Cheque"
CFMBND1   INIT      "Receipt"
CHEQNO    DIM       8        * cheque no.
CRECNO    DIM       15       * receipt no.
CFORM8    FORM      8        * general form 6
CFORM15   FORM      15       * general form 15
FCHEQNO   DIM       15       * full dim 15 cheque no.
CLASTREF  DIM       15       * last ref read
CDIM16    DIM       16       * general dim 16
CF11P2    FORM      11.2     * general form 11.2
CF12P2    FORM      12.2     * general form 12.2
CSTATUS   INIT      "         "
CSTATUS0  INIT      "Unpresent"
CSTATUS1  INIT      "Presented"
CSTATUS2  INIT      "Cancelled"
CSTATUS3  INIT      "Not Used "
SCCOL     FORM      2
SCVERT    FORM      2
.
