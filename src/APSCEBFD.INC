. VF.01.001 21/03/2000 SB  Added GST Fields & Cost 12.4                      
. *----------------------------------------------------------------------
. * Include Name  :   APSCEBFD.INC
. *
. * Function      :   File Def'n Include for Accounts Payable
. *                   Outstanding Purchase Order Details            
. *
. * File Type     :   SQL
. *
. * File Name     :   apscebaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
APSCEBA1   IFILE    SQL, FIXED=157, KEY="U1-1,2-8,9-14"                         
APSCEBA2   IFILE    SQL, FIXED=157, KEY="U15-16,17-28,1-1,2-8,9-14"             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
APEBISC   DIM       1      1        1     Inventory System Code              
APEBORD   DIM       7      7        2     Order Number                       
APEBCAT   DIM       6      6        9     Catalog/Unique ID                  
APEBLED   DIM       2      2        15    Ledger                             
APEBACC   DIM       12     12       17    Account                            
APEBDIS   DIM       5      5        29    Dissection                         
APEBRES   DIM       4      4        34    Responsibility                     
APEBDES   DIM       35     35       38    Description                        
APEBAMT   FORM      12.2   8        73    Amount Outstanding (Include GST)   
APEBGST   FORM      12.2   8        81    GST Outstanding                    
APEBUCT   FORM      12.4   9        89    Unit Cost (Including GST)          
APEBUGS   FORM      12.4   9        98    Unit GST                           
APEBQTY   FORM      12.2   8        107   Outstanding Quantity               
APEBSPA   DIM       42     42       115   Spare                              
.
.End of Record                      157  
.
