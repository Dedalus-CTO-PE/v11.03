. 9.05 .B01 19/12/2005 Ebon Clements Changed ALITENCN desc CAR 76341        
. 9.02 .001 02/10/2001 dc  created                                           
. *----------------------------------------------------------------------
. * Include Name  :   ALLITMFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Items File                         
. *
. * File Type     :   SQL
. *
. * File Name     :   allitmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLITMA1   IFILE    SQL, FIXED=78, KEY="U1-8,9-16,17-18"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALITVISN  DIM       8      8        1     Referral/Visit Number              
ALITENCN  DIM       8      8        9     Encounter Number 
ALITITMC  DIM       2      2        17    Item Count                         
ALITITMN  DIM       9      9        19    Item Number                        
ALITSPAR  DIM       50     50       28    Spare Variable                     
.
.End of Record                      78   
.
