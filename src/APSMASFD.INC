. VF.01.001 03/02/2000 SB  Added ABN Number & GST Registered Indicator
. V9.09.001 24/09/2007 SB  Added Dissection Code                             
. *----------------------------------------------------------------------
. * Include Name  :   APSMASFD.INC
. *
. * Function      :   File Def'n Include for Accounts Payable System            
. *                   Creditor/Supplier Masterfile       
. *
. * File Type     :   SQL
. *
. * File Name     :   apsmasaf.dat
. * Audit Name    :   apsaudma.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
APSAUDMA   IFILE    SQL, FIXED=717, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
APMAAUDD  DIM       8      8        1     Date of Change
APMAAUDT  DIM       8      8        9     Time of Change
APMAAUDP  DIM       2      2        17    Port
APMAAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
APMAAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
APMAAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
APSMASA1   IFILE    SQL, FIXED=692, KEY="U1-5"                                  
APSMASA2   IFILE    SQL, FIXED=692, KEY="U6-8,1-5"                              
APSMASA3   IFILE    SQL, FIXED=692, KEY="U9-14,1-5"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
APMACRD   DIM       5      5        1     Creditor Code                      
APMATYP   DIM       3      3        6     Creditor Type                      
APMASKY   DIM       6      6        9     Sort Key                           
APMACN1   DIM       30     30       15    Creditor Name 1                    
APMACN2   DIM       30     30       45    Creditor Name 2                    
APMACA1   DIM       25     25       75    Creditor Address Line 1            
APMACA2   DIM       25     25       100   Creditor Address Line 2            
APMACA3   DIM       25     25       125   Creditor Address Line 3            
APMACPC   DIM       6      6        150   Creditor Postcode                  
APMACTEL  DIM       15     15       156   Creditor Telephone Business        
APMACFAX  DIM       15     15       171   Creditor Telephone Fax             
APMACMOD  DIM       15     15       186   Creditor Telephone Modem (EDI)     
APMACEDI  DIM       15     15       201   Creditor EDI Post Box Details      
APMACON   DIM       30     30       216   Creditor Contact                   
APMASN1   DIM       30     30       246   Supplier Name 1                    
APMASN2   DIM       30     30       276   Supplier Name 2                    
APMASA1   DIM       25     25       306   Supplier Address Line 1            
APMASA2   DIM       25     25       331   Supplier Address Line 2            
APMASA3   DIM       25     25       356   Supplier Address Line 3            
APMASPC   DIM       6      6        381   Supplier Postcode                  
APMASTEL  DIM       15     15       387   Supplier Telephone Business        
APMASFAX  DIM       15     15       402   Supplier Telephone Fax             
APMASMOD  DIM       15     15       417   Supplier Telephone Modem (EDI)     
APMASEDI  DIM       15     15       432   Supplier EDI Post Box Details      
APMASCON  DIM       30     30       447   Supplier Contact                   
APMABSB   DIM       7      7        477   Bank State Branch                  
APMABAC   DIM       9      9        484   Bank Account                       
APMAPNM   DIM       35     35       493   Payee Name                         
APMAPPT   FORM      12.2   8        528   Purchases Total at Last Purge      
APMAPOT   FORM      12.2   8        536   Balance at Last Purge              
APMAHOR   FORM      1      2        544   Hold Order Input 0=No              
APMAHIN   FORM      1      2        546   Hold Invoice Input 0=No            
APMAHCR   FORM      1      2        548   Hold Credit Input 0=No             
APMAHPY   FORM      1      2        550   Hold Payments 0=No                 
APMAPMT   FORM      1      2        552   Default Payment Method             
APMAGMT   FORM      1      2        554   Payment Generation Method          
APMAPPD   DIM       2      2        556   Default Payment Period             
APMADTM   DIM       3      3        558   Default Terms                      
APMAUR1   DIM       30     30       561   User Defined Reference 1           
APMAUR2   DIM       30     30       591   P/O Fax or Email Address           
APMAUD1   DIM       8      8        621   User Defined Date 1                
APMAUD2   DIM       8      8        629   User Defined Date 2                
APMAUC1   DIM       3      3        637   User Defined Code 1                
APMAUC2   DIM       3      3        640   User Defined Code 2                
APMAGREG  FORM      1      2        643   GST Registered Yes/No 0=No         
APMAUY2   FORM      1      2        645   User Defined Yes/No 2 0=No         
APMADIS   FORM      4.2    4        647   Supplier Discount                  
APMATSE   DIM       10     10       651   Target Sector (HRH DOF)            
APMAABN   DIM       11     11       661   ABN Number                         
APMADISS  DIM       5      5        672   Creditor Dissection Code           
APMASPA   DIM       15     15       677   Spare                              
.
.End of Record                      692  
.
APMAKTYP  FORM      1                     Keyin Var - Loop Type
APMAKMOD  DIM       8                     Keyin Var - Keyin Mode
