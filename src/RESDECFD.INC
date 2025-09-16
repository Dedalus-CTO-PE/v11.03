. V10.11.01 21/09/2017  Steve Armstrong  Added description of "Year-based file"
.                       Also added FILRSDEC variable
. V6.05.001 02/12/1998                                                       
. V6.05.002 04/12/1998                                                       
. *----------------------------------------------------------------------
. * Include Name  :   RESDECFD.INC
. *
. * Function      :   File Def'n Include for WEB
. *                   Clinical Results Detail Notes (NTE)          
. *                   (Year-based file)
. *
. * File Type     :   SQL
. *
. * File Name     :   resdecaf.dat
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
RESDECA1  IFILE    SQL, FIXED=162, KEY="U1-8,9-13,14-17,18-21,22-24"           
FILRSDEC  INIT     "redc"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
REDCRDT   DIM       8      8        1     Result Date                        
REDCRTM   DIM       5      5        9     Result Time                        
REDCRUN   DIM       4      4        14    Result Unique ID                   
REDCSID   DIM       4      4        18    Set ID                             
REDCLNO   DIM       3      3        22    Line Number                        
REDCTXT   DIM       127    127      25    Text                               
REDCSPA   DIM       10     10       152   Spare                              
.
.End of Record                      162  
.
