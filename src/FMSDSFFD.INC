. *************************************************************************
. *                                                                       *
. *  Include Name    :   FMSDSFFD.INC                                     *
. *                                                                       *
. *  Function        :   File Def'n Include for Financial Management      *
. *                      Dissection Accrual Summary Table                 *
. *                                                                       *
. *  File Type       :   SQL                                              *
. *                                                                       *
. *  File Name       :   fmsdyyyy.dat                                     *
. *                      Where yyyy = Financial Year                      * 
. *                                                                       *
. *  Keys            :   KEY23                                            *
. *                                                                       *
. *  Modifications   :                                                    *
. *************************************************************************
.
FMSDSFA1  IFILE SQL, FIXED=156, KEY="U1-2,3-14,15-19,20-23"  
FMSDSFA2  IFILE SQL, FIXED=156, KEY="U1-2,3-14,20-23,15-19" 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMDFLEDG  DIM       2      2        1     Ledger
FMDFACCT  DIM       12     12       3     Account
FMDFDISS  DIM       5      5        15    Dissection
FMDFRESP  DIM       4      4        20    Responsibility
.
FMDFBF    FORM      12.2   8        24    Brought Forward
FMDF01    FORM      12.2   8        32    Period 1
FMDF02    FORM      12.2   8        40    Period 2
FMDF03    FORM      12.2   8        48    Period 3
FMDF04    FORM      12.2   8        56    Period 4
FMDF05    FORM      12.2   8        64    Period 5
FMDF06    FORM      12.2   8        72    Period 6
FMDF07    FORM      12.2   8        80    Period 7
FMDF08    FORM      12.2   8        88    Period 8
FMDF09    FORM      12.2   8        96    Period 9
FMDF10    FORM      12.2   8        104   Period 10
FMDF11    FORM      12.2   8        112   Period 11
FMDF12    FORM      12.2   8        120   Period 12
FMDF13    FORM      12.2   8        128   Period 13
.
FMDFSPAR  DIM       20     20       136   Spare
.
.End of Record                      156
