. 9.02 .001 29/11/2001 dc  created                                           
. *----------------------------------------------------------------------
. * Include Name  :   PRIRELFD.INC
. *
. * Function      :   File Def'n Include for Private Practice                   
. *                   Reminder Accounts List for Letter  
. *
. * File Type     :   SQL
. *
. * File Name     :   prirelaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRIRELA1   IFILE    SQL, FIXED=74, KEY="U1-4,5-34,35-42,43-50"                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRRLSEID  DIM       4      4        1     Selection ID.                      
PRRLNAME  DIM       30     30       5     Formatted Debtor Name              
PRRLDEBT  DIM       8      8        35    Debtor Number                      
PRRLIVNO  DIM       8      8        43    Invoice Number                     
PRRLSCAN  DIM       2      2        51    Scan Code                          
PRRLSTAT  DIM       1      1        53    Delete Indicator                   
PRRLSPAR  DIM       20     20       54    Spare Variable                     
.
.End of Record                      74   
.
