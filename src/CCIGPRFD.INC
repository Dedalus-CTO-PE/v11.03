. 5.01 .001 07/01/1992 PE  Generated                                         
. *----------------------------------------------------------------------
. * Include Name  :   CCIGPRFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing
. *                   Generate Costing Procedure         
. *
. * File Type     :   SQL
. *
. * File Name     :   ccigpraf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCIGPRA1   IFILE    SQL, FIXED=70, KEY="U1-3,4-12,13-21,22-30"                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DCCGPTYP  DIM       3      3        1     Type of procedure                  
CCGPCOD1  DIM       9      9        4     1st code                           
CCGPCOD2  DIM       9      9        13    2nd code                           
CCGPCOD3  DIM       9      9        22    3rd code                           
CCGPPROC  DIM       7      7        31    Costing Procedure code             
CCGPQNTY  FORM      2      2        38    Type of quantity                   
CCGPSPAR  DIM       30     30       40    Spare                              
.
.End of Record                      70   
.
.Redefine Key Variables
.----------------------
CCGPTYPE  FORM      3    
