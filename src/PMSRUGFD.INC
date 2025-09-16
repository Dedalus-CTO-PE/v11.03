. V10.06.01 17/03/2015 PHA C-271541 Created Table                               
. *----------------------------------------------------------------------
. * Include Name  :   PMSRUGFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   RUG-ADL Scores                     
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsrugaf.dat
. *
. * Index Values  :   KEY24                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSRUGA1   IFILE    SQL, FIXED=212, KEY="U1-8,9-16,17-24"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMRUVISN  DIM       8      8        1     Visit Number                       
PMRUADAT  DIM       8      8        9     Assessment Date                    
PMRUATIM  DIM       8      8        17    Assessment Time                    
PMRUATYP  DIM       1      1        25    Type of Assessment                 
.                                         0 - Palliative                       
.                                         1 - Maintenance                      
PMRUASSO  DIM       1      1        26    Admission for Assessment only      
.                                         1 = Scores non Mandatory             
.                                         2 = Scores are Mandatory             
PMRUPSDT  DIM       8      8        27    Phase Start Date                   
PMRUPEDT  DIM       8      8        35    Phase End Date                     
PMRUPTYP  DIM       3      3        43    Phase Type                         
PMRUMTYP  DIM       3      3        46    Maintenance Type                   
PMRUBMOB  DIM       1      1        49    RUG-ADL Bed Mobility               
PMRUTOIL  DIM       1      1        50    RUG-ADL Toileting                  
PMRUTRAN  DIM       1      1        51    RUG-ADL Transfers                  
PMRUEATG  DIM       1      1        52    RUG-ADL Eating                     
PMRUCUID  DIM       10     10       53    User who created record            
PMRUCDAT  DIM       8      8        63    Date record created                
PMRUCTIM  DIM       8      8        71    Time record created                
PMRUUUID  DIM       10     10       79    User who updated record            
PMRUUDTE  DIM       8      8        89    Date record updated                
PMRUUTIM  DIM       8      8        97    Time record updated                
PMRUDELF  DIM       1      1        105   Delete Flag                        
PMRUDUID  DIM       10     10       106   User who deleted record            
PMRUDDAT  DIM       8      8        116   Date record deleted                
PMRUDTIM  DIM       8      8        124   Time record deleted                
PMRUDRES  DIM       3      3        132   Reason for delete                  
PMRUCPLT  DIM       1      1        135   Completed                          
.                                         0 or blank = No                      
.                                         1 = Yes                              
PMRUFUID  DIM       10     10       136   User who completed assessment      
PMRUFDAT  DIM       8      8        146   Date assessment completed          
PMRUFTIM  DIM       8      8        154   Time assessment completed          
PMRUSPAR  DIM       50     50       162   Spare                              
.
.End of Record                      212  
.
