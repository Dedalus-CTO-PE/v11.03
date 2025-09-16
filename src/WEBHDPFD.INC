. V5.07.001 17/09/1999                                                       
. *----------------------------------------------------------------------
. * Include Name  :   WEBHDPFD.INC
. *
. * Function      :   File Def'n Include for WEB               
. *                   Interface Hospital Data Table Locations       
. *
. * File Type     :   SQL
. *
. * File Name     :   webhdpaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBHDPA1   IFILE    SQL, FIXED=91, KEY="U1-2,3-10"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBHDHID   DIM       2      2        1     Hospital Unique ID                 
WBHDFIL   DIM       8      8        3     File Name (eg patvistf)            
WBHDPATH  DIM       60     60       11    Path to Open                       
WBHDSPA   DIM       20     20       71    Spare                              
.
.End of Record                      91   
.
