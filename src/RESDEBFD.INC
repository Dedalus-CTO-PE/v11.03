. V10.11.01 21/09/2017  Steve Armstrong  Added description of "Year-based file"
.                       Also added FILRSDEB variable
. V6.05.001 01/12/1998                                                       
. V6.05.002 04/12/1998                                                       
. *----------------------------------------------------------------------
. * Include Name  :   RESDEBFD.INC
. *
. * Function      :   File Def'n Include for WEB
. *                   Clinical Results Detail Notes                
. *                   (Year-based file)
. *
. * File Type     :   SQL
. *
. * File Name     :   resdebaf.dat
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
RESDEBA1  IFILE    SQL, FIXED=162, KEY="U1-8,9-13,14-17,18-21,22-24"           
FILRSDEB  INIT     "redb"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
REDBRDT   DIM       8      8        1     Result Date                        
REDBRTM   DIM       5      5        9     Result Time                        
REDBRUN   DIM       4      4        14    Result Unique ID                   
REDBSID   DIM       4      4        18    Set ID                             
REDBLNO   DIM       3      3        22    Line Number                        
REDBTXT   DIM       127    127      25    Text                               
REDBSPA   DIM       10     10       152   Spare                              
.
.End of Record                      162  
.
