. V5.02.001 25/09/1994 BGA Created File                                      
. *----------------------------------------------------------------------
. * Include Name  :   NHIRELFD.INC
. *
. * Function      :   File Def'n Include for NZ Health Interface 
. *                   Contact Relationship Codes         
. *
. * File Type     :   SQL
. *
. * File Name     :   nhirelaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
NHIRELA1   IFILE    SQL, FIXED=48, KEY="U1-2"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
NHRERCD   DIM       2      2        1     Releationship Code                 
NHREDES   DIM       25     25       3     Description                        
NHRESPA   DIM       20     20       28    Spare                              
.
.End of Record                      48   
.
