. V5.08.001 01/06/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSMTSFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Patient Service Cost Summary       
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsmtsaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSMTSA1   IFILE    SQL, FIXED=93, KEY="U1-4,5-8,9-10,11-18,19-26"              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCMTYEAR  DIM       4      4        1     Year                               
CCMTCOM   DIM       4      4        5     Cost Model (Blank for Actuals)     
CCMTHCD   DIM       2      2        9     Hospital                           
CCMTDPT   DIM       8      8        11    Department                         
CCMTPCD   DIM       8      8        19    Patient Service                    
CCMTUCT   FORM      12.4   9        27    Average Unit Cost                  
CCMTQTY   FORM      12.2   8        36    Quantity (YTD)                     
CCMTCST   FORM      12.2   8        44    Total Cost (YTD)                   
CCMTFIX   FORM      1      2        52    Fix Cost 0=No                      
CCMTFUC   FORM      12.4   9        54    Fixed Unit Cost                    
CCMTSPA   DIM       30     30       63    Spare                              
.
.End of Record                      93   
.
