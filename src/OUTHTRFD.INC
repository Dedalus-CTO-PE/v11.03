. V11.02.01 28/02/2022 JT C-0902652 Created FD                                  
. *----------------------------------------------------------------------
. * Include Name  :   OUTHTRFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Health Fund Debtor Transaction     
. *
. * File Type     :   SQL
. *
. * File Name     :   outhtraf.dat
. *
. * Index Values  :   KEY22   KEY36                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTHTRA1   IFILE    SQL, FIXED=312, KEY="U1-8,9-16,17-22"
OUTHTRA2   IFILE    SQL, FIXED=312, KEY="U1-8,246-253,254-259,9-16,17-22"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTHTNUMB  DIM       8      8        1     Outpatient Number                  
OTHTINVN  DIM       8      8        9     Rebate Invoice Number              
OTHTTRAN  DIM       6      6        17    Health Fund Transaction Number     
OTHTDESC  DIM       30     30       23    Description                        
OTHTAMTT  FORM      12.2   8        53    Total Amount                       
OTHTDATE  DIM       8      8        61    Date (ccmmyydd)                    
OTHTITEM  DIM       9      9        69    Item Number                        
OTHTTTYP  DIM       2      2        78    Transaction Type                   
.                                         PY=Payments                          
.                                         DB=Charges                           
.                                         xx=Journals                          
OTHTPTYP  FORM      1      2        80    Payment Method                     
.                                         0=Not Applicable                     
.                                         1=Cash                               
.                                         2=Cheque                             
.                                         3=Credit Card                        
.                                         4=Merchant Cards                     
.                                         5=Money order                        
.                                         6=EFTPOS                             
.                                         7=BPAY                               
.                                         8=Virtual Terminal(HICAPS)           
.                                         9=Medicare                           
OTHTRECP  DIM       12     12       82    Receipt Number                     
OTHTIPRT  FORM      1      2        94    Invoice Printed (0=No, 1=Yes)      
OTHTRTYP  DIM       1      1        96    Record Type                        
.                                         1=Misc.Item                          
.                                         2=Cash Receipt                       
.                                         3=Journals                           
.                                         4=Doctor Fee                         
.                                         5=Discount                           
.                                         6=MBS Item                           
.                                         7=ABF                                
OTHTMGRP  DIM       3      3        97    Miscellaneous Group (Cat FI)       
OTHTDTYP  DIM       3      3        100   Deposit Type                       
OTHTBATC  DIM       8      8        103   Batch Number for Misc.Items        
OTHTPPOR  FORM      12.2   8        111   Patient Portion                    
OTHTRPOR  FORM      12.2   8        119   Rebate Portion                     
OTHTNINV  DIM       1      1        127   No of Invoices to be printed       
OTHTSERV  FORM      5      4        128   Number of services                 
OTHTGSTA  FORM      1      2        132   Is GST Applicable to this Item ?   
.                                         0=No GST                             
.                                         1=Yes                                
.                                         2=Unknown GST                        
OTHTGSTC  DIM       6      6        134   GST Payable Code                   
OTHTGSTM  FORM      12.2   8        140   GST Amount                         
OTHTEFFD  DIM       8      8        148   Date Item assigned to Fees Inv.    
OTHTCRST  DIM       1      1        156   Credit Note Status                 
.                                         0=No Credit Note                     
.                                         1=Fully Credited                     
.                                         2=Credit by Item                     
OTHTBTCH  DIM       16     16       157   Batch details (NZ Private Extract) 
OTHTPCOD  DIM       3      3        173   Payment Code (Cat Py)              
OTHTACAO  DIM       1      1        176   After Care Override                
.                                         0/Blank=No                           
.                                         1=Yes                                
OTHTDSRO  DIM       1      1        177   Duplicate Service Override         
.                                         0/Blank=No                           
.                                         1=Yes                                
OTHTSRTX  DIM       50     50       178   Service Text                       
OTHTLSPN  DIM       6      6        228   LSPN Value                         
OTHTMPRO  DIM       1      1        234   Multiple Procedure Override        
.                                         0/Blank=No                           
.                                         1=Yes                                
OTHTNPAT  DIM       2      2        235   Number of Patients                 
OTHTSFDM  DIM       3      3        237   Self Deem Code (cat Sd)            
OTHTTDUR  DIM       3      3        240   Time Duration                      
OTHTNCAT  DIM       3      3        243   Restricted Override Code           
OTHTPINV  DIM       8      8        246   Patient Invoice Number             
OTHTPTRN  DIM       6      6        254   Patient Transaction Number         
OTHTSPAR  DIM       52     52       260   Spare                              
.
.End of Record                      312  
.
