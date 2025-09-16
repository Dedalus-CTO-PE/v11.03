. V9.04.001 12/10/2005 JT                                                    
. *----------------------------------------------------------------------
. * Include Name  :   PMSCAUFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Change Audit file                  
. *
. * File Type     :   SQL
. *
. * File Name     :   pmscauaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSCAUA1   IFILE    SQL, FIXED=175, KEY="U1-8,9-16,17-24"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMCAVISN  DIM       8      8        1     Visit Number                       
PMCADATE  DIM       8      8        9     Date (CCYYMMDD)                    
PMCATIME  DIM       8      8        17    Time                               
PMCAOCLM  DIM       3      3        25    Old Claim code                     
PMCANCLM  DIM       3      3        28    New Claim code                     
PMCAOATY  DIM       3      3        31    Old Admission Type                 
PMCANATY  DIM       3      3        34    New Admission Type                 
PMCAOHFN  DIM       6      6        37    Old Health Fund                    
PMCANHFN  DIM       6      6        43    New Health Fund                    
PMCAOHFT  DIM       8      8        49    Old Health Fund Table              
PMCANHFT  DIM       8      8        57    New Health Fund Table              
PMCAWBID  DIM       10     10       65    WEB User ID                        
PMCASPAR  DIM       100    100      75    Spare Variable                     
.
.End of Record                      175  
.
