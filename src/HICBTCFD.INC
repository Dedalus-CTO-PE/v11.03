. *----------------------------------------------------------------------
. * Include Name  :   HICBTCFD.INC
. *
. * Function      :   File Def'n Include for HIC CLAIMS                         
. *                   HIC Claims Batch File              
. *
. * File Type     :   SQL
. *
. * File Name     :   hicbtcaf.dat
. *
. * Mods          :
. *
. *       V9.04.05  15/11/2005  J.Tan            CAR 71173
. *                 Changed batch status to have EFT payment before Action
. *       V9.04.04  17/08/2005  Steve Armstrong  CAR 71173
. *                 Added new valid values for batch status
. *       V9.04.03  16/06/2005  J.Tan
. *                 Added new field for date of transmission
. *                 Added index 6
. *       V9.04.02  19/05/2005  J.Tan
. *                 Added new batch statuses (Received -error)
. *                 10/05/2005 JT Added Adjustment amount
. *                 13/05/2005 JT Added field for Send form
. *       V9.04.01  03/05/2005  Steve Armstrong   CAR 61331
. *                 Added new batch statuses (Extracted, Sent, Acknowledged
. *                 & Nack)
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HICBTCA1   IFILE    SQL, FIXED=290, KEY="U1-5,24-33,6-13,14-23"                 
HICBTCA2   IFILE    SQL, FIXED=290, KEY="U24-33,109-110,40-47,6-13,14-23,1-5"   
HICBTCA3   IFILE    SQL, FIXED=290, KEY="U48-53,60-65,109-110,40-47,24-33,6-13,14-23,1-5"
HICBTCA4   IFILE    SQL, FIXED=290, KEY="U40-47,109-110,24-33,6-13,14-23,1-5"   
HICBTCA5   IFILE    SQL, FIXED=290, KEY="U109-110,24-33,6-13,14-23,1-5"         
HICBTCA6   IFILE    SQL, FIXED=290, KEY="U34-39,109-110,40-47,6-13,14-23,1-5"   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HCBTBTCH  DIM       5      5        1     Batch Number (1 Alpha 4 Numeric)   
HCBTPMCI  DIM       8      8        6     MCI (3 Alpha 5 Numeric)            
HCBTPYEE  DIM       10     10       14    Payee Provider Number              
HCBTPSRV  DIM       10     10       24    Service Provider Number            
HCBTMPRA  DIM       6      6        34    Medical Practice                   
HCBTDATE  DIM       8      8        40    Batch Date                         
HCBTSITE  DIM       6      6        48    Outpatient Site                    
HCBTCTYP  DIM       6      6        54    Clinic Type                        
HCBTCLID  DIM       6      6        60    Clinic ID                          
HCBTCAMT  FORM      12.2   8        66    Total Batch Amount                 
HCBTAMTR  FORM      12.2   8        74    Total Amount Received              
HCBTREJA  FORM      12.2   8        82    Total Amount Rejected              
HCBTWOFF  FORM      12.2   8        90    Total Amount 'Write Off'           
HCBTTRIN  FORM      12.2   8        98    Total Amount 'Transfer to Invoice' 
HCBTSIZE  FORM      3      3        106   Batch Size (No of Claims in Batch) 
HCBTSTAT  DIM       2      2        109   Status (Right justified)           
.                                         0 - Batched
.                                         1 = Extracted
.                                         2 - Sent
.                                         3 - Acknowledged
.                                         4 - Nack
.                                         5 - Received - Ok
.                                         6 - Received - Batch Error
.                                         7 - EFT Payment Received
.                                         8 - Actioned
.                                         9 - Deposit Verified
.                                        10 - Closed
HCBTADJM  FORM      12.2   8        111   Total Amount of Adjustments        
HCBTCMNT  DIM       3      3        119   Batch Comments (Catgory IE)        
HCBTHCOP  DIM       8      8        122   Hardcopy to Medicare (ccyymmdd)    
HCBTFNDR  DIM       8      8        130   Date Funds Received                
HCBTDEPD  DIM       8      8        138   Date of Deposit Verified           
HCBTCDAT  DIM       8      8        146   Date Record Created (ccyymmdd)     
HCBTCTIM  DIM       8      8        154   Time Record Created (hh:mm:ss)     
HCBTCUID  DIM       10     10       162   WEB User ID Created (websecaf)     
HCBTUDAT  DIM       8      8        172   Date Record Updated (ccyymmdd)     
HCBTUTIM  DIM       8      8        180   Time Record Updated (hh:mm:ss)     
HCBTUUID  DIM       10     10       188   WEB User ID Updated (websecaf)     
HCBTEFNM  DIM       40     40       198   Extract filename                   
HCBTSENT  DIM       1      1        238   Sent Form 1=Yes                    
HCBTTDAT  DIM       8      8        239   Date of Transmission (ccyymmdd)    
HCBTSPAR  DIM       43     43       247   Spare Variable                     
.
.End of Record                      290  
.
