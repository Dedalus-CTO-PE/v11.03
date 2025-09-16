. V10.11.01 21/09/2017  Steve Armstrong  Added description of "Year-based file"
.                       Also added FILRSHED variable
. V10.04.01 04/03/2014 AP Extended REHDRCI & REHDSPA. CAR 240496 
. V6.05.01  10/12/1998                                                       
. *----------------------------------------------------------------------
. * Include Name  :   RESHEDFD.INC
. *
. * Function      :   File Def'n Include for WEB
. *                   Clinical Results Relevant Clinical Information      
. *                   (Year-based file)
. *
. * File Type     :   SQL
. *
. * File Name     :   reshedaf.dat
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
RESHEDA1  IFILE    SQL, FIXED=398, KEY="U1-8,9-13,14-17"                       
FILRSHED  INIT     "rehd"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
REHDRDT   DIM       8      8        1     Result Date                        
REHDRTM   DIM       5      5        9     Result Time                        
REHDRUN   DIM       4      4        14    Result Unique ID                   
REHDRCI   DIM       300    300      18    Relevant Clinical Information      
REHDSPA   DIM       80     80       318   Spare                              
.
.End of Record                      398  
.
