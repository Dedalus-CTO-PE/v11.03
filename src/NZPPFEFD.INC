. V9.08.001 26/10/2006 JT Created FD CAR 120001                              
. *----------------------------------------------------------------------
. * Include Name  :   NZPPFEFD.INC
. *
. * Function      :   File Def'n Include for New Zealand Private                
. *                   NZ Private Contract Procedure Fee  
. *
. * File Type     :   SQL
. *
. * File Name     :   nzppfeaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
NZPPFEA1   IFILE    SQL, FIXED=314, KEY="U1-3,4-6,7-12,13-20,21-29,30-37"       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
NZPFHOSP  DIM       3      3        1     Hospital Code (pathspaf)           
NZPFCLMC  DIM       3      3        4     Claim Code (Catg CL)               
NZPFCNTR  DIM       6      6        7     Contract (Health Fund)             
NZPFFTAB  DIM       8      8        13    Fund Table                         
NZPFCPRC  DIM       9      9        21    Contract Procedure Code (patcmcaf)
NZPFEFDT  DIM       8      8        30    Effective Date (CCYYMMDD)          
NZPFCONT  FORM      1      2        38    Maximum Funder Contribution 1=Yes  
NZPFHPOR  FORM      14.2   9        40    Total Fixed Cost(if Contr.=No)
.                                         Zero (if Contr.=Yes)
NZPFPPOR  FORM      14.2   9        49    Patient Co-Payment(if Contr.=No)
.                                         Max Funder Contribution(if Contr.=Yes)
NZPFDES1  DIM       50     50       58    Description line 1                 
NZPFDES2  DIM       50     50       108   Description line 2                 
NZPFRBRK  FORM      1      2        158   Revenue Breakdown(avail if Contr.=No)
.                                         1- Use Detail
.                                         2 -FFS and Win/Loss
NZPFIBRK  FORM      1      2        160   Invoice Breakdown(avail if Contr.=No)
.                                         1- Use Detail
NZPFCDAT  DIM       8      8        162   Date Record Created (ccyymmdd)     
NZPFCTIM  DIM       8      8        170   Time Record Created (hh:mm:ss)     
NZPFCUID  DIM       10     10       178   WEB User ID Created (websecaf)     
NZPFUDAT  DIM       8      8        188   Date Record Updated (ccyymmdd)     
NZPFUTIM  DIM       8      8        196   Time Record Updated (hh:mm:ss)     
NZPFUUID  DIM       10     10       204   WEB User ID Updated (websecaf)     
NZPFSPAR  DIM       100    100      214   Spare Variable                     
.
.End of Record                      314  
.
