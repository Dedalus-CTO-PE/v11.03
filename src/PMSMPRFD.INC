. *----------------------------------------------------------------------
. * Include Name  :   PMSMPRFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Multiple Procedures Billing        
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsmpraf.dat
. *
. * Modifications :
. *       V10.01.01 19/01/2011  Mike Laming   CAR 233054
. *                 Add Contract Id. (PMMPCNID) & added to Indexs
. *       V9.09.000 05/09/2007 JT
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSMPRA1   IFILE    SQL, FIXED=128, KEY="U48-53,1-3,4-9,10-12,13-20,21-22"
PMSMPRA2   IFILE    SQL, FIXED=128, KEY="U1-3,4-9,10-12,39-47,48-53,13-20,21-22"
PMSMPRA3   IFILE    SQL, FIXED=128, KEY="U13-20,48-53,1-3,4-9,10-12,21-22"
PMSMPRA4   IFILE    SQL, FIXED=128, KEY="U1-3,48-53,4-9,10-12,13-20,21-22"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMMPCCOD  DIM       3      3        1     Claim Code (Catg CL)               
PMMPHFUN  DIM       6      6        4     Health Fund                        
PMMPHFTY  DIM       3      3        10    Health Fund Type (Cat HT)
PMMPMPRC  DIM       8      8        13    Multiple Procedures Code           
DPMMPCNT  DIM       2      2        21    Counter
PMMPPAMT  FORM      12.2   8        23    Patient Portion Amount             
PMMPRAMT  FORM      12.2   8        31    Rebate Portion Amount              
PMMPITMN  DIM       9      9        39    MBS Item Code                      
PMMPCNID  DIM       6      6        48    Contract Id. Code
PMMPSPAR  DIM       74     74       54    Spare variable                     
.
.End of Record                      128  
.
.Redefine form field from key
.
PMMPCOUN  FORM      2      2        21    Counter
