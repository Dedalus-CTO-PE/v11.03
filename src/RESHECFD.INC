. V10.11.01 21/09/2017  Steve Armstrong  Added description of "Year-based file"
.                       Also added FILRSHEC variable
. V6.05.001 30/11/1998                                                       
. *----------------------------------------------------------------------
. * Include Name  :   RESHECFD.INC
. *
. * Function      :   File Def'n Include for WEB
. *                   Clinical Results Copied to Details          
. *                   (Year-based file)
. *
. * File Type     :   SQL
. *
. * File Name     :   reshecaf.dat
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
RESHECA1  IFILE    SQL, FIXED=157, KEY="U1-8,9-13,14-17,18-19"                 
FILRSHEC  INIT     "rehc"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
REHCRDT   DIM       8      8        1     Result Date                        
REHCRTM   DIM       5      5        9     Result Time                        
REHCRUN   DIM       4      4        14    Result Unique ID                   
REHCCNO   DIM       2      2        18    Copy Number                        
REHCCTO   DIM       127    127      20    Copied to                          
REHCSPA   DIM       10     10       147   Spare                              
.
.End of Record                      157  
.
