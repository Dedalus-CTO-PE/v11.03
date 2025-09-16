. V11.01.01 02/03/2021 TN C-0309320 Added CMDETRSF - Deposit Transfered         
. V10.14.01 20/03/2019 JT C-0857392 Changed Transaction count from DIM3 to DIM5 
. V10.04.01 28/02/2014 JT C-297922 Added Private Practice Service Doctor        
. V9.10.001 05/05/2008 JT  Added Deposit Status and index 7                     
. V9.03.008 17/02/2004 LV  Added 6th index to sort by Practice                  
. V9.03.007 03/02/2004 LV  Added 5th index with Transaction date                
. V9.03.002 12/12/2003 JT  Added Medical practice                               
. V9.03.003 21/01/2004 JT  Added index 3 & 4                                    
. *----------------------------------------------------------------------
. * Include Name  :   COMDEPFD.INC
. *
. * Function      :   File Def'n Include for Common                             
. *                   Common Deposit File                
. *
. * File Type     :   SQL
. *
. * File Name     :   comdepaf.dat
. *
. * Index Values  :   KEY17   KEY26   KEY34   KEY33   KEY26   KEY33   KEY26  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
COMDEPA1   IFILE    SQL, FIXED=175, KEY="U9-20,21-25"
COMDEPA2   IFILE    SQL, FIXED=175, KEY="U56-63,125-125,9-20,21-25"
COMDEPA3   IFILE    SQL, FIXED=175, KEY="U48-55,125-125,56-63,9-20,21-25"
COMDEPA4   IFILE    SQL, FIXED=175, KEY="U125-125,48-55,64-64,67-72,9-20,21-25"
COMDEPA5   IFILE    SQL, FIXED=175, KEY="U125-125,1-8,9-20,21-25"
COMDEPA6   IFILE    SQL, FIXED=175, KEY="U125-125,67-72,48-55,64-64,9-20,21-25"
COMDEPA7   IFILE    SQL, FIXED=175, KEY="U125-125,32-39,9-20,21-25"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CMDETDAT  DIM       8      8        1     Transaction Date (CCYYMMDD)        
CMDERECN  DIM       12     12       9     Receipt Number                     
CMDETCNT  DIM       5      5        21    Transaction Count                  
CMDEDTYP  DIM       3      3        26    Deposit Type (Cat DP)              
CMDERRFN  DIM       3      3        29    Reason for Refund (Cat DR)         
CMDEREFD  DIM       8      8        32    Refund/Invoice Date (CCYYMMDD)     
.                                         If Status= 1, Invoice Date           
.                                         If Status= 2, Refund date            
CMDEREFT  DIM       8      8        40    Refund Time (hh:mm:ss)             
.                                         If Status= 1, Time invoice applied   
.                                         If Status= 2, Refund Time            
CMDEURNO  DIM       8      8        48    U/R Number                         
CMDEADMN  DIM       8      8        56    Admission Number                   
CMDESFLG  DIM       1      1        64    Scan Flag (0=Debtor, 1=PMI)        
CMDESYST  FORM      2      2        65    Visit Type                         
.                                         1 = A & E                            
.                                         2 = OUTPAIENT                        
.                                         3 = INPATIENT                        
.                                         4 = PRIVATE PRACTICE                 
CMDEPRAC  DIM       6      6        67    Medical Practice                   
CMDECDAT  DIM       8      8        73    Date Record Created (CCYYMMDD)     
CMDECTIM  DIM       8      8        81    Time Record Created (hh:mm:ss)     
CMDECUID  DIM       10     10       89    Web User Id Created (websecaf)     
CMDEUDAT  DIM       8      8        99    Date Record Updated (CCYYMMDD)     
CMDEUTIM  DIM       8      8        107   Time Record Updated (hh:mm:ss)     
CMDEUUID  DIM       10     10       115   Web User Id Updated (websecaf)     
CMDESTAT  DIM       1      1        125   Deposit Status                     
.                                         0 = Deposit held                     
.                                         1 = Deposit applied                  
.                                         2 = Deposit refunded/cancelled       
CMDEAINV  DIM       12     12       126   Invoice No. (Deposits applied to)  
CMDESDOC  DIM       10     10       138   Private Practice Service Doctor    
CMDETRSF  DIM       1      1        148   Deposit Transfered                 
.                                         Blank or 0=No, 1=Yes                 
CMDESPAR  DIM       26     26       149   Spare variable                     
.
.End of Record                      175  
.
