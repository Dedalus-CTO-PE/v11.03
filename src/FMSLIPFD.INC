. V6.00.001 11/03/1992 Nez New File
. *----------------------------------------------------------------------
. * Include Name  :   FMSLIPFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Interface/Ledger Parameters
. *
. * File Type     :   SQL
. *
. * File Name     :   fmslipaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSLIPA1   IFILE    SQL, FIXED=104, KEY="U1-3,4-5"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMLICODE  DIM       3      3        1     Interface Type Code                
FMLILEDG  DIM       2      2        4     Ledger                             
FMLIDESC  DIM       30     30       6     Transaction Description            
FMLIREF   DIM       15     15       36    Reference                          
FMLIDISS  DIM       5      5        51    Dissection                         
FMLIRESP  DIM       4      4        56    Responsibility                     
FMLICRAC  DIM       12     12       60    Credit Account - Cash              
FMLICRAA  DIM       12     12       72    Credit Account - Accrual           
FMLISPAR  DIM       20     20       84    Spare                              
.
.End of Record                      104  
