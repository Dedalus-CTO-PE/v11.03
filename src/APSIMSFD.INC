. VF.01.001 02/04/2000 SB  Added Pay As You Go Indicator                     
. *----------------------------------------------------------------------
. * Include Name  :   APSIMSFD.INC
. *
. * Function      :   File Def'n Include for Accounts Payable
. *                   Transaction Header Details         
. *
. * File Type     :   SQL
. *
. * File Name     :   apsimsaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
APSIMSA1   IFILE    SQL, FIXED=315, KEY="U1-5,6-10,11-25,26-40"                 
APSIMSA2   IFILE    SQL, FIXED=315, KEY="U6-10,46-53,11-25,26-40,1-5"           
APSIMSA3   IFILE    SQL, FIXED=315, KEY="U6-10,11-25,26-40,1-5"                 
APSIMSA4   IFILE    SQL, FIXED=315, KEY="U6-10,26-40,11-25,1-5"                 
APSIMSA5   IFILE    SQL, FIXED=315, KEY="U1-5,6-10,26-40,11-25"                 
APSIMSA6   IFILE    SQL, FIXED=315, KEY="U43-43,6-10,11-25,26-40,1-5"           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
APIMBCH   DIM       5      5        1     Batch                              
APIMCRD   DIM       5      5        6     Creditor                           
APIMREF   DIM       15     15       11    Invoice Reference                  
APIMDOC   DIM       15     15       26    Document Reference                 
APIMTYP   DIM       1      1        41    Type (0=In,1=Cr,2=Pay,3=Can,4=Rei) 
APIMUPD   DIM       1      1        42    Updated 0=No                       
APIMOUT   DIM       1      1        43    Outstanding 0=No                   
APIMTER   DIM       2      2        44    Terms                              
APIMIDT   DIM       8      8        46    Invoice Date                       
APIMDDT   DIM       8      8        54    Document Date                      
APIMPDT   DIM       8      8        62    Pay Date                           
APIMTDT   DIM       8      8        70    Date Input                         
APIMTOT   FORM      12.2   8        78    Invoice Total                      
APIMDIS   FORM      12.2   8        86    Discount Amount                    
APIMGST   FORM      12.2   8        94    GST Amount/Pay As You Go Amount    
APIMPAY   FORM      12.2   8        102   Amount Paid=Invoice Total-Discount 
APIMCM1   DIM       70     70       110   Remittance Advice Comment Line 1   
APIMCM2   DIM       70     70       180   Remittance Advice Comment Line 2   
APIMICM   DIM       35     35       250   Internal Comment                   
APIMPAYG  DIM       1      1        285   Pay As You Go Indicator (P=Yes)    
APIMSPA   DIM       29     29       286   Spare                              
.
.End of Record                      315  
.
