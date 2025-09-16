. VF.00.001 30/10/1998 SB  Extend Reference From 10 to 12                    
. *----------------------------------------------------------------------
. * Include Name  :   DEBCREFD.INC
. *
. * Function      :   File Def'n Include for Accounts Receivable               
. *                   Cash Receipts                      
. *
. * File Type     :   SQL
. *
. * File Name     :   debcreaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
DEBCREA1   IFILE    SQL, FIXED=232, KEY="U9-20"                                 
DEBCREA2   IFILE    SQL, FIXED=232, KEY="U22-22,9-20"                           
DEBCREA3   IFILE    SQL, FIXED=232, KEY="U23-30,31-36,9-20"                     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBCRDEB   DIM       8      8        1     Debtor                             
DBCRREC   DIM       12     12       9     Receipt No/Document Reference      
DBCRTYP   DIM       1      1        21    Payment Type 1=Cash,2=Cheq.,3=Cr.  
DBCRRST   DIM       1      1        22    Reset Indicator 0 No 1 Yes         
DBCRDDT   DIM       8      8        23    Bank Deposit Date                  
DBCRDTM   DIM       6      6        31    Bank Deposit Time                  
DBCRDRW   DIM       30     30       37    Drawer                             
DBCRCHQ   DIM       8      8        67    Cheque Number                      
DBCRBNK   DIM       6      6        75    Bank                               
DBCRBRA   DIM       25     25       81    Branch                             
DBCRAMT   FORM      12.2   8        106   Amount                             
DBCRDAT   DIM       8      8        114   Receipt Date                       
DBCRUSR   DIM       4      4        122   Input by Useer                     
DBCRIDT   DIM       8      8        126   Input Date                         
DBCRITM   DIM       6      6        134   Input Time                         
DBCRUR1   DIM       25     25       140   User Def Ref 1                     
DBCRUR2   DIM       25     25       165   User Def Ref 2                     
DBCRUD1   DIM       8      8        190   User Def Date 1                    
DBCRUD2   DIM       8      8        198   User Def Date 2                    
DBCRUY1   DIM       1      1        206   User Def Y/N 1                     
DBCRUY2   DIM       1      1        207   User Def Y/N 2                     
DBCRUC1   DIM       3      3        208   User Def Code 1                    
DBCRUC2   DIM       3      3        211   User Def Code 2                    
DBCRSPA   DIM       18     18       214   Spare                              
.
.End of Record                      232  
.
