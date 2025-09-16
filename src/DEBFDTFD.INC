. V9.04.001 18/10/2005 ML  Invoice Seq. Index                                
. *----------------------------------------------------------------------
. * Include Name  :   DEBFDTFD.INC
. *
. * Function      :   File Def'n Include for Accounts Receivable                
. *                   Debtor Transaction Details         
. *
. * File Type     :   SQL
. *
. * File Name     :   debfdtaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
DEBFDTA1   IFILE    SQL, FIXED=386, KEY="U1-8,9-9,10-21,22-24"                  
DEBFDTA2   IFILE    SQL, FIXED=386, KEY="U1-8,48-55,40-47,25-36,9-9,10-21,22-24"
DEBFDTA3   IFILE    SQL, FIXED=386, KEY="U1-8,40-47,25-36,9-9,10-21,22-24"      
DEBFDTA4   IFILE    SQL, FIXED=386, KEY="U131-138,139-146,1-8,9-9,10-21,22-24"  
DEBFDTA5   IFILE    SQL, FIXED=386, KEY="U56-56,1-8,9-9,10-21,22-24"            
DEBFDTA6   IFILE    SQL, FIXED=386, KEY="U1-8,25-36,9-9,10-21,22-24"            
DEBFDTA7   IFILE    SQL, FIXED=386, KEY="U1-8,25-36,37-39,9-9,10-21,22-24"      
DEBFDTA8   IFILE    SQL, FIXED=386, KEY="U25-36,9-9,10-21,22-24,1-8"            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBFDDEB   DIM       8      8        1     Debtor                             
DBFDDTY   DIM       1      1        9     Type 1=In,2=Cr,3=Py,4=Dr Ad,5=Cr Ad
DBFDDOC   DIM       12     12       10    Document Reference                 
DBFDDLN   DIM       3      3        22    Document Line Number               
DBFDINV   DIM       12     12       25    Invoice Reference                  
DBFDILN   DIM       3      3        37    Invoice Line Number                
DBFDIDAT  DIM       8      8        40    Invoice Date                       
DBFDPDAT  DIM       8      8        48    Date Paid (99999999 if Outstanding)
DBFDGLS   DIM       1      1        56    Transferred to GL 0=No, 1=Yes      
DBFDLED   DIM       2      2        57    Ledger                             
DBFDIAC   DIM       12     12       59    Income Account                     
DBFDCAC   DIM       12     12       71    Control Account                    
DBFDTAC   DIM       12     12       83    Tax Account                        
DBFDTCA   DIM       12     12       95    Tax Control Account                
DBFDBCHG  DIM       6      6        107   Billing Charge Number              
DBFDBDAT  DIM       8      8        113   Billing Input Date                 
DBFDBTIM  DIM       6      6        121   Billing Input Time                 
DBFDBUSR  DIM       4      4        127   Billing Input User ID              
DBFDITM   DIM       8      8        131   Sales Item Code                    
DBFDSDAT  DIM       8      8        139   Service Date                       
DBFDDREF  DIM       50     50       147   Debtors Reference                  
DBFDOREF  DIM       50     50       197   Our Reference                      
DBFDQTY   FORM      8.2    6        247   Quantity                           
DBFDPRI   FORM      12.4   9        253   Price                              
DBFDTOT   FORM      12.2   8        262   Extended Total                     
DBFDTRT   FORM      4.2    4        270   Tax Rate                           
DBFDTAX   FORM      12.2   8        274   Tax Amount                         
DBFDPAID  FORM      12.2   8        282   Amount Paid                        
DBFDUR1   DIM       25     25       290   User Def Ref 1                     
DBFDUR2   DIM       25     25       315   User Def Ref 2                     
DBFDUD1   DIM       8      8        340   User Def Date 1                    
DBFDUD2   DIM       8      8        348   User Def Date 2                    
DBFDUY1   DIM       1      1        356   User Def Y/N 1                     
DBFDUY2   DIM       1      1        357   User Def Y/N 2                     
DBFDUC1   DIM       3      3        358   User Def Code 1                    
DBFDUC2   DIM       3      3        361   User Def Code 2                    
DBFDUC3   DIM       3      3        364   User Def Code 3                    
DBFDUC4   DIM       3      3        367   User Def Code 4                    
DBFDGST   DIM       6      6        370   GST Code                           
DBFDSPA   DIM       10     10       376   Spare                              
.
.End of Record                      386  
.
