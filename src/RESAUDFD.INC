. V10.11.01 21/09/2017  Steve Armstrong  Added description of "Year-based file"
.                       Also added FILRSAUD variable
. V6.05.004 15/09/1999                                                       
. V6.05.005 15/09/1999                                                       
. *----------------------------------------------------------------------
. * Include Name  :   RESAUDFD.INC
. *
. * Function      :   File Def'n Include for WEB 
. *                   Clinical Results Auditing                    
. *                   (Year-based file)
. *
. * File Type     :   SQL
. *
. * File Name     :   resaudaf.dat
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
RESAUDA1  IFILE    SQL, FIXED=100, KEY="U1-8,9-13,14-17,18-25,26-30,31-40"
FILRSAUD  INIT     "reau"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
REAURDT   DIM       8      8        1     Result Date                        
REAURTM   DIM       5      5        9     Result Time                        
REAURUN   DIM       4      4        14    Result Unique ID                   
REAUSDT   DIM       8      8        18    Date Seen                          
REAUSTM   DIM       5      5        26    Time Seen                          
REAUUID   DIM       10     10       31    Web User ID                        
REAUMRK   DIM       1      1        41    Marked as Read 0=No 1=Yes          
REAURST   DIM       2      2        42    Result Status                      
REAUACD   DIM       3      3        44    Result Action Code
REAUACM   DIM       50     50       47    Result Action Comment
REAUSPA   DIM       3      3        97    Spare                              
.
.End of Record                     100   
.
