. V11.03.01 03/03/2023 TTI C-0917199 Renamed '5 = MONEY ORDER' to ' 5 - Patient P
. V10.07.01 27/10/2015 JT C-303942 Added Payment Code                           
. V9.12.001 17/07/2009 ML  Increase size - RCBDPAYD, RCBDDRAW, RCBDSTRF         
. V9.03.007 19/12/2008 SA  Added Category to description for RCBDCRDT           
. V9.03.006 19/12/2008 SA  Added Category to Card Type                          
. V9.03.005 12/05/2004 LV  Made RCBDMONM obsolete                               
. V9.03.004 03/02/2004 LV  Added 3rd Index with Cheque number                   
. V9.03.003 16/12/2003 LV  Romoved Address info and put in RCPDTEFD             
. V9.03.002 01/12/2003 LV  Added EFT type                                       
. V9.03.001 28/11/2003 EC  Created FD                                           
. *----------------------------------------------------------------------
. * Include Name  :   RCPBDTFD.INC
. *
. * Function      :   File Def'n Include for Receipting                         
. *                   Receipt Bank Details File          
. *
. * File Type     :   SQL
. *
. * File Name     :   rcpbdtaf.dat
. *
. * Index Values  :   KEY15   KEY23   KEY27                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
RCPBDTA1   IFILE    SQL, FIXED=336, KEY="U9-20,21-23"
RCPBDTA2   IFILE    SQL, FIXED=336, KEY="U1-8,9-20,21-23"
RCPBDTA3   IFILE    SQL, FIXED=336, KEY="U88-99,9-20,21-23"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
RCBDTDAT  DIM       8      8        1     Transaction Date (CCYYMMDD)        
RCBDRECN  DIM       12     12       9     Receipt Number                     
RCBDUNIQ  DIM       3      3        21    Unique Number                      
RCBDMHOS  DIM       3      3        24    Multi Hospital Id (pathspaf)       
RCBDMDHS  DIM       2      2        27    Multi Database Hosp Id (pathospf)  
RCBDPTYP  DIM       1      1        29    Payment Type                       
.                                         1 = CASH                             
.                                         2 = CHEQUE                           
.                                         3 = CREDIT CARD                      
.                                         4 = DIRECT DEPOSIT                   
.                                         5 = Patient Portal                   
.                                         6 = EFTPOS                           
.                                         7 = BPAY                             
.                                         8 = Virtual Terminal (HICAPS)        
.                                         9 - Medicare                         
RCBDPAMT  FORM      12.2   8        30    Payment Amount                     
RCBDPAYD  DIM       50     50       38    Payee Details                      
RCBDCHQN  DIM       12     12       88    Cheque Number/Money Order          
RCBDDRAW  DIM       50     50       100   Drawer Details                     
RCBDBANK  DIM       30     30       150   Bank                               
RCBDBRCH  DIM       30     30       180   Branch                             
RCBDCRDT  DIM       3      3        210   Card Type (Cat CR)                 
RCBDSTRF  DIM       40     40       213   Statement Reference                
RCBDEFTT  DIM       1      1        253   EFT Type                           
.                                         1 = CASH                             
.                                         2 = CREDIT                           
RCBDCDAT  DIM       8      8        254   Date Record Created (CCYYMMDD)     
RCBDCTIM  DIM       8      8        262   Time Record Created (hh:mm:ss)     
RCBDCUID  DIM       10     10       270   Web User Id Created (websecaf)     
RCBDUDAT  DIM       8      8        280   Date Record Updated (CCYYMMDD)     
RCBDUTIM  DIM       8      8        288   Time Record Updated (hh:mm:ss)     
RCBDUUID  DIM       10     10       296   Web User Id Updated (websecaf)     
RCBDPCOD  DIM       3      3        306   Payment Code (Cat Py)              
RCBDSPAR  DIM       27     27       309   Spare                              
.
.End of Record                      336  
.
