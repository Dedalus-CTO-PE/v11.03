. V11.02.01 22/08/2022 TT C-0908346 Initial version                             
. *----------------------------------------------------------------------
. * Include Name  :   ACCDMAFD.INC
. *
. * Function      :   File Def'n Include for 
. *                   Claim Type/Clinical Document Mapping
. *
. * File Type     :   SQL
. *
. * File Name     :   accdmaaf.dat
. *
. * Index Values  :   KEY16   KEY16                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ACCDMAA1   IFILE    SQL, FIXED=147, KEY="U1-3,4-6,7-7,8-10,11-13,14-16"
ACCDMAA2   IFILE    SQL, FIXED=147, KEY="U4-6,7-7,8-10,11-13,14-16,1-3"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ACDMHOSP  DIM       3      3        1     Hospital ID                        
ACDMCCLM  DIM       3      3        4     Claim Type (Category CL)           
ACDMSYST  DIM       1      1        7     WebPAS System                      
.                                         1=A&E                                
.                                         2=Outpatient                         
.                                         3=Inpatient                          
.                                         4=Private Practice                   
ACDMCTYP  DIM       3      3        8     Care Type (Category CC)            
ACDMILOS  DIM       3      3        11    Intended LOS (Category VI)         
ACDMDTYP  DIM       3      3        14    Document Type (Category wi)        
ACDMIACT  DIM       1      1        17    Inactive                           
.                                         1-Yes                                
.                                         0 or Blank-No                        
ACDMDELT  DIM       1      1        18    Deleted                            
.                                         1-Yes                                
.                                         0 or Blank-No                        
ACDMCUSR  DIM       10     10       19    User who created record            
ACDMCDTE  DIM       8      8        29    Date record created                
ACDMCTIM  DIM       8      8        37    Time record created                
ACDMUUSR  DIM       10     10       45    User who updated record            
ACDMUDTE  DIM       8      8        55    Date record updated                
ACDMUTIM  DIM       8      8        63    Time record updated                
ACDMDUSR  DIM       10     10       71    User who deleted record            
ACDMDDTE  DIM       8      8        81    Date record deleted                
ACDMDTIM  DIM       8      8        89    Time record deleted                
ACDMSPAR  DIM       50     50       97    Spare                              
.
.End of Record                      147  
.
