. V6.00.003 24/05/1993 Nez Added HR DOF Variables (Srf 121179 - Quote 7608)
. *----------------------------------------------------------------------
. * Include Name  :   APSPPDFD.INC
. *
. * Function      :   File Def'n Include for Accounts Payable 
. *                   Term Codes Table
. *
. * File Type     :   SQL
. *
. * File Name     :   apsppdaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
APSPPDA1   IFILE    SQL, FIXED=73, KEY="U1-2"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
APPPTER   DIM       2      2        1     Term Code                          
APPPDES   DIM       30     30       3     Description                        
APPPTYP   FORM      1      2        33    Offset Type 0-Inv 1-Batch 2-Fixed  
APPPDA1   FORM      4      3        35    Days Offset from Invoice Date      
APPPPE1   FORM      2.2    3        38    Discount Percentage                
APPPDA2   FORM      4      3        41    Days Offset from Invoice Date      
APPPPE2   FORM      2.2    3        44    Discount Percentage                
APPPDA3   FORM      4      3        47    Days Offset from Invoice Date      
APPPPE3   FORM      2.2    3        50    Discount Percentage                
APPPPIN   DIM       1      1        53    Priority Indicator (HRH DOF)       
APPPMDI   DIM       3      3        54    Mode of Distributiion (HRH DOF)    
APPPSPA   DIM       16     16       57    Spare                              
.
.End of Record                      73   
.
