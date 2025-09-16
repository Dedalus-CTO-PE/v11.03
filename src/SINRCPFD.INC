. 6.00 .001 10/03/1995 RKS Added new file                                    
. *----------------------------------------------------------------------
. * Include Name  :   SINRCPFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Receival Printing Table             
. *
. * File Type     :   SQL
. *
. * File Name     :   sinrcpaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINRCPA1   IFILE    SQL, FIXED=58, KEY="U1-7"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIRPPON   DIM       7      7        1     Purchase Order Number              
SIRPSPA   DIM       50     50       8     Spare                              
.
.End of Record                      58   
.
