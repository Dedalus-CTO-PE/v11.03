. VF.09.001 10/11/2000 SB  Added BAS Code                                    
. VF.01.001 02/04/2000 SB  Added GST Code & Pay As You Go Indicator          
. *----------------------------------------------------------------------
. * Include Name  :   APSINPFD.INC
. *
. * Function      :   File Def'n Include for Accounts Payable
. *                   Transaction Details             
. *
. * File Type     :   SQL
. *
. * File Name     :   apsinpaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
APSINPA1   IFILE    SQL, FIXED=175, KEY="U1-5,6-10,11-25,26-40,41-48,49-51"     
APSINPA2   IFILE    SQL, FIXED=175, KEY="U6-10,41-48,11-25,26-40,1-5,49-51"     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
APINBCH   DIM       5      5        1     Batch                              
APINCRD   DIM       5      5        6     Creditor                           
APINREF   DIM       15     15       11    Invoice Reference                  
APINDOC   DIM       15     15       26    Document Reference                 
APINORD   DIM       8      8        41    Order Number                       
APINLIN   DIM       3      3        49    Line Number                        
APINUPD   DIM       1      1        52    Updated 0=No                       
APINLED   DIM       2      2        53    Ledger                             
APINACC   DIM       12     12       55    Account                            
APINDIS   DIM       5      5        67    Dissection                         
APINRES   DIM       4      4        72    Responsibility                     
APINCAT   DIM       7      7        76    Catalog                            
APINDES   DIM       35     35       83    Description                        
APINQTY   FORM      10.2   7        118   Quantity Invoiced                  
APINUCT   FORM      12.4   9        125   Unit Cost (Include GST)            
APINAMT   FORM      12.2   8        134   Amount Invoiced (Exclude GST)      
APINPAY   FORM      12.2   8        142   Paid Amount (Include GST)          
APINGST   FORM      12.2   8        150   GST Amount/Pay As You Go Amount    
APINCGS   DIM       6      6        158   GST Code                           
APINPAYG  DIM       1      1        164   Pay As You Go Indicator (P=Yes,Z=Pay)
APINBASC  DIM       3      3        165   BAS Code                           
APINSPA   DIM       7      7        168   Spare                              
.
.End of Record                      175  
.
