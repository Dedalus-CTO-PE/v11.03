.  5.01.001 09/06/1993 bez Created
.  *----------------------------------------------------------------------
.  * Include Name  :   CCIXGPFD.INC
.  *
.  * Function      :   File Def'n Include for Clinical Costing
.  *                   O/P Extra Screen Generated Procedures 
.  *
.  * File Type     :   SQL
.  *
.  * File Name     :   ccixgpaf.dat
.  *
.  *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCIXGPA1   IFILE    SQL, FIXED=90, KEY="U1-8,9-10,11-13,14-22,23-31,32-40,41-49"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCXPPRID  DIM       8      8        1     Program ID
CCXPSCID  DIM       2      2        9     Screen ID
CCXPUNIQ  DIM       3      3        11    Unique Count
CCXPCOD1  DIM       9      9        14    1st code                           
CCXPCOD2  DIM       9      9        23    2nd code                           
CCXPCOD3  DIM       9      9        32    3rd code                           
CCXPCOD4  DIM       9      9        41    4th code                           
CCXPPROC  DIM       7      7        50    Costing Procedure code             
CCXPQNTY  FORM      3      3        57    Type of quantity (0 = quantity zero,
.                                                           1 = quantity one,
.                                                           2 = special case)
CCXPSPAR  DIM       30     30       60    Spare                              
.
.End of Record                      90   
.
