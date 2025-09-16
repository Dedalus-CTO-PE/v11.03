. V12  .001 21/05/2009 JT  New FD                                               
. *----------------------------------------------------------------------
. * Include Name  :   PMSICMFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Invoice Comments                   
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsicmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSICMA1   IFILE    SQL, FIXED=272, KEY="U1-8,9-16,17-19"                       
PMSICMA2   IFILE    SQL, FIXED=272, KEY="U9-16,17-19,1-8"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMICVISN  DIM       8      8        1     Visit Number                       
PMICINVN  DIM       8      8        9     Invoice Number                     
.                                         Blank - To Be Invoiced Comments
PMICLNNO  DIM       3      3        17    Line Number                        
PMICCMNT  DIM       100    100      20    Comments                           
PMICCDAT  DIM       8      8        120   Date Record Created (CCYYMMDD)     
PMICCTIM  DIM       8      8        128   Time Record Created (HH:MM:SS)     
PMICCUID  DIM       10     10       136   WEB User ID Created (websecaf)     
PMICUDAT  DIM       8      8        146   Date Record Updated (CCYYMMDD)     
PMICUTIM  DIM       8      8        154   Time Record Updated (HH:MM:SS)     
PMICUUID  DIM       10     10       162   WEB User ID Updated (websecaf)     
PMICSPAR  DIM       100    100      172   Spare variable                     
.
.End of Record                      272  
.
