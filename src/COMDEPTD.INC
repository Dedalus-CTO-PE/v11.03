. *----------------------------------------------------------------------
. * Include Name  :   COMDEPTD.INC
. *
. * Function      :   CGI variables for COMDEPFD - comdepaf                     
. *
. * Modifications :
. *            
. * V9.03.02 12/12/2003 J.Tan
. *          Added Medical practice
. * V9.03.01 02/12/2003 Davin                    CAR 44095
. *          Added u/r, admn & sflg   
. * V9.03.00 26/11/2003 Ebon Clements            CAR 44095
. *          Created include          
. *----------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
COMDP001  DIM       8      Transaction Date (CCYYMMDD)        
COMDP002  DIM       12     Receipt Number                     
COMDP003  DIM       3      Transaction Count                  
COMDP004  DIM       3      Deposit Type (Cat DP)              
COMDP005  DIM       3      Reason for Refund (Cat DR)         
COMDP006  DIM       8      Refund Date (CCYYMMDD)             
COMDP007  DIM       8      Refund Time (hh:mm:ss)             
COMDP008  DIM       8      U/R Number
COMDP009  DIM       8      Admission Number
COMDP010  DIM       1      Scan Flag (0=Debtor, 1=PMI)
COMDP011  DIM       2      Visit type
COMDP012  DIM       6      Medical Practice
COMDP013  DIM       8      Date Record Created (CCYYMMDD)     
COMDP014  DIM       8      Time Record Created (hh:mm:ss)     
COMDP015  DIM       10     Web User Id Created (websecaf)     
COMDP016  DIM       8      Date Record Updated (CCYYMMDD)     
COMDP017  DIM       8      Time Record Updated (hh:mm:ss)     
COMDP018  DIM       10     Web User Id Updated (websecaf)     
