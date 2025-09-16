. V10.11.01 21/09/2017  Steve Armstrong  Added description of "Year-based file"
.                       Also added FILRSHEB variable
. V6.05.001 30/11/1998                                                       
. *----------------------------------------------------------------------
. * Include Name  :   RESHEBFD.INC
. *
. * Function      :   File Def'n Include for WEB
. *                   Clinical Results Header Notes                
. *                   (Year-based file)
. *
. * File Type     :   SQL
. *
. * File Name     :   reshebaf.dat
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
RESHEBA1  IFILE    SQL, FIXED=158, KEY="U1-8,9-13,14-17,18-20"                 
FILRSHEB  INIT     "rehb"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
REHBRDT   DIM       8      8        1     Result Date                        
REHBRTM   DIM       5      5        9     Result Time                        
REHBRUN   DIM       4      4        14    Result Unique ID                   
REHBLIN   DIM       3      3        18    Line Number                        
REHBTXT   DIM       127    127      21    Text                               
REHBSPA   DIM       10     10       148   Spare                              
.
.End of Record                      158  
.
