. VF.00.001 29/10/1998 SB  Year 2000                                         
. *----------------------------------------------------------------------
. * Include Name  :   SINPERFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Period Date Range Table             
. *
. * File Type     :   SQL
. *
. * File Name     :   sinperaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINPERA1   IFILE    SQL, FIXED=33, KEY="U1-4,5-6"                               
SINPERA2   IFILE    SQL, FIXED=33, KEY="U15-22,1-4,5-6"                         
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIPEYEAR  DIM       4      4        1     Year CCYY                          
SIPEPER   DIM       2      2        5     Period                             
SIPESDT   DIM       8      8        7     Start Date                         
SIPEEDT   DIM       8      8        15    End Date                           
SIPELOC   FORM      1      2        23    Locked                             
SIPESPA   DIM       8      8        25    Spare                              
.
.End of Record                      33   
.
SIPECYR   DIM       4                     Current Year  
SIPEYF4   FORM      4                     Form 4 Year   
SIPENUM   FORM      2                     Number of Periods in Year          
SIPEDATE  DIM       8                     Date to Return Period for
.
