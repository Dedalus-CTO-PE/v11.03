. V5.08.001 01/06/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSPAQFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Patient Service Enquiry Analysis   
. *
. * File Type     :   SQL
. *
. * File Name     :   ccspaqaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSPAQA1   IFILE    SQL, FIXED=96, KEY="U1-2,3-10"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCPAPORT  DIM       2      2        1     Port for Enquiries                 
CCPAPCD   DIM       8      8        3     Patient Service Code               
CCPADES   DIM       35     35       11    Patient Service Description        
CCPANUM   FORM      8.2    6        46    Number of Patient Services         
CCPASTD   FORM      12.2   8        52    Standard Cost                      
CCPAACT   FORM      12.2   8        60    Actual Cost                        
CCPABUD   FORM      12.2   8        68    Budget Cost                        
CCPASPA   DIM       20     20       76                                       
.
.End of Record                      96   
.
