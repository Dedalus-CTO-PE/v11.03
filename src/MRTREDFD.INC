. v9.02.001 17/09/2001 dc  Added URNO & TDIG                                 
. *----------------------------------------------------------------------
. * Include Name  :   MRTREDFD.INC
. *
. * Function      :   File Def'n Include for Medical Records                    
. *                   Research Patient Records Table     
. *
. * File Type     :   SQL
. *
. * File Name     :   mrtredaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MRTREDA1   IFILE    SQL, FIXED=101, KEY="U1-4,5-12"                             
MRTREDA2   IFILE    SQL, FIXED=101, KEY="U13-22,23-32,33-42,43-52,1-4,5-12"     
MRTREDA3   IFILE    SQL, FIXED=101, KEY="U1-4,89-96,5-12"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MREDEID   DIM       4      4        1     Extract ID                         
MREDVIS   DIM       8      8        5     Visit Number                       
MREDLEV1  DIM       10     10       13    Summary Level 1                    
MREDLEV2  DIM       10     10       23    Summary Level 2                    
MREDLEV3  DIM       10     10       33    Summary Level 3                    
MREDLEV4  DIM       10     10       43    Summary Level 4                    
MREDANL1  FORM      12.4   9        53    Analysis Measure 1 Total           
MREDANL2  FORM      12.4   9        62    Analysis Measure 2 Total           
MREDANL3  FORM      12.4   9        71    Analysis Measure 3 Total           
MREDDEL   DIM       1      1        80    Deleted from Extract               
MREDURNO  DIM       8      8        81    U/R Number                         
MREDTDIG  DIM       8      8        89    Terminal Digit                     
MREDSPAR  DIM       4      4        97    Spare Variable                     
.
.End of Record                      101  
.
