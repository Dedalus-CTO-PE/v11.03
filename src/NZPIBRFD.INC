. V9.08.001 26/10/2006 JT Created FD CAR 120001
. *----------------------------------------------------------------------
. * Include Name  :   NZPIBRFD.INC
. *
. * Function      :   File Def'n Include for New Zealand Private                
. *                   NZ Private Contract Procedure Invoice Breakdown File  
. *
. * File Type     :   SQL
. *
. * File Name     :   nzpibraf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
NZPIBRA1   IFILE    SQL, FIXED=110, KEY="U1-3,4-6,7-12,13-20,21-29,30-37,38-40" 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
NZIBHOSP  DIM       3      3        1     Hospital Code (pathspaf)           
NZIBCLMC  DIM       3      3        4     Claim Code (Catg CL)               
NZIBCNTR  DIM       6      6        7     Contract (Health Fund)             
NZIBFTAB  DIM       8      8        13    Fund Table                         
NZIBCPRC  DIM       9      9        21    Contract Procedure Code (patcmcaf) 
NZIBEFDT  DIM       8      8        30    Effective Date (CCYYMMDD)          
NZIBBRCD  DIM       3      3        38    Breakdown Code (Catg FI)           
NZIBAMNT  FORM      14.2   9        41    Amount                             
NZIBSPAR  DIM       60     60       50    Spare Variable                     
.
.End of Record                      110  
.
