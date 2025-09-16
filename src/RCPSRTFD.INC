. V10.14.01 21/03/2019 JT C-0857392 Changed Transaction count from DIM3 to DIM5 
. V10.02.01 08/04/2011 ML  modify Comments
. V10.01.00 18/02/2011 ML  Created Table
. *----------------------------------------------------------------------
. * Include Name  :   RCPSRTFD.INC
. *
. * Function      :   File Def'n Include for Receipting                         
. *                   Suspense Receipt Table             
. *
. * File Type     :   SQL
. *
. * File Name     :   rcpsrtaf.dat
. *
. * Index Values  :   KEY17   KEY25   KEY25                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
RCPSRTA1   IFILE    SQL, FIXED=362, KEY="U1-12,13-17"
RCPSRTA2   IFILE    SQL, FIXED=362, KEY="U18-25,1-12,13-17"
RCPSRTA3   IFILE    SQL, FIXED=362, KEY="U274-281,1-12,13-17"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
RCSRRECN  DIM       12     12       1     Receipt Number                     
RCSRTCNT  DIM       5      5        13    Transaction count                  
RCSRTDAT  DIM       8      8        18    Transaction (Receipt) Date ccyymmdd
RCSRRECT  DIM       1      1        26    Record Type  1 = Original Suspense 
.                                                      2 = Residual Suspense   
.                                                      3 = Allocated           
RCSRREGI  DIM       3      3        27    Register                           
RCSRINVN  DIM       12     12       30    Invoice Number                     
RCSRVIST  DIM       8      8        42    Visit Number                       
RCSRNAME  DIM       50     50       50    Name                               
RCSRADD1  DIM       35     35       100   Address Line 1                     
RCSRADD2  DIM       35     35       135   Address Line 2                     
RCSRADD3  DIM       35     35       170   Address Line 3                     
RCSRADD4  DIM       35     35       205   Address Line 4                     
RCSRPCOD  DIM       8      8        240   Post Code                          
RCSRSFLG  DIM       1      1        248   Scan Flag 0 = Debtor, 1 = PMI      
RCSRREFR  DIM       17     17       249   Reference                          
RCSRAMNT  FORM      12.2   8        266   Amount                             
RCSRALDT  DIM       8      8        274   Allocated Date (see Created info)  
RCSRCDAT  DIM       8      8        282   Date Record Created (CCYYMMDD)     
RCSRCTIM  DIM       8      8        290   Time Record Created (hh:mm:ss)     
RCSRCUID  DIM       10     10       298   Web User Id Created (websecaf)     
RCSRUDAT  DIM       8      8        308   Date Record Updated (CCYYMMDD)     
RCSRUTIM  DIM       8      8        316   Time Record Updated (hh:mm:ss)     
RCSRUUID  DIM       10     10       324   Web User Id Updated (websecaf)     
RCSRSPAR  DIM       28     28       334   Spare                              
.
.End of Record                      362  
.
