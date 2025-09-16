. *************************************************************************
. *                                                                       *
. *  Include Name    :   FMSJPDFD.INC                                     *
. *                                                                       *
. *  Function        :   File Def'n Include for Financial Management      *
. *                      Journal Posting Details                          *
. *                                                                       *
. *  File Type       :   SQL                                              *
. *                                                                       *
. *  File Name       :   fmsjpdaf.dat                                     *
. *                                                                       *
. *  Keys            :   KEY5, KEY12, KEY6                                *
. *                                                                       *
. *  Modifications   :                                                    *
. *************************************************************************
.
FMSJPDA1  IFILE     SQL, FIXED=79, KEY="U1-5"
FMSJPDA2  IFILE     SQL, FIXED=79, KEY="U6-6,7-12,1-5"
FMSJPDA3  IFILE     SQL, FIXED=79, KEY="U57-57,1-5"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMJPBAT   DIM       5      5        1     Batch      
FMJPJTY   DIM       1      1        6     Journal Type Gen/Std/Periodic
FMJPJID   DIM       6      6        7     Journal Id 
FMJPPDAT  DIM       8      8        13    Accrual Posting date  
FMJPCDAT  DIM       8      8        21    Cash Posting date  
FMJPUDAT  DIM       8      8        29    Date Updated                    
FMJPDAT   DIM       8      8        37    Date Processed
FMJPTYP   FORM      1      2        45    Type of journal 0 = Accrual
.                                                         1 = cash
FMJPREV   FORM      1      2        47    reversal        0 = no
.                                                         1 = yes
FMJPDTOT  FORM      12.2   8        49    Total Debit Entries
FMJPAUTH  DIM       1      1        57    Authorized 0 = no 1 = yes
FMJPSPAR  DIM       21     21       58    Spare
.
.End of Record                      79 
