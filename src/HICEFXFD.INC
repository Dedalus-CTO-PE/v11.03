. V9.04.001 05/10/2005 JT                                                    
. *----------------------------------------------------------------------
. * Include Name  :   HICEFXFD.INC
. *
. * Function      :   File Def'n Include for HIC CLAIMS                         
. *                   HIC Reconciliation Exception/Paym.
. *
. * File Type     :   SQL
. *
. * File Name     :   hicefxaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HICEFXA1   IFILE    SQL, FIXED=105, KEY="U1-5,6-6,7-14,15-44"                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HCEXBTCH  DIM       5      5        1     Batch Number                       
HCEXTYPE  DIM       1      1        6     Record Type 0-Exception 1-EFT Paym.
HCEXDATE  DIM       8      8        7     Date - CCYYMMDD                    
HCEXFNAM  DIM       30     30       15    Filename                           
HCEXSPAR  DIM       60     60       45    Spare variable                     
.
.End of Record                      105  
.
