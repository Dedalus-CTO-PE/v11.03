. VF.01.001 21/03/2000 SB  Added GST Fields & Cost 12.4                      
. *----------------------------------------------------------------------
. * Include Name  :   APSORDFD.INC
. *
. * Function      :   File Def'n Include for Accounts Payable
. *                   Order Details Table                 
. *
. * File Type     :   SQL
. *
. * File Name     :   apsordaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
APSORDA1   IFILE    SQL, FIXED=157, KEY="U1-1,2-8,9-14"                         
APSORDA2   IFILE    SQL, FIXED=157, KEY="U15-16,17-28,1-1,2-8,9-14"             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
APODISC   DIM       1      1        1     Inventory System Code              
APODORD   DIM       7      7        2     Order Number                       
APODCAT   DIM       6      6        9     Catalog/Unique ID                  
APODLED   DIM       2      2        15    Ledger                             
APODACC   DIM       12     12       17    Account                            
APODDIS   DIM       5      5        29    Dissection                         
APODRES   DIM       4      4        34    Responsibility                     
APODDES   DIM       35     35       38    Description                        
APODAMT   FORM      12.2   8        73    Amount Outstanding (Include GST)   
APODGSTA  FORM      12.2   8        81    GST Outstanding                    
APODUCT   FORM      12.4   9        89    Unit Cost (Including GST)          
APODUGS   FORM      12.4   9        98    Unit GST                           
APODQTY   FORM      12.2   8        107   Outstanding Quantity               
APODGST   DIM       6      6        115   GST Code                           
APODSPA   DIM       36     36       121   Spare                              
.
.End of Record                      157  
.
