. V10.08.01 24/03/2016 SA C-0321234 Added PMANUSID
. V10.03.01 22/11/2011 JP C-249362 Added counter                                
. V9.07.001 19/09/2006 EC  Added audit file CAR 107243                          
. V5.10.002 05/04/2001 SB  Created FD                                           
. *----------------------------------------------------------------------
. * Include Name  :   PMSALNFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Patient Alert Notes                
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsalnaf.dat
. * Audit Name    :   pmsaudan.dat
. *
. * Index Values  :   KEY19                                                  
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
PMSAUDAN   IFILE    SQL, FIXED=152, KEY="D1-8,9-16,17-18,19-19"                 
PMSAUDA2   IFILE    SQL, FIXED=152, KEY="D26-33,1-8,9-16,17-18,19-19"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMANAUDD  DIM       8      8        1     Date of Change
PMANAUDT  DIM       8      8        9     Time of Change
PMANAUDP  DIM       2      2        17    Port
PMANAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
PMANAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
PMANAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
PMSALNA1   IFILE    SQL, FIXED=127, KEY="U1-8,9-10,11-13,14-16,17-19"           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMANURNO  DIM       8      8        1     Patient's U/R Number (patma1af)    
PMANACAT  DIM       2      2        9     Alert Category (Cat H1-H9)         
PMANACOD  DIM       3      3        11    Alert Code (patcodes)              
PMANCNTR  DIM       3      3        14    Counter                            
PMANLNNO  DIM       3      3        17    Line Number                        
PMANCOMM  DIM       70     70       20    Comments                           
PMANUSID  DIM       10     10       90    User Id (websecaf)                 
PMANSPAR  DIM       27     27       100   Spare Variable                     
.
.End of Record                      127  
.
