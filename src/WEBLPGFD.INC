. V6.06.001 18/05/1999 PD  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   WEBLPGFD.INC
. *
. * Function      :   File Def'n Include for WEB               
. *                   Interface Lookup Page Details                
. *
. * File Type     :   SQL
. *
. * File Name     :   weblpgaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBLPGA1   IFILE    SQL, FIXED=150, KEY="U1-8,9-11"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBLPLKID  DIM       8      8        1     Lookup ID                          
WBLPPGNO  DIM       3      3        9     Page Number                        
WBLPTITL  DIM       50     50       12    Page Title                         
WBLPHEAD  DIM       50     50       62    Page Heading                       
WBLPCLOR  DIM       6      6        112   Heading Color HEX,RGB Value        
WBLPSCOD  DIM       1      1        118   Show Codes 0=No 1=Yes              
WBLPPSEQ  DIM       1      1        119   Page Sequence 0=Description 1=Code 
WBLPSPAR  DIM       30     30       120   Spare                              
.
.End of Record                      150  
.
