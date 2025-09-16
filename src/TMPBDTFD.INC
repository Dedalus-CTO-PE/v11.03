. V10.07.01 27/10/2015 JT C-303942 Added Payment Code
. V9.12.001 17/07/2009 ML  Increase size - RCBDPAYD, RCBDDRAW, RCBDSTRF         
. V9.03.004 03/02/2004 LV  Added 3rd index with cheque number                   
. V9.03.005 12/05/2004 LV  Made TMBDMONM obsolete                               
. *----------------------------------------------------------------------
. * Include Name  :   TMPBDTFD.INC
. *
. * Function      :   File Def'n Include for Temporary Code for Temp Files      
. *                   Temporary Receipting Bank Details  
. *
. * File Type     :   SQL
. *
. * File Name     :   tmpbdtaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
TMPBDTA1   IFILE    SQL, FIXED=336, KEY="U9-20,21-23"                           
TMPBDTA2   IFILE    SQL, FIXED=336, KEY="U1-8,9-20,21-23"                       
TMPBDTA3   IFILE    SQL, FIXED=336, KEY="U88-99,9-20,21-23"                     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
TMBDTDAT  DIM       8      8        1     Transaction Date (CCYYMMDD)        
TMBDRECN  DIM       12     12       9     Receipt Number                     
TMBDUNIQ  DIM       3      3        21    Unique Number                      
TMBDMHOS  DIM       3      3        24    Multi Hospital Id (pathspaf)       
TMBDMDHS  DIM       2      2        27    Multi Database Hosp Id (pathospf)  
TMBDPTYP  DIM       1      1        29    Payment Type                       
TMBDPAMT  FORM      12.2   8        30    Payment Amount                     
TMBDPAYD  DIM       50     50       38    Payee Details                      
TMBDCHQN  DIM       12     12       88    Cheque Number/Money Order          
TMBDDRAW  DIM       50     50       100   Drawer Details                     
TMBDBANK  DIM       30     30       150   Bank                               
TMBDBRCH  DIM       30     30       180   Branch                             
TMBDCRDT  DIM       3      3        210   Card Type                          
TMBDSTRF  DIM       40     40       213   Statement Reference                
TMBDEFTT  DIM       1      1        253   EFT Type                           
TMBDCDAT  DIM       8      8        254   Date Record Created (CCYYMMDD)     
TMBDCTIM  DIM       8      8        262   Time Record Created (hh:mm:ss)     
TMBDCUID  DIM       10     10       270   Web User Id Created (websecaf)     
TMBDUDAT  DIM       8      8        280   Date Record Updated (CCYYMMDD)     
TMBDUTIM  DIM       8      8        288   Time Record Updated (hh:mm:ss)     
TMBDUUID  DIM       10     10       296   Web User Id Updated (websecaf)     
TMBDPCOD  DIM       3      3        306   Payment Code (Cat Py)
TMBDSPAR  DIM       27     27       309   Spare
.
.End of Record                      336  
.
