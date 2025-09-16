. V10.06.01 17/03/2015 PHA C-271541 Added delete assessment fields              
. V10.03.00 22/03/2012 PHA C-257776 Mini Mental State Examination               
. *----------------------------------------------------------------------
. * Include Name  :   PMSMMSFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Mini Mental State Examination      
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsmmsaf.dat
. *
. * Index Values  :   KEY24                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSMMSA1   IFILE    SQL, FIXED=170, KEY="U1-8,9-16,17-24"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMMMVISN  DIM       8      8        1     Visit Number                       
PMMMADAT  DIM       8      8        9     Assessment Date                    
PMMMATIM  DIM       8      8        17    Assessment time                    
PMMMORT1  DIM       1      1        25    Orientation 1                      
PMMMORT2  DIM       1      1        26    Orientation 2                      
PMMMREG1  DIM       1      1        27    Registration 1                     
PMMMREG2  DIM       1      1        28    Registration 2                     
PMMMATTN  DIM       1      1        29    Attention                          
PMMMRECL  DIM       1      1        30    Recall                             
PMMMLNG1  DIM       1      1        31    Language 1                         
PMMMLNG2  DIM       1      1        32    Language 2                         
PMMMLNG3  DIM       1      1        33    Language 3                         
PMMMLNG4  DIM       1      1        34    Language 4                         
PMMMLNG5  DIM       1      1        35    Language 5                         
PMMMLNG6  DIM       1      1        36    Language 6                         
PMMMLCNS  DIM       1      1        37    Level of Consciousness             
PMMMCDAT  DIM       8      8        38    Date record created                
PMMMCTIM  DIM       8      8        46    Time record created                
PMMMCUID  DIM       10     10       54    User who created record            
PMMMUDAT  DIM       8      8        64    Date record updated                
PMMMUTIM  DIM       8      8        72    Time record updated                
PMMMUUID  DIM       10     10       80    User who updated record            
PMMMDELF  DIM       1      1        90    Delete Flag                        
.                                         0 or blank = not deleted             
.                                         1 = deleted                          
PMMMDUID  DIM       10     10       91    User who deleted assessment        
PMMMDDTE  DIM       8      8        101   Date assessment deleted            
PMMMDTME  DIM       8      8        109   Time assessment deleted            
PMMMDRES  DIM       3      3        117   Reason for delete                  
PMMMSPAR  DIM       50     50       120   Spare                              
.
.End of Record                      170  
.
