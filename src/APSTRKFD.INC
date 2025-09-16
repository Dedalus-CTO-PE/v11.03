. V6.00.004 30/07/1996 BGA Revise Index 3                                    
. *----------------------------------------------------------------------
. * Include Name  :   APSTRKFD.INC
. *
. * Function      :   File Def'n Include for Accounts Payable
. *                   Invoice Tracking Details              
. *
. * File Type     :   SQL
. *
. * File Name     :   apstrkaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
APSTRKA1   IFILE    SQL, FIXED=221, KEY="U1-5,6-13,14-16"                       
APSTRKA2   IFILE    SQL, FIXED=221, KEY="U6-13,1-5,14-16"                       
APSTRKA3   IFILE    SQL, FIXED=221, KEY="U1-5,108-112,6-13,14-16"               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
APTKCRD   DIM       5      5        1     Creditor Code                      
APTKDTRC  DIM       8      8        6     Date Invoice Received (YYYYMMDD)   
APTKUNIQ  DIM       3      3        14    Unique Id                          
APTKDTIN  DIM       8      8        17    Invoice Date (YYYYMMDD)            
APTKREF   DIM       15     15       25    Invoice Reference                  
APTKORD   DIM       8      8        40    Purchase Order Number              
APTKLED   DIM       2      2        48    Ledger                             
APTKCCEN  DIM       12     12       50    G/L Cost Centre Code               
APTKDEPT  DIM       30     30       62    Department Description             
APTKAMT   FORM      12.2   8        92    Invoice Amount                     
APTKDTPR  DIM       8      8        100   Date Invoice Processed (YYYYMMDD)  
APTKBAT   DIM       5      5        108   Invoice Batch Number               
APTKUID   DIM       4      4        113   Operator User Id                   
APTKDATE  DIM       8      8        117   Date Entered                       
APTKTIME  DIM       8      8        125   Time Entered                       
APTKUR1   DIM       25     25       133   User Def Ref 1                     
APTKUR2   DIM       25     25       158   User Def Ref 2                     
APTKUD1   DIM       8      8        183   User Def Date 1                    
APTKUD2   DIM       8      8        191   User Def Date 2                    
APTKUY1   DIM       1      1        199   User Def Y/N 1                     
APTKUY2   DIM       1      1        200   User Def Y/N 2                     
APTKSPA   DIM       20     20       201   Spare                              
.
.End of Record                      221  
.
