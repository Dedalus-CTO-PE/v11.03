. V11.02.01 28/02/2022 JT C-0902652 Created FD                                  
. *----------------------------------------------------------------------
. * Include Name  :   EMRHTRFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   Health Fund Debtor Transaction     
. *
. * File Type     :   SQL
. *
. * File Name     :   emrhtraf.dat
. *
. * Index Values  :   KEY22   KEY36                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRHTRA1   IFILE    SQL, FIXED=357, KEY="U1-8,9-16,17-22"
EMRHTRA2   IFILE    SQL, FIXED=357, KEY="U1-8,275-282,283-288,9-16,17-22"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMHTNUMB  DIM       8      8        1     Emergency Number                   
EMHTINVN  DIM       8      8        9     Health Fund Invoice number         
EMHTTRNS  DIM       6      6        17    Health Fund Transaction Number     
EMHTDESC  DIM       30     30       23    Description                        
EMHTAMTT  FORM      12.2   8        53    Total Amount                       
EMHTDATE  DIM       8      8        61    Date (ccyymmdd)                    
EMHTITEM  DIM       9      9        69    Item Number                        
EMHTTTYP  DIM       2      2        78    Transaction Type                   
.                                         PY=Payments                          
.                                         DB=Charge                            
.                                         xx=Journale                          
EMHTPAYT  FORM      1      2        80    Payemnt Method                     
.                                         0=Not Applicable                     
.                                         1=Cash                               
.                                         2=Cheque                             
.                                         3=Credit Card                        
.                                         4=Merchant Cards                     
.                                         5=Money Order                        
.                                         6=EFTPOS                             
.                                         7=BPAY                               
.                                         8=Virtual Terminal                   
.                                         9=Medicare                           
EMHTRECP  DIM       12     12       82    Receipt Number                     
EMHTINVP  FORM      1      2        94    Invoice Printed? (0=No,1=Yes)      
EMHTRTYP  DIM       1      1        96    Record Type                        
.                                         1=Misc.Item                          
.                                         2=Cash receipt                       
.                                         3=Journals                           
.                                         4=Deposits                           
.                                         5=Procedure                          
.                                         6=ABF                                
EMHTMISG  DIM       3      3        97    Miscellaneous Group                
EMHTDTYP  DIM       3      3        100   Deposit Type                       
EMHTBATC  DIM       8      8        103   Batch No for Misc.Item             
EMHTPPOR  FORM      12.2   8        111   Patient Portion                    
EMHTRPOR  FORM      12.2   8        119   Rebate Portion                     
EMHTNINV  DIM       1      1        127   No of Invoices to be printed       
EMHTSERV  FORM      2      2        128   Number of services                 
EMHTEFFD  DIM       8      8        130   Date Item assigned to Fees Inv.    
EMHTPDTM  FORM      1      2        138   Print Date/Time procedure on Inv.  
EMHTGSTA  FORM      1      2        140   GST Applicable                     
.                                         0=GST Free                           
.                                         1=GST Payable                        
.                                         2=Either                             
EMHTGSTC  DIM       6      6        142   GST Payable Code                   
EMHTGSTM  FORM      12.2   8        148   GST Amount                         
EMHTCRST  DIM       1      1        156   Credit Note Status                 
.                                         0=No Credit Note                     
.                                         1=Fully Credited                     
.                                         2=Credit by Item                     
EMHTBTCH  DIM       16     16       157   Batch Details (NZ Priv Extract)    
EMHTSUBN  DIM       3      3        173   Sub Item Number                    
EMHTEDAD  DIM       10     10       176   ED Attending Doctor                
EMHTSVTM  DIM       8      8        186   Service Time (HH:MM:SS)            
EMHTSCHF  FORM      3.2    4        194   Schedule Fee AMA=0, MBS=0.75, 0.85 
EMHTITYP  DIM       1      1        198   Item Type (0=MBS, 1=AMA)           
EMHTRBRS  DIM       3      3        199   Rebate Reason (Cat Rr)             
EMHTPCOD  DIM       3      3        202   Payment Code (Cat Py)              
EMHTACOI  DIM       1      1        205   After Care Overrided Indicator     
.                                         0=No                                 
.                                         1=Yes                                
EMHTDSOV  DIM       1      1        206   Duplicate Service Override         
.                                         0=No                                 
.                                         1=Yes                                
EMHTSTXT  DIM       50     50       207   Service Text                       
EMHTLSPN  DIM       6      6        257   Location Specific Practice No      
EMHTMPOV  DIM       1      1        263   Multi Procedure Overrid 0=No 1=Yes 
.                                         0=No                                 
.                                         1=Yes                                
EMHTNMPT  DIM       2      2        264   Number of Patients Seen            
EMHTSDCD  DIM       3      3        266   Self Deem Code (Cat Sd)            
EMHTTDUR  DIM       3      3        269   Time Duration (Mins)               
EMHTROVR  DIM       3      3        272   Restrictive Override (Cat Ro)      
EMHTPINV  DIM       8      8        275   Patient Invoice Number             
EMHTPTRN  DIM       6      6        283   Patient Transaction Number         
EMHTSPAR  DIM       68     68       289   Spare                              
.
.End of Record                      357  
.
