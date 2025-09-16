. V5.08.001 02/06/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSPVRFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Patient Service Relative Values    
. *
. * File Type     :   SQL
. *
. * File Name     :   ccspvraf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSPVRA1   IFILE    SQL, FIXED=53, KEY="U1-2,3-10,11-18,19-22"                  
CCSPVRA2   IFILE    SQL, FIXED=53, KEY="U19-22,1-2,3-10,11-18"                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCPVHCD   DIM       2      2        1     Hospital                           
CCPVDPT   DIM       8      8        3     Department                         
CCPVPCD   DIM       8      8        11    Patient Service                    
CCPVCTY   DIM       4      4        19    Cost Type                          
CCPVRVI   FORM      12.6   10       23    Relative Value                     
CCPVSPA   DIM       20     20       33                                       
.
.End of Record                      53   
.
