. V5.08.001 01/06/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSMSCFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Generic Patient Service Cost Summary
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsmscaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSMSCA1   IFILE    SQL, FIXED=85, KEY="U1-4,5-8,9-10,11-18"                    
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCMSYEAR  DIM       4      4        1     Financial Year                     
CCMSCOM   DIM       4      4        5     Cost Model (Blank for Actual Costs)
CCMSHCD   DIM       2      2        9     Hospital                           
CCMSPCD   DIM       8      8        11    Patient Service Code (Generic)     
CCMSUCT   FORM      12.4   9        19    Unit Cost Average (YTD)            
CCMSQTY   FORM      12.2   8        28    Total Quantity (YTD)               
CCMSCST   FORM      12.2   8        36    Total Cost (YTD)                   
CCMSFIX   FORM      1      2        44    Use Fixed Unit Cost                
CCMSFUC   FORM      12.4   9        46    Fixed Unit Cost                    
CCMSSPA   DIM       30     30       55    Spare                              
.
.End of Record                      85   
.
