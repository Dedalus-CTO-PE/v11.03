. VF.01.001 28/02/2000 SB  Added GST Code                                    
. *----------------------------------------------------------------------
. * Include Name  :   DEBPBLFD.INC
. *
. * Function      :   File Def'n Include for Accounts Receivable               
. *                   Periodic Billing Details           
. *
. * File Type     :   SQL
. *
. * File Name     :   debpblaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
DEBPBLA1   IFILE    SQL, FIXED=258, KEY="U1-8,9-11"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBPBDEB   DIM       8      8        1     Debtor Code                        
DBPBUNI   DIM       3      3        9     Periodic Charge Number             
DBPBTYP   DIM       3      3        12    Periodic Billing Type              
DBPBITM   DIM       8      8        15    Sales Item Code                    
DBPBDREF  DIM       50     50       23    Debtors Reference                  
DBPBOREF  DIM       50     50       73    Our Reference                      
DBPBQTY   FORM      8.2    6        123   Quantity                           
DBPBPRI   FORM      12.4   9        129   Price                              
DBPBTOT   FORM      12.2   8        138   Extended Total                     
DBPBTRT   FORM      4.2    4        146   Tax Rate                           
DBPBTAX   FORM      12.2   8        150   Tax Amount                         
DBPBUR1   DIM       25     25       158   User Def Ref 1                     
DBPBUR2   DIM       25     25       183   User Def Ref 2                     
DBPBUD1   DIM       8      8        208   User Def Date 1                    
DBPBUD2   DIM       8      8        216   User Def Date 2                    
DBPBUY1   DIM       1      1        224   User Def Y/N 1                     
DBPBUY2   DIM       1      1        225   User Def Y/N 2                     
DBPBUC1   DIM       3      3        226   User Def Code 1                    
DBPBUC2   DIM       3      3        229   User Def Code 2                    
DBPBUC3   DIM       3      3        232   User Def Code 3                    
DBPBUC4   DIM       3      3        235   User Def Code 4                    
DBPBGST   DIM       6      6        238   GST Code                           
DBPBSPA   DIM       14     14       244   Spare                              
.
.End of Record                      258  
.
