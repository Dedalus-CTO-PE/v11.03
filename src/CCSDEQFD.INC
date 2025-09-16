. V5.08.001 01/06/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSDEQFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Departmental Analysis by Episode   
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsdeqaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSDEQA1   IFILE    SQL, FIXED=98, KEY="U1-2,3-4,5-12"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCDEPORT  DIM       2      2        1     Port for Enquiries                 
CCDEHCD   DIM       2      2        3     Hospital                           
CCDEDPT   DIM       8      8        5     Department                         
CCDEDES   DIM       35     35       13    Department Description             
CCDENUM   FORM      8.2    6        48    Number of Patient Services         
CCDESTD   FORM      12.2   8        54    Standard Cost                      
CCDEACT   FORM      12.2   8        62    Actual Cost                        
CCDEBUD   FORM      12.2   8        70    Budget Cost                        
CCDESPA   DIM       20     20       78                                       
.
.End of Record                      98   
.
