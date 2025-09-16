. VF.01.001 24/02/2000 SB  Added GST Code                                    
. *----------------------------------------------------------------------
. * Include Name  :   DEBBILFD.INC
. *
. * Function      :   File Def'n Include for Accounts Receivable               
. *                   Billing Detail Holding Table        
. *
. * File Type     :   SQL
. *
. * File Name     :   debbilaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
DEBBILA1   IFILE    SQL, FIXED=285, KEY="U1-8,9-14"                             
DEBBILA2   IFILE    SQL, FIXED=285, KEY="U1-8,15-15,9-14"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBBIDEB   DIM       8      8        1     Debtor Code                        
DBBIUNI   DIM       6      6        9     Unique Charge No.                  
DBBISTA   DIM       1      1        15    Status                             
DBBIDAT   DIM       8      8        16    Input Date                         
DBBITIM   DIM       6      6        24    Input Time                         
DBBIUID   DIM       4      4        30    Input by User                      
DBBIITM   DIM       8      8        34    Sales Item Code                    
DBBISDAT  DIM       8      8        42    Service Date                       
DBBIDREF  DIM       50     50       50    Debtors Reference                  
DBBIOREF  DIM       50     50       100   Our Reference                      
DBBIQTY   FORM      8.2    6        150   Quantity                           
DBBIPRI   FORM      12.4   9        156   Price                              
DBBITOT   FORM      12.2   8        165   Extended Total                     
DBBITRT   FORM      4.2    4        173   Tax Rate                           
DBBITAX   FORM      12.2   8        177   Tax Amount                         
DBBIUR1   DIM       25     25       185   User Def Ref 1 (HSH Admission No.) 
DBBIUR2   DIM       25     25       210   User Def Ref 2                     
DBBIUD1   DIM       8      8        235   User Def Date 1                    
DBBIUD2   DIM       8      8        243   User Def Date 2                    
DBBIUY1   DIM       1      1        251   User Def Y/N 1                     
DBBIUY2   DIM       1      1        252   User Def Y/N 2                     
DBBIUC1   DIM       3      3        253   User Def Code 1                    
DBBIUC2   DIM       3      3        256   User Def Code 2                    
DBBIUC3   DIM       3      3        259   User Def Code 3                    
DBBIUC4   DIM       3      3        262   User Def Code 4                    
DBBIGST   DIM       6      6        265   GST Code                           
DBBISPA   DIM       14     14       271   Spare                              
.
.End of Record                      285  
.
. DBBISTA   DIM       1      Status 0 = Input In Progress
.                                   1 = Billing Input 
.                                   2 = Flagged for Proposed Invoicing
.                                   3 = Invoice Data Entry
.
