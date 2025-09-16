. V9.11.002 16/03/2009                                                       
. *----------------------------------------------------------------------
. * Include Name  :   PMSSGAFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   ICD10 Suggested Classification     
. *
. * File Type     :   SQL
. *
. * File Name     :   pmssgaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSSGAA1   IFILE    SQL, FIXED=80, KEY="U1-3,4-9,10-17,18-26"                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMSGCLMN  DIM       3      3        1     Claim Code (Cat 'CL')              
PMSGHFND  DIM       6      6        4     Health Fund                        
PMSGHFTB  DIM       8      8        10    Health Fund Table                  
PMSGICDC  DIM       9      9        18    ICD10 Code                         
PMSGCLSS  DIM       3      3        27    Suggested Classification (Cat 'A ')
PMSGSPAR  DIM       50     50       30    Spare Variable                     
.
.End of Record                      80   
.
