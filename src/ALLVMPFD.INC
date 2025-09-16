. V10.03.01 31/07/2012 EC C-269044 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   ALLVMPFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   VINAH Extract Category Code Mapping
. *
. * File Type     :   SQL
. *
. * File Name     :   allvmpaf.dat
. *
. * Index Values  :   KEY13                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLVMPA1   IFILE    SQL, FIXED=67, KEY="U1-3,4-5,6-13"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALVMDEPT  DIM       3      3        1     Department Code (alldepaf)         
ALVMCATG  DIM       2      2        4     Category                           
.                                         Cat lF - Episode/Program Stream      
ALVMEDAT  DIM       8      8        6     End Date (CCYYMMDD)          
ALVMCODE  DIM       3      3        14    Category Code                      
ALVMSPAR  DIM       50     50       17    Spare Variable                     
.
.End of Record                      67   
.
