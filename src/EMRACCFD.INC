. V11.01.01 01/09/2021 JT C-0905305 Added index 2                               
. V11.01.01 04/08/2021 JT C-0905305 Added minumum score to index
. V11.01.01 21/07/2021  C-0905305 Added tables and updated table size
. V11.01.01 31/05/2021 DAS C-0905305 Initial generated code
. *----------------------------------------------------------------------
. * Include Name  :   EMRACCFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   AECC Coefficients for Complexity   
. *
. * File Type     :   SQL
. *
. * File Name     :   emraccaf.dat
. *
. * Index Values  :   KEY48   KEY48                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRACCA1   IFILE    SQL, FIXED=323, KEY="U1-30,153-162,31-38"
EMRACCA2   IFILE    SQL, FIXED=323, KEY="U1-30,31-38,153-162"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMACCODE  DIM       30     30       1     ECDG Code                          
EMACFDAT  DIM       8      8        31    Date Effective From (CCYYMMDD)     
EMACTDAT  DIM       8      8        39    Date Effective To (CCYYMMDD)       
EMACCLAS  DIM       6      6        47    AECC Class                         
EMACDESC  DIM       100    100      53    ECDG Description                   
EMACDMIN  DIM       10     10       153   Minimum Score                      
EMACMAXS  FORM      3.6    6        163   Maximum Score                      
.                                         (Set to 0 for Infinity=Yes)          
EMACMXSI  DIM       1      1        169   Maximum Score of Infinity          
.                                         0=No, 1=Yes                          
EMACCDAT  DIM       8      8        170   Date Record Created                
EMACCTIM  DIM       8      8        178   Time Record Created                
EMACCUID  DIM       10     10       186   Record Created By                  
EMACUDAT  DIM       8      8        196   Date Record Updated                
EMACUTIM  DIM       8      8        204   Time Record Updated                
EMACUUID  DIM       10     10       212   Record Updated By                  
EMACAFLG  DIM       1      1        222   Active/Inactive flag               
.                                         0=Active,1=Inactive                  
EMACSPAR  DIM       100    100      223   Spare                              
.
.End of Record                      323  
.
.Redefine form fields from key
.-----------------------------
. Name    Type      Length  Description
. ----    ----      ------  -----------
EMACMINS  FORM      3.6    Minimum score
.
